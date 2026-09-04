///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_projectBox2D
//
//	Description:	Projects an object's bounding-box corners into world XY space and returns the
//			projected points together with the separating axes required by SAT.
//	Groups:		Geometry
//
//	Syntax:		object call DZE_fnc_projectBox2D
//
//	Return Value:	Array ([projected points, separating axes])
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_PROJECTBOX2D

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_PROJECTBOX2D
	diag_log format ['[Client Debug]: [DZE_fnc_projectBox2D]: Function called with argumentes: %1',_this];
#endif

local _boxObject = _this;

if (isNull _boxObject) exitWith {
	#ifdef DEBUG_DZE_FNC_PROJECTBOX2D
		diag_log format ['[Client Debug]: [DZE_fnc_projectBox2D]: Invalid object: %1',_boxObject];
	#endif

	[[],[]]
};

local _bb	= boundingBox _boxObject;
local _min	= _bb select 0;
local _max	= _bb select 1;
local _minX	= _min select 0;
local _minY	= _min select 1;
local _minZ	= _min select 2;
local _maxX	= _max select 0;
local _maxY	= _max select 1;
local _maxZ	= _max select 2;
local _corners	=
[
	[_minX,_minY,_minZ],
	[_minX,_minY,_maxZ],
	[_minX,_maxY,_minZ],
	[_minX,_maxY,_maxZ],
	[_maxX,_minY,_minZ],
	[_maxX,_minY,_maxZ],
	[_maxX,_maxY,_minZ],
	[_maxX,_maxY,_maxZ]
];
local _polygon	= [];
local _point	= [];

// Project all eight model-space corners into world XY space.
{
	_point = _boxObject modelToWorld _x;
	_point resize 2;
	addArray(_polygon, _point);
} forEach _corners;

local _axes		= [];
local _edgeIndices	= [];
local _p1		= [];
local _p2		= [];
local _edgeX		= 0;
local _edgeY		= 0;
local _axisX		= 0;
local _axisY		= 0;
local _length		= 0;

// The projected edges can only follow the object's local X, Y or Z axis.
// Their normalized perpendicular vectors are all axes required by SAT.
{
	_edgeIndices = _x;
	_p1 = _polygon select (_edgeIndices select 0);
	_p2 = _polygon select (_edgeIndices select 1);
	_edgeX = (_p2 select 0) - (_p1 select 0);
	_edgeY = (_p2 select 1) - (_p1 select 1);
	_axisX = -_edgeY;
	_axisY = _edgeX;
	_length = sqrt (_axisX * _axisX + _axisY * _axisY);

	if (_length > 0.0001) then {addArray(_axes, v2(_axisX / _length, _axisY / _length))};
} forEach [[0,4],[0,2],[0,1]];

#ifdef DEBUG_DZE_FNC_PROJECTBOX2D
	diag_log format ['[Client Debug]: [DZE_fnc_projectBox2D]: Projection result | Object type: %1 | Points: %2 | Axes: %3',typeOf _boxObject,count _polygon,count _axes];
#endif

[_polygon,_axes]
