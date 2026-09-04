///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorRotate3D
//
//	Description:	Applies a relative rotation around one local axis to the build helper and
//			converts its world orientation to the coordinate system of its attachment parent.
//	Groups:		Build, Vector Building
//
//	Syntax:		[object, axis, delta, attached, parent] call DZE_fnc_vectorRotate3D
//
//	Parameters:	object: Object - Build helper to rotate
//			axis: Number - Local axis index
//			delta: Number - Relative rotation in degrees
//			attached: Boolean - Whether the helper is attached to a parent
//			parent: Object - Attachment parent
//
//	Return Value:	Array - Resulting vectorDirAndUp
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_VECTOR_ROTATE_3D

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_VECTOR_ROTATE_3D
	diag_log format ['[Client Debug]: [DZE_fnc_vectorRotate3D]: Function called with arguments: %1',_this];
#endif

local _object = p0;
local _axis = p1;
local _delta = p2;
local _attached = p3;
local _parent = p4;

local _rotation = ORIGIN;
_rotation set [_axis, _delta];

local _vectorDirAndUp = if (_attached) then {
	// setVectorDirAndUp expects parent-relative vectors while the object is attached.
	local _relativeVectorDirAndUp = vectorDirAndUpRelative(_object,_parent);
	[_object,_rotation,[
		vectorCrossProduct(_relativeVectorDirAndUp select 0,_relativeVectorDirAndUp select 1),
		_relativeVectorDirAndUp select 0,
		_relativeVectorDirAndUp select 1
	]] call DZE_fnc_rotateObject3D
} else {
	[_object, _rotation] call DZE_fnc_rotateObject3D
};

#ifdef DEBUG_DZE_FNC_VECTOR_ROTATE_3D
	diag_log format ['[Client Debug]: [DZE_fnc_vectorRotate3D]: Rotation applied | Axis: %1 | Delta: %2 | Attached: %3 | VectorDirAndUp: %4',_axis,_delta,_attached,_vectorDirAndUp];
#endif

_vectorDirAndUp
