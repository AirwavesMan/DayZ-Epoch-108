///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationLockedStorageLimit
//
//	Description:	Rejects building when DZE_LockedStorageLimit has been reached by lockable
//			storage inside the active base, including storage that is currently unlocked.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationLockedStorageLimit
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_LOCKED_STORAGE_LIMIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_LOCKED_STORAGE_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationLockedStorageLimit]: Function called with arguments: %1',_this];
#endif

local _className = _this select BUILD_VALIDATION_CLASS_NAME;
local _stage = _this select BUILD_VALIDATION_STAGE;
local _object = _this select BUILD_VALIDATION_OBJECT;
local _subject = [player,_object] select (_stage == BUILD_VALIDATION_STAGE_FINAL);
local _nearestPole = _this select BUILD_VALIDATION_NEAREST_POLE;
local _storageClasses = DZE_LockedStorage + DZE_UnLockedStorage;
local _result = [_className,_subject,_object,_storageClasses,DZE_LockedStorageLimit,_nearestPole] call DZE_fnc_checkBuildGroupLimit;

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_LOCKED_STORAGE_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationLockedStorageLimit]: Class: %1 | Result: %2',_className,_result];
#endif

if !(_result select 0) exitWith {
	format [localize 'STR_BUILD_VALIDATION_LOCKED_STORAGE_LIMIT',_result select 1]
};

''
