///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_removeNearby
//
//	Description:	Finds the nearest matching object and starts the shared object-removal workflow.
//	Groups:		Build
//
//	Syntax:		[objectTypes,range,errorMessage] call DZE_fnc_removeNearby
//
//	Parameters:	objectTypes: Array - CfgVehicles classnames eligible for the search
//			range: Number - Maximum search distance from the player
//			errorMessage: String - Stringtable key shown when no object can be removed
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_REMOVE_NEARBY

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_REMOVE_NEARBY
	diag_log format ['[Client Debug]: [DZE_fnc_removeNearby]: Function called with arguments: %1',_this];
#endif

local _objectTypes = param(0,[]);
local _range = param(1,0);
local _errorMessage = param(2,'');

local _nearbyObjects = nearestObjects [player,_objectTypes,_range];

if (count _nearbyObjects == 0) exitWith {
	localize _errorMessage call DZE_fnc_rollingMessages;

	#ifdef DEBUG_DZE_FNC_REMOVE_NEARBY
		diag_log format ['[Client Debug]: [DZE_fnc_removeNearby]: Warning: No matching object found within %1 meters.',_range];
	#endif
};

local _targetObject = _nearbyObjects select 0;

if (isNull _targetObject) exitWith {
	localize _errorMessage call DZE_fnc_rollingMessages;

	#ifdef DEBUG_DZE_FNC_REMOVE_NEARBY
		diag_log format ['[Client Debug]: [DZE_fnc_removeNearby]: Error: Nearest matching object is null. Classes: %1 | Range: %2',_objectTypes,_range];
	#endif
};

#ifdef DEBUG_DZE_FNC_REMOVE_NEARBY
	diag_log format ['[Client Debug]: [DZE_fnc_removeNearby]: Starting removal for object: %1',_targetObject];
#endif

[player,player,-1,_targetObject] spawn DZE_fnc_removeObject;
