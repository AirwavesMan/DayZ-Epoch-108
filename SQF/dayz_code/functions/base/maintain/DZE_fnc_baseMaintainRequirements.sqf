///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseMaintainRequirements
//
//	Description:	Calculates the currency requirements for maintaining base objects.
//	Groups:		Base, Base Management
//
//	Syntax:		objectCount call DZE_fnc_baseMaintainRequirements
//
//	Parameters:	objectCount: Number - Number of objects to maintain
//
//	Return Value:	Array - Required amount and its formatted currency description
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_MAINTAIN_REQUIREMENTS

#ifdef DEBUG_DZE_FNC_BASE_MAINTAIN_REQUIREMENTS
	diag_log format ['[Client Debug]: [DZE_fnc_baseMaintainRequirements]: Function called with argumentes: %1',_this];
#endif

/*

Examples for config variable DZE_maintainCurrencyRate:

Now that we have gem based currency, maintaining is priced via a "worth".

If you want the price per item to be 1 gold, DZE_maintainCurrencyRate needs to be 100.
600 items * 100 would be worth 6 briefcases or 60k coins on a single currency server.
600 items * 150 would be worth 9 briefcases or 90k coins on a single currency server.

1 10oz silver = 10 worth
1 gold = 100 worth
1 10oz gold = 1,000 worth
1 briefcase = 10,000 worth

Please see configVariables.sqf for the value of gems (DZE_GemWorthArray) and their relevant worth.

*/

local _objectCount = _this;
local _amount = _objectCount * DZE_maintainCurrencyRate;

if (Z_SingleCurrency) exitWith {
	[_amount,CurrencyName]
};

[_amount,[_amount,true] call z_calcCurrency]
