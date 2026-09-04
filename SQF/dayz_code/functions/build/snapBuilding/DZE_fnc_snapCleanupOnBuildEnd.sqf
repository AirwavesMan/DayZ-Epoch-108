///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapCleanupOnBuildEnd
//
//	Description:	Waits for its build session to end and requests cleanup only while still current.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, class, objectHelper, session] spawn DZE_fnc_snapCleanupOnBuildEnd
//
//	Parameters:	object: Object - Object being built
//			class: String - Object class name
//			objectHelper: Object - Build helper
//			session: Number - Snap-state session to clean up
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_CLEANUP_ON_BUILD_END

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_CLEANUP_ON_BUILD_END
	diag_log format ['[Client Debug]: [DZE_fnc_snapCleanupOnBuildEnd]: Function called with arguments: %1',_this];
#endif

local _object = p0;
local _className = p1;
local _objectHelper = p2;
local _session = p3;

waitUntil {
	uiSleep 0.01;
	_session != DZE_snapStateSession || {BUILD_STAGE != BUILD_INACTIVE}
};

while {_session == DZE_snapStateSession && {BUILD_STAGE == BUILD_HOTKEYS_ACTIVE}} do {uiSleep 0.2};

if (_session != DZE_snapStateSession) exitWith {};

['Shutdown',_object,_className,_objectHelper,-1,_session,DZE_snapStateRevision] call DZE_fnc_snapStateTransition;
