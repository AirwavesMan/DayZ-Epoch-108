///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_v3Multiply
//
//	Description:	Multiplies a 3D vector by a scalar.
//	Groups:		Vectors
//
//	Syntax:		[vector, scalar] call DZE_fnc_v3Multiply
//
//	Return Value:	Vector3D
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _v = p0;
local _m = p1;

[(_v select 0) * _m, (_v select 1) * _m, (_v select 2) * _m]
