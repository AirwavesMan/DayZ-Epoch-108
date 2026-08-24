///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapRefresh
//
//	Description:	Refreshes nearby snap points only while the expected session and revision are active.
//	Groups:		Build, Snap Building
//
//	Syntax:		[enabled, offState, centerHelper, previousASL, distance, object, session, revision] call DZE_fnc_snapRefresh
//
//	Parameters:	enabled: Boolean - Whether snapping is available
//			offState: String - Localized disabled state
//			centerHelper: Object - Helper used for movement tracking
//			previousASL: Array - Previous helper PositionASL
//			distance: Number - Movement threshold
//			object: Object - Object being built
//			session: Number - Expected snap-state session
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Array - Latest center-helper PositionASL used by the refresh check
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_REFRESH

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_REFRESH
	diag_log format ['[Client Debug]: [DZE_fnc_snapRefresh]: Function called with argumentes: %1',_this];
#endif

local _enabled = p0;
local _offState = p1;
local _centerHelper = p2;
local _previousPositionASL = p3;
local _refreshDistance = p4;
local _object = p5;
local _expectedSession = if (count _this > 6) then {p6} else {DZE_snapStateSession};
local _expectedRevision = if (count _this > 7) then {p7} else {DZE_snapStateRevision};
local _currentPositionASL = getPosASL _centerHelper;

if (_expectedSession != DZE_snapStateSession || {_expectedRevision != DZE_snapStateRevision}) exitWith {_currentPositionASL};

// Keep the baseline current while snapping is disabled so enabling it does not cause a duplicate rebuild.
if !(_enabled && DZE_snapAutoRefresh && {DZE_snapPointsReady} && {snapActionState != _offState}) exitWith {_currentPositionASL};

if (count _previousPositionASL != 3) exitWith {_currentPositionASL};

local _objectMove = vectorDistance(_previousPositionASL, _currentPositionASL);
local _refreshGeneration = -1;
local _refreshStarted = false;

if (_objectMove > _refreshDistance) then {
	_previousPositionASL = +_currentPositionASL;

	// Acquire the refresh generation only while this build session is still current.
	if (_expectedSession == DZE_snapStateSession && {_expectedRevision == DZE_snapStateRevision}) then {
		DZE_snapRefresh = true;						// suspend DZE_fnc_snapDistanceCheck
		DZE_snapRefreshSession = _expectedSession;
		DZE_snapRefreshGeneration = DZE_snapRefreshGeneration + 1;
		_refreshGeneration = DZE_snapRefreshGeneration;
		_refreshStarted = true;
	};

	if (_refreshStarted) then {
		[_object,_expectedSession,_refreshGeneration,_expectedRevision] call DZE_fnc_snapPointsNearbyInit;	// create new snap point radius

		// A stale refresh must not release a newer session's distance checker.
		if (DZE_snapRefreshSession == _expectedSession && {DZE_snapRefreshGeneration == _refreshGeneration}) then {
			DZE_snapRefresh = false;
			DZE_snapRefreshSession = -1;
		};

	};

	#ifdef DEBUG_DZE_FNC_SNAP_REFRESH
		diag_log format ['[Client Debug]: [DZE_fnc_snapRefresh]: Nearby snap points refreshed | Session/Revision/Generation: %1/%2/%3 | Distance: %4 | Threshold: %5 | Position ASL: %6',_expectedSession,_expectedRevision,_refreshGeneration,_objectMove,_refreshDistance,_currentPositionASL];
	#endif
};

_previousPositionASL
