///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationNearestPlot
//
//	Description:	Finds exactly one base near the player or the final preview object and stores
//			it in the validation context.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationNearestPlot
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_NEAREST_PLOT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_NEAREST_PLOT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationNearestPlot]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_VALIDATION_SIZE}) exitWith {localize 'STR_BASE_BUILD_ACCESS_DENIED'};

local _context = _this;
local _distance = _context select BUILD_VALIDATION_DISTANCE;
local _object = _context select BUILD_VALIDATION_OBJECT;
local _stage = _context select BUILD_VALIDATION_STAGE;
local _subject = [player,_object] select (_stage == BUILD_VALIDATION_STAGE_FINAL);
// Base markers have disabled simulation and must be searched as objects instead of active entities.
local _poles = _subject nearObjects [DZE_Territory_Marker,_distance];
local _count = count _poles;
local _nearestPole = objNull;

if (_count == 1) exitWith {
	_nearestPole = _poles select 0;
	_context set [BUILD_VALIDATION_NEAREST_POLE,_nearestPole];
	_context set [BUILD_VALIDATION_NEAREST_POLE_ASL,getPosASL _nearestPole];
	''
};

format ([[localize 'STR_BASE_BUILD_BASE_REQUIRED',_distance],[localize 'STR_BASE_BUILD_TOO_MANY_BASES',_distance]] select (_count > 1))
