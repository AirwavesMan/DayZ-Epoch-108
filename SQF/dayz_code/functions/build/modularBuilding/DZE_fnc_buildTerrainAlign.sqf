///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildTerrainAlign
//
//	Description:	Places the preview on the terrain and rebuilds an orthogonal orientation that
//			preserves the current horizontal heading.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildTerrainAlign
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_TERRAIN_ALIGN

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_TERRAIN_ALIGN
	diag_log format ['[Client Debug]: [DZE_fnc_buildTerrainAlign]: Function called with arguments: %1',_this];
#endif

local _object = _this select BUILD_CONTEXT_OBJECT;
local _objectHelper = _this select BUILD_CONTEXT_OBJECT_HELPER;
local _minHeight = _this select BUILD_CONTEXT_MIN_HEIGHT;
local _wasAttached = helperAttached;

if (_wasAttached && {(speed player != 0 || {(_this select BUILD_CONTEXT_MOVE_STATE) != MOVE_STOP})}) exitWith {};

local _positionASL = getPosASL modelSelect;
if (!isTerrain(_positionASL)) exitWith {};

local _heading = getDir _objectHelper;
skipUpdates = true;	// Prevent temporary values from updating on the snap panel.

_this call DZE_fnc_buildPreviewDetach;
detach _object;
setZ(_positionASL,getTerrainHeightASL _positionASL + _minHeight);
_objectHelper setPosASL _positionASL;
_object attachTo [_objectHelper];

_this set [BUILD_CONTEXT_HELPER_POSITION_ASL,_positionASL];

if ((_this select BUILD_CONTEXT_VECTORING_ENABLED) || {_this select BUILD_CONTEXT_STATIC_WEAPON}) then {
	local _vectorUp = surfaceNormal _positionASL;
	local _vectorDir = getDirToVectorDir(_heading);
	local _normalZ = getZ(_vectorUp);

	if (abs _normalZ > 0.001) then {
		// Extend the horizontal heading onto the terrain plane without changing its yaw.
		setZ(_vectorDir,-(vectorDotProduct(_vectorDir,_vectorUp) / _normalZ));
		_vectorDir = vectorNormalized(_vectorDir);
		_objectHelper setVectorDirAndUp [_vectorDir,_vectorUp];
	};
};

if (_wasAttached) then {_this call DZE_fnc_buildPreviewAttach};
_this set [BUILD_CONTEXT_DIRECTION_Y,_heading];
_this set [BUILD_CONTEXT_MODEL_POSITION_ASL,getPosASL modelSelect];

#ifdef DEBUG_DZE_FNC_BUILD_TERRAIN_ALIGN
	diag_log format ['[Client Debug]: [DZE_fnc_buildTerrainAlign]: Terrain orientation | Position ASL: %1 | Heading: %2 | VectorDirAndUp: %3',_positionASL,_heading,getVectorDirAndUp(_objectHelper)];
#endif

_this call DZE_fnc_buildCollisionCheck;
_this call DZE_fnc_buildResetMenus;
skipUpdates = false;
