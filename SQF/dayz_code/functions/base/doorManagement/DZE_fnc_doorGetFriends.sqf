///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_doorGetFriends
//
//	Description:	Refreshes the active door's friend list in the management dialog.
//	Groups:		Base, Door Management
//
//	Syntax:		call DZE_fnc_doorGetFriends
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_DOOR_GET_FRIENDS

#ifdef DEBUG_DZE_FNC_DOOR_GET_FRIENDS
	diag_log format ['[Client Debug]: [DZE_fnc_doorGetFriends]: Function called with argumentes: %1',_this];
#endif

disableSerialization;

if (isNil 'DZE_currentDoor' || {isNull DZE_currentDoor}) exitWith {};

local _display = findDisplay 711195;
if (isNull _display) exitWith {};

local _friendList = _display displayCtrl 7102;
lbClear _friendList;

local _friends = DZE_currentDoor getVariable ['doorFriends',[]];
if (typeName _friends != 'ARRAY') exitWith {};

local _friendName = '';

{
	_friendName = _x select 1;
	_friendList lbAdd _friendName;
} forEach _friends;
