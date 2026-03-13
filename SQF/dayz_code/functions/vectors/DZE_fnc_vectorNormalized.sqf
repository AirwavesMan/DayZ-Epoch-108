///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorNormalized
//
//	Description:	Returns normalized vector (unit vector, vectorMagnitude == 1) of given 3D vector.
//	Groups:		Vectors
//
//	Syntax:		vector call DZE_fnc_vectorNormalized
//
//	Return Value:	Vector3D
//
//	Called by:	Client
//
//	Note:		If given vector is [0,0,0], result is also [0,0,0].
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _m = vectorMagnitude(_this);

if (_m == 0) exitWith {ORIGIN};

[(p0) / _m, (p1) / _m, (p2) / _m]
