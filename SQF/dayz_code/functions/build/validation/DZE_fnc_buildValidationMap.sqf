///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationMap
//
//	Description:	Rejects a player or final preview object outside the configured map extents.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationMap
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_MAP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_MAP
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationMap]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_VALIDATION_SIZE}) exitWith {localize 'STR_BUILD_CANCELLED'};

local _stage = _this select BUILD_VALIDATION_STAGE;
local _object = _this select BUILD_VALIDATION_OBJECT;
local _subject = [player,_object] select (_stage == BUILD_VALIDATION_STAGE_FINAL);
local _position = getPos _subject;
local _positionX = _position select 0;
local _positionY = _position select 1;
local _minimumX = build_minpos select 0;
local _minimumY = build_minpos select 1;
local _maximumX = build_maxpos select 0;
local _maximumY = build_maxpos select 1;

if (_positionX < _minimumX || {_positionX > _maximumX || {_positionY < _minimumY || {_positionY > _maximumY}}}) exitWith {
	localize 'STR_BUILD_VALIDATION_OUTSIDE_MAP'
};

''
