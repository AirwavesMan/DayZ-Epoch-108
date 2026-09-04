///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorChangeDegree
//
//	Description:	Selects the adjacent vector-building rotation increment.
//	Groups:		Build, Vector Building
//
//	Syntax:		[direction] call DZE_fnc_vectorChangeDegree
//
//	Parameters:	direction: Number - Offset from the current degree-list index
//
//	Return Value:	Number - Selected rotation increment
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_VECTOR_CHANGE_DEGREE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_VECTOR_CHANGE_DEGREE
	diag_log format ['[Client Debug]: [DZE_fnc_vectorChangeDegree]: Function called with arguments: %1',_this];
#endif

local _direction = p0;

local _degreeCount = count BUILD_DEGREES;

BUILD_CUR_DEGREE = BUILD_DEGREES select (((BUILD_DEGREES find BUILD_CUR_DEGREE) + _direction + _degreeCount) % _degreeCount);

#ifdef DEBUG_DZE_FNC_VECTOR_CHANGE_DEGREE
	diag_log format ['[Client Debug]: [DZE_fnc_vectorChangeDegree]: Rotation increment changed | Direction: %1 | Selected degree: %2',_direction,BUILD_CUR_DEGREE];
#endif

degreeActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
[1,1] call DZE_fnc_vectorDegreeActionCleanup;

BUILD_CUR_DEGREE
