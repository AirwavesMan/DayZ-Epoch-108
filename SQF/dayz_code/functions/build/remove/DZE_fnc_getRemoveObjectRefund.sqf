///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getRemoveObjectRefund
//
//	Description:	Builds the final removal output for an object category and preserves configured
//			storage cargo where required.
//	Groups:		Build
//
//	Syntax:		[object,isModular,modularRefund,configuredRefund,isStorageItem] call DZE_fnc_getRemoveObjectRefund
//
//	Parameters:	object: Object - Object being removed
//			isModular: Boolean - Whether the object is a modular buildable
//			modularRefund: Boolean - Whether modular output is allowed
//			configuredRefund: Array - Validated RemoveObject config output
//			isStorageItem: Boolean - Whether stored cargo must be preserved
//
//	Return Value:	Array - [removeOutput,hasBackpackOutput]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_GET_REMOVE_OBJECT_REFUND

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_GET_REMOVE_OBJECT_REFUND
	diag_log format ['[Client Debug]: [DZE_fnc_getRemoveObjectRefund]: Function called with arguments: %1',_this];
#endif

local _object = param(0,objNull);
local _isModular = param(1,false);
local _modularRefund = param(2,false);
local _configuredRefund = param(3,[]);
local _isStorageItem = param(4,false);

if (isNull _object) exitWith {[[],false]};

local _objectType = typeOf _object;
local _selectedRemoveOutput = [];
local _hasBackpackOutput = false;

call {
	// Dynamic debris wreckage refunds one random vehicle part.
	if (_objectType in DZE_isWreck) exitWith {
		if (count DZE_debrisRefundParts > 0) then {
			local _refundPart = DZE_debrisRefundParts call BIS_fnc_selectRandom;
			_selectedRemoveOutput = [[_refundPart,1]];
		};
	};

	local _isMine = _objectType in ['Land_iron_vein_wreck','Land_silver_vein_wreck','Land_gold_vein_wreck'];
	// Metal vein wrecks use their loot group and may also contain a gem.
	if (_isMine) exitWith {
		local _lootGroupIndex = dz_loot_groups find _objectType;
		local _output = [_lootGroupIndex,3] call dz_fn_loot_select;
		{
			_selectedRemoveOutput set [count _selectedRemoveOutput,[_x select 1,[_x select 2,_x select 3]]];
		} forEach _output;

		if ([DZE_GemChance] call fn_chance) then {	// Chance of gem occurrence.
			local _gems = [];
			local _weights = [];
			{
				_gems set [count _gems,_x select 0];
				_weights set [count _weights,_x select 1];
			} forEach DZE_GemOccurance;

			if (count _gems > 0) then {
				local _gemSelected = [_gems,_weights] call BIS_fnc_selectRandomWeighted;
				_selectedRemoveOutput set [count _selectedRemoveOutput,[_gemSelected,1]];
			};
		};
	};

	// Roadside ammo crates use their loot group output.
	if (_objectType == 'Land_ammo_supply_wreck') exitWith {
		local _lootGroupIndex = dz_loot_groups find _objectType;
		local _output = [_lootGroupIndex,5] call dz_fn_loot_select;
		{
			_selectedRemoveOutput set [count _selectedRemoveOutput,[_x select 1,1,_x select 0]];
		} forEach _output;
	};

	// Wrecked modular objects use their configured refund.
	if (_objectType in DZE_isWreckBuilding) exitWith {
		_selectedRemoveOutput = _configuredRefund;
	};

	// Modular objects only return configured output when refunds are enabled and allowed by damage.
	if (_isModular) exitWith {
		if (_modularRefund) then {
			_selectedRemoveOutput = _configuredRefund;
		};
	};

	// Storage marked by the caller returns both its configured output and stored cargo.
	if (_isStorageItem) exitWith {
		_selectedRemoveOutput = _configuredRefund;

		local _weapons = getWeaponCargo _object;
		local _magazines = getMagazineCargo _object;
		local _backpacks = getBackpackCargo _object;
		local _cargoSets = [[_weapons,2],[_magazines,3],[_backpacks,5]];	// Reformat cargo into [class,count,type].
		local _cargoClasses = [];
		local _cargoCounts = [];
		local _cargoType = 0;
		local _cargoCount = 0;
		{
			_cargoClasses = _x select 0 select 0;
			_cargoCounts = _x select 0 select 1;
			_cargoType = _x select 1;

			{
				_cargoCount = _cargoCounts select _forEachIndex;
				_selectedRemoveOutput set [count _selectedRemoveOutput,[_x,_cargoCount,_cargoType]];

				if (_cargoType == 5 && {_cargoCount > 0}) then {
					_hasBackpackOutput = true;
				};
			} forEach _cargoClasses;
		} forEach _cargoSets;
	};

	_selectedRemoveOutput = _configuredRefund;	// All other removable objects use their configured output.
};

if (!_hasBackpackOutput) then {
	{
		if (typeName _x == 'ARRAY' && {count _x > 2} && {(_x select 2) == 5}) exitWith {
			_hasBackpackOutput = true;
		};
	} forEach _selectedRemoveOutput;
};

#ifdef DEBUG_DZE_FNC_GET_REMOVE_OBJECT_REFUND
	diag_log format ['[Client Debug]: [DZE_fnc_getRemoveObjectRefund]: Object type: %1 | Output: %2 | Backpacks: %3',_objectType,_selectedRemoveOutput,_hasBackpackOutput];
#endif

[_selectedRemoveOutput,_hasBackpackOutput]
