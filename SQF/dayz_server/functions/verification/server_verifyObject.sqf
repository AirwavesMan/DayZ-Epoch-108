///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_verifyObject
//
//	Description:	Verifies that an object class exists and is allowed for persistent building.
//	Groups:		Verification
//
//	Syntax:		[className, functionName] call server_verifyObject
//
//	Parameters:	className: String - CfgVehicles class to verify
//			functionName: String - Calling function used for diagnostic messages
//
//	Return Value:	Boolean
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_SERVER_VERIFY_OBJECT

#ifdef DEBUG_SERVER_VERIFY_OBJECT
	diag_log format ['[Server Debug]: [Verify Object]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 2}) exitWith {
	diag_log format ['[Server Debug]: [Verify Object]: Invalid parameters: %1',_this];
	false
};

local _className = _this select 0;
local _functionName	= _this select 1;

if (typeName _className != 'STRING' || {typeName _functionName != 'STRING'}) exitWith {
	diag_log format ['[Server Debug]: [Verify Object]: Invalid parameters: %1',_this];
	false
};

// Reject unknown classes before evaluating the server allowlist.
if !(['CfgVehicles',_className,_functionName] call DZE_fnc_checkValidClassname) exitWith {false};

//	Handle spawn of base class objects
if (getNumber(configFile >> 'CfgVehicles' >> _className >> 'scope') == 0) exitWith {
	diag_log format ['[Server Debug]: [Verify Object]: %1 rejected private object class: %2 that is not intended to be created!',_functionName,_className];
	false
};

//	Handle the spawning of objects that are not allowed on the server. Server admins must actively disallow specific objects
if (getNumber(configFile >> 'CfgVehicles' >> _className >> 'DZE_allowBuilding') == 0) exitWith {
	diag_log format ['[Server Debug]: [Verify Object]: %1 rejected disallowed object class: %2',_functionName,_className];
	false
};

#ifdef DEBUG_SERVER_VERIFY_OBJECT
	diag_log format ['[Server Debug]: [Verify Object]: %1 accepted object class: %2',_functionName,_className];
#endif

true
