///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewReset
//
//	Description:	Restores the preview attachment chain, transform state and action menus.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildPreviewReset
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Array - Updated modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_RESET

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_RESET
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewReset]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_CONTEXT_SIZE}) exitWith {_this};

local _context = _this;
local _object = _context select BUILD_CONTEXT_OBJECT;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;

detach _objectHelper;
detach _object;
_context call DZE_fnc_buildPreviewSetup;
_context call DZE_fnc_buildResetMenus;
BUILD_AXIS_LOCAL = false;
BUILD_HIDE_PANEL = false;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_RESET
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewReset]: Preview reset | Object: %1 | Helper: %2',_object,_objectHelper];
#endif

_context
