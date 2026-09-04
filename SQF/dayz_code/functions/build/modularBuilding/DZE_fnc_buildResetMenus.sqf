///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildResetMenus
//
//	Description:	Resets active snap and vector action menus after the preview transform is reset.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildResetMenus
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_RESET_MENUS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_RESET_MENUS
	diag_log format ['[Client Debug]: [DZE_fnc_buildResetMenus]: Function called with arguments: %1',_this];
#endif

local _object = _this select BUILD_CONTEXT_OBJECT;
local _className = _this select BUILD_CONTEXT_CLASS_NAME;
local _objectHelper = _this select BUILD_CONTEXT_OBJECT_HELPER;
local _snappingEnabled = _this select BUILD_CONTEXT_SNAPPING_ENABLED;
local _vectoringEnabled = _this select BUILD_CONTEXT_VECTORING_ENABLED;
local _snapSession = _this select BUILD_CONTEXT_SNAP_SESSION;

if (_snappingEnabled) then {
	['Reset',_object,_className,_objectHelper,-1,_snapSession,DZE_snapStateRevision] call DZE_fnc_snapStateTransition;
};

if (_vectoringEnabled) then {
	vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_OPEN';
	[1,0] call DZE_fnc_vectorActionCleanup;
	degreeActionState = localize 'STR_VECTOR_BUILDING_MENU_OPEN';
	[1,0] call DZE_fnc_vectorDegreeActionCleanup;
};

#ifdef DEBUG_DZE_FNC_BUILD_RESET_MENUS
	diag_log format ['[Client Debug]: [DZE_fnc_buildResetMenus]: Menus reset | Snapping: %1 | Vectoring: %2',_snappingEnabled,_vectoringEnabled];
#endif
