///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidate
//
//	Description:	Runs one build-validation stage and returns the first rejection message.
//	Groups:		Build, Validation
//
//	Syntax:		[validationContext, checks, stage] call DZE_fnc_buildValidate
//
//	Parameters:	validationContext: Array - Shared build-validation state
//			checks: Array - Validation functions executed in order
//			stage: Number - BUILD_VALIDATION_STAGE_* identifier
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATE
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidate]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 3}) exitWith {localize 'STR_BUILD_CANCELLED'};

local _context = p0;
local _checks = p1;
local _stage = p2;
local _result = '';

if (typeName _context != 'ARRAY' || {count _context < BUILD_VALIDATION_SIZE}) exitWith {localize 'STR_BUILD_CANCELLED'};

_context set [BUILD_VALIDATION_STAGE,_stage];

{
	_result = _context call _x;
	if (_result != '') exitWith {BUILD_STAGE = BUILD_CANCELLED};
} forEach _checks;

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATE
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidate]: Stage complete | Stage: %1 | Checks: %2 | Result: %3',_stage,count _checks,_result];
#endif

_result
