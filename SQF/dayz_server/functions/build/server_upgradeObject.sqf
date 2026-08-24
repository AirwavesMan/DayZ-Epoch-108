///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_upgradeObject
//
//	Description:	Replaces a persisted build object while preserving its model-center worldspace.
//	Groups:		Build
//
//	Syntax:		[playerNetId, oldObjectNetId, characterID, objectType, clientKey] spawn server_upgradeObject
//
//	Parameters:	playerNetId: String - Network ID of the player requesting the replacement
//			oldObjectNetId: String - Network ID of the persisted object to replace
//			characterID: String - Character ID assigned to the replacement object
//			objectType: String - Class name of the replacement object
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_UPGRADE_OBJECT

#ifdef DEBUG_SERVER_UPGRADE_OBJECT
	diag_log format['[Server Debug]: [server_upgradeObject]: Function called with argumentes: %1',_this];
#endif

if (count _this < 5) exitWith {
	#ifdef DEBUG_SERVER_UPGRADE_OBJECT
		diag_log format['[Server Debug]: [server_upgradeObject]: Error: Wrong parameter format: %1',_this];
	#endif
};

local _player = objectFromNetId(_this select 0);
local _oldObject = objectFromNetId(_this select 1);
local _codeObject = _this select 2;
local _typeObject = _this select 3;
local _clientKey = _this select 4;

local _positionASL = [_oldObject] call DZE_fnc_modelCenterWorld;
local _dir = getDir _oldObject;
local _vector = [vectorDir _oldObject,vectorUp _oldObject];
local _metadata = _oldObject getVariable ['worldspaceMetadata',[]];
if (typeName _metadata != 'ARRAY') then {
	_metadata = [];
};
local _worldspace = [_positionASL,_vector,_metadata];
local _functionName = 'server_upgradeObject';

if !([_this,_functionName,_positionASL,_player,_clientKey] call server_verifySender) exitWith {};

local _playerUID = getPlayerUID _player;
local _playerName = _player call DZE_fnc_getNamePlayer;
local _worldspaceValidation = _worldspace call server_validateObjectWorldspace;

if !(_worldspaceValidation select 0) exitWith {
	#ifdef DEBUG_SERVER_UPGRADE_OBJECT
		diag_log format['[Server Debug]: [server_upgradeObject]: Warning: Rejected invalid worldspace from %1 (%2) for %3: %4 | %5',_playerName,_playerUID,_typeObject,_worldspaceValidation select 1,_worldspace];
	#endif
};

local _ownerPUID = _oldObject getVariable ['ownerPUID',_playerUID];
if (count _metadata == 0) then {
	_metadata = [_ownerPUID];
} else {
	_metadata set [0,_ownerPUID];
};
_worldspace set [2,_metadata];

//	Verify the new object type
if ([_typeObject,_functionName] call server_verifyObject) then {
	local _coins = 0;
	local _weapons = [];
	local _magazines = [];
	local _backpacks = [];
	local _inventory = [];
	local _oldTypeObject = typeOf _oldObject;

	call {
		if (_oldTypeObject in DZE_LockedStorage) exitwith {
			_weapons = _oldObject getVariable ['WeaponCargo',[]];
			_magazines = _oldObject getVariable ['MagazineCargo',[]];
			_backpacks = _oldObject getVariable ['BackpackCargo',[]];
			_inventory = [_weapons,_magazines,_backpacks];
		};
		if (_oldTypeObject isKindOf 'DZE_Storage_Base') exitwith {
			_weapons = getWeaponCargo _oldObject;
			_magazines = getMagazineCargo _oldObject;
			_backpacks = getBackpackCargo _oldObject;
			_inventory = [_weapons,_magazines,_backpacks];
		};
	};	

	if (Z_SingleCurrency && {_typeObject in DZE_MoneyStorageClasses}) then {
		_coins = _oldObject getVariable ['cashMoney',0];
	};	

	local _damageOldObject = damage _oldObject;

	//	Check and delete the old object
	if !([_oldObject,_functionName] call server_deleteOldObj) exitwith {};

	local _damageDisabled = DZE_baseGodMode && {!(_typeObject in DZE_baseGodModeExclude)};

	//	Create the new object
	local _newObject = [_typeObject,_positionASL,0,_vector,true,_damageDisabled,false,false] call server_createVehicle;

	_newObject setVariable ['worldspaceMetadata',_metadata];

	local _publicOwnerID = getNumber (configFile >> 'CfgVehicles' >> _typeObject >> 'DZE_bypassBase') == 1;
	_newObject setVariable ['ownerPUID',_ownerPUID,_publicOwnerID];

	local _objectUID = [getDir _newObject,_positionASL] call dayz_objectUID2;
	_newObject setVariable ['ObjectUID',_objectUID];
	_newObject setVariable ['CharacterID',_codeObject,_codeObject != '0'];

	//	ToDo: Handle gates with multiple upgrade steps	

	//	Set door friends to the new object
	if (DZE_doorManagement && {_typeObject in DZE_DoorsLocked}) then {
		//	The door has a lock, so we can add the door owner as first door friend
		if (_codeObject != '0') then {
			_inventory = [[_playerUID,_playerName]];
			_newObject setVariable ['doorFriends',_inventory,true];
		};
	};	

	local _formattedWorldspace = _worldspace call server_formatWorldspace;
	if (_formattedWorldspace == '') exitWith {
		if (!isNull _newObject) then {deleteVehicle _newObject};
	};

	if !(_damageDisabled) then {
		if (_damageOldObject > 0) then {
			_damageOldObject = [_newObject,_oldTypeObject,_typeObject,_damageOldObject] call server_setDamageObject;
		};
	};

	//	Write the new object to the database
	local _key = str formatText ['CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:',dayZ_instance,_typeObject,_damageOldObject,_codeObject,_formattedWorldspace,_inventory,[],0,_objectUID];
	_key call server_hiveWrite;

	_newObject setVariable ['lastUpdate',diag_tickTime];

	if (count _inventory > 0 && {_typeObject isKindOf 'DZE_Storage_Base'} && {!(_typeObject in DZE_LockedStorage)}) then {
		[_weapons,_magazines,_backpacks,_newObject] call fn_addCargo;
	};

	if (_typeObject in DZE_LockedStorage) then {
		_newObject setVariable ['WeaponCargo',_weapons,false];
		_newObject setVariable ['MagazineCargo',_magazines,false];
		_newObject setVariable ['BackpackCargo',_backpacks,false];
	};

	if (Z_SingleCurrency) then {
		if (_coins > 0) then {
			if (_typeObject in DZE_MoneyStorageClasses) then {
				_newObject setVariable ['cashMoney',_coins,true];
				_key = format ['CHILD:309:%1:',_objectUID] + str _inventory + ':' + str _coins + ':';
				_key call server_hiveWrite;
			};
		};
	};

	DZE_Wait_For_Object = netID _newObject;
	owner _player publicVariableClient 'DZE_Wait_For_Object';

	#ifdef DEBUG_SERVER_UPGRADE_OBJECT
		diag_log format['[Server Debug]: [server_upgradeObject]: %1 (%2) upgraded or downgraded object to %3 with UID: %4 @%5',_playerName,_playerUID,_typeObject,_objectUID,_positionASL call server_positionToLocation];
	#endif
} else {
	#ifdef DEBUG_SERVER_UPGRADE_OBJECT
		diag_log format['[Server Debug]: [server_upgradeObject]: Warning: Object type %1 could not be upgraded or downgraded at: %2!',_typeObject,_positionASL call server_positionToLocation];
	#endif
};
