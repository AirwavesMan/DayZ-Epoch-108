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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_RESET

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_RESET
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewReset]: Function called with arguments: %1',_this];
#endif

local _context = _this;
local _object = _context select BUILD_CONTEXT_OBJECT;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;

detach _objectHelper;
detach _object;
_context call DZE_fnc_buildPreviewSetup;
_context call DZE_fnc_buildResetMenus;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_RESET
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewReset]: Preview reset | Object: %1 | Helper: %2',_object,_objectHelper];
#endif
