///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewMove
//
//	Description:	Moves a modular-build preview along a world or helper-local axis and prevents
//			configured objects from being placed below terrain or sea level.
//	Groups:		Build, Modular Building
//
//	Syntax:		[buildContext, moveIndex, distance, checkCollision] call DZE_fnc_buildPreviewMove
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//			moveIndex: Number - BUILD_MOVE_* direction index
//			distance: Number - Signed movement distance in meters
//			checkCollision: Boolean - Optional collision check; defaults to true
//
//	Return Value:	Array - Updated modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_MOVE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#define notify          if (!_tooLow) then {_tooLow = true; _notify = true}

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_MOVE
	diag_log format['[Client Debug]: [DZE_fnc_buildPreviewMove]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 3}) exitWith {[]};

local _context = p0;
local _moveIndex = p1;
local _distance = p2;
local _checkCollision = if (count _this > 3) then {p3} else {true};

if (typeName _context != 'ARRAY' || {count _context < BUILD_CONTEXT_SIZE}) exitWith {_context};

local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;
local _heightHelper = _context select BUILD_CONTEXT_HEIGHT_HELPER;
local _preventUnderground = _context select BUILD_CONTEXT_PREVENT_UNDERGROUND;
local _minHeight = _context select BUILD_CONTEXT_MIN_HEIGHT;
local _positionRelative = _context select BUILD_CONTEXT_POSITION_RELATIVE;
local _directionY = _context select BUILD_CONTEXT_DIRECTION_Y;
local _displayName = _context select BUILD_CONTEXT_DISPLAY_NAME;
local _tooLow = _context select BUILD_CONTEXT_TOO_LOW;
local _playerDirection = getDir player;
local _moveHeading = _directionY - ([0,_playerDirection] select helperAttached);
local _angle = 0;
local _moveVector = ORIGIN;
local _notify = false;

call {
	if (_moveIndex == 0) exitWith {_moveVector = +VECTOR_UP};
	if (_moveIndex == 1) exitWith {_moveVector = +VECTOR_DOWN};
	if (_moveIndex == 2) exitWith {_angle = _moveHeading + 90; _moveVector = getDirToVectorDir(_angle)};
	if (_moveIndex == 3) exitWith {_angle = _moveHeading - 90; _moveVector = getDirToVectorDir(_angle)};
	if (_moveIndex == 4) exitWith {_moveVector = getDirToVectorDir(_moveHeading)};
	if (_moveIndex == 5) exitWith {_angle = _moveHeading + 180; _moveVector = getDirToVectorDir(_angle)};
	if (_moveIndex == 6) exitWith {_moveVector = vectorNormalized(vectorUp _objectHelper)};
	if (_moveIndex == 7) exitWith {_moveVector = v3Inverse(vectorNormalized(vectorUp _objectHelper))};
	if (_moveIndex == 8) exitWith {_moveVector = getRotationMatrix(_objectHelper) select 0};
	if (_moveIndex == 9) exitWith {_moveVector = v3Inverse(getRotationMatrix(_objectHelper) select 0)};
	if (_moveIndex == 10) exitWith {_moveVector = vectorNormalized(vectorDir _objectHelper)};
	if (_moveIndex == 11) exitWith {_moveVector = v3Inverse(vectorNormalized(vectorDir _objectHelper))};
};

local _delta = v3Multiply(_moveVector,_distance);

if (_preventUnderground) then {
	local _beginASL = getPosASL _heightHelper;
	local _endASL = v3Add(_beginASL,_delta);
	local _intersectionASL = [];
	local _epsilon = 0.01;
	local _beginMinimumASL = (0 max getTerrainHeightASL _beginASL) + _minHeight;
	local _beginClearance = (_beginASL select 2) - _beginMinimumASL;

	// A zero-distance check has no line segment. A segment beginning at the allowed surface must also
	// use its end height because terrainIntersectAtASL reports the valid start point as an intersection.
	if (_distance != 0 && {_beginClearance > _epsilon}) then {_intersectionASL = [_beginASL,_endASL] call DZE_fnc_terrainIntersectAtASL};

	if (count _intersectionASL > 0) then {
		notify;
		_delta = v3Diff(_intersectionASL,_beginASL);
	} else {
		local _heightDifference = 0 max ((0 max getTerrainHeightASL _endASL) + _minHeight - (_endASL select 2));
		if (_heightDifference > _epsilon) then {
			notify;
			addZ(_delta,_heightDifference);
		};
	};
};

if (helperAttached) then {
	_positionRelative = v3Add(_positionRelative,_delta);
	_objectHelper attachTo [player,_positionRelative];
} else {
	_objectHelper setPosASL (v3Add(getPosASL _objectHelper,_delta));
};

/**
local _newPosASL	= v3Add(getPosASL _objectHelper, _delta);
local _strASL		= str _newPosASL;

if (helperAttached) then {detach _objectHelper};

_objectHelper setPosASL _newPosASL;

waitUntil {str visiblePositionASL _objectHelper == _strASL};	/// uiSleep 0.04;

if (helperAttached) then {
	_objectHelper attachTo [player];	// re-attach helper
	/// _context call DZE_fnc_buildCollisionCheck;
};
**/

local _modelPositionASL = getPosASL modelSelect;
local _modelPositionZ = getZ(_modelPositionASL);
local _level = localize (['STR_BUILD_PLACEMENT_BELOW_GROUND','STR_BUILD_PLACEMENT_BELOW_SEA_LEVEL'] select surfaceIsWater _modelPositionASL);
local _floodArea = _modelPositionZ < DZE_maxSeaLevel && {_distance == 0};

// Warn only when the player tries to place the object so this message does not coincide with the next one.
if (DZE_buildOnWater && {_floodArea}) then {localize 'STR_BUILD_ENVIRONMENT_HIGH_TIDE_WARNING' call DZE_fnc_rollingMessages};
if (_notify) then {format [localize 'STR_BUILD_PLACEMENT_UNDERGROUND_DENIED',_displayName,_level] call DZE_fnc_rollingMessages};

_context set [BUILD_CONTEXT_POSITION_RELATIVE,_positionRelative];
_context set [BUILD_CONTEXT_TOO_LOW,_tooLow];
_context set [BUILD_CONTEXT_MODEL_POSITION_ASL,_modelPositionASL];

if (_checkCollision && {helperAttached && {BUILD_STAGE == BUILD_HOTKEYS_ACTIVE}}) then {
	_context call DZE_fnc_buildCollisionCheck;
};

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_MOVE
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewMove]: Preview moved | Index: %1 | Distance: %2 | Delta: %3 | Position ASL: %4',_moveIndex,_distance,_delta,_modelPositionASL];
#endif

_context

#undef notify
