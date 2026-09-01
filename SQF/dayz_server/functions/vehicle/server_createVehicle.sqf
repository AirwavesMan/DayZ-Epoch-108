///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_createVehicle
//
//	Description:		Create an object server side triggered from the client.
//	Syntax:				[classname,position,dir,vector,simulationDisabled,damageDisabled,permaloot,handleAmmo] call server_createVehicle
//
//	classname			String - Classname of the created object
//	position			Array - Position the object is created
//  dir 				Number - Direction of the object
//	vector				Number - Vector of the object
//	simulationDisabled	Boolean - Disable simulation of the object
//	damageDisabled		Boolean - Disable damage of the object
//	permaloot			Boolean - Permaloot variable mostly on crates
//	handleAmmo			Boolean - Add/Remove ammo to the object or keep it as it is
//
//	Return Value:		Object
//
//	Called from:		Server
//
//	Note:				Nothing
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_CREATE_VEHICLE

#ifdef DEBUG_SERVER_CREATE_VEHICLE
	diag_log format ['[Server Debug]: [Create Vehicle]: Function called with argumentes: %1',_this];
#endif

local _vars = _this;
local _classname = _vars select 0;
local _positionASL = _vars select 1;
local _dir = _vars select 2;
local _vector = _vars select 3;
local _simulationDisabled = _vars select 4;
local _damageDisabled = _vars select 5;
local _permaLoot = _vars select 6;
local _handleAmmo = _vars select 7;

local _object = _classname createVehicle [0,0,0];

#ifdef DEBUG_SERVER_CREATE_VEHICLE
	diag_log format ['[Server Debug]: [Create Vehicle]: Object created | Class: %1 | Position: %2',_classname,_positionASL];
#endif

if (count _vector > 0) then {
	_object setVectorDirAndUp _vector;
} else {
	_object setDir _dir;
};

[_object,_positionASL] call DZE_fnc_setPosWorld;

if (_simulationDisabled) then {
	_object enableSimulation false;

	#ifdef DEBUG_SERVER_CREATE_VEHICLE
		diag_log '[Server Debug]: [Create Vehicle]: Disable simulation on object';
	#endif	
};

if (_object isKindOf 'AllVehicles') then {	
	//[_object,false] call Server_Add_Vehicle_EH;

	if (_handleAmmo) then {
		if (_object isKindOf 'StaticWeapon' || {_classname in DZE_StaticWeapons}) then {
			[_object,DZE_clearStaticAmmo,false] call fn_vehicleAddons;
		} else {
			[_object,DZE_clearVehicleAmmo,DZE_addVehicleAmmo] call fn_vehicleAddons;
		};		
	};
} else {
	if !(_object isKindOf 'TrapItems') then {
		if (_damageDisabled) then {
			_object addEventHandler ['HandleDamage',{0}];

			#ifdef DEBUG_SERVER_CREATE_VEHICLE
				diag_log '[Server Debug]: [Create Vehicle]: Disable damage on object';
			#endif	
		} else {
			_object addMPEventHandler ['MPKilled',{if (isServer) then {_this call server_eh_mpKilled_object;};}];
		};
	};

};

if (_permaLoot) then {
	_object setVariable ['permaLoot',true];

	#ifdef DEBUG_SERVER_CREATE_VEHICLE
		diag_log '[Server Debug]: [Create Vehicle]: Set permaloot on object';
	#endif	
};

dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

// Register fuel-using fireplaces for the server fire monitor.
if (getNumber (configFile >> 'CfgVehicles' >> _classname >> 'DZE_fireUseFuel') == 1 && {!(_object in DZE_fireObjects)}) then {
	DZE_fireObjects set [count DZE_fireObjects,_object];
};

_object
