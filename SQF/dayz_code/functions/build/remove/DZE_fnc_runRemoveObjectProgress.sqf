///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_runRemoveObjectProgress
//
//	Description:	Runs removal animations and determines whether all stages completed.
//	Groups:		Build
//
//	Syntax:		[object,displayName,steps,isTent] call DZE_fnc_runRemoveObjectProgress
//
//	Parameters:	object: Object - Object being removed
//			displayName: String - Localized object name used in progress messages
//			steps: Number - Number of animation stages
//			isTent: Boolean - Whether the removed object uses the tent-packing sound
//
//	Return Value:	Boolean - Whether all removal stages completed
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_RUN_REMOVE_OBJECT_PROGRESS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_RUN_REMOVE_OBJECT_PROGRESS
	diag_log format ['[Client Debug]: [DZE_fnc_runRemoveObjectProgress]: Function called with argumentes: %1',_this];
#endif

local _object = param(0,objNull);
local _displayName = param(1,'');
local _steps = param(2,0);
local _isTent = param(3,false);

if (isNull _object) exitWith {false};

if (_isTent) then {
	[player,getPosATL player,20,'tentpack'] spawn fnc_alertZombies;	// Removing a tent uses the tent-packing sound.
} else {
	[player,50,true,getPosATL player] spawn player_alertZombies;	// Alert zombies once before starting.
};

local _counter = 0;
local _isRunning = _steps > 0;
local _completed = _steps == 0;
local _finished = false;

while {_isRunning} do {
	// A removed or no longer synchronized object cancels the action.
	if (isNull _object) exitWith {
		_isRunning = false;
		_completed = false;
	};

	format [localize 'STR_BUILD_REMOVE_PROGRESS',_displayName,_counter + 1,_steps] call DZE_fnc_rollingMessages;	// Walk away at any time to cancel.
	if (!_isTent) then {
		[player,getPosATL player,25,'repair'] spawn fnc_alertZombies;
	};

	_finished = ['Medic',1] call fn_loopAction;

	if (!_finished) exitWith {
		_isRunning = false;
		_completed = false;
	};

	_counter = _counter + 1;

	if (_counter >= _steps) exitWith {
		_isRunning = false;
		_completed = true;
	};
};

#ifdef DEBUG_DZE_FNC_RUN_REMOVE_OBJECT_PROGRESS
	diag_log format ['[Client Debug]: [DZE_fnc_runRemoveObjectProgress]: Completed: %1 | Stages: %2/%3',_completed,_counter,_steps];
#endif

_completed
