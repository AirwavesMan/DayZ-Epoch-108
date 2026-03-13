///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_subSelect
//
//	Description:	Returns a sub-selection from an array or string.
//	Groups:		Arrays
//
//	Syntax 1:	[array, start, end] call DZE_fnc_subSelect
//	Syntax 2:	[array, start, -length] call DZE_fnc_subSelect
//
//	Parameters:	array: Array or String
//			start: Number - 0-based start index
//			end: Number - 0-based end index
//
//	Alternative:	length: Number - length of sub-selection. Pass as negative number for positive length, i.e. -3 specifies a length of 3.
//
//	Return Value:	Array or String
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _fnc_subSelect = {

	local _max	= count _array - 1;	// max 0-based index
	local _range	= [];

	if (_max >= 0 && {_start <= _max}) then {

		_end = if (_end < 0) then {_start - 1 + abs _end min _max} else {_end min _max};

		for '_i' from _start to _end do {addArray(_range, _array select _i)};
	};

	_range
};

local _array	= p0;
local _start	= abs (p1);
local _end	= p2;

if (typeName _array == 'STRING') exitWith {

	_array	= toArray _array;
	toString call _fnc_subSelect;
};

call _fnc_subSelect;
