///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getBuildingSteps
//
//	Description:	Returns the number of animation steps required to build or deconstruct an object.
//			Uses DZE_StaticConstructionCount if set, otherwise reads DZE_buildingSteps from config
//			and defaults configured wreck classes to three steps.
//	Groups:		Build
//
//	Syntax:		_className call DZE_fnc_getBuildingSteps
//			[_className, fallbackSteps] call DZE_fnc_getBuildingSteps
//
//	Parameters:	className: String - CfgVehicles class name of the buildable object
//			fallbackSteps: Number - Optional explicit fallback used when DZE_buildingSteps is absent
//
//	Return Value:	Number - Non-negative whole number; 0 skips the animation
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_GET_BUILDING_STEPS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_GET_BUILDING_STEPS
	diag_log format ['[Client Debug]: [DZE_fnc_getBuildingSteps]: Function called with arguments: %1',_this];
#endif

local _className = '';
local _fallbackSteps = 0;
local _hasExplicitFallback = false;

if (typeName _this == 'ARRAY') then {
	if (count _this > 0 && {typeName (_this select 0) == 'STRING'}) then {
		_className = _this select 0;
	};
	if (count _this > 1 && {typeName (_this select 1) == 'SCALAR'}) then {
		_fallbackSteps = 0 max (ceil (_this select 1));
		_hasExplicitFallback = true;
	};
} else {
	if (typeName _this == 'STRING') then {
		_className = _this;
	};
};

if (!_hasExplicitFallback && {_className in DZE_Map_Debris}) then {
	_fallbackSteps = 3;
};

local _config = configFile >> 'CfgVehicles' >> _className >> 'DZE_buildingSteps';
local _limit = _fallbackSteps;

if (DZE_StaticConstructionCount > 0) then {
	_limit = DZE_StaticConstructionCount;
} else {
	if (isNumber _config) then {
		_limit = getNumber _config;
	};
};

_limit = 0 max (ceil _limit);

#ifdef DEBUG_DZE_FNC_GET_BUILDING_STEPS
	diag_log format ['[Client Debug]: [DZE_fnc_getBuildingSteps]: Class: %1 | Steps: %2',_className,_limit];
#endif

_limit
