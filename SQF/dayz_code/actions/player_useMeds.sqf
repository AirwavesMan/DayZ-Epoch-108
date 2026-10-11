private ["_item","_onLadder","_hasmeditem","_config","_text","_display"];

_item = _this;
call gear_ui_init;
closeDialog 0;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {localize "str_player_21" call DZE_fnc_rollingMessages;};

_hasmeditem = _item in magazines player;

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hasmeditem) exitWith {format[localize "str_player_31",_text,localize "str_player_31_use"] call DZE_fnc_rollingMessages;};

call {
	if (_item == "DZE_Item_Medi_Bandage") exitWith {[0,0,0,[player,"DZE_Item_Medi_Bandage"]] execVM "\z\addons\dayz_code\medical\bandage.sqf";};
	if (_item == "DZE_Item_Medi_Morphine") exitWith {[0,0,0,[player,"DZE_Item_Medi_Morphine"]] execVM "\z\addons\dayz_code\medical\brokeBones.sqf";};
	if (_item == "DZE_Item_Medi_Painkiller") exitWith {[player,"DZE_Item_Medi_Painkiller"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "DZE_Item_Medi_Painkiller6") exitWith {[player,"DZE_Item_Medi_Painkiller6"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "DZE_Item_Medi_Painkiller5") exitWith {[player,"DZE_Item_Medi_Painkiller5"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "DZE_Item_Medi_Painkiller4") exitWith {[player,"DZE_Item_Medi_Painkiller4"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "DZE_Item_Medi_Painkiller3") exitWith {[player,"DZE_Item_Medi_Painkiller3"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "DZE_Item_Medi_Painkiller2") exitWith {[player,"DZE_Item_Medi_Painkiller2"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "DZE_Item_Medi_Painkiller1") exitWith {[player,"DZE_Item_Medi_Painkiller1"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "DZE_Item_Medi_Bloodbag") exitWith {[player,"DZE_Item_Medi_Bloodbag"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_AntibacterialWipe") exitWith {[0,0,0,[player]] execVM "\z\addons\dayz_code\medical\wipes.sqf";};
	if (_item == "DZE_Item_Medi_HeatPack") exitWith {player removeMagazine "DZE_Item_Medi_HeatPack"; r_player_warming_heatpack = [true, diag_tickTime]; localize "str_player_27" call DZE_fnc_rollingMessages;};  //dayz_temperatur = (dayz_temperatur + 5) min dayz_temperaturmax;
	if (_item == "DZE_Item_Medi_Woodensplint") exitWith {[0,0,0,[player,"DZE_Item_Medi_Woodensplint"]] execVM "\z\addons\dayz_code\medical\brokeBones.sqf";};
	if (_item == "DZE_Item_Medi_BandageSepsis") exitWith {[0,0,0,[player,"DZE_Item_Medi_BandageSepsis"]] execVM "\z\addons\dayz_code\medical\bandage.sqf";};
	if (_item == "DZE_Item_Medi_Antibiotic") exitWith {[player,"DZE_Item_Medi_Antibiotic"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "DZE_Item_Medi_Antibiotic1") exitWith {[player,"DZE_Item_Medi_Antibiotic1"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "DZE_Item_Medi_Antibiotic2") exitWith {[player,"DZE_Item_Medi_Antibiotic2"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "DZE_Item_Medi_Antibiotic3") exitWith {[player,"DZE_Item_Medi_Antibiotic3"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "DZE_Item_Medi_Antibiotic3") exitWith {[player,"DZE_Item_Medi_Antibiotic3"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "DZE_Item_Medi_Antibiotic4") exitWith {[player,"DZE_Item_Medi_Antibiotic4"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "DZE_Item_Medi_Antibiotic5") exitWith {[player,"DZE_Item_Medi_Antibiotic5"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "DZE_Item_Medi_Antibiotic6") exitWith {[player,"DZE_Item_Medi_Antibiotic6"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagANEG") exitWith {[player,"DZE_Item_Medi_WholeBloodBagANEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagAPOS") exitWith {[player,"DZE_Item_Medi_WholeBloodBagAPOS"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagBNEG") exitWith {[player,"DZE_Item_Medi_WholeBloodBagBNEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagBPOS") exitWith {[player,"DZE_Item_Medi_WholeBloodBagBPOS"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagABNEG") exitWith {[player,"DZE_Item_Medi_WholeBloodBagABNEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagABNEG") exitWith {[player,"DZE_Item_Medi_WholeBloodBagABNEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagABPOS") exitWith {[player,"DZE_Item_Medi_WholeBloodBagABPOS"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagONEG") exitWith {[player,"DZE_Item_Medi_WholeBloodBagONEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_WholeBloodBagOPOS") exitWith {[player,"DZE_Item_Medi_WholeBloodBagOPOS"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "DZE_Item_Medi_BloodTester") exitWith {[0,0,0,[player]] execVM "\z\addons\dayz_code\medical\blood_test.sqf";};
	if (_item == "DZE_Item_Medi_TransfusionKit") exitWith {[0,0,0,[player]] execVM "\z\addons\dayz_code\medical\fillBloodBag.sqf";};
	if (_item == "DZE_Item_Medi_EmptyBloodBag") exitWith {[0,0,0,[player]] execVM "\z\addons\dayz_code\medical\fillBloodBag.sqf";};
};

if (vehicle player != player) then {
	_display = findDisplay 106;
	_display closeDisplay 0;
};
