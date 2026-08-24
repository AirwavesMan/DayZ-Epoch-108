// Written by salival (https://github.com/oiad)

closeDialog 0;

local _baseCheck = [player, false] call DZE_fnc_findBases;
local _hasAccess = [player,_baseCheck select 2] call DZE_fnc_checkAccess;

if ((_hasAccess select 2) or (_hasAccess select 3)) then {
	
	{
		PVDZ_obj_Destroy = [netID player,netID _x,dayz_authKey];
		publicVariableServer "PVDZ_obj_Destroy";

		systemChat format[localize "STR_CL_VG_HELIPAD_REMOVED",typeOf _x];
	} count (nearestObjects [_baseCheck select 2,vg_heliPads,Z_VehicleDistance]);
} else {
	systemChat localize "STR_BASE_BUILD_ACCESS_DENIED";
};
