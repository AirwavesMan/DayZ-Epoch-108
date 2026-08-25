if (dayz_actionInProgress) exitWith {localize "STR_EPOCH_PLAYER_21" call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

dayz_selectedVault = _this select 3;
dayz_combination = "";

if (dayz_lastCodeFail > diag_tickTime) exitWith {
	dayz_actionInProgress = false;
	format [localize "STR_EPOCH_PLAYER_19_WAIT",round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;
};

if (!isNull dayz_selectedVault) then {
	if ((typeOf dayz_selectedVault) in ['DZE_SafeLocked','DZE_Safe','DZE_Safe2Locked','DZE_Safe2','DZE_SafeTall','DZE_SafeTallLocked']) then {
		createDialog "SafeKeyPad";
	} else {
		createDialog "KeypadUI";
	};
};

dayz_actionInProgress = false;
