///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_matrixFromEuler
//
//	Description:	Convert Euler rotation vector to vectorDirAndUp matrix using the quaternion method.
//	Groups:		Vectors
//
//	Syntax:		[pitch, roll, yaw] call DZE_fnc_matrixFromEuler
//
//	Return Value:	Matrix - vectorDirAndUp
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _rx =  (p0) * 0.5;
///local _ry = -(p1) * 0.5;
local _ry =  (p1) * 0.5;
local _rz =  (p2) * 0.5;

local _cx = cos _rx;
local _sx = sin _rx;
local _cy = cos _ry;
local _sy = sin _ry;
local _cz = cos _rz;
local _sz = sin _rz;

local _vw = _cx * _cy * _cz + _sx * _sy * _sz;
local _vx = _sx * _cy * _cz - _cx * _sy * _sz;
local _vy = _cx * _sy * _cz + _sx * _cy * _sz;
local _vz = _cx * _cy * _sz - _sx * _sy * _cz;

[
///	[1 - 2 * (_vy * _vy + _vz * _vz), 2 * (_vx * _vy - _vw * _vz), 2 * (_vx * _vz + _vw * _vy)],
	[2 * (_vx * _vy + _vw * _vz), 1 - 2 * (_vx * _vx + _vz * _vz), 2 * (_vy * _vz - _vw * _vx)],
	[2 * (_vx * _vz - _vw * _vy), 2 * (_vy * _vz + _vw * _vx), 1 - 2 * (_vx * _vx + _vy * _vy)]
]
