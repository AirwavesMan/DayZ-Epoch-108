///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_spawnOreVeins
//
//	Description:	Spawns ore veins at valid, separated map positions and replaces destroyed veins
//			with their configured ruins.
//	Groups:		Map
//
//	Syntax:		call server_spawnOreVeins
//
//	Parameters:	None
//
//	Return Value:	Number - Number of spawned ore veins
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_SERVER_SPAWN_ORE_VEINS

#define ORE_VEIN_MAX_POSITION_ATTEMPTS 100

#ifdef DEBUG_SERVER_SPAWN_ORE_VEINS
	diag_log format ['[Server Debug]: [server_spawnOreVeins]: Requested ore veins: %1',DZE_maxOreVeins];
#endif

local _maxOreVeins = DZE_maxOreVeins; // Max number of random mine veins to spawn around the map
local _spawnRange = DZE_maxOreVeinsInRange;
local _oreClasses = ['DZE_Ore_Vein_Iron','DZE_Ore_Vein_Silver','DZE_Ore_Vein_Gold'];
local _mapCenter = getMarkerPos 'center';
local _mapRadius = getMarkerSize 'center' select 1;
local _damageHandler = {
	local _damage = _this select 2;

	if ((_this select 4) == 'Sledge_Swing_Ammo') then {
		_damage = _damage * 1.2;
	};

	_damage
};

local _position = [];
local _candidatePositions = [];
local _type = '';
local _vein = objNull;
local _spawned = false;
local _counter = 0;
local _index = 0;
local _attempt = 0;

for '_index' from 1 to _maxOreVeins do {
	_spawned = false;

	for '_attempt' from 1 to ORE_VEIN_MAX_POSITION_ATTEMPTS do {
		_position = [_mapCenter,0,_mapRadius,10,0,0.1,0,[]] call BIS_fnc_findSafePos;
		_candidatePositions = [];

		if (count _position == 2) then {
			_candidatePositions = selectBestPlaces [_position,500,'(1 + forest) * (1 - hills) * (1 - houses) * (1 - sea)',10,5];
		};

		if (count _candidatePositions > 0) then {
			_position = (_candidatePositions call BIS_fnc_selectRandom) select 0;

			#ifdef DEBUG_SERVER_SPAWN_ORE_VEINS
				diag_log format ['[Server Debug]: [server_spawnOreVeins]: Candidate: %1 | Grid: %2 | Attempt: %3',_position,mapGridPosition _position,_attempt];
			#endif

			//	Validate the selected final position.
			if (!(isOnRoad _position) && {!surfaceIsWater _position} &&	{count (nearestObjects [_position,['DZE_Ore_Veins_Base'],_spawnRange]) == 0}) then {
				_type = _oreClasses call BIS_fnc_selectRandom;
				_vein = _type createVehicle [0,0,0];
				_vein enableSimulation false;
				_vein setDir random 360;
				_position set [2,0];
				_vein setPosATL _position;
				_vein addEventHandler ['HandleDamage',_damageHandler];
				_vein addMPEventHandler ['MPKilled',{if (isServer) then {_this call server_eh_mpKilled_object;};}];

				#ifdef DEBUG_SERVER_SPAWN_ORE_VEINS
					diag_log format ['[Server Debug]: [server_spawnOreVeins]: Spawned: %1 | Position: %2 | Grid: %3',_type,getPosATL _vein,mapGridPosition _vein];
				#endif

				//	Counter is needed to get the actual spawn number since a position could be skipped
				_counter = _counter + 1;
				_spawned = true;
			};
		};

		if (_spawned) exitWith {};
	};

	if (!_spawned) exitWith {
		diag_log format ['[Server Debug]: [server_spawnOreVeins]: Warning: No valid position found for vein %1/%2 after %3 attempts.',_index,_maxOreVeins,ORE_VEIN_MAX_POSITION_ATTEMPTS];
	};
};

diag_log format ['[Server Debug]: [server_spawnOreVeins]: Spawned %1/%2 ore veins.',_counter,_maxOreVeins];
