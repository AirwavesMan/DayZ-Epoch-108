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
//			For storage: Array - ['add',playerNetID] or ['remove',playerUID]
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_CHANGE_FRIENDS

#ifdef DEBUG_SERVER_CHANGE_FRIENDS
	diag_log format ['[Server Debug]: [server_changeFriends]: Function called with arguments: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this != 4}) exitWith {
	diag_log format ['[Server Debug]: [server_changeFriends]: Error: Invalid parameter format: %1',_this];
};

local _player = objectFromNetId (_this select 0);
local _object = objectFromNetId (_this select 1);
// Can be a netID from an object or the friend-list index used to remove a friend.
local _friend = _this select 2;
local _clientKey = _this select 3;

if (typeName _friend == 'STRING') then {_friend = objectFromNetId _friend};

if (isNull _object) exitWith {
	#ifdef DEBUG_SERVER_CHANGE_FRIENDS
		diag_log format ['[Server Debug]: [server_changeFriends]: Warning: Object is null: %1',_this];
	#endif
};

local _positionASL = [_object] call DZE_fnc_modelCenterWorld;
local _functionName = 'server_changeFriends';

if !([_this,_functionName,_positionASL,_player,_clientKey] call server_verifySender) exitWith {};

local _objectType = typeOf _object;
if (_objectType in DZE_LockedStorage || {_objectType in DZE_UnLockedStorage}) exitWith {
	if (!DZE_storageManagement || {!alive _object}) exitWith {};
	if (getPlayerUID _player != (_object getVariable ['ownerPUID','0'])) exitWith {
		diag_log format ['[Server Debug]: [server_changeFriends]: Warning: Rejected storage-list change by non-owner %1',getPlayerUID _player];
	};
	if (typeName _friend != 'ARRAY' || {count _friend != 2}) exitWith {};
	local _mode = _friend select 0;
	local _specifier = _friend select 1;
	if (typeName _specifier != 'STRING') exitWith {};
	if (_mode == 'remove' && {_specifier == getPlayerUID _player}) exitWith {
		diag_log format ['[Server Debug]: [server_changeFriends]: Warning: Rejected storage owner removal: %1',_specifier];
	};
	local _friends = _object getVariable ['storageFriends',[]];
	if (_mode == 'add') then {
		local _newFriend = objectFromNetId _specifier;
		local _friendUID = getPlayerUID _newFriend;
		if (!isPlayer _newFriend || {_friendUID == ''} || {DZE_baseManagementMustBeClose && {_player distance _newFriend > 12}}) exitWith {};
		if ({(_x select 0) == _friendUID} count _friends > 0 || {count _friends >= DZE_baseMaxFriends}) exitWith {};
		// Do not mutate the nested array cached in lastInventory before the save comparison.
		_friends = +_friends;
		_friends set [count _friends,[_friendUID,_newFriend call DZE_fnc_getNamePlayer]];
	};
	if (_mode == 'remove') then {
		local _remaining = [];
		{
			if ((_x select 0) != _specifier) then {_remaining set [count _remaining,_x]};
		} forEach _friends;
		_friends = _remaining;
	};
	_object setVariable ['storageFriends',_friends,true];
	// Storage friends are saved within the inventory next to the gear.
	[_object,'gear'] call server_updateObject;
};

local _isDoor = DZE_doorManagement && {_objectType in DZE_DoorsLocked};
local _isBaseMarker = _objectType == DZE_Territory_Marker;
if (!_isDoor && {!_isBaseMarker}) exitWith {};
local _friendType = call {
	if (_isDoor) exitWith {'doorFriends'};
	if (_isBaseMarker) exitWith {'baseFriends'};
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

// Storage friends are saved within the inventory next to the gear by server_updateObject.
local _lastInventory = str (_object getVariable ['lastInventory',[]]);

// Only save to the database when the new inventory differs from the old one.
if (str _friends != _lastInventory) then {
	local _objectID = _object getVariable ['ObjectID','0'];
	local _objectUID = _object getVariable ['ObjectUID','0'];
	local _key = '';

	if (_objectID == '0') then {
		_key = format ['CHILD:309:%1:',_objectUID] + str _friends + ':';
	} else {
		_key = format ['CHILD:303:%1:',_objectID] + str _friends + ':';
	};

	_key call server_hiveWrite;
};
