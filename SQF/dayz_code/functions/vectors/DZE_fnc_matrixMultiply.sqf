///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_matrixMultiply
//
//	Description:	Returns resulting matrix from the multiplication of two matrices.
//	Groups:		Vectors
//
//	Syntax:		[matrix1, matrix2] call DZE_fnc_matrixMultiply
//
//	Return Value:	Matrix - of the size n(rows) x m(columns)
//
//	Called by:	Client
//
//	Notes:		First matrix must be of the size n x k, while the second must be of the size k x m,
//			i.e columns matrix1 == rows matrix2. The resulting matrix will be of the size n x m.
//			If the shapes do not match, empty array [] will be returned.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _m1	= +(p0);
local _m2	= +(p1);
local _r1	= count _m1;
local _c1	= count (_m1 select 0);
local _r2	= count _m2;
local _c2	= count (_m2 select 0);
local _matrix	= [];

if (_c1 != _r2) exitWith {_matrix};

for '_i' from 0 to _r1 - 1 do {

	local _mx	= _m1 select _i;
	local _row	= [];

	for '_j' from 0 to _c2 - 1 do {

		local _sum = 0;

		for '_k' from 0 to _c1 - 1 do {
///			_sum = _sum + (_m1 select _i select _k) * (_m2 select _k select _j);
			_sum = _sum + (_mx select _k) * (_m2 select _k select _j);
		};
		_row set [_j, _sum];
	};
	_matrix set [_i, _row];
};
_matrix
