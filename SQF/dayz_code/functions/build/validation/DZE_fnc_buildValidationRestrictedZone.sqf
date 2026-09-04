///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationRestrictedZone
//
//	Description:	Rejects building within the configured distance of a restricted zone.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationRestrictedZone
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_RESTRICTED_ZONE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_RESTRICTED_ZONE
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationRestrictedZone]: Function called with arguments: %1',_this];
#endif

local _subject = [player,_this select BUILD_VALIDATION_OBJECT] select ((_this select BUILD_VALIDATION_STAGE) == BUILD_VALIDATION_STAGE_FINAL);
local _message = '';
local _minimumDistance = 0;
local _currentDistance = 0;

{
	_currentDistance = (_x select 1) distance _subject;
	_minimumDistance = _x select 2;

	if (_currentDistance <= _minimumDistance) exitWith {
		_message = format [localize 'STR_BUILD_VALIDATION_RESTRICTED_ZONE_DISTANCE',_minimumDistance,_x select 0,floor _currentDistance];
	};
} count DZE_RestrictedBuildingZones;

_message
