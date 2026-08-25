///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseMaintainAction
//
//	Description:	Pays for base maintenance and sends the authenticated request to the server.
//	Groups:		Base, Base Management
//
//	Syntax:		[objects,base,radius] call DZE_fnc_baseMaintainAction
//
//	Parameters:	objects: Array - Buildable objects included in the maintenance price
//			base: Object - Active territory marker
//			radius: Number - Maintenance radius sent to the server
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_MAINTAIN_ACTION

#ifdef DEBUG_DZE_FNC_BASE_MAINTAIN_ACTION
	diag_log format ['[Client Debug]: [DZE_fnc_baseMaintainAction]: Function called with argumentes: %1',_this];
#endif

local _objects = _this select 0;
local _base = _this select 1;
local _radius = _this select 2;

local _objectCount = count _objects;
local _requirements = _objectCount call DZE_fnc_baseMaintainRequirements;
local _amount = _requirements select 0;
local _itemText = _requirements select 1;

local _enoughMoney = false;
local _moneyInfo = [false,[],[],[],0];
local _wealth = 0;

if (Z_SingleCurrency) then {
	_wealth = player getVariable [['cashMoney','globalMoney'] select Z_persistentMoney,0];
	_enoughMoney = _wealth >= _amount;
} else {
	Z_Selling = false; // Initialize gem currency before Z_canAfford.
	_moneyInfo = _amount call Z_canAfford;
	_enoughMoney = _moneyInfo select 0;
};

local _paymentReady = if (Z_SingleCurrency) then {true} else {[player,_amount,_moneyInfo,true,0] call Z_payDefault};

// Not enough room in gear or bag to accept change.
if (!_paymentReady && {_enoughMoney}) exitWith {
	systemChat localize 'STR_EPOCH_TRADE_GEAR_AND_BAG_FULL';
};

if (!_enoughMoney) exitWith {
	local _message = '';

	if (Z_SingleCurrency) then {
		_message = format [localize 'STR_BASE_MAINTENANCE_FAILED',_objectCount,[_amount] call BIS_fnc_numberText,_itemText];
	} else {
		_message = format [localize 'STR_BASE_MAINTENANCE_FAILED',_objectCount,_itemText,''];
	};

	disableSerialization;
	local _baseDialog = findDisplay 711194;
	if (!isNull _baseDialog) then {
		(_baseDialog displayCtrl 7012) ctrlSetText _message;
		(_baseDialog displayCtrl 7013) ctrlSetText '';
	};
};

closeDialog 1;
[player,getPosATL player,_radius,'repair'] spawn fnc_alertZombies;

if !(['Medic',1] call fn_loopAction) exitWith {};

local _paymentSuccessful = if (Z_SingleCurrency) then {_amount <= _wealth} else {[player,_amount,_moneyInfo,false,0] call Z_payDefault};

if (!_paymentSuccessful) exitWith {
	systemChat localize 'STR_EPOCH_TRADE_DEBUG';
};

['Working',0,[100,15,10,0]] call dayz_NutritionSystem;

PVDZE_maintainArea = [netID player,netID _base,_radius,dayz_authKey];
publicVariableServer 'PVDZE_maintainArea';

local _message = '';

if (Z_SingleCurrency) then {
	player setVariable [['cashMoney','globalMoney'] select Z_persistentMoney,_wealth - _amount,true];
	_message = format [localize 'STR_BASE_MAINTENANCE_SUCCESS',_objectCount,[_amount] call BIS_fnc_numberText,_itemText];
} else {
	_message = format [localize 'STR_BASE_MAINTENANCE_SUCCESS',_objectCount,_itemText,''];
};

call player_forceSave;
_message call DZE_fnc_rollingMessages;
