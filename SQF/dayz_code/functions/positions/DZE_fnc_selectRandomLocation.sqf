///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_selectRandomLocation
//
//	Description:	-
//	Groups:		Positions
//
//	Syntax:		[] call DZE_fnc_selectRandomLocation
//
//	Return Value:	?
//
//	Called by:	Client / Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _posAGL			= p0;
local _minDistance		= p1;
local _maxDistance		= p2;
local _minObjectDistance	= p3;

local _X = getX(_posAGL);
local _Y = getY(_posAGL);
local _Z = getZ(_posAGL);

local _index	= 0;
local _PosX	= 0;
local _PosY	= 0;
local _PosZ	= 0;
local _location	= [];
local _isFlat	= [];

while {_index < 50} do {

	_PosX		= _X + (_maxDistance - random (_maxDistance * 2));
	_PosY		= _Y + (_maxDistance - random (_maxDistance * 2));
	_location	= [_PosX, _PosY, _PosZ];

	_isFlat = _location isFlatEmpty [
		_minObjectDistance,	//--- Minimal distance from another object
		0,			//--- If 0, just check position. If >0, select new one
		0.7,			//--- Max gradient
		5,			//--- Gradient area
		-1,			//--- 0 for restricted water, 2 for required water,
		false,			//--- True if some water can be in 25m radius
		objNull			//--- Ignored object
	];

	if (count _isFlat > 1) then {_index = 50};

	_index = _index + 1;
};
/// **** TODO **** requires an ATL result
_location
