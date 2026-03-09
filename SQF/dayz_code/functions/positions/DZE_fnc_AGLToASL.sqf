///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_AGLToASL
//
//	Description:	Converts position from PositionAGL to PositionASL.
//	Groups:		Positions
//
//	Syntax:		position call DZE_fnc_AGLToASL
//
//	Return Value:	Array format PositionASL
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

if (isTerrain(_this)) exitWith {ATLToASL _this};

DZE_AGLTOASL_HELPER setPosASL _this;

[p0, p1, (p2) * 2 - (getZ(getPosAGL(DZE_AGLTOASL_HELPER)))]
