///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_addDuplicateTool
//
//	Description:	Adds a tool to the toolbelt or places a duplicate in the backpack, vehicle or
//			on the ground. Useful for batch crafting tools.
//	Groups:		Tools
//
//	Syntax:		toolClass call DZE_fnc_addDuplicateTool
//
//	Parameters:	toolClass: String - Toolbelt item class to add
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
//	Warning:	A full vehicle cargo cannot be handled reliably while the vehicle is moving.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_ADD_DUPLICATE_TOOL

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_ADD_DUPLICATE_TOOL
	diag_log format ['[Client Debug]: [DZE_fnc_addDuplicateTool]: Function called with arguments: %1',_this];
#endif

local _tool = _this;
local _displayName = getText (configFile >> 'CfgWeapons' >> _tool >> 'displayName');

if !(_tool in items player) exitWith {
	// Remove melee magazines (BIS_fnc_invAdd fix).
	call DZE_fnc_removeMeleeMagazines;
	local _added = [player,_tool] call BIS_fnc_invAdd;
	call DZE_fnc_ensureMeleeMagazine;

	if (!_added) then {
		systemChat localize 'str_epoch_player_107';
		[_tool,2,1] call fn_dropItem;
		systemChat format [localize 'str_actions_noroom',_displayName];
	};
};

local _bag = unitBackpack player;
// This check is approximate because Arma 2 cannot report exact free backpack space.
if ((_bag call DZE_fnc_getFreeBackpackSlots) > 0) exitWith {
	_bag addWeaponCargoGlobal [_tool,1];
	systemChat format [localize 'str_epoch_player_313',_displayName];
};

local _vehicle = vehicle player;
if (_vehicle != player) exitWith {
	_vehicle addWeaponCargoGlobal [_tool,1];
	systemChat format [localize 'str_epoch_player_313_1',_displayName];
};

[_tool,2,1] call fn_dropItem;
systemChat format [localize 'str_actions_noroom',_displayName];
