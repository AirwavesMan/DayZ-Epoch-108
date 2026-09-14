///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_storageChangeFriend
//
//	Description:	Requests a storage-list change; the dialog reads the synchronized object variable.
//	Groups:		Base, Storage Management
//	Syntax:		'add' or 'remove' call DZE_fnc_storageChangeFriend
//	Parameters:	mode: String - add or remove
//	Return Value:	Nothing
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_STORAGE_CHANGE_FRIEND

#include "\z\addons\dayz_code\Configs\RscDisplay\storageManagementDefines.hpp"

#ifdef DEBUG_DZE_FNC_STORAGE_CHANGE_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_storageChangeFriend]: Function called with arguments: %1',_this];
#endif

disableSerialization;

local _mode = _this;
local _display = findDisplay DZE_STORAGE_IDD;

if (isNull _display || {isNull DZE_currentStorage}) exitWith {};

local _list = _display displayCtrl ([DZE_STORAGE_IDC_FRIENDS,DZE_STORAGE_IDC_PLAYERS] select (_mode == 'add'));
local _index = lbCurSel _list;

if (_index < 0) exitWith {};
local _specifier = _list lbData _index;

if (_mode == 'remove' && {_specifier == (DZE_currentStorage getVariable ['ownerPUID','0'])}) exitWith {
	systemChat localize 'STR_STORAGE_MANAGEMENT_OWNER_REMOVE_DENIED';
};

if (_mode == 'add') then {
	local _friend = objectFromNetId _specifier;
	local _friendUID = getPlayerUID _friend;
	local _friends = DZE_currentStorage getVariable ['storageFriends',[]];
	if (!isPlayer _friend) exitWith {_specifier = ''};
	if ({(_x select 0) == _friendUID} count _friends > 0) exitWith {
		systemChat localize 'STR_BASE_MANAGEMENT_FRIEND_ALREADY_ADDED';
		_specifier = '';
	};
	if (count _friends >= DZE_baseMaxFriends) exitWith {
		systemChat format [localize 'STR_BASE_MANAGEMENT_FRIEND_LIMIT_REACHED',DZE_baseMaxFriends];
		_specifier = '';
	};
};
if (_specifier == '') exitWith {};

PVDZE_changeFriends = [netID player,netID DZE_currentStorage,[_mode,_specifier],dayz_authKey];
publicVariableServer 'PVDZE_changeFriends';
