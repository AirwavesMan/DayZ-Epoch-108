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
	diag_log format ['[Client Debug]: [DZE_fnc_vectorRotate3D]: Function called with argumentes: %1',_this];
#endif

local _object = p0;
local _axis = p1;
local _delta = p2;
local _attached = param(3, false);
local _parent = param(4, objNull);

BUILD_dir3D set [_axis, ((BUILD_dir3D select _axis) + _delta) % 360];

local _rotation = ORIGIN;
_rotation set [_axis, _delta];

local _vectorDirAndUp = if (_attached && {!isNull _parent}) then {
	local _parentMatrix = getRotationMatrix(_parent);
	local _vectorDir = vectorDir _object;
	local _vectorUp = vectorUp _object;

	// setVectorDirAndUp expects parent-relative vectors while the object is attached.
	_vectorDir = [
		vectorDotProduct(_vectorDir, _parentMatrix select 0),
		vectorDotProduct(_vectorDir, _parentMatrix select 1),
		vectorDotProduct(_vectorDir, _parentMatrix select 2)
	];
	_vectorDir = vectorNormalized(_vectorDir);
	_vectorUp = [
		vectorDotProduct(_vectorUp, _parentMatrix select 0),
		vectorDotProduct(_vectorUp, _parentMatrix select 1),
		vectorDotProduct(_vectorUp, _parentMatrix select 2)
	];
	_vectorUp = vectorNormalized(_vectorUp);

	local _vectorRight = vectorCrossProduct(_vectorDir, _vectorUp);
	local _rotationMatrix = [_vectorRight, _vectorDir, _vectorUp];
	[_object, _rotation, _rotationMatrix] call DZE_fnc_rotateObject3D
} else {
	[_object, _rotation] call DZE_fnc_rotateObject3D
};

#ifdef DEBUG_DZE_FNC_VECTOR_ROTATE_3D
	diag_log format ['[Client Debug]: [DZE_fnc_vectorRotate3D]: Rotation applied | Axis: %1 | Delta: %2 | Rotation: %3 | Attached: %4 | VectorDirAndUp: %5',_axis,_delta,BUILD_dir3D,_attached,_vectorDirAndUp];
#endif

_vectorDirAndUp
