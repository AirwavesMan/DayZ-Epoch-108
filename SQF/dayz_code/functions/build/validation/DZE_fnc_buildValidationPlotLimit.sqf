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
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationPlotLimit]: Function called with arguments: %1',_this];
#endif

if (DZE_baseLimit == 0) exitWith {''};	// disabled

// All bases on the map owned by the player.
if (({_x getVariable ['ownerPUID','0'] == dayz_playerUID} count (entities DZE_Territory_Marker)) >= DZE_baseLimit) exitWith {
	format [localize 'STR_BASE_BUILD_LIMIT_REACHED',DZE_baseLimit]
};

''
