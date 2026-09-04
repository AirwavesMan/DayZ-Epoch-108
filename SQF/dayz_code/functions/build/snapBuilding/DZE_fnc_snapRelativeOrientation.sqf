///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapRelativeOrientation
//
//	Description:	Selects the nearest orthogonal orientation relative to the target object.
//			Connection normals guide edge orientation without rejecting an object pair.
//	Groups:		Build, Snap Building
//
//	Syntax:		[objectHelper, heldSnapPoint, nearbySnapPoint] call DZE_fnc_snapRelativeOrientation
//
//	Parameters:	objectHelper: Object - Build helper whose orientation is evaluated
//			heldSnapPoint: Object - Held-object snap helper
//			nearbySnapPoint: Object - Nearby snap helper
//
//	Return Value:	Array - [compatible, vectorDirAndUp, relativeMatrix, normalDot, targetObject]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_RELATIVE_ORIENTATION

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_RELATIVE_ORIENTATION
	diag_log format ['[Client Debug]: [DZE_fnc_snapRelativeOrientation]: Function called with arguments: %1',_this];
#endif

local _objectHelper = p0;
local _heldSnapPoint = p1;
local _nearbySnapPoint = p2;
local _result = [false,[],[],1,objNull];

if (isNull _objectHelper || {isNull _heldSnapPoint} || {isNull _nearbySnapPoint}) exitWith {_result};
if !([_heldSnapPoint,_nearbySnapPoint] call DZE_fnc_snapPointsCompatible) exitWith {_result};

local _heldData = _heldSnapPoint getVariable ['snappoint',[]];
local _nearbyData = _nearbySnapPoint getVariable ['snappoint',[]];

local _heldType = SNAP_POINT_TYPE_INVALID;
local _nearbyType = SNAP_POINT_TYPE_INVALID;
local _heldNormal = [];
local _nearbyNormal = [];

if (count _heldData > 5) then {
	_heldType = _heldData select 4;
	_heldNormal = _heldData select 5;
};
if (count _nearbyData > 5) then {
	_nearbyType = _nearbyData select 4;
	_nearbyNormal = _nearbyData select 5;
};
local _targetObject = _nearbyData select 3;

local _normalConstraint = _heldType == SNAP_POINT_TYPE_EDGE &&
	{_nearbyType == SNAP_POINT_TYPE_EDGE} &&
	{typeName _heldNormal == 'ARRAY'} &&
	{count _heldNormal == 3} &&
	{typeName _nearbyNormal == 'ARRAY'} &&
	{count _nearbyNormal == 3} &&
	{vectorMagnitude(_heldNormal) > SNAP_POINT_NORMAL_EPSILON} &&
	{vectorMagnitude(_nearbyNormal) > SNAP_POINT_NORMAL_EPSILON};

local _heldNormalAbsolute = [];
local _heldNormalAxis = X_AXIS;
local _heldNormalSign = 1;
local _heldNormalAxisAligned = false;
local _heldNormalOther = 0;

if (_normalConstraint) then {
	_heldNormalAbsolute = [abs(_heldNormal select X_AXIS),abs(_heldNormal select Y_AXIS),abs(_heldNormal select Z_AXIS)];
	if ((_heldNormalAbsolute select Y_AXIS) > (_heldNormalAbsolute select _heldNormalAxis)) then {_heldNormalAxis = Y_AXIS};
	if ((_heldNormalAbsolute select Z_AXIS) > (_heldNormalAbsolute select _heldNormalAxis)) then {_heldNormalAxis = Z_AXIS};
	if ((_heldNormal select _heldNormalAxis) < 0) then {_heldNormalSign = -1};
	_heldNormalOther = (_heldNormalAbsolute select X_AXIS) + (_heldNormalAbsolute select Y_AXIS) + (_heldNormalAbsolute select Z_AXIS) - (_heldNormalAbsolute select _heldNormalAxis);
	_heldNormalAxisAligned = (_heldNormalAbsolute select _heldNormalAxis) >= (1 - SNAP_POINT_NORMAL_EPSILON) && {_heldNormalOther <= SNAP_POINT_NORMAL_EPSILON};
};

if (isNull _targetObject) exitWith {_result};

local _targetDir = vectorNormalized(vectorDir _targetObject);
local _targetUp = vectorNormalized(vectorUp _targetObject);
local _targetRight = vectorCrossProduct(_targetDir,_targetUp);
local _heldDir = vectorNormalized(vectorDir _objectHelper);
local _heldUp = vectorNormalized(vectorUp _objectHelper);
local _heldRight = vectorCrossProduct(_heldDir,_heldUp);

if (vectorMagnitude(_targetDir) <= SNAP_POINT_NORMAL_EPSILON ||
	{vectorMagnitude(_targetUp) <= SNAP_POINT_NORMAL_EPSILON} ||
	{vectorMagnitude(_targetRight) <= SNAP_POINT_NORMAL_EPSILON} ||
	{vectorMagnitude(_heldDir) <= SNAP_POINT_NORMAL_EPSILON} ||
	{vectorMagnitude(_heldUp) <= SNAP_POINT_NORMAL_EPSILON} ||
	{vectorMagnitude(_heldRight) <= SNAP_POINT_NORMAL_EPSILON}) exitWith {_result};

// Orthonormalize both bases before comparing their relative axes.
_targetRight = vectorNormalized(_targetRight);
_targetUp = vectorNormalized(vectorCrossProduct(_targetRight,_targetDir));
local _targetMatrix = [_targetRight,_targetDir,_targetUp];
_heldRight = vectorNormalized(_heldRight);
_heldUp = vectorNormalized(vectorCrossProduct(_heldRight,_heldDir));

local _heldDirLocal = [
	vectorDotProduct(_heldDir,_targetRight),
	vectorDotProduct(_heldDir,_targetDir),
	vectorDotProduct(_heldDir,_targetUp)
];
local _heldUpLocal = [
	vectorDotProduct(_heldUp,_targetRight),
	vectorDotProduct(_heldUp,_targetDir),
	vectorDotProduct(_heldUp,_targetUp)
];

// Select the closest of the 24 proper orthogonal rotations relative to the target basis.
local _relativeAxes = [VECTOR_FRONT,VECTOR_RIGHT,VECTOR_BACK,VECTOR_LEFT,VECTOR_UP,VECTOR_DOWN];
local _candidateDirLocal = [];
local _candidateUpLocal = [];
local _candidateDirScore = 0;
local _candidateUpScore = 0;
local _candidateScore = 0;
local _candidateRightLocal = [];
local _candidateMatrix = [];
local _candidateNormalLocal = [];
local _candidateNormalDot = 1;
local _candidateAllowed = true;
local _bestScore = -3;
local _bestDirLocal = [];
local _bestUpLocal = [];

for '_dirIndex' from 0 to 5 do {
	_candidateDirLocal = _relativeAxes select _dirIndex;

	for '_upIndex' from 0 to 5 do {
		_candidateUpLocal = _relativeAxes select _upIndex;

		if (abs(vectorDotProduct(_candidateDirLocal,_candidateUpLocal)) <= SNAP_POINT_NORMAL_EPSILON) then {
			_candidateAllowed = true;

			if (_normalConstraint) then {
				_candidateRightLocal = vectorNormalized(vectorCrossProduct(_candidateDirLocal,_candidateUpLocal));
				_candidateMatrix = [_candidateRightLocal,_candidateDirLocal,_candidateUpLocal];
				if (_heldNormalAxisAligned) then {
					_candidateNormalLocal = +(_candidateMatrix select _heldNormalAxis);
					if (_heldNormalSign < 0) then {_candidateNormalLocal = v3Inverse(_candidateNormalLocal)};
				} else {
					_candidateNormalLocal = vectorNormalized(matrixMultiply3D(_heldNormal,_candidateMatrix));
				};
				_candidateNormalDot = vectorDotProduct(_candidateNormalLocal,_nearbyNormal);
				// Prefer the nearest corner or opposing-face connection instead of rejecting the pair.
				_candidateAllowed = _candidateNormalDot <= SNAP_POINT_CONNECTION_DOT;
			};

			if (_candidateAllowed) then {
				// Resolve both function calls before addition so SQF cannot bind + to the second code operand.
				_candidateDirScore = vectorDotProduct(_candidateDirLocal,_heldDirLocal);
				_candidateUpScore = vectorDotProduct(_candidateUpLocal,_heldUpLocal);
				_candidateScore = _candidateDirScore + _candidateUpScore;

				if (_candidateScore > _bestScore) then {
					_bestScore = _candidateScore;
					_bestDirLocal = +_candidateDirLocal;
					_bestUpLocal = +_candidateUpLocal;
				};
			};
		};
	};
};

if (count _bestDirLocal != 3 || {count _bestUpLocal != 3}) exitWith {_result};

local _bestRightLocal = vectorCrossProduct(_bestDirLocal,_bestUpLocal);
local _desiredDir = vectorNormalized(matrixMultiply3D(_bestDirLocal,_targetMatrix));
local _desiredUp = vectorNormalized(matrixMultiply3D(_bestUpLocal,_targetMatrix));
local _desiredRight = vectorNormalized(vectorCrossProduct(_desiredDir,_desiredUp));
_desiredUp = vectorNormalized(vectorCrossProduct(_desiredRight,_desiredDir));
local _desiredMatrix = [_desiredRight,_desiredDir,_desiredUp];
local _normalDot = 1;

if (_normalConstraint) then {
	local _heldNormalWorld = vectorNormalized(matrixMultiply3D(_heldNormal,_desiredMatrix));
	local _nearbyNormalWorld = vectorNormalized(matrixMultiply3D(_nearbyNormal,_targetMatrix));
	_normalDot = vectorDotProduct(_heldNormalWorld,_nearbyNormalWorld);
};

// A valid target and orthogonal result are sufficient; point metadata never rejects object compatibility.
local _compatible = true;

_result = [_compatible,[_desiredDir,_desiredUp],[_bestRightLocal,_bestDirLocal,_bestUpLocal],_normalDot,_targetObject];

#ifdef DEBUG_DZE_FNC_SNAP_RELATIVE_ORIENTATION
	diag_log format ['[Client Debug]: [DZE_fnc_snapRelativeOrientation]: Relative orientation selected | Compatible: %1 | Relative matrix: %2 | Normal dot: %3 | VectorDirAndUp: %4 | Target: %5',_compatible,_result select 2,_normalDot,_result select 1,_targetObject];
#endif

_result
