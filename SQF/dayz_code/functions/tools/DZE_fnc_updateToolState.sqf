///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_updateToolState
//
//	Description:	Processes one use of a configured multi-state knife or matchbox.
//	Groups:		Tools
//
//	Syntax:		[toolType,initialStateChance] call DZE_fnc_updateToolState
//
//	Parameters:	toolType: String - 'knives' or 'matches'
//			initialStateChance: Number - Chance to move a pristine tool into its finite state chain
//
//	Return Value:	Boolean - Whether the player owns a supported state of the requested tool
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_UPDATE_TOOL_STATE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_UPDATE_TOOL_STATE
	diag_log format ['[Client Debug]: [DZE_fnc_updateToolState]: Function called with arguments: %1',_this];
#endif

local _toolType = _this select 0;
local _initialStateChance = _this select 1;

local _enabled = false;
local _stateProperty = '';
local _toolStates = [];
local _stateMessage = '';

switch (_toolType) do {
	case 'knives': {
		_enabled = DZE_knifeDulling;
		_stateProperty = 'DZE_sharpnessRemaining';
		_toolStates = DZE_Knives;
		_stateMessage = 'STR_INFO_TOOL_KNIFE_BLUNT';
	};
	case 'matches': {
		_enabled = DZE_matchboxCount;
		_stateProperty = 'DZE_qtyRemaining';
		_toolStates = DZE_Matchboxes;
		_stateMessage = 'STR_INFO_TOOL_MATCHBOX_LIMITED';
	};
};

if (count _toolStates == 0) exitWith {
	diag_log format ['[Client Debug]: [DZE_fnc_updateToolState]: Error: Unsupported tool type: %1',_toolType];

	false
};

local _baseClass = _toolStates select 0;
local _terminalClass = getText (configFile >> 'CfgWeapons' >> (_toolStates select (count _toolStates - 1)) >> _stateProperty);
local _weapons = weapons player;
local _ownsCurrent = false;
local _currentClass = '';
local _nextClass = '';

// Prefer the most-used carried state unless this use creates the terminal state.
{
	_currentClass = _x;
	_ownsCurrent = _currentClass in _weapons;

	if (_ownsCurrent && !_enabled) exitWith {};
	if (_ownsCurrent) then {
		_nextClass = getText (configFile >> 'CfgWeapons' >> _currentClass >> _stateProperty);
	};

	if (_ownsCurrent && _nextClass != _currentClass && (!(_nextClass in _weapons) || _nextClass == _terminalClass)) exitWith {
		if (_currentClass != _baseClass || {[_initialStateChance] call fn_chance}) then {
			player removeWeapon _currentClass;

			if (_nextClass in _weapons) then {
				[_nextClass,2,1] call fn_dropItem;
				format [localize 'str_actions_noroom',getText (configFile >> 'CfgWeapons' >> _nextClass >> 'displayName')] call DZE_fnc_rollingMessages;
			} else {
				player addWeapon _nextClass;
			};

			if (_currentClass == _baseClass) then {
				localize _stateMessage call DZE_fnc_rollingMessages;
			};

			#ifdef DEBUG_DZE_FNC_UPDATE_TOOL_STATE
				diag_log format ['[Client Debug]: [DZE_fnc_updateToolState]: Tool state updated: %1 -> %2',_currentClass,_nextClass];
			#endif
		};
	};
} forEach _toolStates;

_ownsCurrent
