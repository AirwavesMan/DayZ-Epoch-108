/*
Spawns the specified loot definition at the specified location.

Parameters:
	array		Loot definition
	vector		Spawn position relative to world

Return value:
	object		Spawned vehicle.

Author:
	Foxy
*/
#include "\z\addons\dayz_code\functions\include\defines.hpp"
#include "Loot.hpp"

// Maximum number of magazines spawned along with weapons
#define MAX_WEAPON_MAGAZINES 2

#ifdef SERVER
	#define INCREMENT_WEAPON_HOLDERS
#else
	#define INCREMENT_WEAPON_HOLDERS dayz_currentWeaponHolders = dayz_currentWeaponHolders + 1;
#endif

local _lootInfo	= p0;
local _posASL	= p1;
local _type	= _lootInfo select 0;
local _item	= _lootInfo select 1;
local _vehicle	= objNull;
local _angle	= RANDOM_DIR;
local _vdu	= [[sin _angle, cos _angle, 0],VECTOR_UP];

/// **** TODO **** REWRITE LOOT SPAWN SYSTEM
/// **** TODO **** resolve weaponHolder vectorUp on sloping terrain
/// **** TODO **** resolve small loot setDir that aligns to building

call (
	[
		// 2:	Loot_WEAPON
		{
			// Spawn a single weapon with [0,MAX_WEAPON_MAGAZINES] magazines.
			_vehicle = 'WeaponHolder' createVehicle ORIGIN;
			_vehicle addWeaponCargoGlobal [_item, 1];
			_vehicle setVectorDirAndUp _vdu;
			_vehicle setPosASL _posASL;

			INCREMENT_WEAPON_HOLDERS

			local _magazines = getArray (configFile >> 'CfgWeapons' >> _item >> 'magazines');

			if (count _magazines > 0 && {getNumber (configFile >> 'CfgWeapons' >> _item >> 'melee') != 1}) then
			{
				_vehicle addMagazineCargoGlobal [selectRandom(_magazines), floor random (MAX_WEAPON_MAGAZINES + 1)];
			};
		},

		// 3:	Loot_MAGAZINE
		{
			// Spawn a single magazine
/// **** TODO **** refactor dayz_classicBloodBagSystem
			if (dayz_classicBloodBagSystem && {_item in dayz_typedBags}) then {
				if (_item in ['bloodTester','bloodBagAPOS','bloodBagABPOS']) then { // reduce ItemBloodBag output slightly since typed bags spawn in bulk
					_item = ['ItemBandage','ItemPainkiller','ItemMorphine','ItemHeatPack','ItemAntibacterialWipe'] call BIS_fnc_selectRandom;
				} else {
					_item = 'ItemBloodbag';
				};
			};
			_vehicle = 'WeaponHolder' createVehicle ORIGIN;
			_vehicle addMagazineCargoGlobal [_item, 1];
			_vehicle setVectorDirAndUp _vdu;
			_vehicle setPosASL _posASL;

			INCREMENT_WEAPON_HOLDERS
		},

		// 4:	Loot_PILE
		{
			// Spawn multiple items from a given group. All but weapons and magazines are ignored.
			local _spawnCount = (_lootInfo select 2) + floor random ((_lootInfo select 3) - (_lootInfo select 2) + 1);
			_vehicle = 'WeaponHolder' createVehicle ORIGIN;
			Loot_InsertCargo(_vehicle, _item, _spawnCount);
			_vehicle setVectorDirAndUp _vdu;
			_vehicle setPosASL _posASL;

			INCREMENT_WEAPON_HOLDERS
		},

		// 5:	Loot_BACKPACK
		{
			// Spawn backpack
			_vehicle = [_item, _posASL, RANDOM_DIR, ALIGN_UP, FORMAT_ASL, NO_REVEAL] call DZE_fnc_createBackpack;
		},

		// 6:	Loot_VEHICLE
		{
			// Spawn a vehicle
			_vehicle = _item createVehicle ORIGIN;
			_vehicle setDir RANDOM_DIR;
			_vehicle setPosASL _posASL;
		},

		// 7:	Loot_CONTAINER
		{
			// Spawn a container and populate it with loot from a given group
			_vehicle = _item createVehicle ORIGIN;

			//Number of items to spawn
			local _spawnCount = (_lootInfo select 3) + floor random ((_lootInfo select 4) - (_lootInfo select 3) + 1);
			Loot_InsertCargo(_vehicle, _lootInfo select 2, _spawnCount);
			_vehicle setVectorDirAndUp _vdu;
			_vehicle setPosASL _posASL;

			INCREMENT_WEAPON_HOLDERS
		},

		// 8:	Loot_CUSTOM
		{
			// Call a function which is assumed to return an object reference.
			_vehicle = call (_item);
			if (typeName _vehicle != 'OBJECT') exitWith {};

			if (!isNull _vehicle) then {_vehicle setPosASL _posASL};
		}
	]

	select (_type - 2)
);

_vehicle
