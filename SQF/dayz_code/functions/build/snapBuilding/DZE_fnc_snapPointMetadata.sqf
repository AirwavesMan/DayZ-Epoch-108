///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapPointMetadata
//
//	Description:	Validates and normalizes the explicit type and local normal of a snap point.
//	Groups:		Build, Snap Building
//
//	Syntax:		point call DZE_fnc_snapPointMetadata
//
//	Parameters:	point: Array - Snap-point definition to validate
//
//	Return Value:	Array - [pointType, localNormal], or [-1,[]] for invalid metadata
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_POINT_METADATA

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_POINT_METADATA
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointMetadata]: Function called with arguments: %1',_this];
#endif

local _pointType = SNAP_POINT_TYPE_INVALID;
local _normal = [];
local _valid = false;

if (count _this > 5) then {
	_pointType = _this select 4;
	_normal = _this select 5;

	if (typeName _pointType == 'SCALAR' && {typeName _normal == 'ARRAY'} && {count _normal == 3}) then {
		if (typeName (_normal select 0) == 'SCALAR' &&
			{typeName (_normal select 1) == 'SCALAR'} &&
			{typeName (_normal select 2) == 'SCALAR'}) then {
			local _magnitude = vectorMagnitude(_normal);
			_valid = (_pointType == SNAP_POINT_TYPE_PIVOT && {_magnitude <= SNAP_POINT_NORMAL_EPSILON}) ||
				(_pointType == SNAP_POINT_TYPE_EDGE && {_magnitude > SNAP_POINT_NORMAL_EPSILON});
		};
	};
};

if (!_valid) then {
	_pointType = SNAP_POINT_TYPE_INVALID;
	_normal = [];
} else {
	if (_pointType == SNAP_POINT_TYPE_EDGE) then {_normal = vectorNormalized(_normal)};
};

#ifdef DEBUG_DZE_FNC_SNAP_POINT_METADATA
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointMetadata]: Metadata parsed | Type: %1 | Normal: %2 | Valid: %3',_pointType,_normal,_valid];
#endif

[_pointType,_normal]
