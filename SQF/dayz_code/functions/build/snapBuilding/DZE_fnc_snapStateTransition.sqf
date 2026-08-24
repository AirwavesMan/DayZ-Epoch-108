///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapStateTransition
//
//	Description:	Applies one complete snap-state transition and synchronizes its UI and helpers.
//	Groups:		Build, Snap Building
//
//	Syntax:		[command, object, class, objectHelper, selectedPoint, expectedSession, expectedRevision] call DZE_fnc_snapStateTransition
//
//	Parameters:	command: String - Requested snap-state transition
//			object: Object - Object being built
//			class: String - Object class name
//			objectHelper: Object - Build helper
//			selectedPoint: Number - Requested held snap-point index
//			expectedSession: Number - Expected snap-state session
//			expectedRevision: Number - Expected snap-state revision
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_STATE_TRANSITION

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_STATE_TRANSITION
	diag_log format ['[Client Debug]: [DZE_fnc_snapStateTransition]: Function called with argumentes: %1',_this];
#endif

local _command = p0;
local _object = p1;
local _className = p2;
local _objectHelper = p3;
local _selectedPoint = if (count _this > 4) then {p4} else {-1};
local _expectedSession = if (count _this > 5) then {p5} else {-1};
local _expectedRevision = if (count _this > 6) then {p6} else {-1};

local _recognized = _command in ['Init','SetOff','Reset','SetAuto','SetManual','Shutdown'];
if (!_recognized) exitWith {};

local _off = localize 'STR_SNAPPING_STATE_OFF';
local _snappingWasOff = false;
local _transitionSession = -1;
local _transitionRevision = -1;
local _resultSession = _transitionSession;
local _transitionAcquired = false;

// Acquire one revision for the entire state transition and reject delayed input from older UI state.
if ((_command == 'Init' || {_expectedSession < 0 || {_expectedSession == DZE_snapStateSession}}) &&
	{_command == 'Init' || {_expectedRevision < 0 || {_expectedRevision == DZE_snapStateRevision}}}) then {
	_transitionSession = DZE_snapStateSession;
	_resultSession = _transitionSession;
	DZE_snapStateRevision = DZE_snapStateRevision + 1;
	_transitionRevision = DZE_snapStateRevision;
	_snappingWasOff = isNil 'snapActionState';
	if (!_snappingWasOff) then {_snappingWasOff = snapActionState == _off};
	_transitionAcquired = true;
};

if (!_transitionAcquired) exitWith {};

local _points = [_object,true] call DZE_fnc_snapPointsForObject;
local _on = localize 'STR_SNAPPING_STATE_ON';
local _manual = localize 'STR_SNAPPING_MODE_MANUAL';
local _nextState = '';
local _nextSelectState = 'Auto';
local _nextTabIndex = 0;		// tab hotkey array index
local _nextPointIndex = -2;	// array of object snapping points
local _showRoot = 0;
local _showMode = 0;
local _showPoints = 0;
local _stopDistanceCheck = false;
local _startDistanceCheck = false;
local _initializePoints = false;
local _cleanupPoints = false;
local _resetHelper = false;
local _selectHelper = false;
local _spawnCleanup = false;
local _advanceSession = false;
local _statePublished = false;
local _pointsReady = false;

call {
	if (_command == 'Init') exitWith {
		_nextState = _off;
		_showRoot = 1;
		_stopDistanceCheck = true;
		_cleanupPoints = true;
		_spawnCleanup = true;
		_advanceSession = true;
	};

	if (_command == 'SetOff') exitWith {
		_nextState = _off;
		_showRoot = 1;
		_stopDistanceCheck = true;
		_cleanupPoints = true;
		_resetHelper = true;
	};

	if (_command == 'Reset') exitWith {
		_nextState = _off;
		_showRoot = 1;
		_stopDistanceCheck = true;
		_cleanupPoints = true;
	};

	if (_command == 'SetAuto') exitWith {
		_nextState = _on;
		_nextTabIndex = 1;
		_nextPointIndex = -1;
		_showRoot = 1;
		_showMode = 1;
		// Auto mode uses the visual base or center instead of a manually selected snap-point pivot.
		_resetHelper = !_snappingWasOff && {snapActionStateSelect == _manual} && {DZE_SnapSelIdx >= 0};
		_initializePoints = _snappingWasOff || {count snapGizmos == 0} || {!DZE_snapPointsReady};
		_startDistanceCheck = true;
	};

	if (_command == 'SetManual') exitWith {
		_nextState = _on;
		_nextSelectState = _manual;
		_nextTabIndex = 1;
		_nextPointIndex = -1;
		_showRoot = 1;
		_showMode = 1;
		_showPoints = 1;
		_initializePoints = _snappingWasOff || {count snapGizmos == 0} || {!DZE_snapPointsReady};
		_startDistanceCheck = true;

		if (_selectedPoint >= 0 && {_selectedPoint < count _points}) then {
			_nextState = 'Selected';
			_nextTabIndex = _selectedPoint + 2;
			_nextPointIndex = _selectedPoint;
			_selectHelper = true;
		};
	};

	if (_command == 'Shutdown') exitWith {
		_nextState = _off;
		_stopDistanceCheck = true;
		_cleanupPoints = true;
		_advanceSession = true;
	};

};

if (_transitionSession != DZE_snapStateSession || {_transitionRevision != DZE_snapStateRevision}) exitWith {};
if (_stopDistanceCheck) then {[_transitionSession,_transitionRevision] call DZE_fnc_snapDistanceCheckStop};
if (_cleanupPoints) then {_resultSession = [_transitionSession,_advanceSession,_transitionRevision] call DZE_fnc_snapPointsCleanup};
if (_resultSession < 0) exitWith {};

// A newer build may start while detached helpers are being deleted; publish state uninterruptibly.
if (_resultSession == DZE_snapStateSession && {_transitionRevision == DZE_snapStateRevision}) then {
	// These globals are written only here for the active modular-build implementation.
	snapActionState = _nextState;
	snapActionStateSelect = _nextSelectState;
	DZE_SnapTabIdx = _nextTabIndex;
	DZE_SnapSelIdx = _nextPointIndex;
	if (_initializePoints) then {DZE_snapPointsReady = false};
	_statePublished = true;
};

if (!_statePublished) exitWith {};

if (_resetHelper) then {[_object,_objectHelper,_resultSession,_transitionRevision] call DZE_fnc_snapMoveHelper};

if (_initializePoints) then {
	[_object,_points,_resultSession,_transitionRevision] call DZE_fnc_snapPointsInit;
	[_object,_resultSession,-1,_transitionRevision] call DZE_fnc_snapPointsNearbyInit;

	// Publish readiness only after both helper collections belong to this complete transition.
	if (_resultSession == DZE_snapStateSession &&
		{_transitionRevision == DZE_snapStateRevision} &&
		{DZE_snapPointsSession == _resultSession} &&
		{DZE_snapNearbyPointsSession == _resultSession}) then {
		DZE_snapPointsReady = true;
		_pointsReady = true;
	};
} else {
	_pointsReady = !_startDistanceCheck || {DZE_snapPointsReady};
};

if (_transitionRevision != DZE_snapStateRevision || {_startDistanceCheck && {!_pointsReady}}) exitWith {};

if (_selectHelper) then {
	[_object,_objectHelper,_resultSession,_transitionRevision] call DZE_fnc_snapMoveHelper;
	if (_resultSession == DZE_snapStateSession && {_transitionRevision == DZE_snapStateRevision}) then {
		{
			_x setObjectTexture ([DZE_SNAP_POINT_RESET,DZE_SNAP_POINT_FOUND] select (_forEachIndex == DZE_SnapSelIdx));
		} forEach snapGizmos;
	};
};

[_showRoot,_showMode,_showPoints,_object,_className,_objectHelper,_points,_resultSession,_transitionRevision] call DZE_fnc_snapActionCleanup;

if (_startDistanceCheck) then {[_object,_objectHelper,_resultSession,_transitionRevision] call DZE_fnc_snapDistanceCheckStart};
if (_spawnCleanup) then {[_object,_className,_objectHelper,_resultSession] spawn DZE_fnc_snapCleanupOnBuildEnd};
