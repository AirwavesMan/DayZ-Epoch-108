///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewDetach
//
//	Description:	Detaches the modular-build preview helper from the player.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildPreviewDetach
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Array - Unchanged modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_DETACH

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_DETACH
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewDetach]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_CONTEXT_SIZE}) exitWith {_this};

local _context = _this;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;

detach _objectHelper;
helperAttached = false;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_DETACH
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewDetach]: Helper detached: %1',_objectHelper];
#endif

_context
