///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseAddFriend
//
//	Description:	Adds the selected nearby player to the active base's friend list.
//	Groups:		Base, Base Management
//
//	Syntax:		friendNetID call DZE_fnc_baseAddFriend
//
//	Parameters:	friendNetID: String - Network ID of the player to add
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_ADD_FRIEND

#ifdef DEBUG_DZE_FNC_BASE_ADD_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_baseAddFriend]: Function called with argumentes: %1',_this];
#endif

local _friendNetID = _this;

if (typeName _friendNetID != 'STRING' || {_friendNetID == ''}) exitWith {};

local _friend = objectFromNetId _friendNetID;

if (isNull _friend || {!isPlayer _friend}) exitWith {};

disableSerialization;

if (isNil 'DZE_currentBase' || {isNull DZE_currentBase}) exitWith {
	#ifdef DEBUG_DZE_FNC_BASE_ADD_FRIEND
		diag_log '[Client Debug]: [DZE_fnc_baseAddFriend]: Warning: No active base was found';
	#endif
};

local _display = findDisplay 711194;
if (isNull _display) exitWith {};

local _userList = _display displayCtrl 7001;
local _selectedIndex = lbCurSel _userList;

if (_selectedIndex < 0) exitWith {};

local _friendName = _userList lbText _selectedIndex;
local _friends = DZE_currentBase getVariable ['baseFriends',[]];

if (typeName _friends != 'ARRAY') then {_friends = []};

local _friendUID = getPlayerUID _friend;
local _inList = false;

{
	if (typeName _x == 'ARRAY' && {count _x > 0} && {_x select 0 == _friendUID}) exitWith {
		_inList = true;
	};
} count _friends;

if (_inList) exitWith {
	systemChat localize 'STR_BASE_MANAGEMENT_FRIEND_ALREADY_ADDED';
};

if (count _friends >= DZE_baseMaxFriends) exitWith {
	systemChat format [localize 'STR_BASE_MANAGEMENT_FRIEND_LIMIT_REACHED',DZE_baseMaxFriends];
};

PVDZE_changeFriends = [netID player,netID DZE_currentBase,_friendNetID,dayz_authKey];
publicVariableServer 'PVDZE_changeFriends';

#ifdef DEBUG_DZE_FNC_BASE_ADD_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_baseAddFriend]: Added player %1 (%2) to base %3',_friendName,_friendUID,DZE_currentBase];
#endif

[] call DZE_fnc_baseGetFriends;
[] call DZE_fnc_baseNearbyHumans;
