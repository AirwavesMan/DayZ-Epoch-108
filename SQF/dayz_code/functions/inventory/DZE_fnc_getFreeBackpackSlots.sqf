///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getFreeBackpackSlots
//
//	Description:	Returns the number of free magazine-sized slots in a backpack.
//	Groups:		Inventory
//
//	Syntax:		backpack call DZE_fnc_getFreeBackpackSlots
//
//	Parameters:	backpack: Object - Backpack to inspect
//
//	Return Value:	Number - Free backpack slots
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_GET_FREE_BACKPACK_SLOTS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_GET_FREE_BACKPACK_SLOTS
	diag_log format ['[Client Debug]: [DZE_fnc_getFreeBackpackSlots]: Function called with arguments: %1',_this];
#endif

local _bag = _this;
if (isNull _bag) exitWith {0};

local _type = typeOf _bag;
local _maxSlots = getNumber (configFile >> 'CfgVehicles' >> _type >> 'transportMaxMagazines');

#ifdef DEBUG_DZE_FNC_GET_FREE_BACKPACK_SLOTS
	diag_log format ['[Client Debug]: [DZE_fnc_getFreeBackpackSlots]: Backpack %1 has %2 slots.',_type,_maxSlots];
#endif

// If the backpack has no transportMaxMagazines, it has no usable slots.
if (_maxSlots < 1) exitWith {0};

local _magazineCargo = getMagazineCargo _bag;
local _weaponCargo = getWeaponCargo _bag;
local _usedSlots = 0;
local _itemClass = '';
local _itemQuantity = 0;
local _itemType = 0;

{
	_itemClass = _x;
	_itemQuantity = (_magazineCargo select 1) select _forEachIndex;
	_itemType = getNumber (configFile >> 'CfgMagazines' >> _itemClass >> 'type');

	#ifdef DEBUG_DZE_FNC_GET_FREE_BACKPACK_SLOTS
		diag_log format ['[Client Debug]: [DZE_fnc_getFreeBackpackSlots]: Magazine %1, type %2, quantity %3.',_itemClass,_itemType,_itemQuantity];
	#endif

	// Secondary magazines use one slot. Main magazines encode their slot count in multiples of 256.
	if (_itemType == 16) then {_itemType = 1};
	if (_itemType > 16) then {_itemType = _itemType / 256};

	_usedSlots = _usedSlots + (_itemType * _itemQuantity);
} forEach (_magazineCargo select 0);

#ifdef DEBUG_DZE_FNC_GET_FREE_BACKPACK_SLOTS
	diag_log format ['[Client Debug]: [DZE_fnc_getFreeBackpackSlots]: Used slots after magazines: %1.',_usedSlots];
#endif

{
	_itemClass = _x;
	_itemQuantity = (_weaponCargo select 1) select _forEachIndex;
	_itemType = getNumber (configFile >> 'CfgWeapons' >> _itemClass >> 'type');

	#ifdef DEBUG_DZE_FNC_GET_FREE_BACKPACK_SLOTS
		diag_log format ['[Client Debug]: [DZE_fnc_getFreeBackpackSlots]: Weapon %1, type %2, quantity %3.',_itemClass,_itemType,_itemQuantity];
	#endif

	// Primary weapon
	if (_itemType == 1) then {_usedSlots = _usedSlots + (10 * _itemQuantity)};
	// Secondary weapon
	if (_itemType == 2) then {_usedSlots = _usedSlots + (5 * _itemQuantity)};
	// Launcher
	if (_itemType == 4) then {_usedSlots = _usedSlots + (10 * _itemQuantity)};
	// Toolbelt item, night vision or binocular
	if (_itemType in [131072,4096]) then {_usedSlots = _usedSlots + _itemQuantity};
} forEach (_weaponCargo select 0);

local _freeSlots = (_maxSlots - _usedSlots) max 0;

#ifdef DEBUG_DZE_FNC_GET_FREE_BACKPACK_SLOTS
	diag_log format ['[Client Debug]: [DZE_fnc_getFreeBackpackSlots]: Backpack has %1 free slots.',_freeSlots];
#endif

_freeSlots
