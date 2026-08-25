///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_maintainArea
//
//	Original Maintain Area written by Skaronator and updated by iben.
//	Replaces the legacy protocol that accepted client-supplied object network IDs.
//
//	Description:	Authenticates a base-maintenance request, finds eligible objects around the
//			territory marker and persists their repaired state.
//	Groups:		Base
//
//	Syntax:		[playerNetID,baseNetID,radius,clientKey] spawn server_maintainArea
//
//	Parameters:	playerNetID: String - Network ID of the requesting player
//			baseNetID: String - Network ID of the territory marker
//			radius: Number - Requested maintenance radius
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_MAINTAIN_AREA

#ifdef DEBUG_SERVER_MAINTAIN_AREA
	diag_log format ['[Server Debug]: [server_maintainArea]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 4}) exitWith {
	diag_log format ['[Server Debug]: [server_maintainArea]: Error: Invalid parameter format: %1',_this];
};

local _player = objectFromNetId(_this select 0);
local _base = objectFromNetId(_this select 1);
local _radius = _this select 2;
local _clientKey = _this select 3;

if (isNull _player || {isNull _base}) exitWith {
	diag_log format ['[Server Debug]: [server_maintainArea]: Warning: Player or territory marker is null: %1',_this];
};

local _positionASL = [_base] call DZE_fnc_modelCenterWorld;

if !([_this,'server_maintainArea',_positionASL,_player,_clientKey] call server_verifySender) exitWith {};

local _playerUID = getPlayerUID _player;
local _playerName = _player call DZE_fnc_getNamePlayer;
// Always refresh every eligible object, including objects without damage.
local _objectsToMaintain = [_base,_radius] call DZE_fnc_findBuildableObjects;

local _object = objNull;
local _objectID = '0';
local _objectUID = '0';
local _maintainedCount = 0;
local _damageDisabled = false;

{
	_object = _x;
	_objectID = _object getVariable ['ObjectID','0'];
	_objectUID = _object getVariable ['ObjectUID','0'];
	_damageDisabled = DZE_baseGodMode && {!((typeOf _object) in DZE_baseGodModeExclude)};

	if (_objectID != '0') then {
		// setDamage is global, so only repair damageable objects that are actually damaged.
		if (!_damageDisabled && {damage _object > 0}) then {
			_object setDamage 0;
		};
		format ['CHILD:396:%1:',_objectID] call server_hiveWrite;
		_maintainedCount = _maintainedCount + 1;
	} else {
		if (_objectUID != '0') then {
			if (!_damageDisabled && {damage _object > 0}) then {
				_object setDamage 0;
			};
			format ['CHILD:397:%1:',_objectUID] call server_hiveWrite;
			_maintainedCount = _maintainedCount + 1;
		};
	};
} forEach _objectsToMaintain;

diag_log format ['[Server Debug]: [server_maintainArea]: %1 (%2) maintained %3 of %4 selected objects at %5 within %6 meters',_playerName,_playerUID,_maintainedCount,count _objectsToMaintain,_positionASL call server_positionToLocation,_radius];
