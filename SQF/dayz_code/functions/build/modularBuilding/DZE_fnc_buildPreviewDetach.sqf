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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_DETACH

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_DETACH
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewDetach]: Function called with arguments: %1',_this];
#endif

local _objectHelper = _this select BUILD_CONTEXT_OBJECT_HELPER;

detach _objectHelper;
helperAttached = false;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_DETACH
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewDetach]: Helper detached: %1',_objectHelper];
#endif
