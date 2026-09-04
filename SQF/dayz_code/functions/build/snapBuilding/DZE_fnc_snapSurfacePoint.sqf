///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapSurfacePoint
//
//	Description:	Finds the first collision-geometry entry point along a model-space line.
//			Arma 2 returns intersected objects without hit positions, so a bounded binary
//			search resolves the local surface position. The supplied fallback remains valid
//			for models without collision geometry and for underwater objects.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, localStart, localEnd, fallbackPosition] call DZE_fnc_snapSurfacePoint
//
//	Parameters:	object: Object - Object whose collision geometry is searched
//			localStart: Array - Model-space ray start
//			localEnd: Array - Model-space ray end
//			fallbackPosition: Array - Position returned when no surface is found
//
//	Return Value:	Array - Model-space surface or fallback position
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_SURFACE_POINT

#define SNAP_SURFACE_SEARCH_ITERATIONS 10

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_SURFACE_POINT
	diag_log format ['[Client Debug]: [DZE_fnc_snapSurfacePoint]: Function called with arguments: %1',_this];
#endif

local _object = p0;
local _localStart = p1;
local _localEnd = p2;
local _fallbackPosition = p3;
local _surfacePosition = _fallbackPosition;

local _startASL = (_object modelToWorld _localStart) call DZE_fnc_AGLToASL;
local _endASL = (_object modelToWorld _localEnd) call DZE_fnc_AGLToASL;

local _hits = lineIntersectsWith [_startASL,_endASL,objNull,objNull,false];
if !(_object in _hits) exitWith {_surfacePosition};

local _worldDelta = [_endASL,_startASL] call DZE_fnc_vectorDiff;
local _localDelta = [_localEnd,_localStart] call DZE_fnc_vectorDiff;
local _midASL = [];
local _low = 0;
local _high = 1;
local _mid = 0;
local _iteration = 0;

for '_iteration' from 1 to SNAP_SURFACE_SEARCH_ITERATIONS do {
	_mid = (_low + _high) * 0.5;
	_midASL = [_startASL,[_worldDelta,_mid] call DZE_fnc_vectorMultiply] call DZE_fnc_vectorAdd;
	_hits = lineIntersectsWith [_startASL,_midASL,objNull,objNull,false];

	if (_object in _hits) then {
		_high = _mid;
	} else {
		_low = _mid;
	};
};

_surfacePosition = [_localStart,[_localDelta,_high] call DZE_fnc_vectorMultiply] call DZE_fnc_vectorAdd;

#ifdef DEBUG_DZE_FNC_SNAP_SURFACE_POINT
	diag_log format ['[Client Debug]: [DZE_fnc_snapSurfacePoint]: Collision surface resolved | Object: %1 | Start/End: %2/%3 | Factor: %4 | Position: %5',_object,_localStart,_localEnd,_high,_surfacePosition];
#endif

_surfacePosition
