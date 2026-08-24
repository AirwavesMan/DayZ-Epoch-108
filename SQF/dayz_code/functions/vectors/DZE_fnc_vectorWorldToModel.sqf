///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorWorldToModel
//
//	Description:	Converts vector direction from world to model space.
//	Groups:		Vectors
//
//	Syntax:		[object, worldDir] call DZE_fnc_vectorWorldToModel
//
//	Return Value:	Array - vector direction in model space in format [x,y,z]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

matrixMultiply3D(p1, matrixTranspose3x3(getRotationMatrix(p0)))
