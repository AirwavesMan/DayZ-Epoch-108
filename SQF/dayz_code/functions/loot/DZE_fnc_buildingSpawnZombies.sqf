///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildingSpawnZombies
//
//	Description:	Spawns zombies at the given building.
//	Groups:		Loot
//
//	Syntax:		[building, typeOf, config, chance] call DZE_fnc_buildingSpawnZombies
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _building	= p0;
local _typeOf	= p1;
local _config	= p2;
local _chance	= p3;

local _unitTypes= getArray (_config >> 'zombieClass');
local _zedPos	= getArray (_config >> 'zedPos');		// internal
local _min	= getNumber (_config >> 'minRoaming');
local _max	= getNumber (_config >> 'maxRoaming');
local _num	= _min + floor random abs (_max - _min + 1);	// wandering
local _walking	= [];

scopeName 'main';

if (count _unitTypes == 0) then {_unitTypes = getArray (missionConfigFile >> 'CfgLoot' >> 'Buildings' >> 'Default' >> 'zombieClass')};

// Internal Zombies
if (count _zedPos > 0) then {

	local _playerNear = false;

	{if (isPlayer _x) exitWith {_playerNear = true}} count (_building nearEntities ['CAManBase', 30]);

	if (!_playerNear) then {
		{
			if !(dayz_spawnZombies < dayz_maxControlledZombies && {dayz_CurrentNearByZombies < dayz_maxNearByZombies && {dayz_currentGlobalZombies < dayz_maxGlobalZeds}}) then {breakTo 'main'};

			if (randomChance(_chance)) then {
				[selectRandom(_unitTypes), _building, _x, false] call DZE_fnc_zombieGenerate;	// exact PositionRelative in AGL
			} else {
				addArray(_walking, _x);	// record skipped positions
			};
		} count _zedPos;
	};

	// Walking Zombies
	{
	if !(dayz_spawnZombies < dayz_maxControlledZombies && {dayz_CurrentNearByZombies < dayz_maxNearByZombies && {dayz_currentGlobalZombies < dayz_maxGlobalZeds}}) exitWith {};

		[selectRandom(_unitTypes), _building, _x, true] call DZE_fnc_zombieGenerate;

	} count ([_walking, _num] call DZE_fnc_selectDistinct);
};

// Bloodsuckers
if (DZE_Bloodsuckers) then {

	if (randomChance(DZE_BloodsuckerChance) && {_typeOf in DZE_BloodsuckerBuildings && {dayz_spawnBloodsuckers < DZE_BloodsuckersMaxLocal && {dayz_CurrentNearBloodsuckers < DZE_BloodsuckersMaxNear && {dayz_currentGlobalBloodsuckers < DZE_BloodsuckersMaxGlobal}}}}) then {
		getPosATL _building call mutant_generate; /// **** TODO **** apply AGL fix
	};
};
