///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_ensureMeleeMagazine
//
//	Description:	Adds the missing magazine required by the player's active melee weapon.
//	Groups:		Inventory
//
//	Syntax:		call DZE_fnc_ensureMeleeMagazine
//
//	Parameters:	None
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_ENSURE_MELEE_MAGAZINE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_ENSURE_MELEE_MAGAZINE
	diag_log '[Client Debug]: [DZE_fnc_ensureMeleeMagazine]: Function called.';
#endif

local _weapon = primaryWeapon player;
if (getNumber (configFile >> 'CfgWeapons' >> _weapon >> 'melee') != 1) exitWith {};

local _magazine = getArray (configFile >> 'CfgWeapons' >> _weapon >> 'magazines') select 0;
if (_magazine in magazines player) exitWith {};

player addMagazine _magazine;

#ifdef DEBUG_DZE_FNC_ENSURE_MELEE_MAGAZINE
	diag_log format ['[Client Debug]: [DZE_fnc_ensureMeleeMagazine]: Added magazine %1 for melee weapon %2.',_magazine,_weapon];
#endif
