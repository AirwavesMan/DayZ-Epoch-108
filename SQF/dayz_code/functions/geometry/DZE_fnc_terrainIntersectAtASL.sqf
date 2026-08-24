///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_terrainIntersectAtASL
//
//	Description:	Checks for intersection of terrain between two ASL positions.
//	Groups:		Geometry
//
//	Syntax:		[start, end, includeSeaLevel] call DZE_fnc_terrainIntersectAtASL
//
//	Parameters:	start: Array format PositionASL
//			end: Array format PositionASL
//			includeSeaLevel: Boolean - (Optional, default true) false to ignore sea level
//
//	Return Value:	Array format PositionASL (or [] if no intersection)
//
//	Called by:	Client
//
//	Note:		Near-vertical vectors work best over any distance.  For near-horizontal
//			vectors, much shorter distances may be required. **** TODO ****
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_TERRAIN_INTERSECT_AT_ASL

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_TERRAIN_INTERSECT_AT_ASL
	diag_log format['[Client Debug]: [DZE_fnc_terrainIntersectAtASL]: Function called with argumentes: %1',_this];
#endif

/// **** TODO **** allow for near-horizontal vectors that break up large distances to avoid skipping over peak terrain.
/// try terrainIntersectASL/getTerrainHeightASL with bi-directional scanning.
/// surfaceNormal
/// for base building manipulation, it shouldn't be a problem.

local _v1	= +(p0);
local _v2	= +(p1);
local _include	= param(2, true);

local _len	= 0;		// line length in mm
local _max	= 0;		// max loops
local _cnt	= 0;		// loop counter
local _m	= 0;		// midpoint terrain height
local _v	= 0;		// vector terrain height
local _e	= 0.001;	// epsilon precision (1mm)
local _mp	= [];		// midpoint ASL
local _NONE	= [];
local _found	= true;

local _fnc_getMidpoint = {

	_mp = [
		((_v1 select 0) + (_v2 select 0)) * 0.5,
		((_v1 select 1) + (_v2 select 1)) * 0.5,
		((_v1 select 2) + (_v2 select 2)) * 0.5
	];
	_cnt	= _cnt + 1;
};

local _fnc_getSurfaceHeight = {

	call _fnc_getMidpoint;

	_m = (ASLToATL _mp) select 2;
	_v = (ASLToATL _v1) select 2;
};

local _fnc_getCoastalHeight = {

	call _fnc_getMidpoint;

	if (isTerrain(_mp)) then {_m = (ASLToATL _mp) select 2} else {_m = _mp select 2};
	if (isTerrain(_v1)) then {_v = (ASLToATL _v1) select 2} else {_v = _v1 select 2};
};

local _fnc_getIntersect = {

	_len = ([_v1,_v2] call DZE_fnc_vectorDistance) * 1000;
	_max = 1;
	if (_len > 1) then {_max = floor ((ln _len) / (ln 2)) + 1};

	call _fnc_getSurfaceHeight;

	while {abs _m > _e} do {					// is wide

		if (_cnt == _max) exitWith {_found = false};		// no terrain/sea intersect

		if (_m * _v > 0) then {_v1 = +_mp} else {_v2 = +_mp};	// both points (midpoint and v1) are either above or below the terrain/sea

		call _fnc_getSurfaceHeight;
	};
};

local _fnc_water = {

	local _z1	= _v1 select 2;
	local _z2	= _v2 select 2;

	if (_z1 * _z2 < 0) exitWith {	// points are above and below sea level

		local _x1	= _v1 select 0;
		local _y1	= _v1 select 1;
		local _x2	= _v2 select 0;
		local _y2	= _v2 select 1;

		local _t	= -_z1 / (_z2 - _z1);
		local _vx	= _x1 + _t * (_x2 - _x1);
		local _vy	= _y1 + _t * (_y2 - _y1);

		[_vx, _vy, 0]
	};

	_NONE
};

local _fnc_terrain = {

	call _fnc_getIntersect;

	if (_found) exitWith {[_mp select 0, _mp select 1, getTerrainHeightASL _mp]};

	_NONE
};

local _fnc_coastal = {

	call _fnc_getIntersect;

	if (_found) exitWith {

		if (isTerrain(_mp)) then {

			[_mp select 0, _mp select 1, getTerrainHeightASL _mp];

		} else {

			_v1	= +(p0);
			_v2	= +(p1);

			call _fnc_water;
		};
	};

	_NONE
};

///////////////////////////////////////////////////////////////////////////////////////////////////

if (!_include || {(isTerrain(_v1) && {isTerrain(_v2)})}) exitWith {call _fnc_terrain};	// terrain only

if (isWater(_v1) && {isWater(_v2)}) exitWith {call _fnc_water};				// water only

_fnc_getSurfaceHeight = _fnc_getCoastalHeight; call _fnc_coastal;			// coastal threshold
