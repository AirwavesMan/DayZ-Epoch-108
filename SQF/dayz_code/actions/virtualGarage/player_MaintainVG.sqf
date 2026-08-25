// Written by icomrade (https://github.com/icomrade)

private["_itemText","_enoughMoney","_moneyInfo","_wealth","_success","_ownerPUID"];

closeDialog 0;

_itemText = if (Z_SingleCurrency) then {CurrencyName} else {[vg_maintainCost,true] call z_calcCurrency};
_enoughMoney = false;
_moneyInfo = [false, [], [], [], 0];

if (Z_SingleCurrency) then {
	_wealth = player getVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),0];
	_enoughMoney = (_wealth >= vg_maintainCost);
} else {
	Z_Selling = false;
	_moneyInfo = vg_maintainCost call Z_canAfford;
	_enoughMoney = _moneyInfo select 0;
};

_success = true;
if (vg_maintainCost > 0) then {
	_success = if (Z_SingleCurrency) then {_enoughMoney} else {[player,vg_maintainCost,_moneyInfo,false,0] call Z_payDefault};
};

if (!_success && _enoughMoney) exitWith {systemChat localize "STR_EPOCH_TRADE_GEAR_AND_BAG_FULL";};

if (_enoughMoney || vg_maintainCost < 1) then {
	if (Z_SingleCurrency) then {
		player setVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),(_wealth - vg_maintainCost),true];
	};
	localize "STR_CL_VG_MAINTAINSUCCESS" call DZE_fnc_rollingMessages;
	PVDZE_maintainGarage = if (vg_tiedToBase) then {
		local _baseCheck = [player,false] call DZE_fnc_findBases;
		_ownerPUID = if (_baseCheck select 1 > 0) then {(_baseCheck select 2) getVariable ["ownerPUID","0"]} else {dayz_playerUID};
		[player,_ownerPUID]
	} else {
		[player]
	};
	publicVariableServer "PVDZE_maintainGarage";
} else {
	localize "STR_CL_VG_MAINTAINFAIL" call DZE_fnc_rollingMessages;
};
