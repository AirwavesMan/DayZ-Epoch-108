///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationSafeZone
//
//	Description:	Rejects configured buildable classes within their safe-zone exclusion distance.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationSafeZone
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_SAFE_ZONE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_SAFE_ZONE
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationSafeZone]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_VALIDATION_SIZE}) exitWith {localize 'STR_BUILD_CANCELLED'};

local _stage = _this select BUILD_VALIDATION_STAGE;
local _object = _this select BUILD_VALIDATION_OBJECT;
local _className = _this select BUILD_VALIDATION_CLASS_NAME;
local _displayName = _this select BUILD_VALIDATION_DISPLAY_NAME;
local _subject = [player,_object] select (_stage == BUILD_VALIDATION_STAGE_FINAL);
local _distance = 0;

{
	if ((_x select 0) == _className) exitWith {_distance = _x select 1};
} count DZE_SafeZoneNoBuildItems;

if (_distance > 0 && {[_subject,_distance] call DZE_fnc_safeZonePosCheck}) exitWith {
	format [localize 'STR_BUILD_VALIDATION_SAFE_ZONE_DISTANCE',_displayName,_distance]
};

''
