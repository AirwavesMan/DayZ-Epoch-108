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
	diag_log format ['[Client Debug]: [DZE_fnc_vectorRotate2D]: Function called with arguments: %1',_this];
#endif

local _object = p0;
local _delta = p1;
local _attached = p2;
local _parent = p3;

local _rotation = -_delta;

// Attached objects require both world vectors to be transformed into the parent's complete local basis.
local _vectorDirAndUp = if (_attached) then {
	vectorDirAndUpRelative(_object,_parent)
} else {
	getVectorDirAndUp(_object)
};

// Rotate both vectors around the applicable local or world Z axis without changing pitch or bank.
_vectorDirAndUp set [0,rotateVector2D(_vectorDirAndUp select 0,_rotation)];
_vectorDirAndUp set [1,rotateVector2D(_vectorDirAndUp select 1,_rotation)];
_object setVectorDirAndUp _vectorDirAndUp;

local _direction = getDir _object;

#ifdef DEBUG_DZE_FNC_VECTOR_ROTATE_2D
	diag_log format ['[Client Debug]: [DZE_fnc_vectorRotate2D]: Rotation applied | Delta: %1 | Direction: %2 | Attached: %3 | Parent: %4 | VectorDirAndUp: %5',_delta,_direction,_attached,_parent,_vectorDirAndUp];
#endif

_direction
