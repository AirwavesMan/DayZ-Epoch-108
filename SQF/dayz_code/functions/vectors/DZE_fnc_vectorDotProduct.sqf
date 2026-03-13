///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorDotProduct
//
//	Description:	Returns the dot product of two 3D vectors.
//	Groups:		Vectors
//
//	Syntax:		[vector1, vector2] call DZE_fnc_vectorDotProduct
//
//	Return Value:	Number
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _v1 = p0;
local _v2 = p1;

(_v1 select 0) * (_v2 select 0) + (_v1 select 1) * (_v2 select 1) + (_v1 select 2) * (_v2 select 2)
