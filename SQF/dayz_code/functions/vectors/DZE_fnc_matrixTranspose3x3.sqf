///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_matrixTranspose3x3
//
//	Description:	Returns transposed version of the given 3x3 matrix.
//			Each row is an Array of corresponding column values for the row.
//	Groups:		Vectors
//
//	Syntax:		matrix call DZE_fnc_matrixTranspose3x3
//	Example:	[[1,2,3],[4,5,6],[7,8,9]] call DZE_fnc_matrixTranspose3x3; // returns [[1,4,7],[2,5,8],[3,6,9]]
//
//	Return Value:	Matrix
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _m = +_this;

for '_i' from 0 to 2 do {
	for '_j' from 0 to 2 do {
		_m select _i set [_j, _this select _j select _i];
	};
};

_m
