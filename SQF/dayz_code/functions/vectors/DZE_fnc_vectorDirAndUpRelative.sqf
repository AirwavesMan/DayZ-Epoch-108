///#define DEBUG_DZE_FNC_VECTOR_DIR_AND_UP_RELATIVE

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorDirAndUpRelative
//
//	Description:	Converts an object's world vectorDirAndUp into the local coordinate system
//			of a parent object.
//	Groups:		Vectors
//
//	Syntax:		[object, parent] call DZE_fnc_vectorDirAndUpRelative
//
//	Return Value:	Array - Parent-relative vectorDirAndUp
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_VECTOR_DIR_AND_UP_RELATIVE
	diag_log format ['[Client Debug]: [DZE_fnc_vectorDirAndUpRelative]: Function called with argumentes: %1',_this];
#endif

local _object = p0;
local _parent = p1;
local _parentMatrix = getRotationMatrix(_parent);
local _vectorDir = vectorDir _object;
local _vectorUp = vectorUp _object;

// Project both world vectors onto the parent's right, forward and up basis vectors.
_vectorDir = [
	vectorDotProduct(_vectorDir, _parentMatrix select 0),
	vectorDotProduct(_vectorDir, _parentMatrix select 1),
	vectorDotProduct(_vectorDir, _parentMatrix select 2)
];
_vectorDir = vectorNormalized(_vectorDir);
_vectorUp = [
	vectorDotProduct(_vectorUp, _parentMatrix select 0),
	vectorDotProduct(_vectorUp, _parentMatrix select 1),
	vectorDotProduct(_vectorUp, _parentMatrix select 2)
];
_vectorUp = vectorNormalized(_vectorUp);

local _vectorDirAndUp = [_vectorDir, _vectorUp];

#ifdef DEBUG_DZE_FNC_VECTOR_DIR_AND_UP_RELATIVE
	diag_log format ['[Client Debug]: [DZE_fnc_vectorDirAndUpRelative]: Relative orientation calculated | Object: %1 | Parent: %2 | VectorDirAndUp: %3',_object,_parent,_vectorDirAndUp];
#endif

_vectorDirAndUp
