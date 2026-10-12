if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

private ["_array","_handle","_type","_onLadder","_removed","_itemIn","_countIn","_bottles"];

_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {dayz_actionInProgress = false;localize "str_player_21" call DZE_fnc_rollingMessages;};

_array = 	_this select 3;
_handle = 	_array select 0;
_type = 	_array select 1;

player playActionNow "PutDown";

switch (_type) do {
	case 0: {
		// expanded to allow all meats as input
		_removed = 0;
		_itemIn = 'DZE_Food_Raw_Base';
		_countIn = 1;
		{
			if( (_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
				_removed = _removed + ([player,_x] call BIS_fnc_invRemove);
			};
		} count magazines player;
		if(_removed == _countIn) then {
			_handle setFSMVariable ["_hunger",0];
			player removeAction s_player_feeddog;
			s_player_feeddog = -1;
		};

	};
	case 1: {
		_bottles = ['DZE_Item_Waterbottle','DZE_Item_Waterbottle_Infected','DZE_Item_Waterbottle_Safe','DZE_Item_Waterbottle_Boiled','DZE_Item_Waterbottle_PET','DZE_Item_Waterbottle_PET_Infected','DZE_Item_Waterbottle_PET_Safe','DZE_Item_Waterbottle_PET_Boiled'];
		{
			if (_x in _bottles) exitwith {
				if (_x in ['DZE_Item_Waterbottle','DZE_Item_Waterbottle_Infected','DZE_Item_Waterbottle_Safe','DZE_Item_Waterbottle_Boiled']) then {
					player addMagazine 'DZE_Item_Waterbottle_Unfilled';
				} else {
					player addMagazine 'DZE_Item_Waterbottle_PET_Unfilled';
				};
				player removeMagazine _x;
			};
		} count magazines player;
		_handle setFSMVariable ["_thirst",0];
		player removeAction s_player_waterdog;
		s_player_waterdog = -1;
	};
};

dayz_actionInProgress = false;
