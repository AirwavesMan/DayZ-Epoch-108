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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_PREVENT_UNDERGROUND

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_PREVENT_UNDERGROUND
	diag_log format['[Client Debug]: [DZE_fnc_buildPreviewPreventUnderground]: Function called with arguments: %1',_this];
#endif

if (!(_this select BUILD_CONTEXT_PREVENT_UNDERGROUND)) exitWith {};

// Attachment transforms may need one frame before the helpers return their final world positions.
uiSleep 0.01;

local _heightHelper = _this select BUILD_CONTEXT_HEIGHT_HELPER;
local _supportPositionASL = getPosASL _heightHelper;
local _object = _this select BUILD_CONTEXT_OBJECT;
local _centerPositionASL = [_object] call DZE_fnc_modelCenterWorld;
local _supportPenetration = (0 max getTerrainHeightASL _supportPositionASL) + (_this select BUILD_CONTEXT_MIN_HEIGHT) - (_supportPositionASL select 2);
local _centerPenetration = (0 max getTerrainHeightASL _centerPositionASL) - (_centerPositionASL select 2);

if ((_supportPenetration max _centerPenetration) > 0.01) then {
	_this set [BUILD_CONTEXT_TOO_LOW,true];
	_this set [BUILD_CONTEXT_UNDERGROUND_CANCELLED,true];
	_this set [BUILD_CONTEXT_MODEL_POSITION_ASL,getPosASL modelSelect];
	BUILD_STAGE = BUILD_CANCELLED;

	#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_PREVENT_UNDERGROUND
		local _blockingPositionASL = [_centerPositionASL,_supportPositionASL] select (_supportPenetration >= _centerPenetration);
		diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewPreventUnderground]: Build cancelled | Object: %1 | Support/Center penetration: %2/%3 | Blocking position ASL: %4',_object,_supportPenetration,_centerPenetration,_blockingPositionASL];
	#endif
};
