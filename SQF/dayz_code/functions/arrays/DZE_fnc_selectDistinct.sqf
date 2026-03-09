///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_selectDistinct
//
//	Description:	Returns a random selection of distinct entries from an array.
//	Groups:		Arrays
//
//	Syntax:		[array, qty, percentage] call DZE_fnc_selectDistinct
//
//	Parameters:	array: Array
//			qty: Number - count of required elements
//			percentage: Number - (Optional, default 0.666) count percentage that decides method used
//
//	Return Value:	Array
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _array	= +(p0);
local _count	= count _array;
local _qty	= clamp(floor (p1), 0, _count);
local _perc	= param(2, 0.666);

if (_qty < _count * _perc) then {	// count percentage threshold for optimal speed

	//
	//	method 1: results are generated from a decreasing pool size
	//

	local _idx	= 0;
	local _result	= [];

	for '_i' from 1 to _qty do {

		_idx	= floor random _count;
		_count	= _count - 1;

		addArray(_result, _array select _idx);

		if (_idx < _count) then {_array set [_idx, _array select _count]};
	};

	_result

} else {

	//
	//	method 2: results are generated from a shuffled array
	//

	if (_count > 1) then {

		local _tmp = _array select 0;
		local _idx = 0;

		for '_i' from _count - 1 to 1 step -1 do {

			_idx = floor random (_i + 1);

			arraySwap(_array, _tmp, _i, _idx);
		};
	};

	_array resize _qty;
	_array
};
