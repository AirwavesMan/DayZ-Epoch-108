///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationHeight
//
//	Description:	Rejects building above DZE_BuildHeightLimit relative to terrain.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationHeight
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_HEIGHT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_HEIGHT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationHeight]: Function called with arguments: %1',_this];
#endif

local _positionASL = _this select ([BUILD_VALIDATION_PLAYER_POSITION_ASL,BUILD_VALIDATION_MODEL_POSITION_ASL] select ((_this select BUILD_VALIDATION_STAGE) != BUILD_VALIDATION_STAGE_PREBUILD));

if (DZE_BuildHeightLimit > 0 && {(_positionASL select 2) - (0 max getTerrainHeightASL _positionASL) > DZE_BuildHeightLimit}) exitWith {
	format [localize 'STR_BUILD_VALIDATION_HEIGHT_LIMIT',DZE_BuildHeightLimit]
};

''
