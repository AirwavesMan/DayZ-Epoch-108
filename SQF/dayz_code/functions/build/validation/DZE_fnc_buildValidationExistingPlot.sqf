///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationExistingPlot
//
//	Description:	Prevents a base from being built within the configured base distance of
//			another base.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationExistingPlot
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_EXISTING_PLOT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_EXISTING_PLOT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationExistingPlot]: Function called with arguments: %1',_this];
#endif

local _distance = _this select BUILD_VALIDATION_DISTANCE;
local _isPreviewStage = (_this select BUILD_VALIDATION_STAGE) == BUILD_VALIDATION_STAGE_PREVIEW;
local _subject = [player,_this select BUILD_VALIDATION_OBJECT] select _isPreviewStage;
local _allowedPoles = [0,1] select _isPreviewStage;

if (count (_subject nearObjects [DZE_Territory_Marker,_distance]) > _allowedPoles) exitWith {
	format [localize 'STR_BASE_BUILD_TOO_CLOSE_TO_EXISTING_BASE',_distance]
};

''
