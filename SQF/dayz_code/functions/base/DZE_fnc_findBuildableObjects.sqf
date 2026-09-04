///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_findBuildableObjects
//
//	Description:	Finds nearby objects whose vehicle config allows building.
//	Groups:		Base, Build
//
//	Syntax:		[center,radius] call DZE_fnc_findBuildableObjects
//
//	Parameters:	center: Object or Position - Center of the search
//			radius: Number - Search radius in meters
//
//	Return Value:	Array - Objects with DZE_allowBuilding set to 1
//
//	Called by:	Client, Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_FIND_BUILDABLE_OBJECTS

#ifdef DEBUG_DZE_FNC_FIND_BUILDABLE_OBJECTS
	diag_log format ['[%1 Debug]: [DZE_fnc_findBuildableObjects]: Function called with arguments: %2',['Client','Server'] select isServer,_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 2}) exitWith {
	#ifdef DEBUG_DZE_FNC_FIND_BUILDABLE_OBJECTS
		diag_log format ['[%1 Debug]: [DZE_fnc_findBuildableObjects]: Error: Invalid parameter format: %2',['Client','Server'] select isServer,_this];
	#endif
	[]
};

local _center = _this select 0;
local _radius = _this select 1;
local _objects = [];

{
	if (getNumber (configFile >> 'CfgVehicles' >> (typeOf _x) >> 'DZE_allowBuilding') == 1) then {
		_objects set [count _objects,_x];
	};
} count nearestObjects [_center,[],_radius];

_objects
