///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapPointDefinition
//
//	Description:	Builds an explicit snap-point definition from a model-space position.
//			An optional normal is used directly; otherwise the nearest dominant model axis
//			is inferred from the point position inside the supplied geometry bounds.
//	Groups:		Build, Snap Building
//
//	Syntax:		[position, bounds, optionalNormal] call DZE_fnc_snapPointDefinition
//
//	Parameters:	position: Array - Model-space snap-point position
//			bounds: Array - Minimum and maximum model bounds
//			optionalNormal: Array - Optional model-space surface normal
//
//	Return Value:	Array - [x, y, z, localizedName, pointType, localNormal], or []
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_POINT_DEFINITION

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_POINT_DEFINITION
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointDefinition]: Function called with argumentes: %1',_this];
#endif

local _position = p0;
local _bounds = p1;
local _normalProvided = count _this > 2;
local _normal = if (_normalProvided) then {p2} else {[]};

if (typeName _position != 'ARRAY' || {count _position != 3}) exitWith {[]};
if (typeName _bounds != 'ARRAY' || {count _bounds < 2}) exitWith {[]};

local _minimum = _bounds select 0;
local _maximum = _bounds select 1;

if (count _minimum != 3 || {count _maximum != 3}) exitWith {[]};

local _pointType = SNAP_POINT_TYPE_PIVOT;
local _name = localize 'STR_SNAPPING_POINT_PIVOT';
local _normalValid = typeName _normal == 'ARRAY' && {count _normal == 3};

if (_normalProvided && {_normalValid}) then {
	if (vectorMagnitude(_normal) > SNAP_POINT_NORMAL_EPSILON) then {
		_normal = vectorNormalized(_normal);
		_pointType = SNAP_POINT_TYPE_EDGE;
	} else {
		_normal = +ORIGIN;
	};
} else {
	local _center = [
		((_minimum select X_AXIS) + (_maximum select X_AXIS)) * 0.5,
		((_minimum select Y_AXIS) + (_maximum select Y_AXIS)) * 0.5,
		((_minimum select Z_AXIS) + (_maximum select Z_AXIS)) * 0.5
	];
	local _halfExtent = [
		SNAP_POINT_NORMAL_EPSILON max (abs((_maximum select X_AXIS) - (_minimum select X_AXIS)) * 0.5),
		SNAP_POINT_NORMAL_EPSILON max (abs((_maximum select Y_AXIS) - (_minimum select Y_AXIS)) * 0.5),
		SNAP_POINT_NORMAL_EPSILON max (abs((_maximum select Z_AXIS) - (_minimum select Z_AXIS)) * 0.5)
	];
	local _normalizedOffset = [
		abs((_position select X_AXIS) - (_center select X_AXIS)) / (_halfExtent select X_AXIS),
		abs((_position select Y_AXIS) - (_center select Y_AXIS)) / (_halfExtent select Y_AXIS),
		abs((_position select Z_AXIS) - (_center select Z_AXIS)) / (_halfExtent select Z_AXIS)
	];
	local _axis = X_AXIS;

	if ((_normalizedOffset select Y_AXIS) > (_normalizedOffset select _axis)) then {_axis = Y_AXIS};
	if ((_normalizedOffset select Z_AXIS) > (_normalizedOffset select _axis)) then {_axis = Z_AXIS};

	if ((_normalizedOffset select _axis) >= 0.5) then {
		_pointType = SNAP_POINT_TYPE_EDGE;
		_normal = +([VECTOR_LEFT,VECTOR_RIGHT] select ((_position select _axis) >= (_center select _axis)));

		if (_axis == Y_AXIS) then {
			_normal = +([VECTOR_BACK,VECTOR_FRONT] select ((_position select _axis) >= (_center select _axis)));
		};
		if (_axis == Z_AXIS) then {
			_normal = +([VECTOR_DOWN,VECTOR_UP] select ((_position select _axis) >= (_center select _axis)));
		};
	} else {
		_normal = +ORIGIN;
	};
};

if (_pointType == SNAP_POINT_TYPE_EDGE) then {
	local _axis = X_AXIS;
	if (abs(_normal select Y_AXIS) > abs(_normal select _axis)) then {_axis = Y_AXIS};
	if (abs(_normal select Z_AXIS) > abs(_normal select _axis)) then {_axis = Z_AXIS};

	if (_axis == X_AXIS) then {_name = localize (['STR_SNAPPING_POINT_LEFT','STR_SNAPPING_POINT_RIGHT'] select ((_normal select X_AXIS) >= 0))};
	if (_axis == Y_AXIS) then {_name = localize (['STR_SNAPPING_POINT_BACK','STR_SNAPPING_POINT_FRONT'] select ((_normal select Y_AXIS) >= 0))};
	if (_axis == Z_AXIS) then {_name = localize (['STR_SNAPPING_POINT_BOTTOM','STR_SNAPPING_POINT_TOP'] select ((_normal select Z_AXIS) >= 0))};
};

#ifdef DEBUG_DZE_FNC_SNAP_POINT_DEFINITION
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointDefinition]: Definition created | Position: %1 | Type: %2 | Normal: %3 | Name: %4',_position,_pointType,_normal,_name];
#endif

[_position select X_AXIS,_position select Y_AXIS,_position select Z_AXIS,_name,_pointType,_normal]
