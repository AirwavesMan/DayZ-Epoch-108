///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_setDamageObject
//
//	Description:	Calculates and applies proportional damage when replacing a building object.
//	Groups:		Build
//
//	Syntax:		[object, oldObjectType, newObjectType, oldDamage] call server_setDamageObject
//
//	Parameters:	object: Object - Replacement object that receives the calculated damage
//			oldObjectType: String - Class name of the replaced object
//			newObjectType: String - Class name of the replacement object
//			oldDamage: Number - Damage value of the replaced object
//
//	Return Value:	Number - Damage applied to the replacement object
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_SET_DAMAGE_OBJECT

#ifdef DEBUG_SERVER_SET_DAMAGE_OBJECT
	diag_log format['[Server Debug]: [server_setDamageObject]: Function called with arguments: %1',_this];
#endif

local _object = _this select 0;
local _oldObjectType = _this select 1;
local _newObjectType = _this select 2;
local _damageOld = _this select 3;

local _armorOld = getNumber (configFile >> 'CfgVehicles' >> _oldObjectType >> 'armor');
local _armorNew = getNumber (configFile >> 'CfgVehicles' >> _newObjectType >> 'armor');
// Check for divide by zero.
local _damageNew = if (_armorNew > 0) then {(_damageOld * _armorOld) / _armorNew} else {_damageOld};

_object setDamage _damageNew;

_damageNew
