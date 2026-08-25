// called by PublicVariableEventHandler "PVCDZ_hlt_Epi", received from the server, 
// because another player sent a PVDZ_send = [_unit,"Epinephrine",[_unit,player]];

private ["_unit","_medic"];

_unit = _this select 0;
_medic = _this select 1;

_unit setVariable ["NORRN_unconscious", false, true];
_unit setVariable ["USEC_isCardiac",false, true];
r_player_unconscious = false;
r_player_cardiac = false;

if (_medic != player) then {
	format [localize "str_actions_medical_general_received",_medic call DZE_fnc_getNamePlayer,localize "STR_EQUIP_NAME_14"] call DZE_fnc_rollingMessages;
};
