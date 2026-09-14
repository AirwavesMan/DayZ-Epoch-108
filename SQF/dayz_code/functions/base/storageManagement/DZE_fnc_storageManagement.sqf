///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_storageManagement
//
//	Description:	Opens the safe player-list dialog for its owner.
//	Groups:		Base, Storage Management
//	Syntax:		Action-menu arguments call DZE_fnc_storageManagement
//	Parameters:	object: Object - Managed storage in action arguments select 3
//	Return Value:	Nothing
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_STORAGE_MANAGEMENT

#include "\z\addons\dayz_code\Configs\RscDisplay\storageManagementDefines.hpp"

#ifdef DEBUG_DZE_FNC_STORAGE_MANAGEMENT
	diag_log format ['[Client Debug]: [DZE_fnc_storageManagement]: Function called with arguments: %1',_this];
#endif

local _object = _this select 3;

if (!DZE_storageManagement || {isNull _object} || {dayz_playerUID != (_object getVariable ['ownerPUID','0'])}) exitWith {};

DZE_currentStorage = _object;
if (createDialog 'DZE_StorageManagement') then {
	disableSerialization;
	local _display = findDisplay DZE_STORAGE_IDD;

	if (DZE_baseManagementMustBeClose) then {
		(_display displayCtrl DZE_STORAGE_IDC_PLAYERS_LABEL) ctrlSetText localize 'STR_EPOCH_HUMANS_NEARBY';
	};
	
	while {!isNull _display && {!isNull _object}} do {
		call DZE_fnc_storageGetFriends;
		uiSleep 0.5;
	};
	if (!isNull _display) then {_display closeDisplay 2};
};
