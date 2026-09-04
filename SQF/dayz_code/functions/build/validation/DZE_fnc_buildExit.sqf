///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildExit
//
//	Description:	Cleans up a cancelled build and restores the client build state.
//	Groups:		Build, Validation
//
//	Syntax:		[validationContext, reason, formatReason, wasStanding] call DZE_fnc_buildExit
//
//	Parameters:	validationContext: Array - Shared build-validation state
//			reason: String - Cancellation or rejection message
//			formatReason: Boolean - Wrap the reason with the object display name
//			wasStanding: Boolean - Restore the player's standing animation
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_EXIT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_EXIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildExit]: Function called with arguments: %1',_this];
#endif

local _context = p0;
local _reason = p1;
local _formatReason = p2;
local _wasStanding = p3;

local _object = _context select BUILD_VALIDATION_OBJECT;

if (isNull _object) then {
	// Stage 1 has no preview object to clean up.
	if (_reason != '') then {_reason call DZE_fnc_rollingMessages};
} else {
	// Stages 2 and 3 own a local preview object.
	deleteVehicle _object;
	local _displayName = _context select BUILD_VALIDATION_DISPLAY_NAME;
	local _message = [_reason,format [localize 'STR_BUILD_CANCELLED_WITH_REASON',_displayName,_reason]] select _formatReason;
	_message call DZE_fnc_rollingMessages;

	if (_wasStanding) then {[] spawn {player playAction 'PlayerStand'}};
};

BUILD_STAGE = BUILD_INACTIVE;
dayz_actionInProgress = false;

#ifdef DEBUG_DZE_FNC_BUILD_EXIT
	diag_log format ['[Client Debug]: [DZE_fnc_buildExit]: Build cancelled | Object: %1 | Reason: %2',_object,_reason];
#endif
