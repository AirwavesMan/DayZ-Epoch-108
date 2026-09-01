///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_removeObject
//
//	Description:	Coordinates validation, progress, deletion and configured output for object removal.
//	Groups:		Build
//
//	Syntax:		Executed by an addAction entry with the object in _this select 3
//			[target,caller,actionId,object] spawn DZE_fnc_removeObject
//
//	Parameters:	target: Object - Object to which the action is attached
//			caller: Object - Unit executing the action
//			actionId: Number - addAction identifier
//			object: Object - Object to remove
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_REMOVE_OBJECT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_REMOVE_OBJECT
	diag_log format ['[Client Debug]: [DZE_fnc_removeObject]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'STR_BUILD_REMOVE_ALREADY_IN_PROGRESS' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

local _object = param(3,objNull);	// Get object from addAction arguments.

local _actionsLocked = false;
local _restoreStanding = false;
local _standingDelay = 0;

call {
	if (isNull _object) exitWith {
		systemChat localize 'STR_BUILD_REMOVE_OBJECT_NOT_FOUND';	// You must be looking at the item to interact with it.
		diag_log format ['[Client Debug]: [DZE_fnc_removeObject]: Error: Object is null: %1',_this];
	};

	local _objectType = typeOf _object;
	local _vehicleConfig = configFile >> 'CfgVehicles' >> _objectType;
	local _isTent = _objectType in DZE_Tents || {_object isKindOf 'IC_Tent'};

	if (_object getVariable ['GeneratorRunning',false]) exitWith {
		localize 'STR_BUILD_REMOVE_GENERATOR_RUNNING' call DZE_fnc_rollingMessages;	// Cannot remove a running generator.
	};

	if (_objectType in DZE_DoorsLocked && !(_objectType in DZE_LockedGates)) exitWith {
		localize 'STR_BUILD_REMOVE_LOCKED' call DZE_fnc_rollingMessages;	// You must remove the lock to delete this item!
	};

	local _neededTools = getArray (_vehicleConfig >> 'RemoveObject' >> 'DZE_neededTools');
	if !(['',_neededTools,'none'] call DZE_fnc_requiredItemsCheck) exitWith {};

	// Prevent player actions appearing during animation cycle.
	player removeAction s_player_deleteBuild;
	player removeAction s_player_upgrade_build;
	player removeAction s_player_maint_build;
	s_player_deleteBuild = 1;
	s_player_upgrade_build = 1;
	s_player_maint_build = 1;
	_actionsLocked = true;

	local _wasStanding = ['perc',animationState player] call fnc_inString;
	local _isLootDebris = _objectType in DZE_Ore_Vein_Ruins || {_objectType in DZE_Ammo_Crate_Ruins};
	local _isBase = _objectType == DZE_Territory_Marker;
	local _isFireProxy = getNumber (_vehicleConfig >> 'DZE_isFireProxy') == 1;
	local _isStorageItem = _objectType call DZE_fnc_hasStorageGearSlots;
	local _isModular = _object isKindOf 'DZE_Modular_Base';

	if (_isLootDebris && {[_object,12] call DZE_fnc_nearPlayerMan}) exitWith {
		localize 'STR_BUILD_REMOVE_PLAYER_NEARBY' call DZE_fnc_rollingMessages;	// Only one player can be near to perform this action.
	};

	local _steps = _objectType call DZE_fnc_getBuildingSteps;

	if (_steps > 0) then {
		local _baseCheck = [player,false] call DZE_fnc_findBases;

		if ((_baseCheck select 1) > 0) then {
			// Since there are bases nearby, base access must come from the base friend list.
			local _accessCheck = [player,_baseCheck select 2] call DZE_fnc_checkAccess;

			if !(_accessCheck select 2) then {
				_steps = round (_steps * 2);
			};
		};
	};

	local _configuredRefund = [];
	if !(_objectType in DZE_Removable_Debris) then {
		_configuredRefund = [_objectType] call DZE_fnc_getRemoveRefund;
	};

	local _helperTexture = DZE_removeTexture;	// Default helper color: green.

	if (_isModular) then {
		if (DZE_refundMode == 'array') then {
			_helperTexture = DZE_deconstructTexture;	// Blue helpers for deconstruction into materials.
		};

		if (count _configuredRefund == 0 || (DZE_RefundDamageLimit > 0 && damage _object > DZE_RefundDamageLimit)) then {
			_configuredRefund = [];
			localize 'STR_BUILD_REMOVE_NO_REFUND' call DZE_fnc_rollingMessages;	// No components will be refunded.
			_helperTexture = DZE_NoRefundTexture;	// Red helpers when no refund is given.
		};
	};

	[_object,_helperTexture,true] call DZE_fnc_displayHelpers;	// Include a center fallback when no helper points exist.

	local _displayName = getText (_vehicleConfig >> 'displayName');
	local _completed = [_object,_displayName,_steps,_isTent] call DZE_fnc_removeAnimation;

	[] call DZE_fnc_displayHelpers;

	if (!_completed) exitWith {};

	_restoreStanding = _wasStanding;

	if (isNull _object) exitWith {
		localize 'STR_BUILD_REMOVE_OBJECT_GONE' call DZE_fnc_rollingMessages;	// Failed, object no longer exists.
	};

	local _objectPositionASL = getPosASL _object;
	local _objectDirection = getDir _object;
	local _removeOutput = [_object,_configuredRefund,_isStorageItem] call DZE_fnc_removeRefund;
	local _objectBounds = boundingBox _object select 1;

	local _fireProxy = objNull;
	if (_isFireProxy) then {
		// Capture proxies while the fireplace still provides the correct PositionAGL search origin.
		local _fireProxies = nearestObjects [_object,['DZE_flamable'],1];
		if (count _fireProxies > 0) then {_fireProxy = _fireProxies select 0};
	};

	if !(_object call DZE_fnc_objectDeletion) exitWith {
		localize 'STR_BUILD_REMOVE_FAILED' call DZE_fnc_rollingMessages;
		diag_log format ['[Client Debug]: [DZE_fnc_removeObject]: Warning: Server deletion was not confirmed for object: %1',_object];
	};

	if (_isBase && !isNil 'PP_Marks') then {
		// Delete any remaining local base helpers.
		{
			deleteVehicle _x;
		} forEach PP_Marks;
		PP_Marks = nil;
	};

	if (_isFireProxy) then {
		// Extinguish and delete the proxy captured before the parent fireplace was removed.
		if (!isNull _fireProxy) then {
			_fireProxy inflame false;
			deleteVehicle _fireProxy;
		};

		#ifdef DEBUG_DZE_FNC_REMOVE_OBJECT
			diag_log format ['[Client Debug]: [DZE_fnc_removeObject]: Fire proxy removed: %1',isNull _fireProxy];
		#endif
	};

	['Working',0,[3,2,4,0]] call dayz_NutritionSystem;

	_standingDelay = [_removeOutput,_objectPositionASL,_objectDirection,_isStorageItem,_objectBounds] call DZE_fnc_createRemoveOutput;
	_neededTools call DZE_fnc_toolBreak;
};

if (_restoreStanding) then {
	uiSleep _standingDelay;
	player playActionNow 'PlayerStand';	// Return to a standing pose if the player was standing before the action.
};

dayz_actionInProgress = false;

if (_actionsLocked) then {
	s_player_deleteBuild = -1;
	s_player_upgrade_build = -1;
	s_player_maint_build = -1;
};
