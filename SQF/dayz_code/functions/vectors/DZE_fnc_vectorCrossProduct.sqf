///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorCrossProduct
//
//	Description:	Returns the cross product of two 3D vectors.
//	Groups:		Vectors
//
//	Syntax:		[vector1, vector2] call DZE_fnc_vectorCrossProduct
//
//	Return Value:	Array
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _v1 = p0;
local _v2 = p1;
local _x1 = _v1 select 0;
local _y1 = _v1 select 1;
local _z1 = _v1 select 2;
local _x2 = _v2 select 0;
local _y2 = _v2 select 1;
local _z2 = _v2 select 2;

[_y1 * _z2 - _z1 * _y2, _z1 * _x2 - _x1 * _z2, _x1 * _y2 - _y1 * _x2]
