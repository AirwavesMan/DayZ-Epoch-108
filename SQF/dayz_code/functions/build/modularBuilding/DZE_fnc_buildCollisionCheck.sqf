///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildCollisionCheck
//
//	Description:	Detects player displacement caused by a preview collision, restores the helper
//			position and handles the collision feedback.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildCollisionCheck
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Boolean - True when a build collision was handled
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_COLLISION_CHECK

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_COLLISION_CHECK
	diag_log format ['[Client Debug]: [DZE_fnc_buildCollisionCheck]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_CONTEXT_SIZE}) exitWith {false};

local _context = _this;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;
local _previousPlayerASL = _context select BUILD_CONTEXT_PLAYER_POSITION_ASL;
local _objectHelperASL = _context select BUILD_CONTEXT_HELPER_POSITION_ASL;
local _moveState = _context select BUILD_CONTEXT_MOVE_STATE;
local _displayName = _context select BUILD_CONTEXT_DISPLAY_NAME;
local _hitSounds = _context select BUILD_CONTEXT_HIT_SOUNDS;
local _hitIndex = _context select BUILD_CONTEXT_HIT_INDEX;
local _screamPrefix = _context select BUILD_CONTEXT_SCREAM_PREFIX;
local _screamSounds = _context select BUILD_CONTEXT_SCREAM_SOUNDS;
local _screamIndex = _context select BUILD_CONTEXT_SCREAM_INDEX;
local _screamCount = _context select BUILD_CONTEXT_SCREAM_COUNT;
local _playerPositionASL = [];
local _tolerance = 0.01;
local _distance = 0;
local _hasMoved = false;
local _collisionHandled = false;

// Turning in place and animation transitions can cause tiny movements. Only displacement beyond
// this tolerance is treated as a collision while the player is otherwise stationary.
uiSleep 0.05;	// Allow time for the player to be knocked back.
_playerPositionASL = getPosASL player;
_distance = vectorDistance(_previousPlayerASL,_playerPositionASL);
_hasMoved = _distance > _tolerance;
_context set [BUILD_CONTEXT_PLAYER_POSITION_ASL,_playerPositionASL];

if (_hasMoved && {_moveState == MOVE_STOP}) then {
	_context call DZE_fnc_buildPreviewDetach;

	// Restore the helper pivot captured before movement; the attached object keeps its model offset.
	_objectHelper setPosASL _objectHelperASL;
	_objectHelper setVelocity [0,0,0];

	player say ['z_hit_' + str (_hitSounds select _hitIndex),10];
	uiSleep 0.2;
	player say [_screamPrefix + str (_screamSounds select _screamIndex),70];
	[player,70,true,ASLToATL _playerPositionASL] spawn player_alertZombies;

	_hitIndex = (_hitIndex + 1) % 4;
	_screamIndex = (_screamIndex + 1) % _screamCount;
	_context set [BUILD_CONTEXT_HIT_INDEX,_hitIndex];
	_context set [BUILD_CONTEXT_SCREAM_INDEX,_screamIndex];
	_collisionHandled = true;

	format [localize 'STR_BUILD_VALIDATION_COLLISION_RELEASED',_displayName] call DZE_fnc_rollingMessages;

	#ifdef DEBUG_DZE_FNC_BUILD_COLLISION_CHECK
		diag_log format ['[Client Debug]: [DZE_fnc_buildCollisionCheck]: Build collision | Distance: %1 | Player ASL: %2 | Helper ASL: %3',_distance,_playerPositionASL,_objectHelperASL];
	#endif
};

_collisionHandled
