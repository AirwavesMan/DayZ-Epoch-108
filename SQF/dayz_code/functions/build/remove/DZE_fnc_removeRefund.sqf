///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_removeRefund
//
//	Description:	Builds the final removal output for an object category and preserves configured
//			storage cargo where required.
//	Groups:		Build
//
//	Syntax:		[object,configuredRefund,isStorageItem] call DZE_fnc_removeRefund
//
//	Parameters:	object: Object - Object being removed
//			configuredRefund: Array - Validated RemoveObject config output
//			isStorageItem: Boolean - Whether stored cargo must be preserved
//
//	Return Value:	Array - Resolved removal output
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_REMOVE_REFUND

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_REMOVE_REFUND
	diag_log format ['[Client Debug]: [DZE_fnc_removeRefund]: Function called with arguments: %1',_this];
#endif

local _object = param(0,objNull);
local _configuredRefund = param(1,[]);
local _isStorageItem = param(2,false);

if (isNull _object) exitWith {[]};

local _objectType = typeOf _object;
local _selectedRemoveOutput = [];

call {
	// Dynamic debris wreckage refunds one random vehicle part.
	if (_objectType in DZE_Map_Debris) exitWith {
		if (count DZE_debrisRefundParts > 0) then {
			local _refundPart = DZE_debrisRefundParts call BIS_fnc_selectRandom;
			_selectedRemoveOutput = [[_refundPart,1]];
		};
	};

	// Metal vein wrecks use their loot group and may also contain a gem.
	if (_objectType in DZE_Ore_Vein_Ruins) exitWith {
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
	if (_objectType in DZE_Ammo_Crate_Ruins) exitWith {
		local _lootGroupIndex = dz_loot_groups find _objectType;
		local _output = [_lootGroupIndex,5] call dz_fn_loot_select;
		{
			_selectedRemoveOutput set [count _selectedRemoveOutput,[_x select 1,1,_x select 0]];
		} forEach _output;
	};

	// Storage marked by the caller returns both its configured output and stored cargo.
	if (_isStorageItem) exitWith {
		_selectedRemoveOutput = _configuredRefund;

		local _cargoSets = [[getWeaponCargo _object,2],[getMagazineCargo _object,3],[getBackpackCargo _object,5]];	// Reformat cargo into [class,count,type].
		local _cargoClasses = [];
		local _cargoCounts = [];
		local _cargoType = 0;
		{
			_cargoClasses = _x select 0 select 0;
			_cargoCounts = _x select 0 select 1;
			_cargoType = _x select 1;

			{
				_selectedRemoveOutput set [count _selectedRemoveOutput,[_x,_cargoCounts select _forEachIndex,_cargoType]];
			} forEach _cargoClasses;
		} forEach _cargoSets;
	};

	_selectedRemoveOutput = _configuredRefund;	// All other removable objects use their configured output.
};

#ifdef DEBUG_DZE_FNC_REMOVE_REFUND
	diag_log format ['[Client Debug]: [DZE_fnc_removeRefund]: Object type: %1 | Output: %2',_objectType,_selectedRemoveOutput];
#endif

_selectedRemoveOutput
