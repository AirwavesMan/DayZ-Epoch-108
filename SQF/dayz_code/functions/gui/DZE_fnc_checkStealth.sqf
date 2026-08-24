///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_checkStealth
//
//	Description:	Calculate player's noise and visibility.
//	Groups:		Player
//
//	Syntax:		call DZE_fnc_checkStealth
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

if (player isKindOf "PZombie_VB") exitWith {
	DAYZ_disAudial = 0;
	DAYZ_disVisual = 0;
	player_zombieAttack = {}; // Other zombies don't attack player zombies
	player_zombieCheck = {};
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _vp		= vehicle player;
local _speed		= (velocity _vp) distance [0,0,0];

///////////////////////////////////////////////////////////////////////////////////////////////////

// Assess Players Position

local _scaleMvmt = 0.3; // swimming
local _scalePose = 0.9; // swimming

dayz_isSwimming = getText (configFile >> 'CfgMovesMaleSdr' >> 'States' >> animationState player >> 'soundOverride') == 'swim';

if (!dayz_isSwimming) then {

	_scalePose = (player selectionPosition 'aimpoint' select 2) * 0.7;

	if (_scalePose > 0.3) then {_scaleMvmt = 0.2};	// standing or kneeling
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _initial = 20 + sunOrMoon * 20;

local _scaleLight =
	sunOrMoon * 2		// add sunlight
	+ moonIntensity		// add moonlight
	- overcast * 0.2	// remove for cloud state
	- rain * 0.2		// remove for rain state
	- fog * 0.5;		// remove for fog state

dayz_scaleLight = _scaleLight;

local _scaleSound = 1 - rain * 0.3;	// remove for rain state

///////////////////////////////////////////////////////////////////////////////////////////////////

// Assess if near light source

if (_scaleLight < 0.9) then {
	local _scaler = 0;
	local _nearFlare = nearestObject [getPosATL _vp,"RoadFlare"];

	if (!isNull _nearFlare) then {
		_scaler = _nearFlare distance _vp;
		if (_scaler <= 30) then {
			_scaler = 30 - _scaler;
			_scaleLight = (_scaler / 30) * 2 + _scaleLight;
		};
	};

	local _nearLight = nearestObject [_vp,"StreetLamp"];

	if (!isNull _nearLight) then {
		_scaler = 50 - (_nearLight distance _vp);
		_scaleLight = (_scaler / 50) * 2 + _scaleLight;
	};

	local _nearFire = nearestObject [getPosATL _vp,"Land_Fire"];

	if (!isNull _nearFire) then {
		_scaler = 50 - (_nearFire distance _vp);
		_scaleLight = (_scaler / 50) * 2 + _scaleLight;
	};
};

_scaleLight = _scaleLight max 0;	// Ensure zero or above

///////////////////////////////////////////////////////////////////////////////////////////////////

// Terrain Visibility

local _posATL		= getPosATL player;
local _surfaceData	= missionNamespace getVariable [([surfaceType _posATL, '#EpochRoad'] select isOnRoad _posATL), DEFAULT_SURFACETYPE];

dayz_surfaceType	= _surfaceData select 0; // keep this for legacy use
dayz_surfaceNoise	= _surfaceData select 1; // keep this for legacy use

call (
	[
		{},
		{_initial = _initial * 0.5;  _scaleMvmt = _scaleMvmt - 0.1 },	// forest	1
		{_initial = _initial * 0.65; _scaleMvmt = _scaleMvmt - 0.05},	// grass	2
		{_initial = _initial * 0.80; _scaleMvmt = _scaleMvmt + 0.05},	// rock		3
		{_initial = _initial * 0.85; _scaleMvmt = _scaleMvmt + 0.1 },	// concrete	4
		{_initial = _initial * 1.3;  _scaleMvmt = _scaleMvmt + 0.2 }	// road		5
	]
	select (_surfaceData select 2)
);

///////////////////////////////////////////////////////////////////////////////////////////////////

// Are they inside a building

dayz_inside = [vehicle player] call fnc_isInsideBuilding;
if (dayz_inside) then {
	_initial = round (5 + (20 * (1 - DZE_sheltered)));		// inside building
} else {
	if (DZE_sheltered > 0.75) then {
		_initial = round (5 + (60 * (1 - DZE_sheltered)));	// possibly inside base or sheltered by other objects
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Work out result

DAYZ_disVisual = round ((_initial + _speed * 3) * _scalePose * _scaleLight) * 1.5;
local _audial = round (_speed * dayz_surfaceNoise * _scaleMvmt * _scaleSound);

if (_audial > DAYZ_disAudial || {time - dayz_firedCooldown > 0.3}) then {
	DAYZ_disAudial = _audial;
};
