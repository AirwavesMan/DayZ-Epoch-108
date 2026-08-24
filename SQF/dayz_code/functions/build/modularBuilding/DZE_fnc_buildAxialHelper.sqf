///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildAxialHelper
//
//	Description:	Creates local vertical plot-center helpers and appends them to the supplied
//			preview-helper array.
//	Groups:		Build, Modular Building
//
//	Syntax:		[nearestBase, plotDistance, helpers] call DZE_fnc_buildAxialHelper
//
//	Parameters:	nearestBase: Object - Active base
//			plotDistance: Number - Plot radius in meters
//			helpers: Array - Existing preview helpers
//
//	Return Value:	Array - Updated preview-helper array
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_AXIAL_HELPER

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_AXIAL_HELPER
	diag_log format ['[Client Debug]: [DZE_fnc_buildAxialHelper]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 3}) exitWith {[]};

local _nearestPole = p0;
local _distance = p1;
local _helpers = p2;
local _diameter = _distance * 2;			// Plot diameter.
local _density = 4;				// Minimum distance between helpers.
local _total = floor (_diameter / _density);	// Total helpers equal the segment count plus one.
local _segments = _total - (_total % 2);	// Use an even number of segments.
local _spacing = -(_diameter / _segments);
local _polePositionASL = [_nearestPole] call DZE_fnc_modelCenterWorld;	// Model-center ASL.
local _positionX = getX(_polePositionASL);
local _positionY = getY(_polePositionASL);
local _positionZ = getZ(_polePositionASL);
local _terrainHeight = 0;
local _heightLimit = DZE_BuildHeightLimit;
local _zenith = 0;
local _low = 0;
local _high = 0;
local _helper = objNull;
local _texture = DZE_baseGreen;
local _heightColorsEnabled = DZE_BuildHeightLimit > 0 && {DZE_HeightLimitColor};	// Is the build-height limit enabled for helper colors?

if (isTerrain(_polePositionASL)) then {
	_terrainHeight = getTerrainHeightASL _polePositionASL;
	_heightLimit = _heightLimit + _terrainHeight;
};

_zenith = [_distance,_distance + _spacing] select (!isNil 'PP_Marks');	// Exclude dome-helper endpoints when they exist.
_low = (_positionZ - _zenith) max _terrainHeight;
_high = _positionZ + _zenith;

for '_i' from _high to _low step _spacing do {
	_helper = HELPER_LARGE createVehicleLocal ORIGIN;
	_helper setPosASL [_positionX,_positionY,_i];
	_texture = [DZE_baseGreen,DZE_baseRed] select (_heightColorsEnabled && {_i > _heightLimit});
	_helper setObjectTexture _texture;
	addArray(_helpers,_helper);	// Record the helper for preview cleanup.
};

#ifdef DEBUG_DZE_FNC_BUILD_AXIAL_HELPER
	diag_log format ['[Client Debug]: [DZE_fnc_buildAxialHelper]: Helpers created | Plot: %1 | Distance: %2 | Count: %3',_nearestPole,_distance,count _helpers];
#endif

_helpers
