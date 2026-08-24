///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_doorNearbyHumans
//
//	Description:	Refreshes the list of players eligible to become door friends.
//	Groups:		Base, Door Management
//
//	Syntax:		call DZE_fnc_doorNearbyHumans
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_DOOR_NEARBY_HUMANS

#ifdef DEBUG_DZE_FNC_DOOR_NEARBY_HUMANS
	diag_log format ['[Client Debug]: [DZE_fnc_doorNearbyHumans]: Function called with argumentes: %1',_this];
#endif

disableSerialization;

local _display = findDisplay 711195;
if (isNull _display) exitWith {};

local _userList = _display displayCtrl 7101;
lbClear _userList;

local _players = if (DZE_doorManagementMustBeClose) then {
	player nearEntities ['CAManBase',12]
} else {
	playableUnits
};
local _friend = objNull;
local _friendNetID = '';
local _friendName = '';
local _listIndex = -1;

{
	_friend = _x;

	if (isPlayer _friend) then {
		_friendNetID = netID _friend;
		_friendName = _friend call DZE_fnc_getNamePlayer;
		_listIndex = _userList lbAdd _friendName;
		_userList lbSetData [_listIndex,_friendNetID];
	};
} forEach _players;

lbSort _userList;
