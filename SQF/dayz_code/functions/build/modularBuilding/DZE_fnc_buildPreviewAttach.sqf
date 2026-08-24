///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewAttach
//
//	Description:	Attaches the modular-build preview helper to the player without changing its
//			world orientation.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildPreviewAttach
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Array - Updated modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_ATTACH

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_ATTACH
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewAttach]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_CONTEXT_SIZE}) exitWith {_this};

local _context = _this;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;
local _vectorDirAndUp = vectorDirAndUpRelative(_objectHelper,player);
// Resolve the world position before applying posRel so nested macro expansion cannot pass the helper object to worldToModel.
local _helperPositionAGL = getPosAGL(_objectHelper);
local _positionRelative = posRel(player,_helperPositionAGL);

_objectHelper attachTo [player,_positionRelative];
_objectHelper setVectorDirAndUp _vectorDirAndUp;
helperAttached = true;
_context set [BUILD_CONTEXT_POSITION_RELATIVE,_positionRelative];

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_ATTACH
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewAttach]: Helper attached | Helper: %1 | Relative position: %2',_objectHelper,_positionRelative];
#endif

_context
