///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_addToolbelt
//
//	Description:	Moves a configured weapon between the player's weapon slots and toolbelt.
//	Groups:		Tools
//
//	Syntax:		toolClass spawn DZE_fnc_addToolbelt
//
//	Parameters:	toolClass: String - Tool or weapon class to convert
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
//	Note:		Handles tools carried on the back, active melee or sidearm weapons and toolbelt items.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_ADD_TOOLBELT

#include "\z\addons\dayz_code\functions\include\defines.hpp"
#include "\z\addons\dayz_code\util\player.hpp"

#ifdef DEBUG_DZE_FNC_ADD_TOOLBELT
	diag_log format ['[Client Debug]: [DZE_fnc_addToolbelt]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

local _item = _this;
disableSerialization;

local _config = configFile >> 'CfgWeapons' >> _item;
local _output = getArray (_config >> 'ItemActions' >> 'Toolbelt' >> 'output') select 0;
local _outputType = getNumber (configFile >> 'CfgWeapons' >> _output >> 'type');
local _weapons = weapons player;

local _slotFull = false;
if (_outputType == 131072) then {
	_slotFull = ({getNumber (configFile >> 'CfgWeapons' >> _x >> 'type') == 131072} count _weapons) >= 12;
};
if (_outputType == 1) then {_slotFull = primaryWeapon player != ''};
if (_outputType == 2) then {
	_slotFull = ({getNumber (configFile >> 'CfgWeapons' >> _x >> 'type') == 2} count _weapons) > 0;
};

if (_output in _weapons || _slotFull) exitWith {
	localize 'str_player_24' call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

if (Player_IsOnLadder()) exitWith {
	localize 'str_player_21' call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

local _fromBack = carryClick;
local _hasItem = if (_fromBack) then {dayz_onBack == _item} else {_item in _weapons};
local _displayName = getText (_config >> 'displayName');

// Make sure the player still has the tool this script was spawned with.
if (!_hasItem) exitWith {
	format [localize 'str_player_30',_displayName] call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

call gear_ui_init;

local _removed = false;
if (_fromBack) then {
	dayz_onBack = '';
	player setVariable ['dayz_onBack',dayz_onBack,true];
	carryClick = false;
	((findDisplay 106) displayCtrl 1209) ctrlSetText '';
	_removed = true;
} else {
	_removed = ([player,_config] call BIS_fnc_invRemove) == 1;
};

if (!_removed) exitWith {
	closeDialog 0;
	format [localize 'str_player_30',_displayName] call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

player addWeapon _output;

#ifdef DEBUG_DZE_FNC_ADD_TOOLBELT
	diag_log format ['[Client Debug]: [DZE_fnc_addToolbelt]: Converted tool: %1 -> %2 | From back: %3',_item,_output,_fromBack];
#endif

dayz_actionInProgress = false;
