///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_setPosWorld
//
//	Description:	Sets position of an object based on the model's center position.
//	Groups:		Positions
//
//	Syntax:		[object, position] call DZE_fnc_setPosWorld
//
//	Parameters:	object: Object
//			position: Array format PositionASL
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
//	Note:		Prior to calling this function, objects should have their vectorDirAndUp values
//			either exactly aligned to the world axis, or be orthogonal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _object	= p0;
local _posASL	= p1;
local _mz	= getZ(boundingCenter _object);

if (_mz != 0) then {_posASL = v3Diff(_posASL, v3Multiply(vectorUp _object, _mz))};

_object setPosASL _posASL;
