private ["_unit","_medic"];

_unit = _this select 0;
_medic = _this select 1;

r_player_inpain = false;
_unit setVariable ["USEC_inPain", false, true];
R3F_TIRED_Accumulator = 0;

if (_medic != player) then {
	format [localize "str_actions_medical_painkillers_receive",_medic call DZE_fnc_getNamePlayer] call DZE_fnc_rollingMessages;
};
