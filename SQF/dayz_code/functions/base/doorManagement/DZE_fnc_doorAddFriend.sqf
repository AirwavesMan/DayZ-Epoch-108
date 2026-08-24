///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_doorAddFriend
//
//	Description:	Adds the selected nearby player to the active door's friend list.
//	Groups:		Base, Door Management
//
//	Syntax:		friendNetID call DZE_fnc_doorAddFriend
//
//	Parameters:	friendNetID: String - Network ID of the player to add
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_DOOR_ADD_FRIEND

#ifdef DEBUG_DZE_FNC_DOOR_ADD_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_doorAddFriend]: Function called with argumentes: %1',_this];
#endif

local _friendNetID = _this;

if (typeName _friendNetID != 'STRING' || {_friendNetID == ''}) exitWith {};

local _friend = objectFromNetId _friendNetID;

if (isNull _friend || {!isPlayer _friend}) exitWith {};

disableSerialization;

if (isNil 'DZE_currentDoor' || {isNull DZE_currentDoor}) exitWith {
	diag_log '[Client Debug]: [DZE_fnc_doorAddFriend]: Warning: No active door was found';
};

local _display = findDisplay 711195;
if (isNull _display) exitWith {};

local _userList = _display displayCtrl 7101;
local _selectedIndex = lbCurSel _userList;

if (_selectedIndex < 0) exitWith {};

local _friendName = _userList lbText _selectedIndex;
local _friends = DZE_currentDoor getVariable ['doorFriends',[]];

if (typeName _friends != 'ARRAY') then {_friends = []};

local _friendUID = getPlayerUID _friend;

local _toAdd = [_friendUID,toArray _friendName];
local _inList = false;

{
	if (typeName _x == 'ARRAY' && {count _x > 0} && {_x select 0 == _friendUID}) exitWith {
		_inList = true;
	};
} count _friends;

if (_inList) exitWith {
	systemChat localize 'STR_BASE_MANAGEMENT_FRIEND_ALREADY_ADDED';
};

if (count _friends >= DZE_doorManagementMaxFriends) exitWith {
	systemChat format [localize 'STR_BASE_MANAGEMENT_FRIEND_LIMIT_REACHED',DZE_doorManagementMaxFriends];
};

_friends set [count _friends,_toAdd];

PVDZE_changeFriends = [netID player,netID DZE_currentDoor,_friendNetID,dayz_authKey];
publicVariableServer 'PVDZE_changeFriends';

#ifdef DEBUG_DZE_FNC_DOOR_ADD_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_doorAddFriend]: Added player %1 (%2) to door %3',_friendName,_friendUID,DZE_currentDoor];
#endif

[] call DZE_fnc_doorGetFriends;
[] call DZE_fnc_doorNearbyHumans;
