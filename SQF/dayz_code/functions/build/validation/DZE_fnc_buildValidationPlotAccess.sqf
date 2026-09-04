///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationPlotAccess
//
//	Description:	Checks owner, friendly and base-friend access for the selected base.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationPlotAccess
//
//	Parameters:	validationContext: Array - Shared build-validation state
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_PLOT_ACCESS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_PLOT_ACCESS
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationPlotAccess]: Function called with arguments: %1',_this];
#endif

local _nearestPole = _this select BUILD_VALIDATION_NEAREST_POLE;

local _playerUID = getPlayerUID player;
local _poleUID = _nearestPole getVariable ['ownerPUID','0'];

if (_playerUID == _poleUID) exitWith {''};
if (_poleUID in (player getVariable ['friendlyTo',[]])) exitWith {''};
if (({(_x select 0) == _playerUID} count (_nearestPole getVariable ['baseFriends',[]])) > 0) exitWith {''};

localize 'STR_BASE_BUILD_ACCESS_DENIED'
