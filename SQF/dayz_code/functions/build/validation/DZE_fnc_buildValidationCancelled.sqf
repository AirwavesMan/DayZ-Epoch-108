///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationCancelled
//
//	Description:	Returns the cancellation message after the player presses Escape.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationCancelled
//
//	Parameters:	validationContext: Array - Shared build-validation state (unused by this check)
//
//	Return Value:	String - Empty while active, otherwise the cancellation message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_CANCELLED

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_CANCELLED
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationCancelled]: Function called with arguments: %1',_this];
#endif

if (BUILD_STAGE == BUILD_CANCELLED) exitWith {localize 'STR_BUILD_CANCELLED'};

''
