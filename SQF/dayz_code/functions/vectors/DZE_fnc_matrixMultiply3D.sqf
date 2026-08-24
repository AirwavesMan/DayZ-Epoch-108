///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_matrixMultiply3D
//
//	Description:	Returns resulting matrix from the multiplication of a 3D vector and a matrix.
//	Groups:		Vectors
//
//	Syntax:		[vector, matrix] call DZE_fnc_matrixMultiply3D
//
//	Return Value:	Matrix
//
//	Called by:	Client
//
//	Notes:		This is primarily for use with computing the product of a position relative
//			offset with an object's rotation matrix.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _v = p0;
local _m = p1;
local _r = v3Multiply(_m select 0, _v select 0);

for '_i' from 1 to 2 do {_r = v3Add(_r, v3Multiply(_m select _i, _v select _i))};

_r
