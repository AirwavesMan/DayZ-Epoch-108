///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_changeFriends
//
//	Description:	Adds or removes a friend on a supported managed object and persists the result.
//	Groups:		Base
//
//	Syntax:		[playerNetID,objectNetID,friendSpecifier,clientKey] call server_changeFriends
//
//	Parameters:	playerNetID: String - Network ID of the requesting player
//			objectNetID: String - Network ID of the managed object
//			friendSpecifier: String or Number - Friend network ID to add or list index to remove
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_CHANGE_FRIENDS

#ifdef DEBUG_SERVER_CHANGE_FRIENDS
	diag_log format ['[Server Debug]: [server_changeFriends]: Function called with argumentes: %1',_this];
#endif

local _player = objectFromNetId (_this select 0);
local _object = objectFromNetId (_this select 1);
// Can be a netID from an object or the friend-list index used to remove a friend.
local _friend = if (typeName (_this select 2) == 'STRING') then {objectFromNetId (_this select 2)} else {_this select 2};
local _clientKey = _this select 3;

if (isNull _object) exitWith {
	#ifdef DEBUG_SERVER_CHANGE_FRIENDS
		diag_log format ['[Server Debug]: [server_changeFriends]: Warning: Object is null: %1',_this];
	#endif
};

local _positionASL = [_object] call DZE_fnc_modelCenterWorld;
local _functionName = 'server_changeFriends';

if !([_this,_functionName,_positionASL,_player,_clientKey] call server_verifySender) exitWith {};

local _objectType = typeOf _object;
local _isDoor = DZE_doorManagement && {_objectType in DZE_DoorsLocked};
local _isBaseMarker = _objectType == DZE_Territory_Marker;
local _isSafe = DZE_safeManagement && {_objectType in DZE_LockedStorage};
local _friendType = call {
	if (_isDoor) exitWith {'doorFriends'};
	if (_isBaseMarker) exitWith {'baseFriends'};
	if (_isSafe) exitWith {'safeFriends'};
};

local _friends = _object getVariable [_friendType,[]];

if (typeName _friend == 'OBJECT') then {
	// Add friend.
	local _friendUID = getPlayerUID _friend;
	local _friendName = _friend call DZE_fnc_getNamePlayer;
	_friends set [count _friends,[_friendUID,_friendName]];
} else {
	// Remove friend.
	_friends set [_friend,'delete'];
	_friends = _friends - ['delete'];
};

_object setVariable [_friendType,_friends,true];

// Safe friends are saved within the inventory next to the gear.
local _newInventory = if (_isSafe) then {[[],[getWeaponCargo _object,getMagazineCargo _object,getBackpackCargo _object]]} else {_friends};
local _lastInventory = str (_object getVariable ['lastInventory',[]]);

// Only save to the database when the new inventory differs from the old one.
if (str _newInventory != _lastInventory) then {
	if (_isSafe) then {_newInventory set [0,_friends]};

	local _objectID = _object getVariable ['ObjectID','0'];
	local _objectUID = _object getVariable ['ObjectUID','0'];
	local _key = '';

	if (_objectID == '0') then {
		_key = format ['CHILD:309:%1:',_objectUID] + str _newInventory + ':';
	} else {
		_key = format ['CHILD:303:%1:',_objectID] + str _newInventory + ':';
	};

	_key call server_hiveWrite;
};
