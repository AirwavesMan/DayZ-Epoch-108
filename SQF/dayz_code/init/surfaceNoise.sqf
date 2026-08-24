//
//	Preload hashMap table with surfaceNoise data for use with player_checkStealth
//
#define DEFAULT_NOISE   25
#define INDEX_FOREST     1
#define INDEX_GRASS      2
#define INDEX_ROCK       3
#define INDEX_CONCRETE   4
#define INDEX_ROAD       5

///diag_log text '===================================================================================================';
///diag_log text 'Surface Noise -- Setup Initiated';
///diag_log text '';

local _t		= diag_tickTime;
local _cfgSurfaces	= configFile >> 'CfgSurfaces';
local _cfgVehicles	= configFile >> 'CfgVehicles' >> 'CAManBase' >> 'SoundEnvironExt';
local _road		= false;
local _world		= toLower worldName;

for '_i' from 0 to count _cfgSurfaces - 1 do {

	local _cfg	= _cfgSurfaces select _i;		// full config
	local _surface	= '#' + configName _cfg;		// surfaceType
	local _terrain	= getText (_cfg >> 'soundEnviron');	// 'grass', 'concrete'
	local _noise	= getArray (_cfgVehicles >> _terrain);	// audial multiplier

	if (count _noise == 0) then {				// no entry
		_noise = DEFAULT_NOISE; 
	} else {
		_noise = _noise select 0;			// array

		if (count _noise < 4) then {			// no noise value
			_noise = DEFAULT_NOISE; 
		} else {
			_noise = parseNumber format ['%1', _noise select 3];

			if (_noise == 0) then {_noise = DEFAULT_NOISE};

			if (!_road && {_terrain == 'road'}) then {
				missionNamespace setVariable ['#EpochRoad', [_terrain, _noise, INDEX_ROAD]];
				///diag_log text format ['%1: %2 %3', _i, '#EpochRoad', [_terrain, _noise, INDEX_ROAD]];
				_road = true;
			};
		};
	};

	local _index = call {
		if (_terrain == 'forest')					exitWith {INDEX_FOREST};
		if (_terrain in ['grass','drygrass'])				exitWith {INDEX_GRASS};
		if (_terrain == 'rock')						exitWith {INDEX_ROCK};
		if (_terrain in ['concrete','concrete_ext','concrete_int'])	exitWith {INDEX_CONCRETE};
		0
	};

	missionNamespace setVariable [_surface, [_terrain, _noise, _index]];
	///diag_log text format ['%1: %2 %3', _i, _surface, [_terrain, _noise, _index]];
};

DEFAULT_SURFACETYPE = call {

	if (_world == 'chernarus_winter')	exitWith {['chernarus_winter_snow_sound', 27, 0]};
	if (_world == 'utes_winter')		exitWith {['utes_winter_snow_sound', 27, 0]};
	['normalExt', 27, 0]
};

///diag_log text '';
///diag_log text format ['Surface Noise -- Setup Completed in %1 seconds', diag_tickTime - _t];
///diag_log text '===================================================================================================';
