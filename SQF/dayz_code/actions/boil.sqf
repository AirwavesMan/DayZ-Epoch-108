if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_boil;
player removeAction s_player_cook;
player removeAction s_player_thaw;
a_player_boil		= true;
//s_player_boil		= -1;

local _bottleText	= getText (configFile >> "CfgMagazines" >> 'DZE_Item_Waterbottle' >> "displayName");
local _waterbottles	= ['DZE_Item_Waterbottle_Infected','DZE_Item_Waterbottle','DZE_Item_Waterbottle_Safe','DZE_Item_Waterbottle_1oz','DZE_Item_Waterbottle_2oz','DZE_Item_Waterbottle_3oz','DZE_Item_Waterbottle_4oz','DZE_Item_Waterbottle_5oz','DZE_Item_Waterbottle_6oz','DZE_Item_Waterbottle_7oz','DZE_Item_Waterbottle_8oz','DZE_Item_Waterbottle_9oz','DZE_Item_Waterbottle_PET','DZE_Item_Waterbottle_PET_Infected','DZE_Item_Waterbottle_PET_Safe','DZE_Item_Waterbottle_PET_1oz','DZE_Item_Waterbottle_PET_2oz','DZE_Item_Waterbottle_PET_3oz','DZE_Item_Waterbottle_PET_4oz','DZE_Item_Waterbottle_PET_5oz','DZE_Item_Waterbottle_PET_6oz','DZE_Item_Waterbottle_PET_7oz','DZE_Item_Waterbottle_PET_8oz','DZE_Item_Waterbottle_PET_9oz'];
local _plasticBottles	= ['DZE_Item_Waterbottle_PET','DZE_Item_Waterbottle_PET_Infected','DZE_Item_Waterbottle_PET_Safe','DZE_Item_Waterbottle_PET_1oz','DZE_Item_Waterbottle_PET_2oz','DZE_Item_Waterbottle_PET_3oz','DZE_Item_Waterbottle_PET_4oz','DZE_Item_Waterbottle_PET_5oz','DZE_Item_Waterbottle_PET_6oz','DZE_Item_Waterbottle_PET_7oz','DZE_Item_Waterbottle_PET_8oz','DZE_Item_Waterbottle_PET_9oz'];
local _magsPlayer	= magazines player;
local _qty		= {_x in _waterbottles} count _magsPlayer;
local _hasTinItem	= true;
local _wasStanding	= ["perc", animationState player] call fnc_inString;
local _finished		= false;

if ({_x in _plasticBottles} count _magsPlayer > 0) then {
	_hasTinItem = {_x in _magsPlayer} count boil_tin_cans > 0;
};

if (!_hasTinItem) exitWith {
	local _tin1text	= getText (configFile >> "CfgMagazines" >> "DZE_Item_Trash_TinCan" >> "displayName");
	local _tin2text	= getText (configFile >> "CfgMagazines" >> "DZE_Item_Trash_Soda" >> "displayName");
	local _tintext	= format ["%1 / %2", _tin1text, _tin2text];
	format [localize "str_player_31", _tintext, localize "str_player_31_fill"] call DZE_fnc_rollingMessages;
	a_player_boil		= false;
	dayz_actionInProgress	= false;
};

scopeName "main";
if (_qty > 0) then {
	[player, (getPosATL player), 10, "cook"] spawn fnc_alertZombies;
	_finished = ["Medic",1] call fn_loopAction;

	// Double check player did not drop item
	local _bottles = [];
	{
		if (_x in _waterbottles) then {
			_bottles set [count _bottles, _x];
		};
	} count magazines player;

	_qty = count _bottles;

	if (_qty < 1 || !_finished) exitWith {};

	{
		local _bottle = _x;
		local _removed = [player, _bottle] call BIS_fnc_invRemove;
		if (_removed == 0) then {
			_finished = false;
			breakTo "main";
		};

		if (dayz_waterBottleBreaking && {[DZE_bottleBreakChance] call fn_chance}) then {
			if (_bottle in _plasticBottles) then {
				player addMagazine 'DZE_Item_Waterbottle_PET_Dmg';
			} else {
				player addMagazine 'DZE_Item_Waterbottle_Dmg';
			};
			localize "str_waterbottle_broke" call DZE_fnc_rollingMessages;
		} else {
			if (_bottle in _plasticBottles) then {
				if (_bottle in ['DZE_Item_Waterbottle_PET','DZE_Item_Waterbottle_PET_Infected','DZE_Item_Waterbottle_PET_Safe']) then {
					player addMagazine 'DZE_Item_Waterbottle_PET_Boiled';
				} else {
					player addMagazine (_bottle + "Boiled");
				};
			} else {
				if (_bottle in ['DZE_Item_Waterbottle','DZE_Item_Waterbottle_Infected','DZE_Item_Waterbottle_Safe']) then {
					player addMagazine 'DZE_Item_Waterbottle_Boiled';
				} else {
					player addMagazine (_bottle + "Boiled");
				};
			};
		};
	} count _bottles;

	format [localize "str_player_boiledwater", _qty] call DZE_fnc_rollingMessages;
} else {
	format [localize "str_player_31", _bottleText, localize "str_player_31_fill"] call DZE_fnc_rollingMessages;
};

if (!_finished) then {
	localize "STR_EPOCH_ACTION_CANCELED" call DZE_fnc_rollingMessages;
} else {
	if (_wasStanding) then {
		player playActionNow "PlayerStand";	// once the action has completed, return player to a standing pose if they were standing before the action
	};
};

a_player_boil = false;
dayz_actionInProgress = false;
