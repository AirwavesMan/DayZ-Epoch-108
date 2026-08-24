///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapPointsCompatible
//
//	Description:	Returns whether two live snap helpers expose the data required for a connection.
//			Point types and normals guide orientation but never restrict object compatibility.
//	Groups:		Build, Snap Building
//
//	Syntax:		[heldSnapPoint, nearbySnapPoint] call DZE_fnc_snapPointsCompatible
//
//	Parameters:	heldSnapPoint: Object - Held-object snap helper
//			nearbySnapPoint: Object - Nearby snap helper
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_POINTS_COMPATIBLE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_COMPATIBLE
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsCompatible]: Function called with argumentes: %1',_this];
#endif

local _heldSnapPoint = p0;
local _nearbySnapPoint = p1;
local _heldData = _heldSnapPoint getVariable ['snappoint',[]];
local _nearbyData = _nearbySnapPoint getVariable ['snappoint',[]];
local _compatible = !isNull _heldSnapPoint &&
	{!isNull _nearbySnapPoint} &&
	{count _heldData >= 4} &&
	{count _nearbyData >= 4};

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_COMPATIBLE
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsCompatible]: Universal compatibility checked | Held data: %1 | Nearby data: %2 | Compatible: %3',count _heldData,count _nearbyData,_compatible];
#endif

_compatible
