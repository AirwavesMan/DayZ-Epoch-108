///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_matrixTranspose
//
//	Description:	Returns transposed version of the given matrix. The matrix is an Array of rows.
//			Each row is an Array of corresponding column values for the row. The minimum number of rows is 1.
//	Groups:		Vectors
//
//	Syntax:		matrix call DZE_fnc_matrixTranspose
//	Example:	[[1,2,3],[4,5,6],[7,8,9]] call DZE_fnc_matrixTranspose; // returns [[1,4,7],[2,5,8],[3,6,9]]
//
//	Return Value:	Matrix
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _rows	= count _this;
local _cols	= count (_this select 0);
local _m	= [];
local _r	= [];

for '_i' from 0 to _cols - 1 do {

	_r = [];

	for '_j' from 0 to _rows - 1 do {
		_r set [_j, _this select _j select _i];
	};
	_m set [_i, _r];
};

_m
