///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_playerSpawnCheck
//
//	Description:	Check if nearby buildings need to spawn loot and zombies.
//	Groups:		Loot
//
//	Syntax:		call DZE_fnc_playerSpawnCheck
//
//	Return Value:	None
//
//	Called by:	Client/Scheduler
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _age		= -1;
local _radius		= 200;	// distance from player to perform checks.
local _spawnZedRadius	= 20;

// Current zombies
local _zeds			= entities 'zZombie_Base';	// all zombies, living or dead
dayz_currentGlobalZombies	= count _zeds;			// all zombies, living or dead
dayz_spawnZombies		= 0;				// local zombies only (alive and in range)
dayz_CurrentNearByZombies	= 0;				// local & server zombies (alive and in range)
dayz_maxControlledZombies	= dayz_maxLocalZombies;		// This variable is also used in building_spawnZombies

{
	if (_x distance player < _radius && {alive _x}) then {
		if (local _x) then {
			dayz_spawnZombies = dayz_spawnZombies + 1;
		};
		dayz_CurrentNearByZombies = dayz_CurrentNearByZombies + 1;
	};
} count _zeds;

// Current loot spawns
dayz_currentWeaponHolders = count (player nearObjects ['ReammoBox', _radius]);

// Current bloodsuckers
if (DZE_Bloodsuckers) then {

	local _bloodsuckers		= entities 'z_bloodsucker';	// all bloodsuckers, living or dead
	dayz_currentGlobalBloodsuckers	= count _bloodsuckers;		// all bloodsuckers, living or dead
	dayz_spawnBloodsuckers		= 0;				// local bloodsuckers only (alive and in range)
	dayz_CurrentNearBloodsuckers	= 0;				// local & server bloodsuckers (alive and in range)
	{
		if (_x distance player < _radius && {alive _x}) then {
			if (local _x) then {
				dayz_spawnBloodsuckers = dayz_spawnBloodsuckers + 1;
			};
			dayz_CurrentNearBloodsuckers = dayz_CurrentNearBloodsuckers + 1;
		};
	} count _bloodsuckers;
};

// In vehicle check
local _vehicle		= vehicle player;
local _inVehicle	= _vehicle != player;
local _doNothing	= false;

if (_inVehicle) then {

	local _Controlledzeddivided = 0;

	if (abs speed _vehicle > 25) exitWith {_doNothing = true};		// exit if too fast

	if (count crew _vehicle > 1) then {					// Crew can spawn zeds

		_Controlledzeddivided = 2;

		if (player == driver _vehicle) exitWith {_doNothing = true};	// Don't allow driver to spawn if we have other crew members.
	} else {
		_Controlledzeddivided = 4;
	};

	if (_Controlledzeddivided > 0) then {dayz_maxControlledZombies = round (dayz_maxControlledZombies / _Controlledzeddivided)};
};

if (_doNothing) exitWith {};

local _nearbyBuildings = player nearObjects ['House', _radius];				// "Building" includes weaponHolders, using "House" narrows the search

dayz_spawnZombies = dayz_spawnZombies max (floor (dayz_maxControlledZombies * 0.8));	// **** TODO **** why is it doing this?

if (dayz_spawnZombies > 0) then {_spawnZedRadius = _spawnZedRadius * 3};		// 20 or 60

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				Spawn Zeds & loot in buildings
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _serverTime	= serverTime;	// Get the current time once per cycle
local _lootTimer	= getNumber (missionConfigFile >> 'CfgLoot' >> 'Buildings' >> 'Default' >> 'lootRefreshTimer');			// 15 minutes
local _zombieTimer	= 300;														//  5 minutes
local _safeZone		= if (count DZE_SafeZonePosArray > 0) then {{!([_building] call DZE_fnc_safeZonePosCheck)}} else {{true}};
local _maxLeanAngle	= cos 20;	// max lean angle of building that can still spawn loot

{
	local _building	= _x;
	local _typeOf	= typeOf _building;
	local _config	= missionConfigFile >> 'CfgLoot' >> 'Buildings' >> _typeOf;
	local _vUp	= vectorUp _building;

	if (isClass _config && {getZ(_vUp) >= _maxLeanAngle && {call _safeZone}}) then {

		local _dis	= _building distance player;
		local _isLocal	= _building getVariable ['', false]; // object created locally via TownGenerator.

		///////////////////////////////////////////////////////////////////////////////////
		//
		//					Loot
		//
		///////////////////////////////////////////////////////////////////////////////////

		if (dayz_currentWeaponHolders < dayz_maxMaxWeaponHolders) then { // Check this first

			local _lootChance = getNumber (_config >> 'lootChance');
// DEBUG		_lootChance = 1;

			// && !_inVehicle ???
			if (_lootChance > 0 && {_dis < 125 && {dayz_insideBuilding != _building}}) then {		// test this without _inVehicle check // test 125m distance // how far can a player sprint in ~6 seconds?

				local _age = _serverTime - (_building getVariable ['looted', _serverTime - _lootTimer]);

				if (_age >= _lootTimer) then {

					_building setVariable ['looted', _serverTime, !_isLocal];
					[_building, _typeOf, _config, _lootChance] call DZE_fnc_buildingSpawnLoot;
				};
			};
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//					Zeds
		//
		///////////////////////////////////////////////////////////////////////////////////

		local _chance = getNumber (_config >> 'zombieChance');
// DEBUG	_chance = 1;

		if (_chance > 0) then {

			if (_dis > _spawnZedRadius) then {

				local _age = _serverTime - (_building getVariable ['zombieSpawn', _serverTime - _zombieTimer]);

				if (_age >= _zombieTimer) then {

					// Make sure crash sites always spawn Zeds
					if (_building isKindOf 'CrashSite') then {

						local _zombies = count (_building nearEntities ['zZombie_Base', sizeOf _typeOf * 2 + 30]);

						if (_zombies == 0) then {

							[_building, _typeOf, _config, _chance] call DZE_fnc_buildingSpawnZombies;
						};
					} else {
						if (dayz_spawnZombies < dayz_maxControlledZombies && {dayz_CurrentNearByZombies < dayz_maxNearByZombies && {dayz_currentGlobalZombies < dayz_maxGlobalZeds}}) then {

							local _zombies = count (_building nearEntities ['zZombie_Base', sizeOf _typeOf * 2 + 10]);

							if (_zombies == 0) then {

								_building setVariable ['zombieSpawn', _serverTime, PUBLIC_VARIABLE];

								[_building, _typeOf, _config, _chance] call DZE_fnc_buildingSpawnZombies;
							};
						};
					};
				};
			};
		};
	};
} forEach _nearbyBuildings;
