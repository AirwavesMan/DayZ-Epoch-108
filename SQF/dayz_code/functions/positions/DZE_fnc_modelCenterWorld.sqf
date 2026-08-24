///#define DEBUG_DZE_FNC_MODEL_CENTER_WORLD

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_modelCenterWorld
//
//	Description:	Returns the object's model center in PositionASL by transforming the complete
//			model-space bounding center into world-space coordinates.
//	Groups:		Positions
//
//	Syntax:		[object, rotationMatrix] call DZE_fnc_modelCenterWorld
//
//	Parameters:	object: Object
//			rotationMatrix: Matrix - (optional)
//
//	Return Value:	Array format PositionASL
//
//	Called by:	Client and Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_MODEL_CENTER_WORLD
	diag_log format ['[%1 Debug]: [DZE_fnc_modelCenterWorld]: Function called with argumentes: %2',['Client','Server'] select isServer,_this];
#endif

local _object	= p0;

local _posASL	= getPosASL _object;
local _bc	= boundingCenter _object;
local _m	= [];
local _vx	= [];
local _vy	= [];
local _vz	= [];
local _magnitude = 0;
local _offset	= ORIGIN;

if (str _bc != str ORIGIN) then {

	if (count _this > 1) then {
		_m = _this select 1;
	} else {
		// Build the rotation matrix locally because this function is also compiled on dedicated servers.
		_vz = vectorUp _object;
		_magnitude = sqrt ((_vz select 0) ^ 2 + (_vz select 1) ^ 2 + (_vz select 2) ^ 2);
		if (_magnitude > 0) then {_vz = [(_vz select 0) / _magnitude,(_vz select 1) / _magnitude,(_vz select 2) / _magnitude]};

		_vy = vectorDir _object;
		_magnitude = sqrt ((_vy select 0) ^ 2 + (_vy select 1) ^ 2 + (_vy select 2) ^ 2);
		if (_magnitude > 0) then {_vy = [(_vy select 0) / _magnitude,(_vy select 1) / _magnitude,(_vy select 2) / _magnitude]};

		_vx = [
			(_vy select 1) * (_vz select 2) - (_vy select 2) * (_vz select 1),
			(_vy select 2) * (_vz select 0) - (_vy select 0) * (_vz select 2),
			(_vy select 0) * (_vz select 1) - (_vy select 1) * (_vz select 0)
		];
		_m = [_vx,_vy,_vz];
	};

	// Transform the complete model-space center instead of correcting only its world Z component.
	_offset = [
		(_bc select 0) * (_m select 0 select 0) + (_bc select 1) * (_m select 1 select 0) + (_bc select 2) * (_m select 2 select 0),
		(_bc select 0) * (_m select 0 select 1) + (_bc select 1) * (_m select 1 select 1) + (_bc select 2) * (_m select 2 select 1),
		(_bc select 0) * (_m select 0 select 2) + (_bc select 1) * (_m select 1 select 2) + (_bc select 2) * (_m select 2 select 2)
	];
	_posASL = [
		(_posASL select 0) + (_offset select 0),
		(_posASL select 1) + (_offset select 1),
		(_posASL select 2) + (_offset select 2)
	];
};

#ifdef DEBUG_DZE_FNC_MODEL_CENTER_WORLD
	diag_log format ['[%1 Debug]: [DZE_fnc_modelCenterWorld]: Model center calculated | Object: %2 | Bounding center: %3 | Offset: %4 | Position ASL: %5',['Client','Server'] select isServer,_object,_bc,_offset,_posASL];
#endif

_posASL
