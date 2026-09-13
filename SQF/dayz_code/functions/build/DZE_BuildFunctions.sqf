///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_BuildFunctions
//
//	Description:	Creates the shared build-validation context and assembles the validation tables
//			used by DZE_fnc_modularBuild.
//	Groups:		Build, Validation
//
//	Syntax:		Included by DZE_fnc_modularBuild
//
//	Parameters:	None - Included script; reads the local DZE_fnc_modularBuild state
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_BUILD_FUNCTIONS


#ifdef DEBUG_DZE_BUILD_FUNCTIONS
	diag_log format ['[Client Debug]: [DZE_BuildFunctions]: Function called with arguments: %1',_this];
#endif

local _buildValidationContext = [
	_distance,
	_distance + DZE_baseOzone,	// Zone outside the base radius where the player may stand while the object must remain inside it.
	_className,
	_text,
	_buildItem,
	_require,
	getPosASL player,
	objNull,
	ORIGIN,
	[],
	MOVE_STOP,
	objNull,
	[],		/// check if this changes (item)
	-1,
	BUILD_VALIDATION_STAGE_PREBUILD
];

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	This item needs a base within "_distance" meters.
//
//	Legacy disabled validation path retained for reference. Nearest-base validation and base-access
//	validation currently provide the active behavior.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
/**
local _fnc_buildNeedsBase = {

	// [_nearestPole, _requiresBase, _distance]
	if (isNull (p0) && {p1}) exitWith {

		format [localize 'STR_BASE_BUILD_BASE_REQUIRED',p2]
	};

	_PROCEED
};
**/

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Build Validation Tables
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _buildStage1 = [DZE_fnc_buildValidationState];
local _buildStage2 = [DZE_fnc_buildValidationState];
local _buildStage3 = [DZE_fnc_buildValidationState];

if (_isAdmin) then {
	addArray(_buildStage1,DZE_fnc_buildValidationClassLimit);
	addArray(_buildStage3,DZE_fnc_buildValidationClassLimit);
} else {
	if (_isPole) then {
		addArray(_buildStage1,DZE_fnc_buildValidationBaseLimit);
		addArray(_buildStage1,DZE_fnc_buildValidationExistingBase);
		addArray(_buildStage2,DZE_fnc_buildValidationExistingBase);
	} else {
		if (_requiresBase) then { // _inRadius
			addArray(_buildStage1,DZE_fnc_buildValidationNearestBase);	// Sets the nearest base in the validation context.
			addArray(_buildStage1,DZE_fnc_buildValidationBaseAccess);
			addArray(_buildStage2,DZE_fnc_buildValidationBaseDistance);
			addArray(_buildStage3,DZE_fnc_buildValidationNearestBase);
			addArray(_buildStage3,DZE_fnc_buildValidationBaseAccess);
			addArray(_buildStage3,DZE_fnc_buildValidationBaseDistance);
		};
	};

	addArray(_buildStage1,DZE_fnc_buildValidationTrader);
	addArray(_buildStage1,DZE_fnc_buildValidationTools);
	addArray(_buildStage1,DZE_fnc_buildValidationHeight);
	addArray(_buildStage1,DZE_fnc_buildValidationWater);
	addArray(_buildStage1,DZE_fnc_buildValidationClassLimit);
	addArray(_buildStage1,DZE_fnc_buildValidationLockedDoorLimit);
	addArray(_buildStage1,DZE_fnc_buildValidationLockedStorageLimit);
	addArray(_buildStage1,DZE_fnc_buildValidationOpenGearLimit);
	addArray(_buildStage1,DZE_fnc_buildValidationStaticWeaponLimit);
	addArray(_buildStage1,DZE_fnc_buildValidationObjectLimit);
	addArray(_buildStage1,DZE_fnc_buildValidationRestrictedZone);
	addArray(_buildStage1,DZE_fnc_buildValidationBlacklisted);
	addArray(_buildStage1,DZE_fnc_buildValidationSafeZone);
	addArray(_buildStage1,DZE_fnc_buildValidationNearObject);
	addArray(_buildStage1,DZE_fnc_buildValidationMap);

	addArray(_buildStage2,DZE_fnc_buildValidationCancelled);
	addArray(_buildStage2,DZE_fnc_buildValidationTrader);
	addArray(_buildStage2,DZE_fnc_buildValidationMovement);
	addArray(_buildStage2,DZE_fnc_buildValidationHeight);

	addArray(_buildStage3,DZE_fnc_buildValidationTrader);
	addArray(_buildStage3,DZE_fnc_buildValidationHeight);
	addArray(_buildStage3,DZE_fnc_buildValidationWater);
	addArray(_buildStage3,DZE_fnc_buildValidationClassLimit);
	addArray(_buildStage3,DZE_fnc_buildValidationLockedDoorLimit);
	addArray(_buildStage3,DZE_fnc_buildValidationLockedStorageLimit);
	addArray(_buildStage3,DZE_fnc_buildValidationOpenGearLimit);
	addArray(_buildStage3,DZE_fnc_buildValidationStaticWeaponLimit);
	addArray(_buildStage3,DZE_fnc_buildValidationObjectLimit);
	addArray(_buildStage3,DZE_fnc_buildValidationRestrictedZone);
	addArray(_buildStage3,DZE_fnc_buildValidationBlacklisted);
	addArray(_buildStage3,DZE_fnc_buildValidationSafeZone);
	addArray(_buildStage3,DZE_fnc_buildValidationNearObject);
	addArray(_buildStage3,DZE_fnc_buildValidationMap);
	addArray(_buildStage3,DZE_fnc_buildValidationRoad);
};
