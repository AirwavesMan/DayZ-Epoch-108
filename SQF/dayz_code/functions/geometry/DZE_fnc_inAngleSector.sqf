///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_inAngleSector
//
//	Description:	Returns true if a position lies within an angle sector.
//	Groups:		Geometry
//	
//	Syntax:		[source position, direction, sector width, target position] call DZE_fnc_inAngleSector
//
//	Example:	[getPosATL player, getDir player, 30, getPosATL zombie] call DZE_fnc_inAngleSector;	// returns true if zombie is within the sector
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _source	= p0;						// center position
local _width	= p2;						// sector width
local _target	= p3;						// target position

local _px	= (_target select 0) - (_source select 0);	// x relative
local _py	= (_target select 1) - (_source select 1);	// y relative
local _dir	= -(_px atan2 _py) + 360;			// get CCW relative angle from x,y coords
local _relDir	= (_dir + (p1) + _width * 0.5) % 360;		// transpose target direction by source direction plus half angle sector

_relDir <= _width						// is target in angle sector?
