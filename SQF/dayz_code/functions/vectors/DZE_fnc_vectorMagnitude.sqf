///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorMagnitude
//
//	Description:	Returns the magnitude of a 3D vector.
//	Groups:		Vectors
//
//	Syntax:		vector call DZE_fnc_vectorMagnitude
//
//	Example:	[0,3,4] call DZE_fnc_vectorMagnitude; // returns 5
//
//	Return Value:	Number
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

sqrt ((p0) ^ 2 + (p1) ^ 2 + (p2) ^ 2)
