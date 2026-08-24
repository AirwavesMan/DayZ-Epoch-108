///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationTrader
//
//	Description:	Rejects building when a nearby trader disables construction.
//			You are not allowed to build here; a trader is nearby.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationTrader
//
//	Parameters:	validationContext: Array - Shared build-validation state (unused by this check)
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_TRADER

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_TRADER
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationTrader]: Function called with argumentes: %1',_this];
#endif

if (!canbuild) exitWith {localize 'STR_BUILD_VALIDATION_TRADER_NEARBY'};

''
