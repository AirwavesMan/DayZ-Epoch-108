///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapObject
//
//	Description:	Atomically validates and aligns one held snap point with a current nearby point
//			using the nearest target-relative orthogonal orientation.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, objectHelper, heldSnapPoint, nearbySnapPoint, distanceCheckGeneration, searchRevision, stateRevision] call DZE_fnc_snapObject
//
//	Parameters:	object: Object - Object being built
//			objectHelper: Object - Build helper
//			heldSnapPoint: Object - Selected held-object snap helper
//			nearbySnapPoint: Object - Compatible nearby snap helper
//			distanceCheckGeneration: Number - Expected worker generation
//			searchRevision: Number - Expected distance-search revision
//			stateRevision: Number - Expected snap-state revision
//
//	Return Value:	Array - Applied world vectorDirAndUp, or [] when the request became invalid
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_OBJECT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_OBJECT
	diag_log format ['[Client Debug]: [DZE_fnc_snapObject]: Function called with arguments: %1',_this];
#endif

local _object = p0;
local _objectHelper = p1;
local _heldSnapPoint = p2;
local _nearbySnapPoint = p3;
local _generation = p4;
local _searchRevision = p5;
local _stateRevision = p6;
local _connection = [];
local _vectorDirAndUp = [];
local _targetObject = objNull;
local _heldPositionASL = [];
local _targetPositionASL = [];
local _relativeMatrix = [];
local _normalDot = 1;
local _requestCurrent = false;

// Validate and apply without allowing refresh, state or input scripts to interleave.
isNil {
	_requestCurrent = !isNull _object &&
		{!isNull _objectHelper} &&
		{!isNull _heldSnapPoint} &&
		{!isNull _nearbySnapPoint} &&
		{!helperAttached} &&
		{!DZE_snapRefresh} &&
		{DZE_snapPointsReady} &&
		{DZE_snapDistanceCheckRunning} &&
		{DZE_snapDistanceCheckGeneration == _generation} &&
		{DZE_snapDistanceCheckRevision == _stateRevision} &&
		{DZE_snapStateRevision == _stateRevision} &&
		{DZE_snapDistanceSearchRevision == _searchRevision} &&
		{BUILD_STAGE == BUILD_HOTKEYS_ACTIVE} &&
		{_heldSnapPoint in snapGizmos} &&
		{_nearbySnapPoint in snapGizmosNearby} &&
		{_heldSnapPoint getVariable ['snapSession',-1] == DZE_snapStateSession} &&
		{_nearbySnapPoint getVariable ['snapSession',-1] == DZE_snapStateSession};

	if (_requestCurrent) then {
		_heldPositionASL = getPosASL _heldSnapPoint;
		_targetPositionASL = getPosASL _nearbySnapPoint;
		_requestCurrent = vectorDistance(_heldPositionASL,_targetPositionASL) < DZE_snapDistance;
	};

	if (_requestCurrent) then {
		_connection = [_objectHelper,_heldSnapPoint,_nearbySnapPoint] call DZE_fnc_snapRelativeOrientation;
		_requestCurrent = _connection select 0;
	};

	if (_requestCurrent) then {
		_vectorDirAndUp = _connection select 1;
		_relativeMatrix = _connection select 2;
		_normalDot = _connection select 3;
		_targetObject = _connection select 4;

		// Rebase and align the complete snap operation only after every guard remains current.
		detach _object;
		_objectHelper setPosASL _heldPositionASL;
		_object attachTo [_objectHelper];
		_objectHelper setVectorDirAndUp _vectorDirAndUp;
		_objectHelper setPosASL _targetPositionASL;
	};
};

if (!_requestCurrent) exitWith {
	#ifdef DEBUG_DZE_FNC_SNAP_OBJECT
		diag_log format ['[Client Debug]: [DZE_fnc_snapObject]: Snap alignment rejected | Generation/Revision/Search: %1/%2/%3 | Held/Nearby/Target: %4/%5/%6',_generation,_stateRevision,_searchRevision,_heldSnapPoint,_nearbySnapPoint,_targetObject];
	#endif

	[]
};

#ifdef DEBUG_DZE_FNC_SNAP_OBJECT
	diag_log format ['[Client Debug]: [DZE_fnc_snapObject]: Snap alignment applied | Target: %1 | Position ASL: %2 | VectorDirAndUp: %3 | Relative matrix/normal dot: %4/%5',_targetObject,_targetPositionASL,_vectorDirAndUp,_relativeMatrix,_normalDot];
#endif

waitUntil {
	uiSleep 0.1;
	helperAttached ||
	{!DZE_snapDistanceCheckRunning} ||
	{DZE_snapDistanceCheckGeneration != _generation} ||
	{DZE_snapDistanceCheckRevision != _stateRevision} ||
	{DZE_snapStateRevision != _stateRevision} ||
	{DZE_snapDistanceSearchRevision != _searchRevision} ||
	{BUILD_STAGE != BUILD_HOTKEYS_ACTIVE}
};

_vectorDirAndUp
