///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationTools
//
//	Description:	Checks the required tools and items before the preview is created.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationTools
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_TOOLS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_TOOLS
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationTools]: Function called with arguments: %1',_this];
#endif

if !([_this select BUILD_VALIDATION_ITEM,_this select BUILD_VALIDATION_REQUIRED_ITEMS,_this select BUILD_VALIDATION_CLASS_NAME] call DZE_fnc_requiredItemsCheck) then {
	BUILD_STAGE = BUILD_CANCELLED;
};

''
