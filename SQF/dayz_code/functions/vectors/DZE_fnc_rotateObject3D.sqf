///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_rotateObject3D
//
//	Description:	Rotates an object around its local axes specified by pitch, roll, and yaw angles in degrees.
//	Groups:		Vectors
//
//	Syntax:		[object, [pitch, roll, yaw], rotationMatrix] call DZE_fnc_rotateObject3D
//
//	Parameters:	object: Object - the object to rotate
//			pitch/roll/yaw: Number - angle in degrees
//			rotationMatrix: Matrix - (Optional, default is rotationMatrix of supplied object)
//
//			If a rotationMatrix is supplied, the rotation is made relative to it. This is useful for
//			rotating attached objects, or switching between relative and absolute rotation modes.
//
//	Return Value:	vectorDirAndUp
//
//	Called by:	Client
//
//	Note:		Roll angle of rotation overrides trigonometric convention to suit current DZR project.
//			**** ROLL ANGLE OVERRIDE TEMPORARILY DISABLED **** is now conventional
//			When base building, pass the helper object, not the object itself.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _object	= p0;
local _quat	= p1 call DZE_fnc_matrixFromEuler;
local _matrix	= param(2, getRotationMatrix(_object));

///local _vdu	= apply(v2(0,1), {matrixMultiply3D(_quat select _x, _matrix)});
local _vdu =
[
	matrixMultiply3D(_quat select 0, _matrix),	// dir
	matrixMultiply3D(_quat select 1, _matrix)	// up
];

_object setVectorDirAndUp _vdu;

_vdu
