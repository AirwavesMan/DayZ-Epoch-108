///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseToggleMarkers
//
//	Description:	Displays the active base boundary. Helpers above the build-height limit are red,
//			follow sloping terrain and align with the base marker's direction.
//	Groups:		Base, Base Management
//
//	Syntax:		[baseMarker] call DZE_fnc_baseToggleMarkers
//
//	Parameters:	baseMarker: Object - Optional base marker; active or nearest marker is used when omitted
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
//	Author:		Victor the Cleaner
//	Date:		August 2021
//
//	- Number of helpers per ring is evenly divisible by 8 for improved symmetry.
//	- Helpers coinciding with other rings or below ground/sea level are ignored.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BASE_TOGGLE_MARKERS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BASE_TOGGLE_MARKERS
	diag_log format ['[Client Debug]: [DZE_fnc_baseToggleMarkers]: Function called with argumentes: %1',_this];
#endif

local _pole	= objNull;							// initialize
local _toggle	= false;							// turn plot boundary on/off
local _count	= count _this;							// parameter list

if (_count > 3 && {typeName (_this select 3) == 'OBJECT'}) then {			// called from fn_selfActions
	_pole = _this select 3;
} else {
	if (_count > 0 && {typeName (_this select 0) == 'OBJECT'}) then {
		_pole = _this select 0;						// called from modular building
	};
};

if (isNull _pole) then {
	// Called from the management dialog without an explicit base marker.
	if (!isNil 'DZE_currentBase' && {!isNull DZE_currentBase}) then {
		_pole = DZE_currentBase;
	} else {
		local _nearbyPoles = player nearObjects [DZE_Territory_Marker,15];
		if (count _nearbyPoles > 0) then {_pole = _nearbyPoles select 0};
	};
};
if (!isNil 'PP_Marks') then {

	if (!isNull _pole && {(PP_Marks select 0) distance _pole < 10}) then {_toggle = true};	// if helpers exist
	{deleteVehicle _x} count PP_Marks;					// remove helpers
	PP_Marks = nil;
};

if (isNull _pole) exitWith {};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					initialize
//
///////////////////////////////////////////////////////////////////////////////////////////////////

if (!_toggle && {isNil 'PP_Marks'}) then {

	local _radius	= DZE_baseRadius select 0;		// plot radius
	local _density	= 3;					// helper density per ring
	local _ringCount = round (2 * pi * _radius / _density);	// initial count per ring
	local _segments = _ringCount - (_ringCount % 8);		// adjust count for improved symmetry
	local _hemi	= _segments * 0.5;			// ignore helpers that coincide with equatorial ring
	local _quad	= _segments * 0.25;			// ignore helpers that coincide with polar/equatorial rings
	local _delta	= 360 / _segments;			// amount of angular change
	local _sin45	= sin 45;				// setup polar diagonals
	local _limit	= DZE_BuildHeightLimit;
	local _texture	= [{DZE_baseGreen}, {[DZE_baseGreen, DZE_baseRed] select (_height > _limit)}] select (DZE_BuildHeightLimit > 0 && DZE_HeightLimitColor);	// red helpers above building height limit
	local _center	= [_pole] call DZE_fnc_modelCenterWorld;	// Model-center ASL.

	local _helper	= HELPER_SMALL createVehicleLocal ORIGIN;
	local _obj	= objNull;
	_helper setObjectTexture DZE_baseGreen;
	_helper setPosASL _center;

	PP_Marks = [];						// global array to record base helpers
	addArray(PP_Marks, _helper);				// record parent object

	local _angle	= 0;
	local _ax	= 0;		// angle x
	local _ay	= 0;		// angle y
	local _di	= 0;		// diagonal
	local _v	= [];		// vector array

	local _dir	= -(getDir _pole);
	local _sd	= sin _dir;
	local _cd	= cos _dir;

	local _sx	= 0;
	local _cx	= 0;
	local _sy	= 0;
	local _cy	= 0;
	local _dsd	= 0;
	local _dcd	= 0;

	local _posASL	= [];
	local _ASLZ	= 0;
	local _height	= 0;

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//				calculate ring vectors
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	for '_i' from 0 to _segments - 1 do {			// loop through each point on the ring

		_ax	= sin _angle * _radius;			// increasing offset
		_ay	= cos _angle * _radius;			// decreasing offset
		_sx	= _ax * _sd;
		_cx	= _ax * _cd;
		_sy	= _ay * _sd;
		_cy	= _ay * _cd;

		_v = [[_cx - _sy, _sx + _cy, 0]];		// equatorial ring

		if ((_i + _quad) % _hemi != 0) then {		// ignore equator

			addArray(_v, v3(_cx, _sx, _ay));	// longitudinal Y ring

			if (_i % _hemi != 0) then {		// longitudinal X ring + polar diagonals. ignore equator and polar endpoints

				_di	= _sin45 * _ax;		// polar diagonals +/-45°
				_dsd	= _di * _sd;
				_dcd	= _di * _cd;

				addArray(_v, v3(-_sx, _cx, _ay));
				addArray(_v, v3( _dcd - _dsd,  _dsd + _dcd, _ay));
				addArray(_v, v3(-_dcd - _dsd, -_dsd + _dcd, _ay));
			};
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//				draw each ring
		//
		///////////////////////////////////////////////////////////////////////////////////
		{
			_posASL	= v3Add(_center, _x);						// vector offset
			_ASLZ	= _posASL select 2;

			_height = if (isTerrain(_posASL)) then {_ASLZ - getTerrainHeightASL _posASL} else {_ASLZ};

			if (_height > -0.5) then {						// if above terrain/sea

				_obj = HELPER_LARGE createVehicleLocal ORIGIN;			// create
				_obj setObjectTexture call _texture;				// change color
				_obj setPosASL _posASL;						// draw

				addArray(PP_Marks, _obj);					// record object
			};

		} forEach _v;

		_angle	= _angle + _delta;	// aggregate radial angle
	};
};
