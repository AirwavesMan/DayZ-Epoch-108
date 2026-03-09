///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_createBackpack
//
//	Description:	Creates a backpack of the given type and aligns it with either the terrain or a flat surface.
//	Groups:		Objects
//
//	Syntax:		[class, position, direction, up, ASL, reveal] call DZE_fnc_createBackpack
//
//	Parameters:	class: String
//			position: Array
//			direction: Number (or non-numeric for random)
//			up: Boolean - (true): align to world axis, or (false): align to surface terrain
//			ASL: Boolean - (true): PositionASL, (false): PositionAGL
//			reveal: Boolean - (true): reveal object to nearby players, (false): no reveal
//
//	Return Value:	Object - Backpack
//
//	Called by:	Client
//
//	Note:		If backpacks are positioned over water, they should be placed on a flat surface.
//			surfaceNormal will align an object to sloping ground terrain, not sloping building geometry.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _posASL	= if (p4) then {p1} else {AGLToASL(p1)};
local _dir	= ifnType(2, 0, RANDOM_DIR);

local _vDir	= [];
local _vUp	= [];

if (p3 || isWater(_posASL)) then {

	_vDir		= VECTOR_DOWN;				// lay it flat
	_vUp		= getDirToVectorDir(_dir);		// adjust direction
} else {
	local _vD	= getDirToVectorDir(_dir - 90);		// world direction plane normal
	local _vN	= surfaceNormal _posASL;		// object vectorUp -> vectorDir plane normal
	_vDir		= v3Inverse(_vN);			// inverse surfaceNormal becomes object vectorDir
	_vUp		= vectorCrossProduct(_vD, _vN);		// plane intersect becomes object vectorUp
};

_posASL = v3Add(_posASL, v3Multiply(_vDir, 0.15));		// adjust visual height vector to surface below

local _object = createVehicleOrigin(p0);
_object setVectorDirAndUp [_vDir, _vUp];
_object setPosASL _posASL;

if (p5) then {revealObject(_object, _posASL)};

_object
