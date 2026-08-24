///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewConfirm
//
//	Description:	Applies the final height correction and captures the preview transform that will
//			be sent to the server.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildPreviewConfirm
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Boolean - True when the preview transform was confirmed
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_CONFIRM

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CONFIRM
	diag_log format['[Client Debug]: [DZE_fnc_buildPreviewConfirm]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_CONTEXT_SIZE}) exitWith {false};

local _context = _this;
local _object = _context select BUILD_CONTEXT_OBJECT;
local _heightHelper = _context select BUILD_CONTEXT_HEIGHT_HELPER;
local _moveState = _context select BUILD_CONTEXT_MOVE_STATE;
local _isMoving = helperAttached && {(speed player != 0 || {_moveState != MOVE_STOP})};

if (_isMoving) exitWith {false};

[_context,BUILD_MOVE_UP,0,false] call DZE_fnc_buildPreviewMove;	// Enforce the configured underground limit before confirming.
if (BUILD_STAGE == BUILD_CANCELLED) exitWith {false};

uiSleep 0.01; /// **** TODO **** check this
_context call DZE_fnc_buildPreviewPreventUnderground;
if (BUILD_STAGE == BUILD_CANCELLED) exitWith {false};

// Keep the object attached until the final ASL height correction has moved the helper.
detach _object;
local _vector = getVectorDirAndUp(_object);
local _objectPositionASL = [_object] call DZE_fnc_modelCenterWorld;
local _heightPositionASL = getPosASL _heightHelper;

_context set [BUILD_CONTEXT_VECTOR,_vector];
_context set [BUILD_CONTEXT_OBJECT_POSITION_ASL,_objectPositionASL];
_context set [BUILD_CONTEXT_HEIGHT_POSITION_ASL,_heightPositionASL];
BUILD_STAGE = BUILD_NOW_BUILDING;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CONFIRM
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewConfirm]: Preview confirmed | Object ASL: %1 | Height ASL: %2 | Vector: %3',_objectPositionASL,_heightPositionASL,_vector];
#endif

true
