///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_zombieGenerate
//
//	Description:	Spawns a zombie at the given location.
//	Groups:		Zombies
//
//	Syntax:		[type, building, offset, loiter] call DZE_fnc_zombieGenerate
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"
#include "\z\addons\dayz_code\loot\Loot.hpp"

local _type	= p0;	// zombie class
local _building	= p1;
local _posRel	= p2;	// AGL offset
local _doLoiter	= p3;	// wander around

///if (surfaceIsWater _position) exitWith { diag_log "Zombie_Generate: Location is in Water Abort"; };
///if (([_position, 30, 10, 200] call fnc_fieldOfView) || _isWreck) then {};

// Create zombie
local _posAGL	= _building modelToWorld _posRel;
local _agent	= createAgent [_type, _posAGL, [], 0, 'CAN_COLLIDE'];
_agent setDir RANDOM_DIR;

if (isTerrain(_posAGL)) then {

	_agent setPosATL _posAGL;

} else {
	_posAGL set [2, call {DZE_LOOT_HELPER setPosASL _posAGL; (getZ(_posAGL)) * 2 - (getZ(DZE_LOOT_HELPER modelToWorld ORIGIN))}];	// atomize calculation (2a - b)

///	DZE_LOOT_HELPER setPosASL _posAGL;
///	_posAGL set [2, (getZ(_posAGL)) * 2 - (getZ(DZE_LOOT_HELPER modelToWorld ORIGIN))];

	_agent setPosASL _posAGL;
};

local _favStance = ['Up','middle'] select (ceil random 3 == 2);
_agent setUnitPos _favStance;
_agent setVariable ['stance', _favStance];
_agent setVariable ['doLoiter', _doLoiter]; // true: Z will be wandering, false: stay still
/// **** TODO **** consider DO_WANDER / DO_IDLE macros for clearer movement behaviour

// Add to global counters
dayz_spawnZombies = dayz_spawnZombies + 1;
dayz_CurrentNearByZombies = dayz_CurrentNearByZombies + 1;
dayz_currentGlobalZombies = dayz_currentGlobalZombies + 1;

// Add some loot
if (randomChance(0.3)) then {

	local _lootGroup = configFile >> 'CfgVehicles' >> _type >> 'zombieLoot';

	if (isText _lootGroup) then {
		_lootGroup = Loot_GetGroup(getText _lootGroup);
		Loot_Insert(_agent, _lootGroup, 1);
	};
};
