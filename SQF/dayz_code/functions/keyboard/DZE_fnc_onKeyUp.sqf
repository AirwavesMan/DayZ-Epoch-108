///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_onKeyUp
//
//	Description:	Handle key up operations.
//	Groups:		Keyboard
//
//	Syntax:		array call DZE_fnc_onKeyUp
//
//	Return Value:	Boolean
//
//	Called by:	Client (onKeyUp event handler)
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\ca\editor\Data\Scripts\dikCodes.h"

local _dikCode	= _this select 1;
local _handled	= false;

if (isNil 'keyboardUp_keys') then {

	keyboardUp_keys	= [];
	keyboardUp_keys resize 256;

	local _keyArrayUp = [

		[actionKeys 'NextChannel',	{_this call kb_switchChannel_keyUp}],
		[actionKeys 'PrevChannel',	{_this call kb_switchChannel_keyUp}]
	];

	local _key	= [];
	local _code	= {};
	{
		_key	= _x select 0;
		_code	= _x select 1;
		{
			if (_x >= 0 && {_x < 256}) then {
				keyboardUp_keys set [_x, _code];
			};
		} forEach _key;
	} forEach _keyArrayUp;
};

if (r_player_unconsciousInputDisabled) exitWith {true};

local _code = keyboardUp_keys select _dikCode;

if (!isNil '_code') then {_handled = call _code};

_handled
