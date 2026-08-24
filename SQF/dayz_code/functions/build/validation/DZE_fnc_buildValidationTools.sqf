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
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationTools]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_VALIDATION_SIZE}) exitWith {localize 'STR_BUILD_CANCELLED'};

local _buildItem = _this select BUILD_VALIDATION_ITEM;
local _requiredItems = _this select BUILD_VALIDATION_REQUIRED_ITEMS;
local _className = _this select BUILD_VALIDATION_CLASS_NAME;

BUILD_STAGE = [BUILD_CANCELLED,BUILD_STAGE] select ([_buildItem,_requiredItems,_className] call dze_requiredItemsCheck);

''
