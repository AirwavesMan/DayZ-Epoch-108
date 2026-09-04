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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_CONFIRM

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CONFIRM
	diag_log format['[Client Debug]: [DZE_fnc_buildPreviewConfirm]: Function called with arguments: %1',_this];
#endif

if (helperAttached && {(speed player != 0 || {(_this select BUILD_CONTEXT_MOVE_STATE) != MOVE_STOP})}) exitWith {};

[_this,BUILD_MOVE_UP,0] call DZE_fnc_buildPreviewMove;	// Enforce the configured underground limit before confirming.

_this call DZE_fnc_buildPreviewPreventUnderground;
if (BUILD_STAGE == BUILD_CANCELLED) exitWith {};

// Keep the object attached until the final ASL height correction has moved the helper.
local _object = _this select BUILD_CONTEXT_OBJECT;
detach _object;
local _vector = getVectorDirAndUp(_object);
local _objectPositionASL = [_object] call DZE_fnc_modelCenterWorld;
local _heightHelper = _this select BUILD_CONTEXT_HEIGHT_HELPER;
local _heightPositionASL = getPosASL _heightHelper;

_this set [BUILD_CONTEXT_VECTOR,_vector];
_this set [BUILD_CONTEXT_OBJECT_POSITION_ASL,_objectPositionASL];
_this set [BUILD_CONTEXT_HEIGHT_POSITION_ASL,_heightPositionASL];
BUILD_STAGE = BUILD_NOW_BUILDING;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CONFIRM
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewConfirm]: Preview confirmed | Object ASL: %1 | Height ASL: %2 | Vector: %3',_objectPositionASL,_heightPositionASL,_vector];
#endif
