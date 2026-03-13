///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_actionTakeBackpack
//
//	Description:	Player takes specified backpack from the ground.
//	Groups:		Actions
//
//	Syntax:		backpack call DZE_fnc_actionTakeBackpack
//
//	Return Value:	Number - Action Status
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

player removeAction s_player_takeBackpack;
s_player_takeBackpack = -1;

local _backpack		= p3;
local _old		= unitBackpack player;
local _isStanding	= isStanding(player);

if (!isNull _old) then {

	player action ['PutBag', player];
	waitUntil {isNull unitBackpack player};

	_backpack hideObject true;
	_old setvectorDirAndUp (getVectorDirAndUp(_backpack));
	setPosWorld(_old, getPosWorld(_backpack));
};

player action ['TakeBag', _backpack];
waitUntil {!isNull unitBackpack player};

dayz_myBackpack = _backpack;
_backpack hideObject false;

call player_forceSave;

raiseWeapon;

if (_isStanding) then {[] spawn {player playAction 'PlayerStand'}};

dayz_actionInProgress	= false;
