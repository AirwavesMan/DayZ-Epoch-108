///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapDistanceCheckStart
//
//	Description:	Requests a distance search and starts the single worker when necessary.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, objectHelper, session, revision] call DZE_fnc_snapDistanceCheckStart
//
//	Parameters:	object: Object - Object being built
//			objectHelper: Object - Build helper
//			session: Number - Expected snap-state session
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_DISTANCE_CHECK_START

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_DISTANCE_CHECK_START
	diag_log format ['[Client Debug]: [DZE_fnc_snapDistanceCheckStart]: Function called with arguments: %1',_this];
#endif

local _object = p0;
local _objectHelper = p1;
local _expectedSession = p2;
local _expectedRevision = p3;

if (isNull _object || {isNull _objectHelper}) exitWith {};

// The request and optional worker start belong to one current build session and state revision.
if (_expectedSession != DZE_snapStateSession || {_expectedRevision != DZE_snapStateRevision}) exitWith {};

call DZE_fnc_snapDistanceSearchRequest;

if (!DZE_snapDistanceCheckRunning || {DZE_snapDistanceCheckRevision != _expectedRevision}) then {
	// Retire an unexpected stale handle before starting the only active worker.
	if (!scriptDone DZE_snapDistanceCheckHandle) then {terminate DZE_snapDistanceCheckHandle};

	DZE_snapDistanceCheckGeneration = DZE_snapDistanceCheckGeneration + 1;
	DZE_snapDistanceCheckRevision = _expectedRevision;
	DZE_snapDistanceCheckRunning = true;
	DZE_snapDistanceCheckHandle = [_object,_objectHelper,DZE_snapDistanceCheckGeneration,_expectedRevision] spawn DZE_fnc_snapDistanceCheck;
};
