///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_addToBack
//
//	Description:	Moves a configured toolbelt item to the player's back as a melee weapon.
//	Groups:		Tools
//
//	Syntax:		toolClass spawn DZE_fnc_addToBack
//
//	Parameters:	toolClass: String - Toolbelt item class to move to the back
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_ADD_TO_BACK

#include "\z\addons\dayz_code\functions\include\defines.hpp"
#include "\z\addons\dayz_code\util\player.hpp"

#ifdef DEBUG_DZE_FNC_ADD_TO_BACK
	diag_log format ['[Client Debug]: [DZE_fnc_addToBack]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

local _item = _this;
disableSerialization;

if (Player_IsOnLadder()) exitWith {
	localize 'str_player_21' call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

local _config = configFile >> 'CfgWeapons' >> _item;
local _displayName = getText (_config >> 'displayName');

if !(_item in weapons player) exitWith {
	format [localize 'str_player_30',_displayName] call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

if (dayz_onBack != '') exitWith {
	closeDialog 0;
	format [localize 'str_player_toback_fail',_displayName] call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

local _output = getArray (_config >> 'ItemActions' >> 'ToBack' >> 'output') select 0;
call gear_ui_init;

// Free the primary slot for new melee (remember item to add after)
player removeWeapon _item;
dayz_onBack = _output;
player setVariable ['dayz_onBack',dayz_onBack,true];

[[findDisplay 106],'onLBSelChanged'] spawn fn_handleGear; //update back

#ifdef DEBUG_DZE_FNC_ADD_TO_BACK
	diag_log format ['[Client Debug]: [DZE_fnc_addToBack]: Moved tool to back: %1 -> %2',_item,_output];
#endif

dayz_actionInProgress = false;
