///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getRotationMatrix
//
//	Description:	Returns the object's world orientation as an [x,y,z] rotation matrix.
//	Groups:		Vectors
//
//	Syntax:		object call DZE_fnc_getRotationMatrix
//
//	Return Value:	Matrix
//
//	Example:	_building call DZE_fnc_getRotationMatrix; // returns [[1,0,0],[0,1,0],[0,0,1]]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _vz = vectorNormalized(vectorUp _this);
local _vy = vectorNormalized(vectorDir _this);
local _vx = vectorCrossProduct(_vy, _vz);

[_vx, _vy, _vz]
