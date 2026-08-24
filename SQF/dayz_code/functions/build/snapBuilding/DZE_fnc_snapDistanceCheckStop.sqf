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
	diag_log format ['[Client Debug]: [DZE_fnc_snapDistanceCheckStop]: Function called with argumentes: %1',_this];
#endif

local _sessionArgumentValid = typeName _this == 'ARRAY' && {count _this > 0} && {typeName (p0) == 'SCALAR'};
local _expectedSession = if (_sessionArgumentValid) then {p0} else {DZE_snapStateSession};
local _expectedRevision = if (_sessionArgumentValid && {count _this > 1} && {typeName (p1) == 'SCALAR'}) then {p1} else {DZE_snapStateRevision};

isNil {
	if (_expectedSession == DZE_snapStateSession && {_expectedRevision == DZE_snapStateRevision}) then {
		DZE_snapDistanceCheckGeneration = DZE_snapDistanceCheckGeneration + 1;
		DZE_snapDistanceCheckRevision = -1;
		DZE_snapDistanceCheckRunning = false;

		if (!scriptDone DZE_snapDistanceCheckHandle) then {terminate DZE_snapDistanceCheckHandle};
	};
};
