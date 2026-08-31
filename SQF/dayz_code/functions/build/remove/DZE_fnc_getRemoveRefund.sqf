///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getRemoveRefund
//
//	Description:	Reads and validates one configured RemoveObject refund for a vehicle class.
//	Groups:		Build
//
//	Syntax:		[objectType] call DZE_fnc_getRemoveRefund
//
//	Parameters:	objectType: String - CfgVehicles class whose RemoveObject output is resolved
//
//	Return Value:	Array - Validated refund entries in [className,count] format
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_GET_REMOVE_REFUND

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_GET_REMOVE_REFUND
	diag_log format ['[Client Debug]: [DZE_fnc_getRemoveRefund]: Function called with arguments: %1',_this];
#endif

local _objectType = param(0,'');
local _removeObjectConfig = configFile >> 'CfgVehicles' >> _objectType >> 'RemoveObject';
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
	};
};

local _validatedRefund = [];
{
	if (['CfgMagazines',_x select 0,'DZE_fnc_getRemoveRefund'] call DZE_fnc_checkValidClassname) then {
		_validatedRefund set [count _validatedRefund,_x];
	};
} forEach _configuredRefund;

#ifdef DEBUG_DZE_FNC_GET_REMOVE_REFUND
	diag_log format ['[Client Debug]: [DZE_fnc_getRemoveRefund]: Object type: %1 | Mode: %2 | Refund: %3',_objectType,DZE_refundMode,_validatedRefund];
#endif

_validatedRefund
