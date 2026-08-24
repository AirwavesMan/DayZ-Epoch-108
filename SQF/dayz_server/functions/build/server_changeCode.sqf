///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_changeCode
//
//	Description:	Replaces a persisted storage or door object while preserving its code-related
//			data, damage and model-center worldspace.
//	Groups:		Build
//
//	Syntax:		[playerNetId, oldObjectNetId, characterID, clientKey] call server_changeCode
//
//	Parameters:	playerNetId: String - Network ID of the player requesting the code change
//			oldObjectNetId: String - Network ID of the persisted object to replace
//			characterID: String - New lock code assigned to the replacement object
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_CHANGE_CODE

#ifdef DEBUG_SERVER_CHANGE_CODE
	diag_log format['[Server Debug]: [server_changeCode]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this != 4}) exitWith {
	#ifdef DEBUG_SERVER_CHANGE_CODE
		diag_log format['[Server Debug]: [server_changeCode]: Error: Invalid parameter format: %1',_this];
	#endif
};

local _player = objectFromNetId(_this select 0);
local _oldObject = objectFromNetId(_this select 1);
local _codeObject = _this select 2;
local _clientKey = _this select 3;

if (isNull _oldObject) exitWith {
	diag_log format['[Server Debug]: [server_changeCode]: Warning: Object is null: %1',_this];
};

local _positionASL = [_oldObject] call DZE_fnc_modelCenterWorld;
local _functionName = 'server_changeCode';

if !([_this,_functionName,_positionASL,_player,_clientKey] call server_verifySender) exitWith {};

local _playerUID = getPlayerUID _player;
local _playerName = _player call DZE_fnc_getNamePlayer;
local _oldTypeObject = typeOf _oldObject;
local _isStorage = _oldTypeObject in DZE_UnLockedStorage;
local _isDoor = _oldTypeObject in DZE_DoorsLocked;

if (!_isStorage && {!_isDoor}) exitWith {
	diag_log format['[Server Debug]: [server_changeCode]: Warning: Rejected unsupported object type from %1 (%2): %3',_playerName,_playerUID,_oldTypeObject];
};

local _oldCodeObject = _oldObject getVariable ['CharacterID','0'];

if (_oldCodeObject == _codeObject) exitWith {
	diag_log format['[Server Debug]: [server_changeCode]: Warning: Rejected unchanged code for %1 (%2): %3',_playerName,_playerUID,_oldTypeObject];
};

local _typeObject = _oldTypeObject;

// Changing code of an unlocked storage object creates after upgrade a new locked object
if (_isStorage) then {
	_typeObject = getText (configFile >> 'CfgVehicles' >> _oldTypeObject >> 'lockedClass');
};

if (_typeObject == '' || {!([_typeObject,'server_changeCode'] call server_verifyObject)}) exitWith {
	diag_log format['[Server Debug]: [server_changeCode]: Warning: Rejected replacement class for %1: %2',_oldTypeObject,_typeObject];
};

local _dir = getDir _oldObject;
local _vector = [vectorDir _oldObject,vectorUp _oldObject];
local _ownerPUID = _oldObject getVariable ['ownerPUID',_playerUID];

if (_ownerPUID == '0' || {_ownerPUID == ''}) then {
	_ownerPUID = _playerUID;
};

local _metadata = _oldObject getVariable ['worldspaceMetadata',[]];

if (typeName _metadata != 'ARRAY') then {_metadata = []};
if (count _metadata == 0) then {
	_metadata = [_ownerPUID];
} else {
	_metadata set [0,_ownerPUID];
};

local _worldspace = [_positionASL,_vector,_metadata];
local _worldspaceValidation = _worldspace call server_validateObjectWorldspace;

if !(_worldspaceValidation select 0) exitWith {
	diag_log format['[Server Debug]: [server_changeCode]: Warning: Rejected invalid worldspace from %1 (%2) for %3: %4 | %5',_playerName,_playerUID,_typeObject,_worldspaceValidation select 1,_worldspace];
};

local _formattedWorldspace = _worldspace call server_formatWorldspace;

if (_formattedWorldspace == '') exitWith {
	diag_log format['[Server Debug]: [server_changeCode]: Error: Failed to format worldspace for %1 at %2',_typeObject,_positionASL];
};

local _weapons = [];
local _magazines = [];
local _backpacks = [];
local _inventory = [];
local _databaseInventory = [];
local _doorFriends = [];
local _isZSC = false;
local _coins = 0;

if (_isStorage) then {
	_weapons = getWeaponCargo _oldObject;
	_magazines = getMagazineCargo _oldObject;
	_backpacks = getBackpackCargo _oldObject;
	_inventory = [_weapons,_magazines,_backpacks];
	_databaseInventory = _inventory;
	_isZSC = Z_SingleCurrency && {_oldTypeObject in DZE_MoneyStorageClasses} && {_typeObject in DZE_MoneyStorageClasses};
	if (_isZSC) then {_coins = _oldObject getVariable ['cashMoney',0]};
} else {
	_doorFriends = _oldObject getVariable ['doorFriends',[]];
	if (count _doorFriends == 0) then {_doorFriends = [[_playerUID,_playerName]]};
	_databaseInventory = _doorFriends;
};

local _damageDisabled = DZE_baseGodMode && {!(_typeObject in DZE_baseGodModeExclude)};
local _damageOldObject = damage _oldObject;

//	Check and delete the old object
if !([_oldObject,_functionName] call server_deleteOldObj) exitwith {};	

// Create the replacement before deleting the old object so a creation failure cannot remove persisted data.
local _newObject = [_typeObject,_positionASL,_dir,_vector,true,_damageDisabled,false,true] call server_createVehicle;

_newObject setVariable ['worldspaceMetadata',_metadata];

local _publicOwnerID = getNumber (configFile >> 'CfgVehicles' >> _typeObject >> 'DZE_bypassBase') == 1;
_newObject setVariable ['ownerPUID',_ownerPUID,_publicOwnerID];

local _objectUID = [_dir,_positionASL] call dayz_objectUID2;
_newObject setVariable ['ObjectUID',_objectUID];
_newObject setVariable ['CharacterID',_codeObject,true];

if (!_damageDisabled && {_damageOldObject > 0}) then {
	_damageOldObject = [_newObject,_oldTypeObject,_typeObject,_damageOldObject] call server_setDamageObject;
};

if (_isStorage) then {
	_newObject setVariable ['WeaponCargo',_weapons,false];
	_newObject setVariable ['MagazineCargo',_magazines,false];
	_newObject setVariable ['BackpackCargo',_backpacks,false];
	if (_isZSC) then {_newObject setVariable ['cashMoney',_coins,true]};
} else {
	_newObject setVariable ['doorFriends',_doorFriends,true];
};

_newObject setVariable ['lastUpdate',diag_tickTime];

local _key = str formatText ['CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:',dayZ_instance,_typeObject,_damageOldObject,_codeObject,_formattedWorldspace,_databaseInventory,[],0,_objectUID];
_key call server_hiveWrite;

if (_isZSC) then {
	_key = format ['CHILD:309:%1:',_objectUID] + str _inventory + ':' + str _coins + ':';
	_key call server_hiveWrite;
};

DZE_Wait_For_Object = netID _newObject;
owner _player publicVariableClient 'DZE_Wait_For_Object';

diag_log format['[Server Debug]: [server_changeCode]: %1 (%2) changed the code for %3 to %4 @%5',_playerName,_playerUID,_typeObject,_codeObject,_positionASL call server_positionToLocation];
