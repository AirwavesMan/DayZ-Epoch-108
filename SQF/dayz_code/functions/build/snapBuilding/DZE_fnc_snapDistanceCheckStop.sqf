///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapDistanceCheckStop
//
//	Description:	Stops the distance-check worker only for the expected session and state revision.
//	Groups:		Build, Snap Building
//
//	Syntax:		[session, revision] call DZE_fnc_snapDistanceCheckStop
//
//	Parameters:	session: Number - Expected snap-state session
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_DISTANCE_CHECK_STOP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_DISTANCE_CHECK_STOP
	diag_log format ['[Client Debug]: [DZE_fnc_snapDistanceCheckStop]: Function called with arguments: %1',_this];
#endif

local _expectedSession = p0;
local _expectedRevision = p1;

isNil {
	if (_expectedSession == DZE_snapStateSession && {_expectedRevision == DZE_snapStateRevision}) then {
		DZE_snapDistanceCheckGeneration = DZE_snapDistanceCheckGeneration + 1;
		DZE_snapDistanceCheckRevision = -1;
		DZE_snapDistanceCheckRunning = false;

		if (!scriptDone DZE_snapDistanceCheckHandle) then {terminate DZE_snapDistanceCheckHandle};
	};
};
