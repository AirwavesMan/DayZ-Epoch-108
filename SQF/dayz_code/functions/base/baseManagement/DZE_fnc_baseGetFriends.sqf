///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseGetFriends
//
//	Description:	Refreshes the active base's friend list in the management dialog.
//	Groups:		Base, Base Management
//
//	Syntax:		call DZE_fnc_baseGetFriends
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_GET_FRIENDS

#ifdef DEBUG_DZE_FNC_BASE_GET_FRIENDS
	diag_log format ['[Client Debug]: [DZE_fnc_baseGetFriends]: Function called with argumentes: %1',_this];
#endif

disableSerialization;

if (isNil 'DZE_currentBase' || {isNull DZE_currentBase}) exitWith {};

local _display = findDisplay 711194;
if (isNull _display) exitWith {};

local _friendList = _display displayCtrl 7002;
lbClear _friendList;

local _friends = DZE_currentBase getVariable ['baseFriends',[]];
if (typeName _friends != 'ARRAY') exitWith {};

local _friendName = '';

{
	_friendName = _x select 1;
	_friendList lbAdd _friendName;
} forEach _friends;