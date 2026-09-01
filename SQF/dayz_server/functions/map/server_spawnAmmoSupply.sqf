///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_spawnAmmoSupply
//
//	Description:	Spawns supply crates at valid positions near roads and replaces destroyed crates
//			with their configured ruins.
//	Groups:		Map
//
//	Syntax:		call server_spawnAmmoSupply
//
//	Parameters:	None
//
//	Return Value:	Number - Number of spawned supply crates
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_SERVER_SPAWN_AMMO_SUPPLY

#define SUPPLY_CRATE_MAX_POSITION_ATTEMPTS 100

#ifdef DEBUG_SERVER_SPAWN_AMMO_SUPPLY
	diag_log format ['[Server Debug]: [server_spawnAmmoSupply]: Requested supply crates: %1',DZE_maxSupplyCrates];
#endif

local _maxSupplyCrates = DZE_maxSupplyCrates;

if (_maxSupplyCrates > 0 && {count DZE_globalRoadList == 0}) exitWith {
	diag_log format ['[Server Debug]: [server_spawnAmmoSupply]: Warning: No roads are available for supply crate spawning.'];
};

local _position = [];
local _crate = objNull;
local _counter = 0;
local _index = 0;
local _attempt = 0;

for '_index' from 1 to _maxSupplyCrates do {
	_crate = objNull;

	for '_attempt' from 1 to SUPPLY_CRATE_MAX_POSITION_ATTEMPTS do {
		_position = (DZE_globalRoadList call BIS_fnc_selectRandom) modelToWorld [0,0,0];
		_position = [_position,10,30,5,0,0.1,0,[]] call BIS_fnc_findSafePos;

		if (count _position == 2 && {!(isOnRoad _position)} && {count (nearestObjects [_position,['All'],5]) == 0}) exitWith {
			_position set [2,0];
			_crate = 'DZE_Supply_Crate' createVehicle [0,0,0];
			_crate enableSimulation false;
			_crate setDir random 360;
			_crate setPosATL _position;
			_crate addMPEventHandler ['MPKilled',{if (isServer) then {_this call server_eh_mpKilled_object;};}];

			//	Counter is needed to get the actual spawn number since a position could be skipped
			_counter = _counter + 1;

			#ifdef DEBUG_SERVER_SPAWN_AMMO_SUPPLY
				diag_log format ['[Server Debug]: [server_spawnAmmoSupply]: Spawned crate: %1 | Position: %2 | Grid: %3 | Attempt: %4',typeOf _crate,getPosATL _crate,mapGridPosition _crate,_attempt];
			#endif
		};
	};

	if (isNull _crate) then {
		diag_log format ['[Server Debug]: [server_spawnAmmoSupply]: Warning: No valid position found for supply crate %1/%2 after %3 attempts.',_index,_maxSupplyCrates,SUPPLY_CRATE_MAX_POSITION_ATTEMPTS];
	};
};

#ifdef DEBUG_SERVER_SPAWN_AMMO_SUPPLY
	diag_log format ['[Server Debug]: [server_spawnAmmoSupply]: Spawned %1/%2 supply crates.',_counter,_maxSupplyCrates];
#endif
