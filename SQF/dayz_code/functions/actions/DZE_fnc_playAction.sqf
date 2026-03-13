///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_playAction
//
//	Description:	Plays the specified action and returns whether the animation finished.
//	Groups:		Actions
//
//	Syntax:		[action, code, duration] call DZE_fnc_playAction
//
//	Parameters:	action: String
//			code: Code
//			duration: Number - (Optional, default 0) stop playing after this number of seconds has elapsed. 0 = play full animation.
//
//	Return Value:	Boolean - true if successful, false if the animation was interrupted
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

/// **** TODO **** currently only works as part of the new playerAction feature which resets the animation after this script completes
/// some animations cannot be interrupted using this method, e.g. ReloadMagazine

local _action	= p0;
local _code	= p1;
local _duration	= param(2,0);

r_interrupt	= false;

player playActionNow _action;

if (_duration > 0) then {

	local _t = time;

	while {!r_interrupt && {time - _t < _duration}} do {	// no need to check code, only elapsed time
		uiSleep 0.02;
	};

	player switchAction 'Stop';

} else {

	while {!r_interrupt && {!call _code}} do {		// wait until action is complete or interrupted
		uiSleep 0.1;
	};
};

if (r_interrupt) then {

	[objNull, player, rSwitchMove, ''] call RE;
	player playActionNow 'Stop';
};

!r_interrupt
