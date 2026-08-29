///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_sharpenTool
//
//	Description:	Sharpens a configured blunt tool using water and a brick.
//	Groups:		Tools
//
//	Syntax:		[toolClass,outputClass] spawn DZE_fnc_sharpenTool
//
//	Parameters:	toolClass: String - Tool class to sharpen
//			outputClass: String - Sharpened tool class to return
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SHARPEN_TOOL

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SHARPEN_TOOL
	diag_log format ['[Client Debug]: [DZE_fnc_sharpenTool]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

// Parameters: ['DZE_Tool_KnifeBlunt','DZE_Tool_Knife']
local _item = _this select 0; // Item to be sharpened.
local _output = _this select 1; // Item to be returned.

call gear_ui_init;
closeDialog 1;

local _waterBottles = ['ItemWaterBottle','ItemWaterBottleInfected','ItemWaterBottleSafe','ItemWaterBottleBoiled','ItemWaterBottleHerbal','ItemPlasticWaterBottle','ItemPlasticWaterBottleInfected','ItemPlasticWaterBottleSafe','ItemPlasticWaterBottleBoiled','ItemPlasticWaterBottleHerbal'];
local _magazines = magazines player;
local _waterUsed = '';
{
	if (_x in _magazines) exitWith {_waterUsed = _x};
} forEach _waterBottles;

// Water is required.
if (_waterUsed == '') exitWith {
	localize 'str_sharpen_missing_water' call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

local _brick = 'equip_brick';
// A sharpening brick is required.
if !(_brick in _magazines) exitWith {
	local _brickDisplayName = getText (configFile >> 'CfgMagazines' >> _brick >> 'displayName');
	format [localize 'str_missing_to_do_this',_brickDisplayName] call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

[player,getPosATL player,5,'repair'] spawn fnc_alertZombies;
local _finished = ['Medic',1] call fn_loopAction;
if (!_finished) exitWith {
	localize 'STR_EPOCH_PLAYER_26' call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

if !(_item in weapons player) exitWith {dayz_actionInProgress = false};

local _displayName = getText (configFile >> 'CfgWeapons' >> _item >> 'displayName');
player removeMagazine _waterUsed;
player removeWeapon _item;

// The shared tool helper safely handles an existing sharpened tool.
_output call DZE_fnc_addDuplicateTool;
player addMagazine (getText (configFile >> 'CfgMagazines' >> _waterUsed >> 'containerEmpty'));

//Remove Later
player removeMagazine _brick;

format [localize 'str_sharpen_success',_displayName] call DZE_fnc_rollingMessages;

#ifdef DEBUG_DZE_FNC_SHARPEN_TOOL
	diag_log format ['[Client Debug]: [DZE_fnc_sharpenTool]: Tool sharpened: %1 -> %2 | Water used: %3',_item,_output,_waterUsed];
#endif

dayz_actionInProgress = false;
