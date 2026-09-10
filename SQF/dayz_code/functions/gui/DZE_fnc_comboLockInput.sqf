///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_comboLockInput
//
//	Description:	Changes one digit of the active combination lock and refreshes its control.
//	Groups:		GUI
//
//	Syntax:		[control, increase, position] call DZE_fnc_comboLockInput
//
//	Parameters:	control: Number - IDC of the combination picture
//			increase: Boolean - true to increase, false to decrease
//			position: String - top, mid or bot
//
//	Return Value:	Boolean - false to preserve the button's default behavior
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_COMBO_LOCK_INPUT

#ifdef DEBUG_DZE_FNC_COMBO_LOCK_INPUT
	diag_log format ['[Client Debug]: [DZE_fnc_comboLockInput]: Function called with arguments: %1',_this];
#endif

local _controlId = _this select 0;
local _increase = _this select 1;
local _position = _this select 2;
local _value = call {
	if (_position == 'top') exitWith {DZE_topCombo};
	if (_position == 'mid') exitWith {DZE_midCombo};
	DZE_botCombo
};

_value = if (_increase) then {(_value + 1) mod 10} else {(_value + 9) mod 10};

local _control = (findDisplay 41144) displayCtrl _controlId;
_control ctrlSetText format ['\z\addons\dayz_epoch\ui\%1_%2.paa',_position,_value];

[player,'combo_tick',0,false] call dayz_zombieSpeak;

if (_position == 'top') then {DZE_topCombo = _value;};
if (_position == 'mid') then {DZE_midCombo = _value;};
if (_position == 'bot') then {DZE_botCombo = _value;};

DZE_Lock_Door = format ['%1%2%3',DZE_topCombo,DZE_midCombo,DZE_botCombo];

false
