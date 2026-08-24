///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorRotate2D
//
//	Description:	Rotates the build helper around the parent-relative or world Z axis while
//			preserving its existing pitch, bank and terrain orientation.
//	Groups:		Build, Vector Building
//
//	Syntax:		[object, delta, attached, parent] call DZE_fnc_vectorRotate2D
//
//	Parameters:	object: Object - Build helper to rotate
//			delta: Number - Relative rotation in degrees
//			attached: Boolean - Whether the helper is attached to a parent
//			parent: Object - Attachment parent
//
//	Return Value:	Number - Resulting world direction
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_VECTOR_ROTATE_2D

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_VECTOR_ROTATE_2D
	diag_log format ['[Client Debug]: [DZE_fnc_vectorRotate2D]: Function called with argumentes: %1',_this];
#endif

local _object = p0;
local _delta = p1;
local _attached = param(2, false);
local _parent = param(3, objNull);

BUILD_dir2D = BUILD_dir2D + _delta;

local _rotation = -_delta;

// Attached objects require both world vectors to be transformed into the parent's complete local basis.
local _vectorDirAndUp = if (_attached && {!isNull _parent}) then {
	vectorDirAndUpRelative(_object,_parent)
} else {
	[vectorDir _object, vectorUp _object]
};

// Rotate both vectors around the applicable local or world Z axis without changing pitch or bank.
_vectorDirAndUp = [
	rotateVector2D(_vectorDirAndUp select 0, _rotation),
	rotateVector2D(_vectorDirAndUp select 1, _rotation)
];
_object setVectorDirAndUp _vectorDirAndUp;

local _direction = getDir _object;

#ifdef DEBUG_DZE_FNC_VECTOR_ROTATE_2D
	diag_log format ['[Client Debug]: [DZE_fnc_vectorRotate2D]: Rotation applied | Delta: %1 | Rotation: %2 | Direction: %3 | Attached: %4 | Parent: %5 | VectorDirAndUp: %6',_delta,BUILD_dir2D,_direction,_attached,_parent,_vectorDirAndUp];
#endif

_direction
