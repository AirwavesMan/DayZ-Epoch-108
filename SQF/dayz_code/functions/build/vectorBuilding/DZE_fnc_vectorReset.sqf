///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorReset
//
//	Description:	Resets the build helper to its parent-relative or world orientation.
//	Groups:		Build, Vector Building
//
//	Syntax:		object call DZE_fnc_vectorReset
//
//	Parameters:	object: Object - Build helper whose orientation is reset
//
//	Return Value:	Array - Reset vectorDirAndUp
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_VECTOR_RESET

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_VECTOR_RESET
	diag_log format ['[Client Debug]: [DZE_fnc_vectorReset]: Function called with argumentes: %1',_this];
#endif

local _object = _this;

orientToWorld(_object);

BUILD_dir3D = ORIGIN;
BUILD_dir2D = 0;

local _vectorDirAndUp = getVectorDirAndUp(_object);

#ifdef DEBUG_DZE_FNC_VECTOR_RESET
	diag_log format ['[Client Debug]: [DZE_fnc_vectorReset]: Rotation reset | VectorDirAndUp: %1',_vectorDirAndUp];
#endif

_vectorDirAndUp
