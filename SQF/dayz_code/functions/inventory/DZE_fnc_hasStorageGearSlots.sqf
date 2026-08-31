///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_hasStorageGearSlots
//
//	Description:	Checks whether a CfgVehicles class can store magazines, weapons or backpacks.
//	Groups:		Inventory
//
//	Syntax:		className call DZE_fnc_hasStorageGearSlots
//
//	Parameters:	className: String - CfgVehicles class to check
//
//	Return Value:	Boolean - Whether the class has storage gear slots
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_HAS_STORAGE_GEAR_SLOTS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_HAS_STORAGE_GEAR_SLOTS
	diag_log format ['[Client Debug]: [DZE_fnc_hasStorageGearSlots]: Function called with arguments: %1',_this];
#endif

local _className = _this;
local _config = configFile >> 'CfgVehicles' >> _className;
local _hasStorageGearSlots = getNumber (_config >> 'transportMaxMagazines') > 0 || getNumber (_config >> 'transportMaxWeapons') > 0 || getNumber (_config >> 'transportMaxBackpacks') > 0;

#ifdef DEBUG_DZE_FNC_HAS_STORAGE_GEAR_SLOTS
	diag_log format ['[Client Debug]: [DZE_fnc_hasStorageGearSlots]: Class: %1 | Has storage gear slots: %2',_className,_hasStorageGearSlots];
#endif

_hasStorageGearSlots
