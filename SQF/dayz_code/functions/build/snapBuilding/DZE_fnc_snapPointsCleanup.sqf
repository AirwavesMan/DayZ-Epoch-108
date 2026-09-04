///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapPointsCleanup
//
//	Description:	Deletes only local snapping helpers owned by the expected session and revision.
//	Groups:		Build, Snap Building
//
//	Syntax:		[session, advanceSession, revision] call DZE_fnc_snapPointsCleanup
//
//	Parameters:	session: Number - Expected snap-state session
//			advanceSession: Boolean - Whether cleanup advances the session
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Scalar - Resulting session, or -1 when the request was stale
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_POINTS_CLEANUP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsCleanup]: Function called with arguments: %1',_this];
#endif

local _expectedSession = p0;
local _advanceSession = p1;
local _expectedRevision = p2;
local _heldSnapGizmos = [];
local _nearbySnapGizmos = [];
local _resultSession = -1;

// Keep ownership changes uninterruptible; deleting the detached helpers can remain scheduled.
isNil {
	if (_expectedSession == DZE_snapStateSession && {_expectedRevision == DZE_snapStateRevision}) then {
		// Invalidate an in-flight refresh even when snapping is re-enabled in the same build session.
		DZE_snapRefreshGeneration = DZE_snapRefreshGeneration + 1;
		DZE_snapPointsReady = false;

		if (DZE_snapPointsSession == _expectedSession) then {
			_heldSnapGizmos = snapGizmos;
			snapGizmos = [];
			DZE_snapPointsSession = -1;
		};

		if (DZE_snapNearbyPointsSession == _expectedSession) then {
			_nearbySnapGizmos = snapGizmosNearby;
			snapGizmosNearby = [];
			DZE_snapNearbyPointsSession = -1;
		};

		if (DZE_snapRefreshSession == _expectedSession) then {
			DZE_snapRefresh = false;
			DZE_snapRefreshSession = -1;
		};

		if (_advanceSession) then {DZE_snapStateSession = DZE_snapStateSession + 1};
		_resultSession = DZE_snapStateSession;
	};
};

if (_resultSession < 0) exitWith {-1};

{deleteVehicle _x} forEach _heldSnapGizmos;
{deleteVehicle _x} forEach _nearbySnapGizmos;

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsCleanup]: Session helpers deleted | Session: %1 -> %2 | Revision: %3 | Held: %4 | Nearby: %5',_expectedSession,_resultSession,_expectedRevision,count _heldSnapGizmos,count _nearbySnapGizmos];
#endif

_resultSession
