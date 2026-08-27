///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getConfiguredRemoveRefund
//
//	Description:	Reads and validates one configured RemoveObject refund for a vehicle class.
//	Groups:		Build
//
//	Syntax:		[objectType] call DZE_fnc_getConfiguredRemoveRefund
//
//	Parameters:	objectType: String - CfgVehicles class whose RemoveObject output is resolved
//
//	Return Value:	Array - Validated refund entries in [className,count] format
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_GET_CONFIGURED_REMOVE_REFUND

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_GET_CONFIGURED_REMOVE_REFUND
	diag_log format ['[Client Debug]: [DZE_fnc_getConfiguredRemoveRefund]: Function called with arguments: %1',_this];
#endif

local _objectType = param(0,'');
local _removeObjectConfig = configFile >> 'CfgVehicles' >> _objectType >> 'RemoveObject';

if (!isClass _removeObjectConfig) exitWith {[]};

local _configuredRefund = [];

if (DZE_refundMode == 'kit') then {
	local _refundKit = getText (_removeObjectConfig >> 'DZE_refundKit');

	if (_refundKit != '') then {
		_configuredRefund = [[_refundKit,1]];
	};
} else {
	local _refundArrays = getArray (_removeObjectConfig >> 'DZE_refundArray');

	if (count _refundArrays > 0) then {
		_configuredRefund = _refundArrays call BIS_fnc_selectRandom;	// Each outer entry defines one complete refund set.
	} else {
		// Fall back if no parts to refund were found.
		local _refundKit = getText (_removeObjectConfig >> 'DZE_refundKit');

		if (_refundKit != '') then {
			_configuredRefund = [[_refundKit,1]];
		};
	};
};

if (typeName _configuredRefund != 'ARRAY') exitWith {
	diag_log format ['[Client Debug]: [DZE_fnc_getConfiguredRemoveRefund]: Warning: Invalid configured refund set for %1: %2',_objectType,_configuredRefund];

	[]
};

local _validatedRefund = [];
local _refundClassName = '';
local _refundCount = 0;
local _validEntry = false;
local _validCount = false;

{
	_validEntry = typeName _x == 'ARRAY' && {count _x >= 2};
	_refundClassName = '';
	_refundCount = 0;
	_validCount = false;

	if (_validEntry) then {
		_refundClassName = _x select 0;
		_refundCount = _x select 1;
		_validEntry = typeName _refundClassName == 'STRING' && {_refundClassName != ''};
	};

	if (typeName _refundCount == 'SCALAR') then {
		_validCount = _refundCount >= 0;
	} else {
		if (typeName _refundCount == 'ARRAY' && {count _refundCount >= 2}) then {
			_validCount = typeName (_refundCount select 0) == 'SCALAR' && {typeName (_refundCount select 1) == 'SCALAR'} && {(_refundCount select 0) >= 0} && {(_refundCount select 1) >= 0};
		};
	};

	if (_validEntry && {_validCount}) then {
		if (['CfgMagazines',_refundClassName,'DZE_fnc_getConfiguredRemoveRefund'] call DZE_fnc_checkValidClassname) then {
			_validatedRefund set [count _validatedRefund,_x];
		};
	} else {
		#ifdef DEBUG_DZE_FNC_GET_CONFIGURED_REMOVE_REFUND
			diag_log format ['[Client Debug]: [DZE_fnc_getConfiguredRemoveRefund]: Warning: Invalid configured refund entry for %1: %2',_objectType,_x];
		#endif
	};
} forEach _configuredRefund;

#ifdef DEBUG_DZE_FNC_GET_CONFIGURED_REMOVE_REFUND
	diag_log format ['[Client Debug]: [DZE_fnc_getConfiguredRemoveRefund]: Object type: %1 | Mode: %2 | Refund: %3',_objectType,DZE_refundMode,_validatedRefund];
#endif

_validatedRefund
