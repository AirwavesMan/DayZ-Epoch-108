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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_COLLISION_CHECK

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_COLLISION_CHECK
	diag_log format ['[Client Debug]: [DZE_fnc_buildCollisionCheck]: Function called with arguments: %1',_this];
#endif

if (!helperAttached || {(_this select BUILD_CONTEXT_MOVE_STATE) != MOVE_STOP}) exitWith {};

// Turning in place and animation transitions can cause tiny movements. Only displacement beyond
// this tolerance is treated as a collision while the player is otherwise stationary.
uiSleep 0.05;	// Allow time for the player to be knocked back.
local _playerPositionASL = getPosASL player;
local _distance = vectorDistance(_this select BUILD_CONTEXT_PLAYER_POSITION_ASL,_playerPositionASL);
_this set [BUILD_CONTEXT_PLAYER_POSITION_ASL,_playerPositionASL];

if (_distance <= 0.01) exitWith {};

_this call DZE_fnc_buildPreviewDetach;

// Restore the helper pivot captured before movement; the attached object keeps its model offset.
local _objectHelper = _this select BUILD_CONTEXT_OBJECT_HELPER;
local _objectHelperASL = _this select BUILD_CONTEXT_HELPER_POSITION_ASL;
_objectHelper setPosASL _objectHelperASL;
_objectHelper setVelocity [0,0,0];

local _hitIndex = _this select BUILD_CONTEXT_HIT_INDEX;
player say ['z_hit_' + str ((_this select BUILD_CONTEXT_HIT_SOUNDS) select _hitIndex),10];
uiSleep 0.2;
local _screamIndex = _this select BUILD_CONTEXT_SCREAM_INDEX;
player say [(_this select BUILD_CONTEXT_SCREAM_PREFIX) + str ((_this select BUILD_CONTEXT_SCREAM_SOUNDS) select _screamIndex),70];
[player,70,true,ASLToATL _playerPositionASL] spawn player_alertZombies;

_this set [BUILD_CONTEXT_HIT_INDEX,(_hitIndex + 1) % 4];
_this set [BUILD_CONTEXT_SCREAM_INDEX,(_screamIndex + 1) % (count (_this select BUILD_CONTEXT_SCREAM_SOUNDS))];

format [localize 'STR_BUILD_VALIDATION_COLLISION_RELEASED',_this select BUILD_CONTEXT_DISPLAY_NAME] call DZE_fnc_rollingMessages;

#ifdef DEBUG_DZE_FNC_BUILD_COLLISION_CHECK
	diag_log format ['[Client Debug]: [DZE_fnc_buildCollisionCheck]: Build collision | Distance: %1 | Player ASL: %2 | Helper ASL: %3',_distance,_playerPositionASL,_objectHelperASL];
#endif
