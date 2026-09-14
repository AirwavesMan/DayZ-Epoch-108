///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_storageGetFriends
//
//	Description:	Refreshes the management lists from the object's synchronized storageFriends.
//	Groups:		Base, Storage Management
//	Syntax:		call DZE_fnc_storageGetFriends
//	Return Value:	Nothing
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_STORAGE_GET_FRIENDS

#include "\z\addons\dayz_code\Configs\RscDisplay\storageManagementDefines.hpp"

#ifdef DEBUG_DZE_FNC_STORAGE_GET_FRIENDS
	diag_log format ['[Client Debug]: [DZE_fnc_storageGetFriends]: Function called'];
#endif

disableSerialization;
local _display = findDisplay DZE_STORAGE_IDD;
if (isNull _display || {isNull DZE_currentStorage}) exitWith {};

local _friends = DZE_currentStorage getVariable ['storageFriends',[]];
local _users = _display displayCtrl DZE_STORAGE_IDC_PLAYERS;
local _list = _display displayCtrl DZE_STORAGE_IDC_FRIENDS;
local _selectedUser = _users lbData (lbCurSel _users);
local _selectedFriend = _list lbData (lbCurSel _list);

lbClear _users;
lbClear _list;

local _players = if (DZE_baseManagementMustBeClose) then {player nearEntities ['CAManBase',12]} else {playableUnits};
local _index = -1;
local _uid = '';

{
	_uid = getPlayerUID _x;
	if (isPlayer _x && {_uid != dayz_playerUID}) then {
		_index = _users lbAdd (_x call DZE_fnc_getNamePlayer);
		_users lbSetData [_index,netID _x];
		if (netID _x == _selectedUser) then {_users lbSetCurSel _index};
	};
} forEach _players;

{
	_index = _list lbAdd (_x select 1);
	_list lbSetData [_index,_x select 0];
	if ((_x select 0) == _selectedFriend) then {_list lbSetCurSel _index};
} forEach _friends;
