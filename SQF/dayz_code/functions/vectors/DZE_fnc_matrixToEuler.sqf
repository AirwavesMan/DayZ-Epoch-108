///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_matrixToEuler
//
//	Description:	Convert 3x3 rotation matrix to Euler rotation vector.
//	Groups:		Vectors
//
//	Syntax:		matrix call DZE_fnc_matrixToEuler
//
//	Return Value:	Array in format [pitch, roll, yaw]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _rx	= p0;
local _ry	= p1;
local _rz	= p2;

local _m00	= _rx select 0;
local _m01	= _rx select 1;
local _m02	= _rx select 2;	///_m02 = clamp(_rx select 2, -1, 1);

///local _m10	= _ry select 0;
local _m11	= _ry select 1;
local _m12	= _ry select 2;

///local _m20	= _rz select 0;
local _m21	= _rz select 1;
local _m22	= _rz select 2;

local _r	= asin _m02;	// pitch
local _p	= 0;		// roll
local _y	= 0;		// yaw

/// 0.999999	= 89.918971524793486563277500868082
/// 0.99999	= 89.743765270840572792648556323826
/// 0.9999	= 89.18970856293430045892149196969

local _epsilon	= 0.99999; // asin = 89.74

if (abs _m02 < _epsilon) then {

	// normal rotation
	_p = -_m12 atan2 _m22;
	_y = -_m01 atan2 _m00;

} else {

	// gimbal lock
	_p = _m21 atan2 _m11;
///	_y = 0;
};

// clamp to 0–360
_p	= (_p + 360) % 360;
_r	= (_r + 360) % 360;
_y	= (_y + 360) % 360;

[_p, _r, _y]
