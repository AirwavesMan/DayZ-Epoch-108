///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildValidationState
//
//	Description:	Rejects building while the player is swimming, climbing, fighting, driving,
//			unconscious or dragging another unit.
//	Groups:		Build, Validation
//
//	Syntax:		validationContext call DZE_fnc_buildValidationState
//
//	Parameters:	validationContext: Array - Shared build-validation state (unused by this check)
//
//	Return Value:	String - Empty on success, otherwise the rejection message
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_VALIDATION_STATE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_VALIDATION_STATE
	diag_log format ['[Client Debug]: [DZE_fnc_buildValidationState]: Function called with arguments: %1',_this];
#endif

/// || r_player_dead
if (dayz_isSwimming) exitWith {localize 'STR_BUILD_VALIDATION_PLAYER_IN_WATER'};
if (getNumber (configFile >> 'CfgMovesMaleSdr' >> 'States' >> animationState player >> 'onLadder') == 1) exitWith {localize 'STR_BUILD_VALIDATION_PLAYER_ON_LADDER'};
if (player getVariable ['inCombat',false]) exitWith {localize 'STR_BUILD_VALIDATION_PLAYER_IN_COMBAT'};
if (vehicle player != player) exitWith {localize 'STR_BUILD_VALIDATION_PLAYER_IN_VEHICLE'};
if (r_player_unconscious || {r_drag_sqf}) exitWith {localize 'STR_BUILD_CANCELLED'};

''
