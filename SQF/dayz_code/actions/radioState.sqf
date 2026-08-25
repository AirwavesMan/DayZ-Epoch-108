// This function simulates turning "ItemRadio" on and off to accept or deny local messaging of type "radio".

if(player getVariable["radiostate",true]) then {
	localize "str_actions_radio_off" call DZE_fnc_rollingMessages;
	player setVariable["radiostate",false];
	playSound "Switch_On_Off";
} else {
	localize "str_actions_radio_on" call DZE_fnc_rollingMessages;
	player setVariable["radiostate",true];
	playSound "Switch_On_Off";
};