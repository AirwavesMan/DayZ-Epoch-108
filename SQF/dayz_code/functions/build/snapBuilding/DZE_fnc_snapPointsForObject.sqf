///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapPointsForObject
//
//	Description:	Returns configured snap points, converts curated HelperVectors or generates
//			collision-surface points for an eligible build object.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, allowFallback] call DZE_fnc_snapPointsForObject
//
//	Parameters:	object: Object - Object whose snap points are requested
//			allowFallback: Boolean - Whether generated fallback points are allowed
//
//	Return Value:	Array - Configured or generated snap-point definitions
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_POINTS_FOR_OBJECT

#define SNAP_SURFACE_MARGIN_MINIMUM 0.25
#define SNAP_SURFACE_MARGIN_FACTOR 0.05

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_FOR_OBJECT
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsForObject]: Function called with argumentes: %1',_this];
#endif

local _object = p0;
local _allowFallback = if (count _this > 1) then {p1} else {false};

if (isNull _object) exitWith {[]};

local _type = typeOf _object;
local _config = configFile >> 'CfgVehicles' >> _type;
local _points = getArray (configFile >> 'SnapBuilding' >> _type >> 'points');

if (count _points > 0) exitWith {
	#ifdef DEBUG_DZE_FNC_SNAP_POINTS_FOR_OBJECT
		diag_log format ['[Client Debug]: [DZE_fnc_snapPointsForObject]: Configured points selected | Type: %1 | Points: %2',_type,count _points];
	#endif

	_points
};

local _eligible = _allowFallback ||
	{isNumber (_config >> 'DZE_buildingSteps')} ||
	{_object isKindOf 'BuiltItems'} ||
	{_object isKindOf 'ModularItems'} ||
	{_object isKindOf 'DZE_Base_Object'};

if (!_eligible) exitWith {[]};

local _cacheIndex = DZE_snapGeneratedPointTypes find _type;
if (_cacheIndex >= 0) exitWith {+(DZE_snapGeneratedPoints select _cacheIndex)};

// Arma 2 supports the unary boundingBox syntax; the box only supplies collision-ray limits.
local _bounds = boundingBox _object;
local _boundsValid = count _bounds >= 2 && {count (_bounds select 0) == 3} && {count (_bounds select 1) == 3};

if (_boundsValid) then {
	_boundsValid = vectorDistance(_bounds select 0,_bounds select 1) > SNAP_POINT_NORMAL_EPSILON;
};

if (!_boundsValid) exitWith {[]};

local _minimum = _bounds select 0;
local _maximum = _bounds select 1;
local _centerX = ((_minimum select X_AXIS) + (_maximum select X_AXIS)) * 0.5;
local _centerY = ((_minimum select Y_AXIS) + (_maximum select Y_AXIS)) * 0.5;
local _centerZ = ((_minimum select Z_AXIS) + (_maximum select Z_AXIS)) * 0.5;
local _source = '';

// Reuse the manually adjusted model points already maintained for build-object helpers.
local _helperPoints = getArray (configFile >> 'HelperVectors' >> _type >> 'points');

if (count _helperPoints > 0) then {
	local _point = [];

	{
		_point = [_x,_bounds] call DZE_fnc_snapPointDefinition;
		if (count _point == 6) then {_points set [count _points,_point]};
	} forEach _helperPoints;

	_source = 'HelperVectors';
};

if (count _points == 0) then {
	local _marginX = SNAP_SURFACE_MARGIN_MINIMUM max (abs((_maximum select X_AXIS) - (_minimum select X_AXIS)) * SNAP_SURFACE_MARGIN_FACTOR);
	local _marginY = SNAP_SURFACE_MARGIN_MINIMUM max (abs((_maximum select Y_AXIS) - (_minimum select Y_AXIS)) * SNAP_SURFACE_MARGIN_FACTOR);
	local _marginZ = SNAP_SURFACE_MARGIN_MINIMUM max (abs((_maximum select Z_AXIS) - (_minimum select Z_AXIS)) * SNAP_SURFACE_MARGIN_FACTOR);

	local _surfaceSpec = [];
	local _surfacePosition = [];
	local _point = [];

	// The center pivot supports unrestricted point pairing; face normals guide the nearest orientation.
	_points set [0,[[_centerX,_centerY,_centerZ],_bounds,ORIGIN] call DZE_fnc_snapPointDefinition];
	local _surfaceSpecs = [
		[[_centerX,_centerY,_minimum select Z_AXIS],[_centerX,_centerY,(_minimum select Z_AXIS) - _marginZ],[_centerX,_centerY,(_maximum select Z_AXIS) + _marginZ],VECTOR_DOWN],
		[[_centerX,_minimum select Y_AXIS,_centerZ],[_centerX,(_minimum select Y_AXIS) - _marginY,_centerZ],[_centerX,(_maximum select Y_AXIS) + _marginY,_centerZ],VECTOR_BACK],
		[[_centerX,_maximum select Y_AXIS,_centerZ],[_centerX,(_maximum select Y_AXIS) + _marginY,_centerZ],[_centerX,(_minimum select Y_AXIS) - _marginY,_centerZ],VECTOR_FRONT],
		[[_minimum select X_AXIS,_centerY,_centerZ],[(_minimum select X_AXIS) - _marginX,_centerY,_centerZ],[(_maximum select X_AXIS) + _marginX,_centerY,_centerZ],VECTOR_LEFT],
		[[_maximum select X_AXIS,_centerY,_centerZ],[(_maximum select X_AXIS) + _marginX,_centerY,_centerZ],[(_minimum select X_AXIS) - _marginX,_centerY,_centerZ],VECTOR_RIGHT],
		[[_centerX,_centerY,_maximum select Z_AXIS],[_centerX,_centerY,(_maximum select Z_AXIS) + _marginZ],[_centerX,_centerY,(_minimum select Z_AXIS) - _marginZ],VECTOR_UP]
	];

	{
		_surfaceSpec = _x;
		_surfacePosition = [_object,_surfaceSpec select 1,_surfaceSpec select 2,_surfaceSpec select 0] call DZE_fnc_snapSurfacePoint;
		_point = [_surfacePosition,_bounds,_surfaceSpec select 3] call DZE_fnc_snapPointDefinition;
		if (count _point == 6) then {_points set [count _points,_point]};
	} forEach _surfaceSpecs;

	_source = 'CollisionGeometry';
};

if (count _points > 0) then {
	_cacheIndex = count DZE_snapGeneratedPointTypes;
	DZE_snapGeneratedPointTypes set [_cacheIndex,_type];
	DZE_snapGeneratedPoints set [_cacheIndex,+_points];
};

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_FOR_OBJECT
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsForObject]: Fallback points generated | Type: %1 | Source: %2 | Bounds: %3 | Points: %4',_type,_source,_bounds,count _points];
#endif

_points
