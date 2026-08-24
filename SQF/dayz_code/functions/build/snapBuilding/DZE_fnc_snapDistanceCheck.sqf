///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapDistanceCheck
//
//	Description:	Observes snap events and helper movement, then searches the closest compatible pair.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, objectHelper, generation, revision] spawn DZE_fnc_snapDistanceCheck
//
//	Parameters:	object: Object - Object being built
//			objectHelper: Object - Build helper
//			generation: Number - Expected distance-worker generation
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_DISTANCE_CHECK

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_DISTANCE_CHECK
	diag_log format ['[Client Debug]: [DZE_fnc_snapDistanceCheck]: Function called with argumentes: %1',_this];
#endif

local _object = p0;
local _objectHelper = p1;
local _generation = p2;
local _stateRevision = if (count _this > 3) then {p3} else {DZE_snapStateRevision};
local _off = localize 'STR_SNAPPING_STATE_OFF';
local _manual = localize 'STR_SNAPPING_MODE_MANUAL';

local _closestHeldPrevious = objNull;
local _closestNearPrevious = objNull;
local _closestHeldCurrent = objNull;
local _closestNearCurrent = objNull;
local _closestDistance = DZE_snapDistance;
local _nearCurrent = objNull;
local _heldCurrent = objNull;
local _heldManual = objNull;
local _nearCandidates = [];
local _distance = 0;
local _isNearbyCandidate = false;
local _connection = [];
local _connectionValid = false;
local _nearTargetChanged = false;
local _pairChanged = false;
local _nextSnapTextAt = 0;
local _snapTextInterval = 0.08;
local _lastSearchRevision = -1;
local _lastSearchPositionASL = [];
local _lastSearchVectorDirAndUp = [];
local _lastHelperAttached = helperAttached;
local _currentPositionASL = [];
local _currentVectorDirAndUp = [];
local _eventChanged = true;
local _positionChanged = true;
local _vectorChanged = true;
local _searchRequested = true;
local _nextSearchAt = 0;
local _now = 0;

uiSleep 0.02;

while {
	DZE_snapDistanceCheckRunning &&
	{DZE_snapDistanceCheckGeneration == _generation} &&
	{DZE_snapDistanceCheckRevision == _stateRevision} &&
	{DZE_snapStateRevision == _stateRevision} &&
	{BUILD_STAGE == BUILD_HOTKEYS_ACTIVE} &&
	{snapActionState != _off} &&
	{!isNull _object} &&
	{!isNull _objectHelper}
} do {
	_now = diag_tickTime;
	_searchRequested = false;

	if (!DZE_snapRefresh) then {
		_currentPositionASL = getPosASL _objectHelper;
		_currentVectorDirAndUp = getVectorDirAndUp(_objectHelper);
		_eventChanged = DZE_snapDistanceSearchRevision != _lastSearchRevision ||
			{helperAttached && {!_lastHelperAttached}} ||
			{!helperAttached && {_lastHelperAttached}};
		_positionChanged = count _lastSearchPositionASL != 3 || {vectorDistance(_lastSearchPositionASL,_currentPositionASL) > SNAP_SEARCH_POSITION_EPSILON};
		_vectorChanged = count _lastSearchVectorDirAndUp != 2 ||
			{vectorDistance(_lastSearchVectorDirAndUp select 0,_currentVectorDirAndUp select 0) > SNAP_SEARCH_VECTOR_EPSILON} ||
			{vectorDistance(_lastSearchVectorDirAndUp select 1,_currentVectorDirAndUp select 1) > SNAP_SEARCH_VECTOR_EPSILON};

		// External events search immediately; continuous movement is capped to a stable refresh rate.
		if (_eventChanged || {(_positionChanged || {_vectorChanged}) && {_now >= _nextSearchAt}}) then {
			_searchRequested = true;
			_lastSearchRevision = DZE_snapDistanceSearchRevision;
			_lastSearchPositionASL = +_currentPositionASL;
			_lastSearchVectorDirAndUp = +_currentVectorDirAndUp;
			_lastHelperAttached = helperAttached;
			_nextSearchAt = _now + SNAP_SEARCH_INTERVAL;

			#ifdef DEBUG_DZE_FNC_SNAP_DISTANCE_CHECK
				diag_log format ['[Client Debug]: [DZE_fnc_snapDistanceCheck]: Search triggered | Event: %1 | Position: %2 | Vector: %3 | Revision: %4',_eventChanged,_positionChanged,_vectorChanged,_lastSearchRevision];
			#endif
		};
	};

	if (_searchRequested) then {

		_closestHeldCurrent = objNull;
		_closestNearCurrent = objNull;
		_closestDistance = DZE_snapDistance;

		if (snapActionStateSelect == _manual) then {

			// Manual mode does not use the auto-selected held point; clear the previous auto selection once.
			if (!isNull _closestHeldPrevious) then {
				_closestHeldPrevious setObjectTexture DZE_SNAP_POINT_RESET;
				_closestHeldPrevious = objNull;
			};

			///////////////////////////////////////////////////////////////////////////
			//
			//				Manual Snap
			//
			///////////////////////////////////////////////////////////////////////////

			_heldManual = if (DZE_SnapSelIdx >= 0 && {DZE_SnapSelIdx < count snapGizmos}) then {snapGizmos select DZE_SnapSelIdx} else {objNull};
			_nearCandidates = if (!isNull _heldManual) then {_heldManual nearObjects [DZE_SNAP_HELPER_CLASS,_closestDistance]} else {[]};

			{							// scan only spatially close nearby points
				_nearCurrent = _x;
				_connectionValid = false;
				_isNearbyCandidate = _nearCurrent in snapGizmosNearby;

				if (_isNearbyCandidate) then {
					_distance = _heldManual distance _nearCurrent;
				};

				if (_isNearbyCandidate && {_distance < _closestDistance}) then {
					_connection = [_objectHelper,_heldManual,_nearCurrent] call DZE_fnc_snapRelativeOrientation;
					_connectionValid = count _connection > 0 && {_connection select 0};
				};

				if (_connectionValid) then {	// found a closer compatible connection
					_closestDistance = _distance;
					_closestNearCurrent = _nearCurrent;	// update current
				};
			} forEach _nearCandidates;

			_nearTargetChanged = _closestNearCurrent != _closestNearPrevious;
			if (_nearTargetChanged && {!isNull _closestNearPrevious}) then {_closestNearPrevious setObjectTexture DZE_SNAP_POINT_RESET};	// near OFF

			if (!isNull _closestNearCurrent) then {
				if (_nearTargetChanged) then {
					_closestNearCurrent setObjectTexture DZE_SNAP_POINT_FOUND;	// near ON
					_closestNearPrevious = _closestNearCurrent;
				};

				if (_nearTargetChanged || {_now >= _nextSnapTextAt}) then {
					[_closestNearCurrent] call DZE_fnc_snapText;
					_nextSnapTextAt = _now + _snapTextInterval;
				};

				if (!helperAttached) then {[_object,_objectHelper,_heldManual,_closestNearCurrent,_generation,_lastSearchRevision,_stateRevision] call DZE_fnc_snapObject};
			} else {
				_closestNearPrevious = objNull;
			};
		} else {

			///////////////////////////////////////////////////////////////////////////
			//
			//				Auto Snap
			//
			///////////////////////////////////////////////////////////////////////////

			{
				_heldCurrent = _x;
				_nearCandidates = _heldCurrent nearObjects [DZE_SNAP_HELPER_CLASS,_closestDistance];
				{
					_nearCurrent = _x;
					_connectionValid = false;
					_isNearbyCandidate = _nearCurrent in snapGizmosNearby;
					if (_isNearbyCandidate) then {
						_distance = _nearCurrent distance _heldCurrent;
					};

					if (_isNearbyCandidate && {_distance < _closestDistance}) then {
						_connection = [_objectHelper,_heldCurrent,_nearCurrent] call DZE_fnc_snapRelativeOrientation;
						_connectionValid = count _connection > 0 && {_connection select 0};
					};

					if (_connectionValid) then {	// found a closer compatible connection
						_closestDistance = _distance;
						_closestHeldCurrent = _heldCurrent;	// update current
						_closestNearCurrent = _nearCurrent;	// paired points
					};
				} forEach _nearCandidates;
			} forEach snapGizmos;

			_pairChanged = _closestHeldCurrent != _closestHeldPrevious || {_closestNearCurrent != _closestNearPrevious};
			if (_pairChanged && {!isNull _closestHeldPrevious}) then {_closestHeldPrevious setObjectTexture DZE_SNAP_POINT_RESET};	// held OFF
			if (_pairChanged && {!isNull _closestNearPrevious}) then {_closestNearPrevious setObjectTexture DZE_SNAP_POINT_RESET};	// near OFF

			if (!isNull _closestNearCurrent) then {
				if (_pairChanged) then {
					_closestHeldCurrent setObjectTexture DZE_SNAP_POINT_FOUND;	// held ON
					_closestHeldPrevious = _closestHeldCurrent;

					_closestNearCurrent setObjectTexture DZE_SNAP_POINT_FOUND;	// near ON
					_closestNearPrevious = _closestNearCurrent;
				};

				if (_pairChanged || {_now >= _nextSnapTextAt}) then {
					[_closestNearCurrent] call DZE_fnc_snapText;
					_nextSnapTextAt = _now + _snapTextInterval;
				};

				if (!helperAttached) then {
					[_object,_objectHelper,_closestHeldCurrent,_closestNearCurrent,_generation,_lastSearchRevision,_stateRevision] call DZE_fnc_snapObject;
				};
			} else {
				_closestHeldPrevious = objNull;
				_closestNearPrevious = objNull;
			};
		};
	} else {
		// Keep the target label alive without repeating the point-pair distance search.
		if (!DZE_snapRefresh && {!isNull _closestNearPrevious} && {_now >= _nextSnapTextAt}) then {
			[_closestNearPrevious] call DZE_fnc_snapText;
			_nextSnapTextAt = _now + _snapTextInterval;
		};
	};

	uiSleep 0.02;
};

// Do not let an ending stale worker release a newer generation.
isNil {
	if (DZE_snapDistanceCheckGeneration == _generation && {DZE_snapDistanceCheckRevision == _stateRevision}) then {
		DZE_snapDistanceCheckRevision = -1;
		DZE_snapDistanceCheckRunning = false;
	};
};
