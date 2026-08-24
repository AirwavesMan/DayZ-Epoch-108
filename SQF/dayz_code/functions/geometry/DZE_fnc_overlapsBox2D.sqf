///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_overlapsBox2D
//
//	Description:	Returns true when two projected bounding boxes overlap using the separating
//			axis theorem (SAT).
//	Groups:		Geometry
//
//	Syntax:		[projectedBoxA, projectedBoxB] call DZE_fnc_overlapsBox2D
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#define DEBUG_DZE_FNC_OVERLAPSBOX2D

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_OVERLAPSBOX2D
	diag_log format ['[Client Debug]: [DZE_fnc_overlapsBox2D]: Function called with argumentes: %1',_this];
#endif

local _boxA	= p0;
local _boxB	= p1;
local _polyA	= _boxA select 0;
local _polyB	= _boxB select 0;
local _axes	= (_boxA select 1) + (_boxB select 1);

if (count _polyA == 0 || {count _polyB == 0 || {count _axes == 0}}) exitWith {
	#ifdef DEBUG_DZE_FNC_OVERLAPSBOX2D
		diag_log format ['[Client Debug]: [DZE_fnc_overlapsBox2D]: Result: false | Reason: Invalid projected box | Box A: %1 | Box B: %2',_boxA,_boxB];
	#endif

	false
};

local _axis	= [];
local _eps	= 1e10;
local _minA	= 0;
local _maxA	= 0;
local _minB	= 0;
local _maxB	= 0;
local _dot	= 0;
local _overlap	= true;

// Project both boxes onto every axis. One separated interval proves that they do not overlap.
{
	_axis = _x;
	_minA = _eps;
	_maxA = -_eps;

	{
		_dot = v2DotProduct(_x, _axis);
		if (_dot < _minA) then {_minA = _dot};
		if (_dot > _maxA) then {_maxA = _dot};
	} forEach _polyA;

	_minB = _eps;
	_maxB = -_eps;

	{
		_dot = v2DotProduct(_x, _axis);
		if (_dot < _minB) then {_minB = _dot};
		if (_dot > _maxB) then {_maxB = _dot};
	} forEach _polyB;

	if (_maxA < _minB || {_maxB < _minA}) exitWith {_overlap = false};
} forEach _axes;

#ifdef DEBUG_DZE_FNC_OVERLAPSBOX2D
	diag_log format ['[Client Debug]: [DZE_fnc_overlapsBox2D]: Result: %1 | Axis candidates: %2',_overlap,count _axes];
#endif

_overlap
