///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorDistance
//
//	Description:	Returns Euclidean distance between two 3D points.
//	Groups:		Vectors
//
//	Syntax:		[vector1, vector2] call DZE_fnc_vectorDistance
//
//	Parameters:	vector1: Object or Array format Position3D
//			vector2: Object or Array format Position3D
//
//	Return Value:	Number
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _v1	= p0;
local _v2	= p1;

ifType(_v1, 'OBJECT', getPosASL);	// note that this is not getPosWorld
ifType(_v2, 'OBJECT', getPosASL);

vectorMagnitude(v3Diff(_v1, _v2))
