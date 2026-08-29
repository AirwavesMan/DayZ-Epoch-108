///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_combineMatches
//
//	Description:	Combines all carried partial matchboxes into boxes with up to five matches.
//	Groups:		Tools
//
//	Syntax:		[] spawn DZE_fnc_combineMatches
//
//	Parameters:	None
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_COMBINE_MATCHES

#include "\z\addons\dayz_code\functions\include\defines.hpp"

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

local _weapons = weapons player;
local _totalMatches = 0;
local _matches = 0;
{
	if (_x in _weapons) then {
		_matches = getNumber (configFile >> 'CfgWeapons' >> _x >> 'DZE_matches');
		if (_matches > 0) then {
			_totalMatches = _totalMatches + _matches;
			player removeWeapon _x;
		};
	};
} forEach DZE_Matchboxes;

local _fullBoxes = floor (_totalMatches / 5);
local _remainingMatches = _totalMatches % 5;

local _i = 0;
for '_i' from 1 to _fullBoxes do {
	if ('DZE_Tool_Matchbox5' in weapons player) then {
		'DZE_Tool_Matchbox5' call DZE_fnc_addDuplicateTool;
	} else {
		player addWeapon 'DZE_Tool_Matchbox5';
	};
};

if (_remainingMatches > 0) then {
	player addWeapon ('DZE_Tool_Matchbox' + str _remainingMatches);
};

#ifdef DEBUG_DZE_FNC_COMBINE_MATCHES
	diag_log format ['[Client Debug]: [DZE_fnc_combineMatches]: Combined matches: %1 | Full boxes: %2 | Remaining matches: %3',_totalMatches,_fullBoxes,_remainingMatches];
#endif

dayz_actionInProgress = false;
