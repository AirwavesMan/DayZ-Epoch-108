///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_rotateVector2D
//
//	Description:	Rotates the vector around the origin by the given angle.
//	Groups:		Vectors
//
//	Syntax:		[vector2D, angle] call DZE_fnc_rotateVector2D
//
//	Return Value:	Array - rotated vector
//
//	Called by:	Client
//
//	Note:		Rotation is done CCW as per trigonometric convention.
//			Negate the rotation angle for compatibility with other Arma commands.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _v = +(p0);
local _d = p1;

local _vx = _v select 0;
local _vy = _v select 1;

_v set [0, _vx * cos _d - _vy * sin _d];
_v set [1, _vx * sin _d + _vy * cos _d];

_v
