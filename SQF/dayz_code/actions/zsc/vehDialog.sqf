if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

private ["_playerNear","_isBusy","_typeOf"];

player setVariable["isBusy",true,true];
_isBusy = true;
ZSC_CurrentStorage = _this select 3;
_typeOf = typeOf ZSC_CurrentStorage;


if !(ZSC_CurrentStorage isKindOf "AllVehicles") exitWith {
	dayz_actionInProgress = false;
	player setVariable["isBusy",false,true];
	format[localize "STR_CL_ZSC_BANKING_NOT_AVAIL",_typeOf] call DZE_fnc_rollingMessages;
};

_playerNear = {isPlayer _x} count (cursorTarget nearEntities ["CAManBase", 10]) > 1;
if (_playerNear) exitWith {
	dayz_actionInProgress = false;
	player setVariable["isBusy",false,true];
	localize "str_pickup_limit_5" call DZE_fnc_rollingMessages;
};

_isBusy = ZSC_CurrentStorage getVariable["isBusy",false];
if (_isBusy) exitwith {
	dayz_actionInProgress = false;
	player setVariable["isBusy",false,true];
	format[localize "STR_CL_ZSC_BANKING_IN_USE",_typeOf] call DZE_fnc_rollingMessages;
};

ZSC_CurrentStorage setVariable["isBusy",true,true];
createDialog "BankDialog";
call BankDialogUpdateAmounts;

waitUntil {!dialog};

dayz_actionInProgress = false;
