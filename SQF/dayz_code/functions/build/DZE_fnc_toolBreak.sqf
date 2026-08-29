///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_toolBreak
//
//	Description:	Updates staged knife and matchbox wear, then selects one breakable tool used by
//			a completed action and replaces it with its configured broken item.
//	Groups:		Build, Inventory
//
//	Syntax:		toolArray call DZE_fnc_toolBreak
//
//	Parameters:	toolArray: Array - CfgWeapons tool classes used by the completed action
//
//	Return Value:	Boolean - False when a configured tool broke; otherwise true
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_TOOL_BREAK

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_TOOL_BREAK
	diag_log format ['[Client Debug]: [DZE_fnc_toolBreak]: Function called with argumentes: %1',_this];
#endif

local _requiredTools = _this;

if (count _requiredTools == 0) exitWith {true};

// Knives and matchboxes use their existing staged wear instead of DZE_brokenItem.
if ('DZE_Tool_Knife' in _requiredTools) then {
	['knives',0.2] call fn_dynamicTool;

	#ifdef DEBUG_DZE_FNC_TOOL_BREAK
		diag_log '[Client Debug]: [DZE_fnc_toolBreak]: Processed staged knife wear.';
	#endif
};

if ('DZE_Tool_Matchbox' in _requiredTools) then {
	['matches',0.1] call fn_dynamicTool;

	#ifdef DEBUG_DZE_FNC_TOOL_BREAK
		diag_log '[Client Debug]: [DZE_fnc_toolBreak]: Processed staged matchbox use.';
	#endif
};

if (!DZE_toolBreaking) exitWith {true};

local _items = items player;
local _weapons = weapons player;
local _breakableTools = [];
local _knownTools = [];
local _toolClass = '';
local _toolConfig = configFile;
local _brokenClass = '';
local _swappedClass = '';
local _ownedClass = '';
{
	_toolClass = _x;
	_ownedClass = '';

	if (typeName _toolClass == 'STRING' && {!(_toolClass in _knownTools)}) then {
		_knownTools set [count _knownTools,_toolClass];
		_toolConfig = configFile >> 'CfgWeapons' >> _toolClass;
		_brokenClass = getText (_toolConfig >> 'DZE_brokenItem');
		_swappedClass = getText (_toolConfig >> 'DZE_swappedItem');

		if (_brokenClass != '' && {isClass (configFile >> 'CfgWeapons' >> _brokenClass)}) then {
			if ((_toolClass in _items) || {_toolClass in _weapons}) then {
				_ownedClass = _toolClass;
			} else {
				if (_swappedClass != '' && {(_swappedClass in _weapons) || {dayz_onBack == _swappedClass}}) then {
					_ownedClass = _swappedClass;
				};
			};

			if (_ownedClass != '') then {
				_breakableTools set [count _breakableTools,[_toolClass,_ownedClass,_brokenClass]];
			};
		};
	};
} forEach _requiredTools;

if (count _breakableTools == 0 || {!([DZE_toolBreakChance] call fn_chance)}) exitWith {true};

local _selectedTool = _breakableTools call BIS_fnc_selectRandom;
_toolClass = _selectedTool select 0;
_ownedClass = _selectedTool select 1;
_brokenClass = _selectedTool select 2;

local _removed = false;
if (_ownedClass == dayz_onBack) then {
	dayz_onBack = '';
	player setVariable ['dayz_onBack',dayz_onBack,true];
	_removed = true;

	if (!isNull (findDisplay 106)) then {
		((findDisplay 106) displayCtrl 1209) ctrlSetText '';
	};
} else {
	if (_ownedClass == _toolClass) then {
		_removed = ([player,_ownedClass,1] call BIS_fnc_invRemove) > 0;
	} else {
		player removeWeapon _ownedClass;
		_removed = !(_ownedClass in weapons player);
	};
};

if (!_removed) exitWith {
	#ifdef DEBUG_DZE_FNC_TOOL_BREAK
		diag_log format ['[Client Debug]: [DZE_fnc_toolBreak]: Warning: Selected tool could not be removed: %1',_ownedClass];
	#endif
	true
};

_brokenClass call player_addDuplicateTool;

local _displayName = getText (configFile >> 'CfgWeapons' >> _toolClass >> 'displayName');
if (_displayName == '') then {_displayName = _toolClass};
format [localize 'STR_TOOL_BREAK_BROKEN',_displayName] call DZE_fnc_rollingMessages;

#ifdef DEBUG_DZE_FNC_TOOL_BREAK
	diag_log format ['[Client Debug]: [DZE_fnc_toolBreak]: Tool broken: %1 | Carried class: %2 | Broken class: %3',_toolClass,_ownedClass,_brokenClass];
#endif

false
