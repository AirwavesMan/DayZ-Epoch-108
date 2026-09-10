///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_keypadInput
//
//	Description:	Appends a valid value entered through a safe or lockbox keypad and plays the keypad sound.
//	Groups:		GUI
//
//	Syntax:		[value, lockbox] call DZE_fnc_keypadInput
//
//	Parameters:	value: Number - Keypad value
//			lockbox: Boolean - true for a lockbox keypad, false for a safe keypad
//
//	Return Value:	Boolean - false to preserve the button's default behavior
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_KEYPAD_INPUT

#ifdef DEBUG_DZE_FNC_KEYPAD_INPUT
	diag_log format ['[Client Debug]: [DZE_fnc_keypadInput]: Function called with arguments: %1',_this];
#endif

local _value = _this select 0;
local _lockbox = _this select 1;
local _length = count toArray dayz_combination;
local _canAppend = call {
	if (!_lockbox) exitWith {_length < 4};
	if (_value >= 100) exitWith {_length == 0};
	_length >= 3 && {_length < 5}
};

if (_canAppend) then {
	dayz_combination = dayz_combination + str _value;
};
[player,'keypad_tick',0,false] call dayz_zombieSpeak;

false
