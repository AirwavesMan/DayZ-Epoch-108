///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_randomRange
//
//	Description:	Returns a random integer between the supplied min/max range.
//	Groups:		Numbers
//
//	Syntax:		[min, max] call DZE_fnc_randomRange
//
//	Return Value:	Number
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _min = p0;
local _max = p1;

if (_min > _max) then {

	local _tmp	= _min;
	_min		= _max;
	_max		= _tmp;
};

_min + floor random abs (_max - _min + 1)
