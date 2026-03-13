///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_modelCenterWorld
//
//	Description:	Returns the object's model center in PositionASL.
//	Groups:		Positions
//
//	Syntax:		[object, rotationMatrix] call DZE_fnc_modelCenterWorld
//
//	Parameters:	object: Object
//			rotationMatrix: Matrix - (optional)
//
//	Return Value:	Array format PositionASL
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _object	= p0;

local _posASL	= getPosASL _object;
local _bc	= boundingCenter _object;

if (str _bc != str ORIGIN) then {

	local _m = param(1, getRotationMatrix(_object));
	local _z = vectorDotProduct(_bc, matrixTranspose3x3(_m) select 2);

	addZ(_posASL, _z);
};

_posASL
