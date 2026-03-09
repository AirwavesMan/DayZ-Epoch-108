///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_v3Divide
//
//	Description:	Divides a 3D vector by a scalar.
//	Groups:		Vectors
//
//	Syntax:		[vector, scalar] call DZE_fnc_v3Divide
//
//	Return Value:	Vector3D
//
//	Called by:	Client
//
//	Note:		If given scalar is 0, result is [0,0,0].
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _v = p0;
local _d = p1;

if (_d == 0) exitWith {ORIGIN};

[(_v select 0) / _d, (_v select 1) / _d, (_v select 2) / _d]
