///#define DEBUG_DZE_FNC_SET_POS_WORLD

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_setPosWorld
//
//	Description:	Sets an object's PositionASL from its model-center PositionASL by subtracting
//			the complete rotated bounding-center offset.
//	Groups:		Positions
//
//	Syntax:		[object, position] call DZE_fnc_setPosWorld
//
//	Parameters:	object: Object
//			position: Array format PositionASL
//
//	Return Value:	Nothing
//
//	Called by:	Client and Server
//
//	Note:		Prior to calling this function, objects should have their vectorDirAndUp values
//			either exactly aligned to the world axis, or be orthogonal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SET_POS_WORLD
	diag_log format ['[%1 Debug]: [DZE_fnc_setPosWorld]: Function called with argumentes: %2',['Client','Server'] select isServer,_this];
#endif

local _object	= p0;
local _posASL	= p1;
local _bc	= boundingCenter _object;
local _currentObjectPosASL	= getPosASL _object;
local _currentCenterPosASL	= [_object] call DZE_fnc_modelCenterWorld;
local _offset	= ORIGIN;
local _objectPosASL	= +_posASL;

if (str _bc != str ORIGIN) then {
	// Reuse the exact forward transformation so both functions remain mathematical inverses.
	_offset = [
		(_currentCenterPosASL select 0) - (_currentObjectPosASL select 0),
		(_currentCenterPosASL select 1) - (_currentObjectPosASL select 1),
		(_currentCenterPosASL select 2) - (_currentObjectPosASL select 2)
	];
	_objectPosASL = [
		(_posASL select 0) - (_offset select 0),
		(_posASL select 1) - (_offset select 1),
		(_posASL select 2) - (_offset select 2)
	];
};

_object setPosASL _objectPosASL;

#ifdef DEBUG_DZE_FNC_SET_POS_WORLD
	diag_log format ['[%1 Debug]: [DZE_fnc_setPosWorld]: Position applied | Object: %2 | Model center ASL: %3 | Bounding center: %4 | Offset: %5 | Object ASL: %6',['Client','Server'] select isServer,_object,_posASL,_bc,_offset,_objectPosASL];
#endif
