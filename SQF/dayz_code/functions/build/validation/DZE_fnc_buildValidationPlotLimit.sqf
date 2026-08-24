///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationPlotLimit
//
//	Description:	Enforces how many bases the current player may own.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationPlotLimit
//
//	Parameters:	validationContext: Array - Shared build-validation state (unused by this check)
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_PLOT_LIMIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_PLOT_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationPlotLimit]: Function called with argumentes: %1',_this];
#endif

if (DZE_baseLimit == 0) exitWith {''};	// disabled

local _plotPoles = 0;

{
	if (_x getVariable ['ownerPUID','0'] == dayz_playerUID) then {_plotPoles = _plotPoles + 1};
} count (entities DZE_Territory_Marker);	// All bases on the map owned by the player.

if (_plotPoles >= DZE_LimitPlots) exitWith {
	format [localize 'STR_BASE_BUILD_LIMIT_REACHED',DZE_baseLimit]
};

''
