///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	player_mineStone
//
//	Description:	Harvests stones from a nearby rock with a pickaxe.
//	Groups:		Actions
//
//	Syntax:		call player_mineStone
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
//	Updated by:	Victor the Cleaner
//	Date:		January 2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_PLAYER_MINE_STONE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_PLAYER_MINE_STONE
	diag_log format ['[Client Debug]: [player_mineStone]: Function called with argumentes: %1',_this];
#endif
if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

call gear_ui_init;
closeDialog 1;

local _pos1	= eyePos player;					// ASL line start
local _line	= ATLToASL screenToWorld [0.5,0.5];			// ASL terminus
local _dist	= 4;
local _vec1	= [_pos1, _line] call BIS_fnc_vectorFromXToY;		// sight vector
local _vec2	= [_vec1, _dist] call BIS_fnc_vectorMultiply;		// extend line-of-sight
local _pos2	= [_pos1, _vec2] call BIS_fnc_vectorAdd;		// ASL line stop
local _pos3	= +_pos2;
local _pos4	= +_pos1;
local _found	= false;
local _rocks	= [];
local _model	= "";

_pos3 set [2, (_pos3 select 2) - _dist];				// player is looking over low rock
_pos4 set [2, (_pos4 select 2) - _dist];				// player is directly above rock

{
	_rocks = lineIntersectsWith [_pos1, _x, player, objNull, true];		// detect objects
	_model = "";

	if (count _rocks > 0) then {
		_model = (_rocks call BIS_fnc_arrayPop) call fn_getModelName;	// get model name of nearest target
	};
	if (_model in DZE_rocks) exitWith {_found = true;};			// found one
} forEach [_pos2, _pos3, _pos4];

if (!_found) then {								// if none found, try the old method
	{
		_model = _x call fn_getModelName;
		if (_model in DZE_rocks) exitWith {_found = true;};
	} forEach nearestObjects [player, [], 8];
};

if (_found) then {

	local _countOut = 2 + floor(random 4);

	// Start stone mining loop
	local _counter	= 0;
	local _isOk	= true;
	local _proceed	= false;

	local _finished = false;
	local _weapons = [];

	while {_isOk} do {
		[player,(getPosATL player),50,"minestone"] spawn fnc_alertZombies;

		_finished = ["Medic",1] call fn_loopAction;
		_weapons = weapons player;

		// Make sure player did not drop pickaxe
		if (!_finished || !("ItemPickaxe" in _weapons)) exitWith {
			_isOk	 = false;
			_proceed = false;
		};

		if (_finished) then {
			["Working",0,[100,15,10,0]] call dayz_NutritionSystem;

			// Drop item to ground
			["ItemStone",1,1] call fn_dropItem;	// item, magazine, amount

			_counter = _counter + 1;
		};

		if (_counter >= _countOut) exitWith {
			localize "str_mining_finished" call DZE_fnc_rollingMessages;
			_isOk	 = false;
			_proceed = true;
		};
		format[localize "str_mining_progress", _counter, (_countOut - _counter)] call DZE_fnc_rollingMessages;
	};

	if (_proceed) then {
		['ItemPickaxe'] call DZE_fnc_toolBreak;
	} else {
		localize "str_mining_canceled" call DZE_fnc_rollingMessages;
	};
} else {
	localize "str_mining_no_rocks" call DZE_fnc_rollingMessages;
};

dayz_actionInProgress = false;
