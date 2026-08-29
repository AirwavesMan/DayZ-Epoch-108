///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	fn_dynamicTool
//
//	Description:	Processes the staged use state of a knife or matchbox.
//	Groups:		Inventory, Tools
//
//	Syntax:		[toolType,chance] call fn_dynamicTool
//
//	Parameters:	toolType: String - 'knives' or 'matches'
//			chance: Number - Chance to move an unused tool into its finite state chain
//
//	Return Value:	Boolean - Whether a supported tool was available for the completed action
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_FN_DYNAMIC_TOOL

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_FN_DYNAMIC_TOOL
	diag_log format ['[Client Debug]: [fn_dynamicTool]: Function called with argumentes: %1',_this];
#endif

local _toolType = _this select 0;
local _chance = _this select 1;

local _toolBelt = items player;
local _dynamic = false;
local _newItem = '';
local _needed = [];
local _message = '';

switch (_toolType) do {
	case 'matches': {
		_dynamic = dayz_matchboxCount;
		_newItem = 'DZE_qtyRemaining';
		_needed = DZE_Matchboxes;
		_message = 'str_info_limitedbox';
	};
	case 'knives': {
		_dynamic = dayz_knifeDulling;
		_newItem = 'sharpnessRemaining';
		_needed = DZE_Knives;
		_message = 'str_info_bluntknife';
	};
};

if (count _needed == 0) exitWith {
	#ifdef DEBUG_FN_DYNAMIC_TOOL
		diag_log format ['[Client Debug]: [fn_dynamicTool]: Error: Unsupported dynamic tool type: %1',_toolType];
	#endif
	false
};

local _hasTool = false;
local _oneLeft = false;
local _remaining = '';
{
	_hasTool = _x in _toolBelt;
	if (_hasTool && {!_dynamic}) exitWith {};

	_oneLeft = _x in ['DZE_Tool_Matchbox1','DZE_Tool_Knife1'];
	_remaining = getText (configFile >> 'CfgWeapons' >> _x >> _newItem);

	// Use lowest quantity matches first to prevent duplicate tool being added
	// Use knife with least remaining uses first, except dull knife
	if (_hasTool && {!(_remaining in _toolBelt) || {_oneLeft}}) exitWith {
		if (_x in ['DZE_Tool_Knife','DZE_Tool_Matchbox']) then {
			if ([_chance] call fn_chance) then {
				player removeWeapon _x;
				player addWeapon _remaining;
				localize _message call DZE_fnc_rollingMessages;
			};
		} else {
			player removeWeapon _x;
			if (_remaining in _toolBelt) then {
				//Drop dull knife or empty matchbox if player already has one. Prevents duplicate tool.
				player removeWeapon _remaining;
				[_remaining,2,1] call fn_dropItem;
				format [localize 'str_actions_noroom',_remaining] call DZE_fnc_rollingMessages;
			};
			player addWeapon _remaining;
		};
	};
} forEach _needed;

_hasTool
