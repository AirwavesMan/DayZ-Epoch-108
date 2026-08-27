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
local _helpersDisplayed = false;
local _restoreStanding = false;
local _standingDelay = 0;

call {
	if (typeName _object != 'OBJECT' || {isNull _object}) exitWith {
		systemChat localize 'STR_BUILD_REMOVE_OBJECT_NOT_FOUND';	// You must be looking at the item to interact with it.

		#ifdef DEBUG_DZE_FNC_REMOVE_OBJECT
			diag_log format ['[Client Debug]: [DZE_fnc_removeObject]: Error: Invalid removal parameters: %1',_this];
		#endif
	};

	local _objectType = typeOf _object;
	local _vehicleConfig = configFile >> 'CfgVehicles' >> _objectType;
	local _objectOwnerID = _object getVariable ['ownerPUID','0'];
	local _isOwner = _objectOwnerID == dayz_playerUID;
	local _isInfectedTent = _objectType in ['IC_DomeTent','IC_Tent'];
	local _isTent = _objectType in DZE_Tents || {_object isKindOf 'IC_Tent'};

	if (_isTent && {!isClass (_vehicleConfig >> 'RemoveObject')}) exitWith {
		localize 'STR_BUILD_REMOVE_FAILED' call DZE_fnc_rollingMessages;

		#ifdef DEBUG_DZE_FNC_REMOVE_OBJECT
			diag_log format ['[Client Debug]: [DZE_fnc_removeObject]: Error: Missing RemoveObject config for tent: %1',_objectType];
		#endif
	};

	if (_isTent && {!_isOwner} && {!_isInfectedTent}) exitWith {
		localize 'STR_BUILD_UPGRADE_NOT_OWNER' call DZE_fnc_rollingMessages;	// You are not the owner.
	};

	if (_object getVariable ['GeneratorRunning',false]) exitWith {
		localize 'STR_BUILD_REMOVE_GENERATOR_RUNNING' call DZE_fnc_rollingMessages;	// Cannot remove a running generator.
	};

	if (_objectType in DZE_DoorsLocked && {!(_objectType in DZE_LockedGates)}) exitWith {
		localize 'STR_BUILD_REMOVE_LOCKED' call DZE_fnc_rollingMessages;	// You must remove the lock to delete this item!
	};

	local _neededTools = getArray (_vehicleConfig >> 'RemoveObject' >> 'DZE_neededTools');
	if !(['',_neededTools,'none'] call dze_requiredItemsCheck) exitWith {};

	// Prevent player actions appearing during animation cycle.
	player removeAction s_player_deleteBuild;
	player removeAction s_player_upgrade_build;
	player removeAction s_player_maint_build;
	s_player_deleteBuild = 1;
	s_player_upgrade_build = 1;
	s_player_maint_build = 1;
	_actionsLocked = true;

	local _wasStanding = ['perc',animationState player] call fnc_inString;
	local _isWreck = _objectType in DZE_isWreck;
	local _isRemovable = _objectType in DZE_isRemovable;
	local _isWreckBuilding = _objectType in DZE_isWreckBuilding;
	local _isMine = _objectType in ['Land_iron_vein_wreck','Land_silver_vein_wreck','Land_gold_vein_wreck'];
	local _isAmmoSupplyWreck = _objectType == 'Land_ammo_supply_wreck';
	local _isBase = _objectType == DZE_Territory_Marker;
	local _isFireProxy = getNumber (_vehicleConfig >> 'DZE_isFireProxy') == 1;
	local _isStorageItem = _isTent || {_objectType in DZE_refundStorageItemContents};	// Tents and non-lockable storage preserve their contents.
	local _isModular = _object isKindOf 'DZE_Modular_Base' || {_objectType in DZE_modularDoors};

	if ((_isMine || {_isAmmoSupplyWreck}) && {[_object,12] call DZE_fnc_nearPlayerMan}) exitWith {
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

	local _usesConfiguredRefund = !_isWreck && {!_isMine} && {!_isAmmoSupplyWreck};
	local _configuredRefund = [];
	if (_usesConfiguredRefund) then {
		_configuredRefund = [_objectType] call DZE_fnc_getConfiguredRemoveRefund;
	};

	local _modularRefund = false;
	local _helperTexture = DZE_removeTexture;	// Default helper color: green.

	if (_isModular) then {
		_modularRefund = DZE_refundModular && {count _configuredRefund > 0} && {!((DZE_RefundDamageLimit > 0) && {damage _object > DZE_RefundDamageLimit})};

		if (DZE_refundMode == 'DZE_refundArray') then {
			_helperTexture = DZE_deconstructTexture;	// Blue helpers for deconstruction into materials.
		};

		if (!_modularRefund) then {
			localize 'STR_BUILD_REMOVE_NO_REFUND' call DZE_fnc_rollingMessages;	// No components will be refunded.
			_helperTexture = DZE_NoRefundTexture;	// Red helpers when no refund is given.
		};
	};

	[_object,_helperTexture,true] call DZE_fnc_displayHelpers;	// Include a center fallback when no helper points exist.
	_helpersDisplayed = true;

	local _displayName = getText (_vehicleConfig >> 'displayName');
	//format [localize 'STR_BUILD_REMOVE_STARTED',_displayName] call DZE_fnc_rollingMessages;	// Starting de-construction of %1.
	local _progressResult = [_object,_displayName,_steps,_isTent,_isRemovable,_isOwner] call DZE_fnc_runRemoveObjectProgress;
	local _completed = _progressResult select 0;
	local _brokenTool = _progressResult select 1;

	[] call DZE_fnc_displayHelpers;
	_helpersDisplayed = false;

	local _toolRemoved = true;
	if (_brokenTool) then {
		_toolRemoved = [_isWreck,_displayName] call DZE_fnc_removeBrokenTool;
	};

	if (!_completed || {!_toolRemoved}) exitWith {};

	_restoreStanding = _wasStanding;

	if (isNull _object) exitWith {
		localize 'STR_BUILD_REMOVE_OBJECT_GONE' call DZE_fnc_rollingMessages;	// Failed, object no longer exists.
	};

	local _objectPosition = getPosATL _object;
	local _objectDirection = getDir _object;
	local _refundResult = [_object,_isModular,_modularRefund,_configuredRefund,_isStorageItem] call DZE_fnc_getRemoveObjectRefund;
	local _removeOutput = _refundResult select 0;
	local _hasBackpackOutput = _refundResult select 1;

	local _objectBounds = [];
	if (_hasBackpackOutput) then {
		_objectBounds = boundingBox _object select 1;
	};

	if !([_object,_isWreck,_isWreckBuilding,_objectPosition] call DZE_fnc_requestObjectDeletion) exitWith {
		localize 'STR_BUILD_REMOVE_FAILED' call DZE_fnc_rollingMessages;

		#ifdef DEBUG_DZE_FNC_REMOVE_OBJECT
			diag_log format ['[Client Debug]: [DZE_fnc_removeObject]: Warning: Server deletion was not confirmed for object: %1',_object];
		#endif
	};

	if (_isBase && {!isNil 'PP_Marks'}) then {
		// Delete any remaining local base helpers.
		{
			deleteVehicle _x;
		} forEach PP_Marks;
		PP_Marks = nil;
	};

	if (_isFireProxy) then {
		// Extinguish and delete a burning fire proxy left by the removed object.
		local _flames = nearestObjects [_objectPosition,['DZE_flamable'],1];

		if (count _flames > 0) then {
			local _flame = _flames select 0;
			_flame inflame false;
			deleteVehicle _flame;
		};
	};

	['Working',0,[3,2,4,0]] call dayz_NutritionSystem;
	//format [localize 'STR_BUILD_REMOVE_COMPLETED',_displayName] call DZE_fnc_rollingMessages;	// De-constructing %1.

	_standingDelay = [_removeOutput,_objectPosition,_objectDirection,_isStorageItem,_objectBounds] call DZE_fnc_createRemoveObjectOutput;
};

if (_helpersDisplayed) then {
	[] call DZE_fnc_displayHelpers;
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
