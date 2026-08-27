///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	dze_requiredItemsCheck
//
//	Description:	Checks a build item and required tools, including supported tool alternatives.
//	Groups:		Build, Validation
//
//	Syntax:		[item,requiredItems,className,silent] call dze_requiredItemsCheck
//
//	Parameters:	item: String - Required CfgMagazines build item, or an empty string
//			requiredItems: Array - Required CfgWeapons tool classes
//			className: String - CfgVehicles class used by the missing build-item message
//			silent: Boolean - Optional; suppresses messages and action-state changes when true
//
//	Return Value:	Boolean - Whether the player has the build item and all required tools
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_REQUIRED_ITEMS_CHECK

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_REQUIRED_ITEMS_CHECK
	diag_log format ['[Client Debug]: [dze_requiredItemsCheck]: Function called with arguments: %1',_this];
#endif

local _item = param(0,'');
local _requiredItems = param(1,[]);
local _className = param(2,'none');
local _silent = param(3,false);

local _objectDisplayName = getText (configFile >> 'CfgVehicles' >> _className >> 'displayName');
local _shovels = ['ItemShovel','ItemEtool'];
local _items = items player;
local _weapons = weapons player;
local _missingItems = [];
local _hasRequiredItems = true;
local _requiredItem = '';
local _hasTool = false;
local _meleeName = '';
local _meleeClass = '';
local _missingItemText = '';
local _shovelName = '';
local _entrenchingToolName = '';
{
	_requiredItem = _x;
	_hasTool = _requiredItem in _weapons;

	call {
		if (_requiredItem == 'ItemKnife') exitWith {
			{if (_x in Dayz_Gutting) exitWith {_hasTool = true};} count _items;
		};
		if (_requiredItem == 'ItemMatchbox') exitWith {
			{if (_x in DayZ_Ignitors) exitWith {_hasTool = true};} count _items;
		};
		if (_requiredItem == 'ChainSaw') exitWith {
			{if (_x in ['ChainSaw','ChainSawB','ChainSawP','ChainSawG','ChainSawR']) exitWith {_hasTool = true};} count _weapons;
		};
		if (_requiredItem in _shovels) exitWith {
			{if (_x in _shovels) exitWith {_hasTool = true};} count _items;
		};
	};

	{
		_meleeName = _x;
		_meleeClass = format ['Melee%1',_meleeName];
		if (_requiredItem == format ['Item%1',_meleeName] && {(_meleeClass in _weapons) || {dayz_onBack == _meleeClass}}) then {
			_hasTool = true;
		};
	} count ['Crowbar','Hatchet','Sledge'];

	if (!_hasTool) then {
		if (_requiredItem in _shovels) then {
			_shovelName = getText (configFile >> 'CfgWeapons' >> 'ItemShovel' >> 'displayName');
			_entrenchingToolName = getText (configFile >> 'CfgWeapons' >> 'ItemEtool' >> 'displayName');
			_missingItemText = format [localize 'STR_CRAFTING_NEEDED_TOOLS_SHOVEL_ETOOL',_shovelName,_entrenchingToolName];
		} else {
			_missingItemText = getText (configFile >> 'CfgWeapons' >> _requiredItem >> 'displayName');
			if (_missingItemText == '') then {_missingItemText = _requiredItem};
		};
		_missingItems set [count _missingItems,_missingItemText];
		_hasRequiredItems = false;
	};
} count _requiredItems;

local _missingText = '';
{
	if (_forEachIndex == 0) then {
		_missingText = _x;
	} else {
		_missingText = _missingText + ', ' + _x;
	};
} forEach _missingItems;

local _hasBuildItem = _item in magazines player;
if (_item != '' && {!_hasBuildItem} && {_objectDisplayName != ''}) exitWith {
	if (!_silent) then {
		dayz_actionInProgress = false;
		format [localize 'str_player_31',_objectDisplayName,'build'] call DZE_fnc_rollingMessages;
	};
	false
};

if (!_hasRequiredItems) exitWith {
	if (!_silent) then {
		dayz_actionInProgress = false;
		systemChat format [localize 'STR_EPOCH_PLAYER_137',_missingText];
		format [localize 'STR_EPOCH_PLAYER_137',_missingText] call DZE_fnc_rollingMessages;
	};
	false
};

true
