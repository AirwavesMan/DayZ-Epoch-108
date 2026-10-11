if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

call gear_ui_init;
closeDialog 0;

local _player = player;
local _emptyBloodBag = "DZE_Item_Medi_EmptyBloodBag";
local _hasEmptyBloodBag = _emptyBloodBag in magazines player;
local _bloodLevel = _player getVariable ["USEC_BloodQty", 0];
local _bloodAmount = 4000;

if (vehicle _player != _player) exitWith {dayz_actionInProgress = false;localize "STR_EPOCH_PLAYER_318" call DZE_fnc_rollingMessages;};
if !(_hasEmptyBloodBag) exitWith {dayz_actionInProgress = false;localize "str_actions_medical_bagEmpty" call DZE_fnc_rollingMessages;};
if (_bloodLevel <= (_bloodAmount + 200)) exitWith {dayz_actionInProgress = false;localize "str_actions_medical_bagMissingBlood" call DZE_fnc_rollingMessages;};

local _count = [_player,_emptyBloodBag,1] call BIS_fnc_invRemove;

if (_count == 1) then {
	local _i = 1;
	local _steps = 5;
	local _complete = false;
	local _finished = false;
	local _blood = 0;
	local _bloodAfter = 0;

	localize "str_actions_medical_transfusion_start" call DZE_fnc_rollingMessages;

	while {_i <= _steps} do {
		_finished = ["Medic",1] call fn_loopAction;

		if !(_finished) exitwith {localize "str_actions_medical_bagInterrupted" call DZE_fnc_rollingMessages;};

		r_player_blood = r_player_blood - round(_bloodAmount/_steps);	
		_player setVariable["USEC_BloodQty", r_player_blood, true];			

		_blood = _player getVariable ["USEC_BloodQty", 0];
		_bloodAfter = (_blood - _bloodAmount);		

		if ((_blood <= _bloodAfter) || (_i == _steps)) exitwith {
			localize "str_actions_medical_bagDone" call DZE_fnc_rollingMessages;
			_complete = true;
		};

		_i = _i + 1;
	};

	if (_complete) then {
		local _bloodType = _player getVariable ["blood_type", false];
		local _rh = _player getVariable ["rh_factor", false];
		local _bloodbag = call {
			if (dayz_classicBloodBagSystem) exitwith {"DZE_Item_Medi_Bloodbag"};
			if (_bloodType == "A") exitwith {if (_rh) then {"DZE_Item_Medi_WholeBloodBagAPOS"} else {"DZE_Item_Medi_WholeBloodBagANEG"};};
			if (_bloodType == "B") exitwith {if (_rh) then {"DZE_Item_Medi_WholeBloodBagBPOS"} else {"DZE_Item_Medi_WholeBloodBagBNEG"};};
			if (_bloodType == "AB") exitwith {if (_rh) then {"DZE_Item_Medi_WholeBloodBagABPOS"} else {"DZE_Item_Medi_WholeBloodBagABNEG"};};
			if (_bloodType == "O") exitwith {if (_rh) then {"DZE_Item_Medi_WholeBloodBagOPOS"} else {"DZE_Item_Medi_WholeBloodBagONEG"};};
		};
		_player addMagazine _bloodbag;
	};
} else {
	localize "str_actions_medical_bagEmpty" call DZE_fnc_rollingMessages;
};

dayz_actionInProgress = false;