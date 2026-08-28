///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationOpenGearLimit
//
//	Description:	Rejects building when DZE_OpenGearLimit has been reached by buildable objects
//			with configured cargo capacity inside the active base.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationOpenGearLimit
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_OPEN_GEAR_LIMIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_OPEN_GEAR_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationOpenGearLimit]: Function called with arguments: %1',_this];
#endif

local _className = _this select BUILD_VALIDATION_CLASS_NAME;
local _stage = _this select BUILD_VALIDATION_STAGE;
local _object = _this select BUILD_VALIDATION_OBJECT;
local _subject = [player,_object] select (_stage == BUILD_VALIDATION_STAGE_FINAL);
local _nearestPole = _this select BUILD_VALIDATION_NEAREST_POLE;
local _result = [_className,_subject,_object,_nearestPole] call DZE_fnc_checkBuildOpenGearLimit;

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_OPEN_GEAR_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationOpenGearLimit]: Class: %1 | Result: %2',_className,_result];
#endif

if !(_result select 0) exitWith {
	format [localize 'STR_BUILD_VALIDATION_OPEN_GEAR_LIMIT',_result select 1]
};

''
