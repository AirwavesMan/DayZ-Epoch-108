///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_storageEnterCode
//
//	Description:	Opens the appropriate combination dialog for a safe or lockbox.
//	Groups:		Build
//
//	Syntax:		object spawn DZE_fnc_storageEnterCode
//
//	Parameters:	object: Object - Lockable storage, or Array - addAction arguments
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_STORAGE_ENTER_CODE

#ifdef DEBUG_DZE_FNC_STORAGE_ENTER_CODE
	diag_log format ['[Client Debug]: [DZE_fnc_storageEnterCode]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'STR_EPOCH_PLAYER_21' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

local _object = if (typeName _this == 'ARRAY') then {_this select 3} else {_this};
local _objectType = typeOf _object;

DZE_selectedStorage = _object;
dayz_combination = '';

if (isNull _object || {!alive _object} || {!(_objectType in DZE_LockableStorage)}) exitWith {
	dayz_actionInProgress = false;
};

if (dayz_lastCodeFail > diag_tickTime) exitWith {
	dayz_actionInProgress = false;
	format [localize 'STR_EPOCH_PLAYER_19_WAIT',round (dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;
};

local _dialog = if (_object isKindOf 'DZE_Safe_Base') then {'SafeKeyPad'} else {'KeypadUI'};
createDialog _dialog;

#ifdef DEBUG_DZE_FNC_STORAGE_ENTER_CODE
	diag_log format ['[Client Debug]: [DZE_fnc_storageEnterCode]: Storage: %1 | Dialog: %2',_objectType,_dialog];
#endif

dayz_actionInProgress = false;
