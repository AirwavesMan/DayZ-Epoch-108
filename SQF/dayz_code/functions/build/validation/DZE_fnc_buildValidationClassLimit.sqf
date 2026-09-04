///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationClassLimit
//
//	Description:	Rejects building when the CfgVehicles DZE_perBaseLimit for the selected
//			class has been reached inside the active base.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationClassLimit
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_CLASS_LIMIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_CLASS_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationClassLimit]: Function called with arguments: %1',_this];
#endif

local _className = _this select BUILD_VALIDATION_CLASS_NAME;
local _limit = getNumber (configFile >> 'CfgVehicles' >> _className >> 'DZE_perBaseLimit');

if (_limit == 0) exitWith {''};

local _object = _this select BUILD_VALIDATION_OBJECT;
local _subject = [player,_object] select ((_this select BUILD_VALIDATION_STAGE) == BUILD_VALIDATION_STAGE_FINAL);
local _result = [_className,_subject,_object,_this select BUILD_VALIDATION_NEAREST_POLE] call DZE_fnc_checkBuildClassLimit;

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_CLASS_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationClassLimit]: Class: %1 | Result: %2',_className,_result];
#endif

if !(_result select 0) exitWith {
	local _displayName = _this select BUILD_VALIDATION_DISPLAY_NAME;
	if ((_result select 1) < 0) then {
		format [localize 'STR_BUILD_VALIDATION_CLASS_DISABLED',_displayName]
	} else {
		format [localize 'STR_BUILD_VALIDATION_CLASS_LIMIT',_displayName,_result select 1]
	}
};

''
