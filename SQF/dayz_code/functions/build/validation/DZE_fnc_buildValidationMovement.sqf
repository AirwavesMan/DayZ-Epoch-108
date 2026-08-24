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
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationMovement]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_VALIDATION_SIZE}) exitWith {localize 'STR_BUILD_CANCELLED'};

local _context = _this;
local _moveState = _context select BUILD_VALIDATION_MOVE_STATE;
local _fastMoveStartedAt = _context select BUILD_VALIDATION_FAST_MOVE_STARTED_AT;
local _fastMoveSpeedLimit = 12;
local _fastMoveGracePeriod = 0.5;
local _speed = abs speed player;
local _fastState = _moveState in [MOVE_RUN,MOVE_SPRINT,MOVE_EVASIVE];
local _fastWalk = _moveState == MOVE_WALK && {_speed > _fastMoveSpeedLimit};
local _tooFast = helperAttached && {(_fastState && {_speed > _fastMoveSpeedLimit}) || {_fastWalk}};

if (!_tooFast) exitWith {
	_context set [BUILD_VALIDATION_FAST_MOVE_STARTED_AT,-1];
	''
};

if (_fastMoveStartedAt < 0) then {
	_fastMoveStartedAt = diag_tickTime;
	_context set [BUILD_VALIDATION_FAST_MOVE_STARTED_AT,_fastMoveStartedAt];
};

local _duration = diag_tickTime - _fastMoveStartedAt;

if (_duration >= _fastMoveGracePeriod) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_MOVEMENT
		diag_log format ['[Client Debug]: [DZE_fnc_buildValidationMovement]: Fast movement sustained | State: %1 | Speed: %2 | Limit: %3 | Duration: %4',_moveState,_speed,_fastMoveSpeedLimit,_duration];
	#endif

	localize 'STR_BUILD_VALIDATION_PLAYER_MOVED_TOO_FAST'
};

''
