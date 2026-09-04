///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_generateCode
//
//	Description:	Collects or generates a valid code for a lockable build object.
//	Groups:		Build
//
//	Syntax:		lockableType call DZE_fnc_generateCode
//
//	Parameters:	lockableType: Number - BUILD_LOCKBOX, BUILD_COMBO_LOCK or BUILD_SAFE
//
//	Return Value:	Array - [persistent code, display code]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_GENERATE_CODE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_GENERATE_CODE
	diag_log format ['[Client Debug]: [DZE_fnc_generateCode]: Function called with arguments: %1',_this];
#endif

local _lockable = _this;

if !(_lockable in [BUILD_LOCKBOX,BUILD_COMBO_LOCK,BUILD_SAFE]) exitWith {
	#ifdef DEBUG_DZE_FNC_GENERATE_CODE
		diag_log format ['[Client Debug]: [DZE_fnc_generateCode]: Error: Unsupported lockable type: %1',_lockable];
	#endif
	[]
};

local _combination = '';
local _combinationDisplay = '';
local _invalidCode = false;
local _codeNotAllowed = false;
local _notAllowedCode = '';

dayz_combination = '';
dayz_selectedVault = objNull;

///////////////////////////////////////////////////////////////////////////////////////////

call { // Generate random combinations depending on item type.
	if (_lockable == BUILD_LOCKBOX) exitWith { // Lockbox
		createDialog 'KeyPadUI';
		waitUntil {!dialog};

		_combinationDisplay = dayz_combination call fnc_lockCode;
		_invalidCode = keypadCancel || {typeName _combinationDisplay == 'SCALAR'};

		if (!_invalidCode) then {
			_combination = dayz_combination;
			_codeNotAllowed = _combination in DZE_badCodes;
			_invalidCode = _codeNotAllowed;

			if (_codeNotAllowed) then {_notAllowedCode = _combinationDisplay};
		};

		if (_invalidCode) then {
			local _lockColorDisplay = '';
			local _lockColor = 0;
			local _lockDigit1 = 0;
			local _lockDigit2 = 0;

			_combination = '';

			while {_combination == '' || {_combination in DZE_badCodes}} do {
				_lockColor = floor random 3 + 100;	// 100=red / 101=green / 102=blue
				_lockDigit1 = floor random 10;
				_lockDigit2 = floor random 10;
				_combination = format ['%1%2%3',_lockColor,_lockDigit1,_lockDigit2];
			};

			_lockColorDisplay = localize (['STR_BUILD_GENERATE_CODE_COLOR_RED','STR_BUILD_GENERATE_CODE_COLOR_GREEN','STR_BUILD_GENERATE_CODE_COLOR_BLUE'] select (_lockColor - 100));
			_combinationDisplay = format ['%1%2%3',_lockColorDisplay,_lockDigit1,_lockDigit2];
			dayz_combination = _combination;
		};
	};

	///////////////////////////////////////////////////////////////////////////////////

	if (_lockable == BUILD_COMBO_LOCK) exitWith { // Combo Lock
		DZE_topCombo = 0;
		DZE_midCombo = 0;
		DZE_botCombo = 0;
		DZE_Lock_Door = '';
		dayz_selectedDoor = objNull;

		dayz_actionInProgress = false;
		createDialog 'ComboLockUI';
		waitUntil {!dialog};
		dayz_actionInProgress = true;

		_combination = DZE_Lock_Door;
		_codeNotAllowed = _combination in DZE_badCodes;
		_invalidCode = keypadCancel || {parseNumber _combination == 0 || {_codeNotAllowed}};

		if (_codeNotAllowed) then {_notAllowedCode = _combination};

		if (_invalidCode) then {
			_combination = '';

			while {_combination == '' || {_combination in DZE_badCodes}} do {
				_combination = format ['%1%2%3',floor random 10,floor random 10,floor random 10];
			};

			DZE_Lock_Door = _combination;
		};

		_combinationDisplay = _combination;
	};

	///////////////////////////////////////////////////////////////////////////////////

	if (_lockable == BUILD_SAFE) exitWith { // Safe
		createDialog 'SafeKeyPad';
		waitUntil {!dialog};

		_combination = dayz_combination;
		_codeNotAllowed = _combination in DZE_badCodes;
		_invalidCode = keypadCancel || {parseNumber _combination > 9999 || {count toArray _combination < 4 || {_codeNotAllowed}}};

		if (_codeNotAllowed) then {_notAllowedCode = _combination};

		if (_invalidCode) then {
			_combination = '';

			while {_combination == '' || {_combination in DZE_badCodes}} do {
				_combination = format ['%1%2%3%4',floor random 10,floor random 10,floor random 10,floor random 10];
			};

			dayz_combination = _combination;
		};

		_combinationDisplay = _combination;
	};
};

if (_codeNotAllowed) then {systemChat format [localize 'STR_BUILD_GENERATE_CODE_NOT_ALLOWED',_notAllowedCode]};

[_combination,_combinationDisplay]
