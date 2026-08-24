///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_zombieLoiter
//
//	Description:	?
//	Groups:		Zombies
//
//	Syntax:		[] call DZE_fnc_zombieLoiter
//
//	Return Value:	Array format PositionATL
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _unit	= p0;
local _posAGL	= p1;
local _pos	= [];

if (count _this > 2) then {
	_pos = p2;
} else {
///	_pos = [_originalPos,10,(10 - (random (90 * 2))),0] call fn_selectRandomLocation;	// these params make no sense
	_pos = [_posAGL, 10, 10 - (random (90 * 2)), 0] call DZE_fnc_selectRandomLocation;
};

_pos
