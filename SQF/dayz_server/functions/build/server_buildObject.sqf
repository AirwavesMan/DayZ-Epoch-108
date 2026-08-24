///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_buildObject
//
//	Description:	Validates and persists a new object using the model-center worldspace.
//	Groups:		Build
//
//	Syntax:		[playerNetId, objectType, characterID, worldspace, buildItem, clientKey] call server_buildObject
//
//	Parameters:	playerNetId: String - Network ID of the requesting player
//			objectType: String - Vehicle class to create
//			characterID: String - Character ID or lock combination
//			worldspace: Array - Object position, vectors and metadata
//			buildItem: String - Magazine class consumed to build the object
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_BUILD_OBJECT

#ifdef DEBUG_BUILD_OBJECT
	diag_log format['[Server Debug]: [Build Object]: Function called with argumentes: %1',_this];
#endif

if (count _this < 6) exitWith {diag_log '[Server Debug]: [Build Object]: server_buildObject error: Wrong parameter format';};

local _player = objectFromNetId(_this select 0);
local _typeObject = _this select 1;
local _characterID = _this select 2;
local _worldspace = _this select 3;
local _buildItem = _this select 4;
local _clientKey = _this select 5;
local _positionASL = _worldspace select 0;

if !([_this,'buildObject',_positionASL,_player,_clientKey] call server_verifySender) exitWith {};

if (typeName _buildItem != 'STRING') exitWith {
	diag_log format ['[Server Debug]: [Build Object]: Rejected invalid build item parameter: %1',_buildItem];
};

local _buildItemConfig = configFile >> 'CfgMagazines' >> _buildItem;
local _buildActionConfig = _buildItemConfig >> 'ItemActions' >> 'Build';

if (!isClass _buildItemConfig || {getText (_buildActionConfig >> 'create') != _typeObject}) exitWith {
	diag_log format ['[Server Debug]: [Build Object]: Rejected invalid build item %1 for object type %2',_buildItem,_typeObject];
};

local _playerUID = getPlayerUID _player;
local _playerName = _player call DZE_fnc_getNamePlayer;	
local _worldspaceValidation = _worldspace call server_validateObjectWorldspace;

if !(_worldspaceValidation select 0) exitWith {
	diag_log format ['[Server Debug]: [Build Object]: Rejected invalid worldspace from %1 (%2) for %3: %4 | %5',_playerName,_playerUID,_typeObject,_worldspaceValidation select 1,_worldspace];
};

if ([_typeObject,'server_buildObject'] call server_verifyObject) then {	
	local _vector = _worldspace select 1;
	local _metadata = _worldspace select 2;
	_metadata set [0,_playerUID];
	_worldspace set [2,_metadata];	

	local _publicOwnerID = getNumber (configFile >> 'CfgVehicles' >> _typeObject >> 'DZE_bypassBase') == 1;
	local _publicCharID = false;
	local _saveToDB = getNumber (configFile >> 'CfgVehicles' >> _typeObject >> 'DZE_saveToDatabase') == 1;
	local _friendsArray = [];
	local _damageDisabled = DZE_baseGodMode && {!(_typeObject in DZE_baseGodModeExclude)};
	local _fireUsesFuel = getNumber (configFile >> 'CfgVehicles' >> _typeObject >> 'DZE_fireUseFuel') == 1;

	//	Create the object
	local _object = [_typeObject,_positionASL,0,_vector,true,_damageDisabled,false,true] call server_createVehicle;

	_object setVariable ['worldspaceMetadata',_metadata];	

	// Use the consumed construction magazine as the initial fuel for fuel-using fireplaces.
	if (_fireUsesFuel) then {
		local _initialBurnTime = (getNumber (_buildItemConfig >> 'DZE_burnTimer') max 0) min DZE_fireMaximumBurnTime;
		_object setVariable ['DZE_fireBurnTime',_initialBurnTime];
		_object setVariable ['DZE_fireBurnEnd',-1];
	};

	//	ToDo: Handle owner via friends so we do not have that many public owner IDs
	call {
		if (_typeObject == DZE_Territory_Marker) exitwith {
			_friendsArray = [[_playerUID,_playerName]];
			_object setVariable ['baseFriends',_friendsArray,true];

			diag_log format ['[Server Debug]: [Build Object]: Player %1 (%2) created a base @%3',_playerName,_playerUID,(_worldspace select 0) call server_positionToLocation];
		};		
		if (DZE_doorManagement && {_typeObject in DZE_DoorsLocked}) exitwith {
			_friendsArray = [[_playerUID,_playerName]];
			_object setVariable ['doorFriends',_friendsArray,true];
		};
		//	ToDo: Safe Management
		//if (_typeObject in DZE_LockedStorage || {_typeObject in DZE_Elevator_Classnames}) exitwith {};
	};

	local _objectUID = [getDir _object,_positionASL] call dayz_objectUID2;
	_object setVariable ['ObjectUID', _objectUID];
	_object setVariable ['ownerPUID', _playerUID, _publicOwnerID];
	_object setVariable ['CharacterID', _characterID, _characterID != '0'];

	local _formattedWorldspace = _worldspace call server_formatWorldspace;
	if (_formattedWorldspace == '') exitWith {
		if (!isNull _object) then {deleteVehicle _object};
	};

	if (_saveToDB) then {
		local _key = str formatText['CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:',dayZ_instance, _typeObject, 0, _characterID, _formattedWorldspace, _friendsArray, [], 0,_objectUID];

		_key call server_hiveWrite;
	};

	#ifdef DEBUG_BUILD_OBJECT
		diag_log format['[Server Debug]: [Build Object]: Player %1 (%2) created %3 with Object UID: %4, CharacterID: %5, @%6',_playerName,_playerUID,_typeObject,_objectUID,_characterID,(_worldspace select 0) call server_positionToLocation];
	#endif

	DZE_Wait_For_Object = netID _object;
	owner _player publicVariableClient 'DZE_Wait_For_Object';
} else {
	diag_log format ['[Server Debug]: [Build Object]: Object Type: %1 could not be created at: %2!',_typeObject,(_worldspace select 0) call server_positionToLocation];
};
