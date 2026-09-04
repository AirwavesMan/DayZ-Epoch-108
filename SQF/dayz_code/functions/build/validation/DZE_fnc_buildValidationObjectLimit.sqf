///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationObjectLimit
//
//	Description:	Rejects building when too many buildable objects exist in DZE_maintainRange.
//			Every object with DZE_allowBuilding set to 1 counts toward the limit.
//			Territory markers bypass this limit.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationObjectLimit
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_OBJECT_LIMIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_OBJECT_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationObjectLimit]: Function called with arguments: %1',_this];
#endif

local _className = _this select BUILD_VALIDATION_CLASS_NAME;
if (_className == DZE_Territory_Marker) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_OBJECT_LIMIT
		diag_log format ['[Client Debug]: [DZE_fnc_buildValidationObjectLimit]: Territory marker bypassed the object limit: %1',_className];
	#endif
	''
};

local _subject = [player,_this select BUILD_VALIDATION_OBJECT] select ((_this select BUILD_VALIDATION_STAGE) == BUILD_VALIDATION_STAGE_FINAL);

if (count ([_subject,DZE_maintainRange] call DZE_fnc_findBuildableObjects) >= DZE_BuildingLimit) exitWith {
	format [localize 'STR_BUILD_VALIDATION_OBJECT_LIMIT',floor DZE_maintainRange]
};

''
