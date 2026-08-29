///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	player_combineMatches
//
//	Description:	Combines all carried partial matchboxes into boxes with up to five matches.
//	Groups:		Inventory, Tools
//
//	Syntax:		[] spawn player_combineMatches
//
//	Parameters:	None
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_PLAYER_COMBINE_MATCHES

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_PLAYER_COMBINE_MATCHES
	diag_log format ['[Client Debug]: [player_combineMatches]: Function called with argumentes: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

local _total = 0;
local _amount = 0;
{
	if (configName inheritsFrom (configFile >> 'CfgWeapons' >> _x) == 'DZE_Tool_Matchbox') then {
		_amount = getNumber (configFile >> 'CfgWeapons' >> _x >> 'DZE_matches');
		if (_amount > 0) then {
			_total = _total + _amount;
			player removeWeapon _x;
		};
	};
} count (weapons player);

local _full = floor (_total / 5);
local _remain = _total % 5;

local _i = 0;
for '_i' from 1 to _full do {
	if ('DZE_Tool_Matchbox5' in weapons player) then {
		'DZE_Tool_Matchbox5' call player_addDuplicateTool;
	} else {
		player addWeapon 'DZE_Tool_Matchbox5';
	};
};

if (_remain > 0) then {
	player addWeapon ('DZE_Tool_Matchbox' + str _remain);
};

dayz_actionInProgress = false;
