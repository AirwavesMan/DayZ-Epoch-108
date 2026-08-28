///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_ASLToAGL
//
//	Description:	Converts PositionASL to PositionAGL using terrain-relative height over land and
//			water-surface-relative height over water.
//	Groups:		Positions
//
//	Syntax:		positionASL call DZE_fnc_ASLToAGL
//
//	Parameters:	positionASL: Array - PositionASL to convert
//
//	Return Value:	Array - PositionAGL
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_ASL_TO_AGL

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_ASL_TO_AGL
	diag_log format ['[Client Debug]: [DZE_fnc_ASLToAGL]: Function called with arguments: %1',_this];
#endif

local _positionASL = _this;
local _positionAGL = [];

if (isWater(_positionASL)) then {
	// modelToWorld returns the water-surface-relative PositionAGL required over water.
	DZE_ASLTOAGL_HELPER setPosASL _positionASL;
	_positionAGL = getPosAGL(DZE_ASLTOAGL_HELPER);
} else {
	_positionAGL = ASLToATL _positionASL;
};

#ifdef DEBUG_DZE_FNC_ASL_TO_AGL
	diag_log format ['[Client Debug]: [DZE_fnc_ASLToAGL]: Position ASL: %1 | Position AGL: %2 | Water: %3',_positionASL,_positionAGL,isWater(_positionASL)];
#endif

_positionAGL
