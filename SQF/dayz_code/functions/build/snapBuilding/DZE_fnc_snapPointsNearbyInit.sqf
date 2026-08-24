///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapPointsNearbyInit
//
//	Description:	Spatially filters reachable nearby objects, then builds and atomically publishes
//			session-owned snap points only for those candidates.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, session, refreshGeneration, revision] call DZE_fnc_snapPointsNearbyInit
//
//	Parameters:	object: Object - Object being built
//			session: Number - Expected snap-state session
//			refreshGeneration: Number - Optional refresh generation
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Array - Created nearby snap-point helpers
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_POINTS_NEARBY_INIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_NEARBY_INIT
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsNearbyInit]: Function called with argumentes: %1',_this];
#endif

local _object = p0;
local _expectedSession = if (count _this > 1) then {p1} else {DZE_snapStateSession};
local _refreshGeneration = if (count _this > 2) then {p2} else {-1};
local _expectedRevision = if (count _this > 3) then {p3} else {DZE_snapStateRevision};

if (_expectedSession != DZE_snapStateSession ||
	{_expectedRevision != DZE_snapStateRevision} ||
	{DZE_snapPointsSession != _expectedSession} ||
	{_refreshGeneration >= 0 && {_refreshGeneration != DZE_snapRefreshGeneration}}) exitWith {[]};

// Unsorted nearObjects avoids the full nearestObjects sort; snap-point-radius filtering follows below.
local _nearbyObjects = (_object nearObjects ['All',DZE_snapRadius]) - [_object];
local _oldSnapGizmosNearby = [];
local _newSnapGizmosNearby = [];
local _published = false;
local _cachedTypes = [];
local _cachedPoints = [];
local _cachedNames = [];
local _cachedMetadata = [];
local _cachedPointRadii = [];
local _nearbyObject = objNull;
local _type = '';
local _nearbyPoints = [];
local _displayName = '';
local _vectorDirAndUp = [];
local _pointMetadata = [];
local _metadata = [];
local _pointType = SNAP_POINT_TYPE_INVALID;
local _normal = [];
local _snapGizmo = objNull;
local _cacheIndex = -1;
local _snapPoint = [];
local _snapPosition = ORIGIN;
local _heldPointRadius = DZE_snapHeldPointRadius;
local _candidatePadding = DZE_snapCandidatePadding;
local _nearbyPointRadius = 0;
local _pointDistance = 0;
local _candidateDistance = 0;
local _candidateObjects = 0;

{
	_nearbyObject = _x;
	_type = typeOf _nearbyObject;
	_cacheIndex = _cachedTypes find _type;

	if (_cacheIndex < 0) then {
		_nearbyPoints = [_nearbyObject,false] call DZE_fnc_snapPointsForObject;
		_displayName = getText (configFile >> 'CfgVehicles' >> _type >> 'displayName');
		_pointMetadata = [];
		_nearbyPointRadius = 0;
		{
			_snapPoint = _x;
			_pointMetadata set [count _pointMetadata,_snapPoint call DZE_fnc_snapPointMetadata];
			_snapPosition = [_snapPoint select 0,_snapPoint select 1,_snapPoint select 2];
			_pointDistance = vectorMagnitude(_snapPosition);
			if (_pointDistance > _nearbyPointRadius) then {_nearbyPointRadius = _pointDistance};
		} forEach _nearbyPoints;
		_cacheIndex = count _cachedTypes;
		_cachedTypes set [_cacheIndex,_type];
		_cachedPoints set [_cacheIndex,_nearbyPoints];
		_cachedNames set [_cacheIndex,_displayName];
		_cachedMetadata set [_cacheIndex,_pointMetadata];
		_cachedPointRadii set [_cacheIndex,_nearbyPointRadius];
	} else {
		_nearbyPoints = _cachedPoints select _cacheIndex;
		_displayName = _cachedNames select _cacheIndex;
		_pointMetadata = _cachedMetadata select _cacheIndex;
		_nearbyPointRadius = _cachedPointRadii select _cacheIndex;
	};

	// Retain the refresh movement padding so objects cannot enter snap range before the next rebuild.
	_candidateDistance = _heldPointRadius + _nearbyPointRadius + DZE_snapDistance + _candidatePadding;
	if (count _nearbyPoints > 0 && {_object distance _nearbyObject <= _candidateDistance}) then {
		_candidateObjects = _candidateObjects + 1;
		_vectorDirAndUp = getVectorDirAndUp(_nearbyObject);
		{
			_snapPoint = _x;
			_metadata = _pointMetadata select _forEachIndex;
			_pointType = _metadata select 0;
			_normal = _metadata select 1;
			_snapGizmo = DZE_SNAP_HELPER_CLASS createVehicleLocal ORIGIN;
			_snapGizmo setObjectTexture DZE_SNAP_POINT_RESET;	// green
			// Keep the source object so the final snap reads its current world orientation.
			_snapGizmo setVariable ['snappoint', [_displayName,_snapPoint select 3,_vectorDirAndUp,_nearbyObject,_pointType,_normal], false];
			_snapGizmo setVariable ['snapSession',_expectedSession,false];

			_snapPosition = [_snapPoint select 0,_snapPoint select 1,_snapPoint select 2];
			_snapGizmo attachTo [_nearbyObject, _snapPosition];
			_newSnapGizmosNearby set [count _newSnapGizmosNearby, _snapGizmo];	// rebuild helper list
		} forEach _nearbyPoints;
	};
} forEach _nearbyObjects;

// Publish only if the state and optional refresh generation are still current.
isNil {
	if (_expectedSession == DZE_snapStateSession &&
		{_expectedRevision == DZE_snapStateRevision} &&
		{DZE_snapPointsSession == _expectedSession} &&
		{_refreshGeneration < 0 || {_refreshGeneration == DZE_snapRefreshGeneration}}) then {
		_oldSnapGizmosNearby = if (DZE_snapNearbyPointsSession == _expectedSession) then {+snapGizmosNearby} else {[]};
		snapGizmosNearby = _newSnapGizmosNearby;
		DZE_snapNearbyPointsSession = _expectedSession;
		_published = true;
	};
};

if (!_published) exitWith {
	{deleteVehicle _x} forEach _newSnapGizmosNearby;
	[]
};

// Delete only the list detached during the atomic publication.
{deleteVehicle _x} forEach _oldSnapGizmosNearby;
call DZE_fnc_snapDistanceSearchRequest;

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_NEARBY_INIT
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsNearbyInit]: Nearby snap points published | Session/Revision/Generation: %1/%2/%3 | Scanned/Candidates/Types/Gizmos: %4/%5/%6/%7 | Held radius/Padding: %8/%9',_expectedSession,_expectedRevision,_refreshGeneration,count _nearbyObjects,_candidateObjects,count _cachedTypes,count _newSnapGizmosNearby,_heldPointRadius,_candidatePadding];
#endif

_newSnapGizmosNearby
