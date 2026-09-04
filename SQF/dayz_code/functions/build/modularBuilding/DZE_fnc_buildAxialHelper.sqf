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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_AXIAL_HELPER

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_AXIAL_HELPER
	diag_log format ['[Client Debug]: [DZE_fnc_buildAxialHelper]: Function called with arguments: %1',_this];
#endif

local _nearestPole = p0;
local _distance = p1;
local _helpers = p2;
local _diameter = _distance * 2;			// Plot diameter.
// Keep approximately four meters between helpers; total helper count equals segment count plus one.
local _segments = floor (_diameter / 4);
_segments = _segments - (_segments % 2);		// Use an even number of segments.
local _spacing = -(_diameter / _segments);
local _polePositionASL = [_nearestPole] call DZE_fnc_modelCenterWorld;	// Model-center ASL.
local _positionX = getX(_polePositionASL);
local _positionY = getY(_polePositionASL);
local _positionZ = getZ(_polePositionASL);
local _terrainHeight = if (isTerrain(_polePositionASL)) then {getTerrainHeightASL _polePositionASL} else {0};
local _heightLimit = DZE_BuildHeightLimit + _terrainHeight;
local _zenith = [_distance,_distance + _spacing] select !isNil 'PP_Marks';	// Exclude dome-helper endpoints when they exist.
local _helper = objNull;
local _heightColorsEnabled = DZE_BuildHeightLimit > 0 && {DZE_HeightLimitColor};	// Is the build-height limit enabled for helper colors?

for '_i' from (_positionZ + _zenith) to ((_positionZ - _zenith) max _terrainHeight) step _spacing do {
	_helper = HELPER_LARGE createVehicleLocal ORIGIN;
	_helper setPosASL [_positionX,_positionY,_i];
	_helper setObjectTexture ([DZE_baseGreen,DZE_baseRed] select (_heightColorsEnabled && {_i > _heightLimit}));
	addArray(_helpers,_helper);	// Record the helper for preview cleanup.
};

#ifdef DEBUG_DZE_FNC_BUILD_AXIAL_HELPER
	diag_log format ['[Client Debug]: [DZE_fnc_buildAxialHelper]: Helpers created | Plot: %1 | Distance: %2 | Count: %3',_nearestPole,_distance,count _helpers];
#endif
