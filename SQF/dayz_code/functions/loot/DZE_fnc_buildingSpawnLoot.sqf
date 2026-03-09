///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildingSpawnLoot
//
//	Description:	Spawns loot at the given building.
//	Groups:		Loot
//
//	Syntax:		[building, className, config, lootChance] call DZE_fnc_buildingSpawnLoot
//
//	Parameters:	building: Object
//			className: String
//			config: Config
//			lootChance: Number
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"
#include "\z\addons\dayz_code\loot\Loot.hpp"

local _building		= p0;
local _typeOf		= p1;
local _config		= p2;
local _lootChance	= p3;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//			AGL fix using dedicated DZE_LOOT_HELPER
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _posAGL = ORIGIN;
local _posASL = ORIGIN;

local _spawnLoot = {

	_lootPos = [_lootPos, 5] call fn_shuffleArray;
	{
		_posAGL = posAGL(_building, _x);
		_posAGL set [2, 0 max (getZ(_posAGL))];

		// Delete existing lootpiles within 1m of spawn location
		{
			deleteVehicle _x;
			dayz_currentWeaponHolders = dayz_currentWeaponHolders - 1;
		} count (_posAGL nearObjects ['ReammoBox', 1]);

		if (randomChance(_lootChance) && {dayz_currentWeaponHolders < dayz_maxMaxWeaponHolders}) then {

			// get positionASL
			if (isTerrain(_posAGL)) then {
				_posASL = ATLToASL _posAGL;
			} else {
				/// **** TODO **** consider re-calculating AGL
				DZE_LOOT_HELPER setPosASL _posAGL;	// false ASL

				_posASL = [getX(_posAGL), getY(_posAGL), (getZ(_posAGL)) * 2 - (getZ(getPosAGL(DZE_LOOT_HELPER)))];	// 2a - b
			};

/// **** TODO **** resolve small loot setDir that aligns to building. Prevent items floating off shelves etc.

			Loot_SpawnGroup(_lootGroup, _posASL);		// pass ASL, not AGL
		};

	} forEach _lootPos;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _group	= getText (_config >> 'lootGroup');
local _lootPos	= getArray (_config >> 'lootPos');

local _lootGroup	= [];
local _smallGroup	= '';

// Military buildings spawn matching loot.
if (_group in ['Military','MilitaryIndustrial']) then {
	_lootGroup	= Loot_SelectSingle(Loot_GetGroup(_group));
	_smallGroup	= _lootGroup select 2;
	_lootGroup	= Loot_GetGroup(_lootGroup select 1);
} else {
	_lootGroup	= Loot_GetGroup(_group);
};

call _spawnLoot; // regular size

// EPOCH ADDITION
// lootPosSmall are additional positions in lockers, on shelves, etc. for small objects only.
// Example: soda cans, small ammo, pistols, bandage, etc.

if (isArray (_config >> 'lootPosSmall')) then {

	_lootPos = getArray (_config >> 'lootPosSmall');

	if (_smallGroup != '') then {
		_lootGroup = Loot_GetGroup(_smallGroup);
	} else {
		_lootGroup = Loot_GetGroup(_group + 'Small');
	};

	if (_lootGroup >= 1) then {
		call _spawnLoot; // small size
	} else {
		diag_log format ['Loot group small: %1 does not exist', getText(_config >> 'lootGroup') + 'Small'];
	};
};
