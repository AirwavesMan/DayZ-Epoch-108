///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_requiredItemsCheck
//
//	Description:	Checks a required inventory item and tool classes, including supported tool
//			alternatives.
//	Groups:		Tools
//
//	Syntax:		[item,requiredItems,className,silent] call DZE_fnc_requiredItemsCheck
//
//	Parameters:	item: String - Required CfgMagazines or CfgWeapons item, or an empty string
//			requiredItems: Array - Required CfgWeapons tool classes
//			className: String - CfgVehicles class used by the missing-item message
//			silent: Boolean - Optional; suppresses messages and action-state changes when true
//
//	Return Value:	Boolean - Whether the player has the inventory item and all required tools
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_REQUIRED_ITEMS_CHECK

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_REQUIRED_ITEMS_CHECK
	diag_log format ['[Client Debug]: [DZE_fnc_requiredItemsCheck]: Function called with arguments: %1',_this];
#endif

local _item = param(0,'');
local _requiredItems = param(1,[]);
local _className = param(2,'none');
local _silent = param(3,false);

local _hasItem = (_item == '') || {(_item in magazines player) || {_item in weapons player}};
if (!_hasItem) exitWith {
	if (!_silent) then {
		local _displayName = getText (configFile >> 'CfgVehicles' >> _className >> 'displayName');
		if (_displayName == '') then {_displayName = getText (configFile >> 'CfgMagazines' >> _item >> 'displayName')};
		if (_displayName == '') then {_displayName = getText (configFile >> 'CfgWeapons' >> _item >> 'displayName')};
		if (_displayName == '') then {_displayName = _item};

		dayz_actionInProgress = false;
		format [localize 'str_player_31',_displayName,localize 'str_player_31_build'] call DZE_fnc_rollingMessages;
	};
	false
};

if (count _requiredItems == 0) exitWith {true};

local _items = items player;
local _weapons = weapons player;
local _shovels = ['DZE_Tool_Shovel','DZE_Tool_Etool'];
local _chainsaws = ['DZE_Tool_ChainSaw','DZE_Tool_ChainSawB','DZE_Tool_ChainSawP','DZE_Tool_ChainSawG','DZE_Tool_ChainSawR'];
local _missingItems = [];
local _hasRequiredItems = true;
local _requiredItem = '';
local _hasTool = false;
local _meleeClass = '';
local _missingItemText = '';
{
	_requiredItem = _x;
	_hasTool = false;
	_meleeClass = '';

	if (typeName _requiredItem == 'STRING') then {
		_hasTool = (_requiredItem in _items) || {_requiredItem in _weapons};

		if (!_hasTool) then {
			call {
				if (_requiredItem == 'DZE_Tool_Knife') exitWith {
					{if ((_x in _items) || {_x in _weapons}) exitWith {_hasTool = true};} count DZE_Knives;
				};
				if (_requiredItem == 'DZE_Tool_Matchbox') exitWith {
					{if ((_x in _items) || {_x in _weapons}) exitWith {_hasTool = true};} count DZE_Matchboxes;
				};
				if (_requiredItem == 'DZE_Tool_ChainSaw') exitWith {
					{if (_x in _weapons) exitWith {_hasTool = true};} count _chainsaws;
					if (!_hasTool && {dayz_onBack in _chainsaws}) then {_hasTool = true};
				};
				if (_requiredItem in _shovels) exitWith {
					{if ((_x in _items) || {_x in _weapons}) exitWith {_hasTool = true};} count _shovels;
				};
			};

			if (!_hasTool) then {
				call {
					if (_requiredItem == 'DZE_Tool_Crowbar') exitWith {_meleeClass = 'MeleeCrowbar'};
					if (_requiredItem == 'DZE_Tool_Hatchet') exitWith {_meleeClass = 'MeleeHatchet'};
					if (_requiredItem == 'DZE_Tool_Sledge') exitWith {_meleeClass = 'MeleeSledge'};
				};

				if (_meleeClass != '') then {
					_hasTool = (_meleeClass in _weapons) || {dayz_onBack == _meleeClass};
				};
			};
		};
	};

	if (!_hasTool) then {
		_hasRequiredItems = false;

		if (!_silent) then {
			if (typeName _requiredItem != 'STRING') then {
				_missingItemText = str _requiredItem;
			} else {
				if (_requiredItem in _shovels) then {
					_missingItemText = format [
						localize 'STR_CRAFTING_NEEDED_TOOLS_SHOVEL_ETOOL',
						getText (configFile >> 'CfgWeapons' >> 'DZE_Tool_Shovel' >> 'displayName'),
						getText (configFile >> 'CfgWeapons' >> 'DZE_Tool_Etool' >> 'displayName')
					];
				} else {
					_missingItemText = getText (configFile >> 'CfgWeapons' >> _requiredItem >> 'displayName');
					if (_missingItemText == '') then {_missingItemText = _requiredItem};
				};
			};

			if !(_missingItemText in _missingItems) then {_missingItems set [count _missingItems,_missingItemText]};
		};
	};

	if (_silent && {!_hasRequiredItems}) exitWith {};
} count _requiredItems;

if (!_hasRequiredItems) exitWith {
	if (!_silent) then {
		local _missingText = '';
		{
			if (_forEachIndex == 0) then {
				_missingText = _x;
			} else {
				_missingText = _missingText + ', ' + _x;
			};
		} forEach _missingItems;

		dayz_actionInProgress = false;
		systemChat format [localize 'STR_EPOCH_PLAYER_137',_missingText];
		format [localize 'STR_EPOCH_PLAYER_137',_missingText] call DZE_fnc_rollingMessages;
	};
	false
};

true
