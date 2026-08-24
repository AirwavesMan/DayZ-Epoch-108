///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vehicleCenterWorld
//
//	Description:	Returns the vehicle's model center in PositionASL.
//	Groups:		Positions
//
//	Syntax:		[object, rotationMatrix] call DZE_fnc_vehicleCenterWorld
//
//	Parameters:	object: vehicle
//			rotationMatrix: Matrix - (optional)
//
//	Return Value:	Array format PositionASL
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

/// **** TODO **** currently broken

local _object	= p0;

local _posASL	= getPosASL _object;
local _bc	= boundingCenter _object;

if (str _bc != str ORIGIN) then {

	local _base	= [0,0,-(getZ(_bc))];
	local _p2	= AGLToASL(posAGL(_object, _base));
	local _height	= (_posASL select 2) - (_p2 select 2);

	_posASL = v3Add(_p2, v3Multiply(vectorUp _object, _height));
};

_posASL
