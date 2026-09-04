///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationRoad
//
//	Description:	Prevents the final bounding box of a buildable from overlapping a road.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationRoad
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_ROAD

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_ROAD
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationRoad]: Function called with arguments: %1',_this];
#endif

if (DZE_BuildOnRoads) exitWith {''};

local _object = _this select BUILD_VALIDATION_OBJECT;
local _roadRadius = 1 max ceil (boundingBoxDiagonal(_object));	// Every projected corner must lie inside the road search area.

if ([_object,_roadRadius] call DZE_fnc_overlapsRoad) exitWith {
	localize 'STR_BUILD_VALIDATION_ROAD'
};

''
