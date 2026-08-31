///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_removeAnimation
//
//	Description:	Runs removal animations and determines whether all stages completed.
//	Groups:		Build
//
//	Syntax:		[object,displayName,steps,isTent] call DZE_fnc_removeAnimation
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
//#define DEBUG_DZE_FNC_REMOVE_ANIMATION

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_REMOVE_ANIMATION
	diag_log format ['[Client Debug]: [DZE_fnc_removeAnimation]: Function called with arguments: %1',_this];
#endif

local _object = param(0,objNull);
local _displayName = param(1,'');
local _steps = param(2,0);
local _isTent = param(3,false);

if (isNull _object) exitWith {false};

local _completed = true;
local _stage = 0;
local _sound = ['tentpack','repair'] select !_isTent;

for '_stage' from 1 to _steps do {
	// A removed or no longer synchronized object cancels the action.
	if (isNull _object) exitWith {_completed = false};

	format [localize 'STR_BUILD_REMOVE_PROGRESS',_displayName,_stage,_steps] call DZE_fnc_rollingMessages;	// Walk away at any time to cancel.

	[player,getPosATL player,25,_sound] spawn fnc_alertZombies;

	if !(['Medic',1] call fn_loopAction) exitWith {_completed = false};
};

#ifdef DEBUG_DZE_FNC_REMOVE_ANIMATION
	diag_log format ['[Client Debug]: [DZE_fnc_removeAnimation]: Completed: %1 | Stage: %2/%3',_completed,_stage,_steps];
#endif

_completed
