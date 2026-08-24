private ["_text","_textBox"];

disableSerialization;
_textBox = _this displayCtrl 101;
_text = ctrlText _textBox;

if (alive player) then {
	_text = if (_text == "") then {player call DZE_fnc_getNamePlayer} else {format["%1: %2",player call DZE_fnc_getNamePlayer,_text]};
	_textBox ctrlSetText _text;
};
