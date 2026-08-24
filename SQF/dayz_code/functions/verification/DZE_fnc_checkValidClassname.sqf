///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_checkValidClassname
//
//	Description:	Checks if the supplies classname is a valid classname
//	Syntax:			[ConfigEntry,Classname,calledFunction] call DZE_fnc_checkValidClassname;
//
//	ConfigEntry		String - Can be directly the CfgConfig or '' to check all configs
//	Classname		String - Classname that needs to be checked
//	Called Function	String - Name of the Function which calls this check
//
//	Return Value:	Boolean
//
//	Called by:		Client and Server
//
//	Note:			Nothing
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_CHECK_VALID_CLASSNAME

local _configEntry = _this select 0;
local _classname = _this select 1;
local _calledFunction = _this select 2;
local _isOk = true;

#ifdef DEBUG_CHECK_VALID_CLASSNAME
	diag_log format ['%1 [Check Valid Classname]: Function called with arguments: %2',['[Client Debug]:','[Server Debug]:'] select isServer,_this];
#endif

if (_configEntry == '') then {
	_isOk = call {
		if (isClass (configFile >> 'CfgMagazines' >> _classname)) exitwith {true};
		if (isClass (configFile >> 'CfgWeapons' >> _classname)) exitwith {true};
		if (isClass (configFile >> 'CfgVehicles' >> _classname)) exitwith {true};
		false
	};
} else {
	_isOk = isClass (configFile >> _configEntry >> _classname);
};

if (_isOk) then {
	#ifdef DEBUG_CHECK_VALID_CLASSNAME
		diag_log format ['%1 [Check Valid Classname]: %2 is a valid classname called from function: %3',['[Client Debug]:','[Server Debug]:'] select isServer,_classname,_calledFunction];
	#endif	
} else {
	diag_log format ['%1 [Check Valid Classname]: WARNING: %2 is not a valid classname called from function: %3',['[Client Debug]:','[Server Debug]:'] select isServer,_classname,_calledFunction];
};

_isOk