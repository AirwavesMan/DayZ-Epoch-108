///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseMaintainPreview
//
//	Description:	Displays the maintenance price for the active base.
//	Groups:		Base, Base Management
//
//	Syntax:		objectCount call DZE_fnc_baseMaintainPreview
//
//	Parameters:	objectCount: Number - Number of objects to maintain
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_MAINTAIN_PREVIEW

#ifdef DEBUG_DZE_FNC_BASE_MAINTAIN_PREVIEW
	diag_log format ['[Client Debug]: [DZE_fnc_baseMaintainPreview]: Function called with argumentes: %1',_this];
#endif

local _objectCount = _this;

disableSerialization;
local _baseDialog = findDisplay 711194;
if (isNull _baseDialog) exitWith {};

(_baseDialog displayCtrl 7013) ctrlSetText '';

if (_objectCount == 0) exitWith {
	(_baseDialog displayCtrl 7012) ctrlSetText (localize 'STR_BASE_MAINTENANCE_NOT_REQUIRED');
};

local _requirements = _objectCount call DZE_fnc_baseMaintainRequirements;
local _message = '';

if (Z_SingleCurrency) then {
	_message = format [localize 'STR_BASE_MAINTENANCE_PRICE',_objectCount,[_requirements select 0] call BIS_fnc_numberText,_requirements select 1];
} else {
	_message = format [localize 'STR_BASE_MAINTENANCE_PRICE',_objectCount,_requirements select 1,''];
};

(_baseDialog displayCtrl 7012) ctrlSetText _message;
