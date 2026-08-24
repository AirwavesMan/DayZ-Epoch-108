///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_rotateObject2D
//
//	Description:	Rotates an object around its world Z axis specified by angles in degrees.
//	Groups:		Vectors
//
//	Syntax:		[object, angle] call DZE_fnc_rotateObject2D
//
//	Return Value:	vectorDirAndUp
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _object	= p0;
local _angle	= p1;
local _vdu	= apply(getVectorDirAndUp(_object), {rotateVector2D(_x, _angle)});

_object setVectorDirAndUp _vdu;

_vdu
