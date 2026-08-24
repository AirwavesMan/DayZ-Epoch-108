///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationBlacklisted
//
//	Description:	Rejects building within the configured distance of a blacklisted building.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationBlacklisted
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_BLACKLISTED

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_BLACKLISTED
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationBlacklisted]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_VALIDATION_SIZE}) exitWith {localize 'STR_BUILD_CANCELLED'};

local _stage = _this select BUILD_VALIDATION_STAGE;
local _object = _this select BUILD_VALIDATION_OBJECT;
local _subject = [player,_object] select (_stage == BUILD_VALIDATION_STAGE_FINAL);
local _message = '';
local _minimumDistance = 0;
local _nearbyCount = 0;

{
	_minimumDistance = _x select 2;
	_nearbyCount = count nearestObjects [_subject,[_x select 1],_minimumDistance];

	if (_nearbyCount > 0) exitWith {
		_message = format [localize 'STR_BUILD_VALIDATION_RESTRICTED_BUILDING_DISTANCE',_minimumDistance,_x select 0];
	};
} count DZE_BlacklistedBuildings;

_message
