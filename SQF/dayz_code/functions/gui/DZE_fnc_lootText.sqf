///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_lootText
//
//	Description:	Displays floating text above a lootpile.
//	Groups:		GUI
//
//	Syntax:		lootpile call DZE_fnc_lootText
//
//	Parameters:	lootpile: Object (weaponHolder)
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"
#define SINGLE_ITEM             [0.125,0,-0.658]
#define MULTI_ITEM              [0,0,-0.658]
#define ONE_WPN                 _wpns == 1 && {_mags == 0}
#define ONE_MAG                 _mags == 1 && {_wpns == 0}

local _posRel	= SINGLE_ITEM;

local _wpnArr	= getWeaponCargo _this;
local _magArr	= getMagazineCargo _this;
local _wCounts	= _wpnArr select 1;
local _mCounts	= _magArr select 1;

local _wpns	= [count _wCounts, _wCounts select 0] select (count _wCounts == 1);
local _mags	= [count _mCounts, _mCounts select 0] select (count _mCounts == 1);

local _wpnClass	= ['', _wpnArr select 0 select 0] select (_wpns > 0);	// first weapon
local _magClass	= ['', _magArr select 0 select 0] select (_mags > 0);	// first magazine

call {
	if (ONE_WPN) exitWith {local _cfg = (configFile >> CFG_WPN >> _wpnClass); if (isArray (_cfg >> 'textPosRel')) then {_posRel = getArray (_cfg >> 'textPosRel')}};
	if (ONE_MAG) exitWith {local _cfg = (configFile >> CFG_MAG >> _magClass); if (isArray (_cfg >> 'textPosRel')) then {_posRel = getArray (_cfg >> 'textPosRel')}};

	_posRel	= MULTI_ITEM;
};

if (_wpnClass != '') exitWith {[UI_TEXT(COLOR_AGRN, wpnName(_wpnClass)), DZE_rsc_lootText, _this, _posRel] spawn DZE_fnc_highlightText};
if (_magClass != '') exitWith {[UI_TEXT(COLOR_AGRN, magName(_magClass)), DZE_rsc_lootText, _this, _posRel] spawn DZE_fnc_highlightText};
