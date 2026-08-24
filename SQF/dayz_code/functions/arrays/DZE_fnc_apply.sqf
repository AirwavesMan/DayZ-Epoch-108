///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_apply
//
//	Description:	Applies the given code to each element of the given array (without modifying the original array).
//	Groups:		Arrays
//
//	Syntax:		[array, code] call DZE_fnc_apply
//
//	Return Value:	Array - resulting array
//
//	Called By:	Client
//
//	Note:		The supplied code must be decoupled from its calling function so that operations are applied in context locally.
//			See DZE_fnc_rotateObject2D and DZE_fnc_rotateObject3D for examples of this.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _r = [];

{addArray(_r, call (p1))} count (p0);

_r
