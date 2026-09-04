///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationMovement
//
//	Description:	Cancels the preview after fast movement remains above the configured grace period.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationMovement
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_MOVEMENT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_MOVEMENT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationMovement]: Function called with arguments: %1',_this];
#endif

local _moveState = _this select BUILD_VALIDATION_MOVE_STATE;
local _fastMoveStartedAt = _this select BUILD_VALIDATION_FAST_MOVE_STARTED_AT;
local _fastMoveSpeedLimit = 12;
local _speed = abs speed player;
local _tooFast = helperAttached && {_speed > _fastMoveSpeedLimit && {_moveState in [MOVE_WALK,MOVE_RUN,MOVE_SPRINT,MOVE_EVASIVE]}};

if (!_tooFast) exitWith {
	_this set [BUILD_VALIDATION_FAST_MOVE_STARTED_AT,-1];
	''
};

if (_fastMoveStartedAt < 0) then {
	_fastMoveStartedAt = diag_tickTime;
	_this set [BUILD_VALIDATION_FAST_MOVE_STARTED_AT,_fastMoveStartedAt];
};

local _duration = diag_tickTime - _fastMoveStartedAt;

if (_duration >= 0.5) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_MOVEMENT
		diag_log format ['[Client Debug]: [DZE_fnc_buildValidationMovement]: Fast movement sustained | State: %1 | Speed: %2 | Limit: %3 | Duration: %4',_moveState,_speed,_fastMoveSpeedLimit,_duration];
	#endif

	localize 'STR_BUILD_VALIDATION_PLAYER_MOVED_TOO_FAST'
};

''
