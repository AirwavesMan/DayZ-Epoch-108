///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewPreventUnderground
//
//	Description:	Cancels a configured build when its center support point or model center is
//			below terrain or sea level, including after vector rotations.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildPreviewPreventUnderground
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Array - Updated modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_PREVENT_UNDERGROUND

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_PREVENT_UNDERGROUND
	diag_log format['[Client Debug]: [DZE_fnc_buildPreviewPreventUnderground]: Function called with argumentes: %1',_this];
#endif

local _context = _this;

if (typeName _context != 'ARRAY' || {count _context < BUILD_CONTEXT_SIZE}) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_PREVENT_UNDERGROUND
		diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewPreventUnderground]: Error: Invalid build context: %1',_context];
	#endif
	_context
};

local _preventUnderground = _context select BUILD_CONTEXT_PREVENT_UNDERGROUND;

if (!_preventUnderground) exitWith {_context};

local _object = _context select BUILD_CONTEXT_OBJECT;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;
local _heightHelper = _context select BUILD_CONTEXT_HEIGHT_HELPER;

if (isNull _object || {isNull _objectHelper} || {isNull _heightHelper}) exitWith {
	_context set [BUILD_CONTEXT_TOO_LOW,true];
	_context set [BUILD_CONTEXT_UNDERGROUND_CANCELLED,true];
	BUILD_STAGE = BUILD_CANCELLED;

	#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_PREVENT_UNDERGROUND
		diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewPreventUnderground]: Warning: Preview object or helper is null: %1 | %2 | %3',_object,_objectHelper,_heightHelper];
	#endif
	_context
};

local _epsilon = 0.01;

// Attachment transforms may need one frame before the helpers return their final world positions.
uiSleep 0.01;

local _supportPositionASL = getPosASL _heightHelper;
local _centerPositionASL = [_object] call DZE_fnc_modelCenterWorld;
local _minimumHeight = _context select BUILD_CONTEXT_MIN_HEIGHT;
local _supportSurfaceASL = (0 max getTerrainHeightASL _supportPositionASL) + _minimumHeight;
local _centerSurfaceASL = 0 max getTerrainHeightASL _centerPositionASL;
local _supportPenetration = _supportSurfaceASL - (_supportPositionASL select 2);
local _centerPenetration = _centerSurfaceASL - (_centerPositionASL select 2);
local _penetration = _supportPenetration max _centerPenetration;
local _blockingPositionASL = [_centerPositionASL,_supportPositionASL] select (_supportPenetration >= _centerPenetration);

if (_penetration > _epsilon) then {
	_context set [BUILD_CONTEXT_TOO_LOW,true];
	_context set [BUILD_CONTEXT_UNDERGROUND_CANCELLED,true];
	_context set [BUILD_CONTEXT_MODEL_POSITION_ASL,getPosASL modelSelect];
	BUILD_STAGE = BUILD_CANCELLED;

	#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_PREVENT_UNDERGROUND
		diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewPreventUnderground]: Build cancelled | Object: %1 | Support/Center penetration: %2/%3 | Blocking position ASL: %4',_object,_supportPenetration,_centerPenetration,_blockingPositionASL];
	#endif
};

_context
