///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_lockUnlockStorage
//
//	Description:	Locks or unlocks persisted storage while preserving its inventory and worldspace.
//	Groups:		Build
//
//	Syntax:		[playerNetId, storageNetId, operation, suppliedCode, clientKey] call server_lockUnlockStorage
//
//	Parameters:	playerNetId: String - Network ID of the requesting player
//			storageNetId: String - Network ID of the storage object
//			operation: Number - 0 failed unlock, 1 unlock, 2 lock
//			suppliedCode: String - Combination supplied by the client
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_LOCK_UNLOCK_STORAGE

#ifdef DEBUG_SERVER_LOCK_UNLOCK_STORAGE
	diag_log format ['[Server Debug]: [server_lockUnlockStorage]: Function called with arguments: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this != 5}) exitWith {
	diag_log format ['[Server Debug]: [server_lockUnlockStorage]: Error: Invalid parameter format: %1',_this];
};

local _player = objectFromNetId (_this select 0);
local _object = objectFromNetId (_this select 1);
local _operation = _this select 2;
local _suppliedCode = _this select 3;
local _clientKey = _this select 4;

if (isNull _player) exitWith {
	diag_log format ['[Server Debug]: [server_lockUnlockStorage]: Error: Player is null: %1',_this];
};

local _sendObject = {
	DZE_Wait_For_Object = _this;
	(owner _player) publicVariableClient 'DZE_Wait_For_Object';
};

local _playerUID = getPlayerUID _player;
local _playerName = _player call DZE_fnc_getNamePlayer;

if (isNull _object) exitWith {
	if (_operation == 2) then {'' call _sendObject};
	diag_log format ['[Server Debug]: [server_lockUnlockStorage]: Warning: Storage object is null for %1 (%2): %3',_playerName,_playerUID,_this];
};

local _positionASL = [_object] call DZE_fnc_modelCenterWorld;

if !([_this,'server_lockUnlockStorage',_positionASL,_player,_clientKey] call server_verifySender) exitWith {
	if (_operation == 2) then {'' call _sendObject};
};

local _objectType = typeOf _object;

//  Wrong code
if (_operation == 0) exitWith {
	if !(_objectType in DZE_LockedStorage) exitWith {
		diag_log format ['[Server Debug]: [server_lockUnlockStorage]: Warning: Rejected failed unlock report for unsupported object from %1 (%2): %3',_playerName,_playerUID,_objectType];
	};

	local _actualCode = _object getVariable ['CharacterID','0'];
	diag_log format ['[Server Debug]: [server_lockUnlockStorage]: %1 (%2) FAILED unlocking %3 with code %4 (actual: %5) @%6',_playerName,_playerUID,_objectType,_suppliedCode,_actualCode,_positionASL call server_positionToLocation];
};

local _isUnlock = _operation == 1;
local _supportedSource = if (_isUnlock) then {_objectType in DZE_LockedStorage} else {_objectType in DZE_UnLockedStorage};

if !(_supportedSource) exitWith {
	if (_operation == 2) then {'' call _sendObject};
	diag_log format ['[Server Debug]: [server_lockUnlockStorage]: Warning: Rejected unsupported storage state from %1 (%2): %3',_playerName,_playerUID,_objectType];
};

local _newObjectType = getText (configFile >> 'CfgVehicles' >> _objectType >> (['DZE_lockedClass','DZE_unlockedClass'] select _isUnlock));
local _supportedTarget = if (_isUnlock) then {_newObjectType in DZE_UnLockedStorage} else {_newObjectType in DZE_LockedStorage};

if !(_supportedTarget) exitWith {
	if (_operation == 2) then {'' call _sendObject};
	diag_log format ['[Server Debug]: [server_lockUnlockStorage]: Error: Invalid replacement class for %1: %2',_objectType,_newObjectType];
};

local _weapons = [];
local _magazines = [];
local _backpacks = [];

if (_isUnlock) then {
	_weapons = _object getVariable ['WeaponCargo',[]];
	_magazines = _object getVariable ['MagazineCargo',[]];
	_backpacks = _object getVariable ['BackpackCargo',[]];
} else {
	[_object,'gear'] call server_updateObject;
	_weapons = getWeaponCargo _object;
	_magazines = getMagazineCargo _object;
	_backpacks = getBackpackCargo _object;
};

local _direction = getDir _object;
local _vector = [vectorDir _object,vectorUp _object];
local _characterID = _object getVariable ['CharacterID','0'];
local _objectID = _object getVariable ['ObjectID','0'];
local _objectUID = _object getVariable ['ObjectUID','0'];
local _ownerPUID = _object getVariable ['ownerPUID','0'];
local _metadata = _object getVariable ['worldspaceMetadata',[]];

if (typeName _metadata != 'ARRAY') then {_metadata = []};
if (count _metadata == 0) then {_metadata = [_ownerPUID]};

local _damageDisabled = DZE_baseGodMode && {!(_newObjectType in DZE_baseGodModeExclude)};
local _damage = damage _object;
local _isMoneyStorage = Z_SingleCurrency && {_objectType in DZE_MoneyStorageClasses} && {_newObjectType in DZE_MoneyStorageClasses};
local _coins = if (_isMoneyStorage) then {_object getVariable ['cashMoney',0]} else {0};
local _newObject = [_newObjectType,_positionASL,_direction,_vector,true,_damageDisabled,false,true] call server_createVehicle;

_newObject setVariable ['worldspaceMetadata',_metadata];
_newObject setVariable ['CharacterID',_characterID,true];
_newObject setVariable ['ObjectID',_objectID];
_newObject setVariable ['ObjectUID',_objectUID];
local _publicOwnerID = getNumber (configFile >> 'CfgVehicles' >> _newObjectType >> 'DZE_bypassBase') == 1;
_newObject setVariable ['ownerPUID',_ownerPUID,_publicOwnerID];
_newObject setVariable ['lastUpdate',diag_tickTime];

if (!_damageDisabled && {_damage > 0}) then {_newObject setDamage _damage};
if (_isMoneyStorage) then {_newObject setVariable ['cashMoney',_coins,true]};

deleteVehicle _object;

if (_isUnlock) then {
	[_weapons,_magazines,_backpacks,_newObject] call fn_addCargo;
} else {
	_newObject setVariable ['WeaponCargo',_weapons,false];
	_newObject setVariable ['MagazineCargo',_magazines,false];
	_newObject setVariable ['BackpackCargo',_backpacks,false];
};

(netID _newObject) call _sendObject;

local _operationText = ['LOCKED','UNLOCKED'] select _isUnlock;
diag_log format ['[Server Debug]: [server_lockUnlockStorage]: %1 (%2) %3 %4 with code %5 @%6',_playerName,_playerUID,_operationText,_objectType,_characterID,_positionASL call server_positionToLocation];
