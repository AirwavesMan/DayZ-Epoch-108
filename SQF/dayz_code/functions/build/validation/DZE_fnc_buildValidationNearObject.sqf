///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationNearObject
//
//	Description:	Rejects building near classes configured in DZE_NoBuildNear.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationNearObject
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_NEAR_OBJECT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_NEAR_OBJECT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationNearObject]: Function called with arguments: %1',_this];
#endif

local _displayName = _this select BUILD_VALIDATION_DISPLAY_NAME;
local _subject = [player,_this select BUILD_VALIDATION_OBJECT] select ((_this select BUILD_VALIDATION_STAGE) == BUILD_VALIDATION_STAGE_FINAL);
local _nearby = if (count DZE_NoBuildNear > 0) then {nearestObjects [_subject,DZE_NoBuildNear,DZE_NoBuildNearDistance]} else {[]};

if (count _nearby > 0) exitWith {
	format [localize 'STR_BUILD_VALIDATION_OBJECT_DISTANCE',_displayName,DZE_NoBuildNearDistance,typeOf (_nearby select 0)]
};

''
