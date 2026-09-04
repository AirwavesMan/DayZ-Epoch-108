///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationPlotDistance
//
//	Description:	Rejects a build after the player or preview object moves outside the active plot.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationPlotDistance
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_PLOT_DISTANCE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_PLOT_DISTANCE
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationPlotDistance]: Function called with arguments: %1',_this];
#endif

local _distance = _this select BUILD_VALIDATION_DISTANCE;
local _ozone = _this select BUILD_VALIDATION_OZONE;
local _nearestPoleASL = _this select BUILD_VALIDATION_NEAREST_POLE_ASL;
local _playerPositionASL = getPosASL player;
local _objectPositionASL = getPosASL (_this select BUILD_VALIDATION_OBJECT);
local _playerDistance = vectorDistance(_nearestPoleASL,_playerPositionASL);

BUILD_DISTANCE_FROM_PLOT = vectorDistance(_nearestPoleASL,_objectPositionASL);

if (_playerDistance > _ozone) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_PLOT_DISTANCE
		diag_log format ['[Client Debug]: [DZE_fnc_buildValidationPlotDistance]: Player outside plot radius | Player ASL: %1 | Plot ASL: %2 | Distance: %3 | Limit: %4',_playerPositionASL,_nearestPoleASL,_playerDistance,_ozone];
	#endif

	localize 'STR_BUILD_VALIDATION_PLAYER_MOVED_TOO_FAR'	// You moved too far!
};

if (BUILD_DISTANCE_FROM_PLOT > _distance) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_PLOT_DISTANCE
		diag_log format ['[Client Debug]: [DZE_fnc_buildValidationPlotDistance]: Object outside plot radius | Object ASL: %1 | Plot ASL: %2 | Distance: %3 | Limit: %4',_objectPositionASL,_nearestPoleASL,BUILD_DISTANCE_FROM_PLOT,_distance];
	#endif

	localize 'STR_BUILD_VALIDATION_OBJECT_MOVED_TOO_FAR'	// Object moved too far!
};

''
