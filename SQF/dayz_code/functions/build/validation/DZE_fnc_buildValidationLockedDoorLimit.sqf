///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationLockedDoorLimit
//
//	Description:	Rejects building when DZE_LockedDoorLimit has been reached by the classes
//			listed in DZE_DoorsLocked inside the active base.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationLockedDoorLimit
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_LOCKED_DOOR_LIMIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_LOCKED_DOOR_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationLockedDoorLimit]: Function called with arguments: %1',_this];
#endif

local _className = _this select BUILD_VALIDATION_CLASS_NAME;
local _object = _this select BUILD_VALIDATION_OBJECT;
local _subject = [player,_object] select ((_this select BUILD_VALIDATION_STAGE) == BUILD_VALIDATION_STAGE_FINAL);
local _result = [_className,_subject,_object,DZE_DoorsLocked,DZE_LockedDoorLimit,_this select BUILD_VALIDATION_NEAREST_POLE] call DZE_fnc_checkBuildGroupLimit;

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_LOCKED_DOOR_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationLockedDoorLimit]: Class: %1 | Result: %2',_className,_result];
#endif

if !(_result select 0) exitWith {
	format [localize 'STR_BUILD_VALIDATION_LOCKED_DOOR_LIMIT',_result select 1]
};

''
