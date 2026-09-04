///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapPointsInit
//
//	Description:	Creates and atomically publishes session-owned snap points on the held object.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, points, session, revision] call DZE_fnc_snapPointsInit
//
//	Parameters:	object: Object - Object being built
//			points: Array - Held-object snap-point definitions
//			session: Number - Expected snap-state session
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Array - Created local snap-point helpers
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_POINTS_INIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_INIT
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsInit]: Function called with arguments: %1',_this];
#endif

local _object = p0;
local _points = p1;
local _expectedSession = p2;
local _expectedRevision = p3;

if (_expectedSession != DZE_snapStateSession || {_expectedRevision != DZE_snapStateRevision}) exitWith {[]};

local _oldSnapGizmos = [];
local _newSnapGizmos = [];
local _published = false;
local _snapGizmo = objNull;
local _vectorDirAndUp = getVectorDirAndUp(_object);
local _point = [];
local _metadata = [];
local _pointType = SNAP_POINT_TYPE_INVALID;
local _normal = [];
local _snapPosition = ORIGIN;

{
	_point = _x;
	_metadata = _point call DZE_fnc_snapPointMetadata;
	_pointType = _metadata select 0;
	_normal = _metadata select 1;
	_snapPosition = [_point select 0,_point select 1,_point select 2];
	_snapGizmo = DZE_SNAP_HELPER_CLASS createVehicleLocal ORIGIN;
	_snapGizmo setObjectTexture DZE_SNAP_POINT_RESET;	// green
	_snapGizmo setVariable ['snappoint', ['', _point select 3, _vectorDirAndUp, _object, _pointType, _normal], false];
	_snapGizmo setVariable ['snapSession',_expectedSession,false];
	_snapGizmo attachTo [_object,_snapPosition];
	_newSnapGizmos set [count _newSnapGizmos,_snapGizmo];
} forEach _points;

// Publish only if this session still owns the build state; the swap itself must not be interrupted.
isNil {
	if (_expectedSession == DZE_snapStateSession && {_expectedRevision == DZE_snapStateRevision}) then {
		_oldSnapGizmos = if (DZE_snapPointsSession == _expectedSession) then {snapGizmos} else {[]};
		snapGizmos = _newSnapGizmos;
		DZE_snapPointsSession = _expectedSession;
		_published = true;
	};
};

if (!_published) exitWith {
	{deleteVehicle _x} forEach _newSnapGizmos;
	[]
};

{deleteVehicle _x} forEach _oldSnapGizmos;

#ifdef DEBUG_DZE_FNC_SNAP_POINTS_INIT
	diag_log format ['[Client Debug]: [DZE_fnc_snapPointsInit]: Held snap points published | Session/Revision: %1/%2 | Gizmos: %3',_expectedSession,_expectedRevision,count _newSnapGizmos];
#endif

_newSnapGizmos
