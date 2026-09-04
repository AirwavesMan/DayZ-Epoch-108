///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_overlapsRoad
//
//	Description:	Returns true if an object's boundingBox overlaps a road segment located within the radius provided.
//	Groups:		Build
//
///	Syntax:		[object, roadPos2D, roadDir, width, length] call DZE_fnc_overlapsRoad
//	Syntax:		[object, radius] call DZE_fnc_overlapsRoad
//
//	Parameters:	object: Object - Build preview to test
//			radius: Number - Nearby-road search radius in meters
//
//	Return Value:	Boolean (true if overlap)
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_OVERLAPS_ROAD
#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_OVERLAPS_ROAD
	diag_log format ['[Client Debug]: [DZE_fnc_overlapsRoad]: Function called with arguments: %1',_this];
#endif

local _obj	= p0;
local _radius	= p1;
/**
local _obj	= p0;
local _center	= p1;	[x,y]
local _dir	= p2;
local _wid	= p3;
local _len	= p4;
**/

local _roads = _obj nearRoads _radius;

#ifdef DEBUG_DZE_FNC_OVERLAPS_ROAD
	diag_log format ['[Client Debug]: [DZE_fnc_overlapsRoad]: Road search | Object type: %1 | Position: %2 | Radius: %3 | Candidates: %4',typeOf _obj,getPosASL _obj,_radius,count _roads];
#endif

if (count _roads == 0) exitWith {
	#ifdef DEBUG_DZE_FNC_OVERLAPS_ROAD
		diag_log format ['[Client Debug]: [DZE_fnc_overlapsRoad]: Result: false | Reason: No roads found | Object type: %1 | Radius: %2',typeOf _obj,_radius];
	#endif

	false
};

// Project the buildable once and reuse its geometry for every road candidate.
local _boxA		= _obj call DZE_fnc_projectBox2D;
local _overlap		= false;

// Project each nearby road and compare both boxes using SAT.
{
	_overlap = [_boxA,(_x call DZE_fnc_projectBox2D)] call DZE_fnc_overlapsBox2D;

	#ifdef DEBUG_DZE_FNC_OVERLAPS_ROAD
		diag_log format ['[Client Debug]: [DZE_fnc_overlapsRoad]: Road test | Road: %1 | Position: %2 | Overlap: %3',_x,getPosASL _x,_overlap];
	#endif

	if (_overlap) exitWith {};
} forEach _roads;

#ifdef DEBUG_DZE_FNC_OVERLAPS_ROAD
	diag_log format ['[Client Debug]: [DZE_fnc_overlapsRoad]: Result: %1 | Object type: %2 | Radius: %3 | Road candidates: %4',_overlap,typeOf _obj,_radius,count _roads];
#endif

_overlap
