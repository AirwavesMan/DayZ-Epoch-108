///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapRefresh
//
//	Description:	Refreshes nearby snap points only while the expected session and revision are active.
//	Groups:		Build, Snap Building
//
//	Syntax:		[offState, centerHelper, previousASL, distance, object, session, revision] call DZE_fnc_snapRefresh
//
//	Parameters:	offState: String - Localized disabled state
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
	diag_log format ['[Client Debug]: [DZE_fnc_snapRefresh]: Function called with arguments: %1',_this];
#endif

local _offState = p0;
local _centerHelper = p1;
local _previousPositionASL = p2;
local _refreshDistance = p3;
local _object = p4;
local _expectedSession = p5;
local _expectedRevision = p6;
local _currentPositionASL = getPosASL _centerHelper;

if (_expectedSession != DZE_snapStateSession || {_expectedRevision != DZE_snapStateRevision}) exitWith {_currentPositionASL};

if !(DZE_snapAutoRefresh && {DZE_snapPointsReady} && {snapActionState != _offState}) exitWith {_currentPositionASL};

local _objectMove = vectorDistance(_previousPositionASL, _currentPositionASL);

if (_objectMove <= _refreshDistance) exitWith {_previousPositionASL};

// Acquire the refresh generation only while this build session is still current.
if (_expectedSession == DZE_snapStateSession && {_expectedRevision == DZE_snapStateRevision}) then {
	DZE_snapRefresh = true;						// suspend DZE_fnc_snapDistanceCheck
	DZE_snapRefreshSession = _expectedSession;
	DZE_snapRefreshGeneration = DZE_snapRefreshGeneration + 1;
	local _refreshGeneration = DZE_snapRefreshGeneration;

	[_object,_expectedSession,_refreshGeneration,_expectedRevision] call DZE_fnc_snapPointsNearbyInit;	// create new snap point radius

	// A stale refresh must not release a newer session's distance checker.
	if (DZE_snapRefreshSession == _expectedSession && {DZE_snapRefreshGeneration == _refreshGeneration}) then {
		DZE_snapRefresh = false;
		DZE_snapRefreshSession = -1;
	};

	#ifdef DEBUG_DZE_FNC_SNAP_REFRESH
		diag_log format ['[Client Debug]: [DZE_fnc_snapRefresh]: Nearby snap points refreshed | Session/Revision/Generation: %1/%2/%3 | Distance: %4 | Threshold: %5 | Position ASL: %6',_expectedSession,_expectedRevision,_refreshGeneration,_objectMove,_refreshDistance,_currentPositionASL];
	#endif
};

_currentPositionASL
