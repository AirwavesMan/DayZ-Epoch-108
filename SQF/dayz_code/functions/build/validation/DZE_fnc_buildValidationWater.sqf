///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationWater
//
//	Description:	Rejects building over sea water when DZE_buildOnWater is disabled.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationWater
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_WATER

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_WATER
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationWater]: Function called with arguments: %1',_this];
#endif

local _positionASL = _this select ([BUILD_VALIDATION_PLAYER_POSITION_ASL,BUILD_VALIDATION_HEIGHT_POSITION_ASL] select ((_this select BUILD_VALIDATION_STAGE) == BUILD_VALIDATION_STAGE_FINAL));

if (!DZE_buildOnWater && {(surfaceIsWater _positionASL || {(_positionASL select 2) < DZE_maxSeaLevel})}) exitWith {
	localize 'STR_BUILD_VALIDATION_SEA_WATER'
};

''
