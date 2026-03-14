#include "\z\addons\dayz_code\functions\include\defines.hpp"
#include "\ca\editor\Data\Scripts\dikCodes.h"

#define displayOrControl        _this select 0
#define DIK_CODE                _this select 1
#define SHIFT                   _this select 2
#define CTRL                    _this select 3
#define ALT                     _this select 4

#define NATURAL                 !(ALT) && !(CTRL) && !(SHIFT)
#define ALT_ONLY                 (ALT) && !(CTRL) && !(SHIFT)
#define CTRL_ONLY               !(ALT) &&  (CTRL) && !(SHIFT)
#define SHIFT_ONLY              !(ALT) && !(CTRL) &&  (SHIFT)

kb_escape = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	DZE_cancelBuilding	= true;
	local _handled		= false;

	call dayz_EjectPlayer;

	if (r_player_dead || DZE_buildKeysActive) then {
		_handled = true;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_mute = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	call player_toggleSoundMute;
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_statusUI = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _idx	= 0;
	local _message	= '';

	call {
		if (NATURAL)	exitWith {_idx = 1};	// -->
		if (SHIFT_ONLY)	exitWith {_idx = 5};	// <--
	};
	if (_idx == 0) exitWith {true};			// no change

	DZE_UI = (DZE_UI + _idx) % 6;

	call {
		if (DZE_UI == _idx)	exitWith {_message = localize 'STR_ENABLED'};
		if (DZE_UI == 0)	exitWith {_message = localize 'STR_DISABLED'};
	};
	if (_message != '') then {[format ['%1 %2', localize 'STR_UI_STATUS_ICONS', _message], 1] call DZE_fnc_rollingMessages};

	profileNamespace setVariable ['statusUI', DZE_UI];
	saveProfileNamespace;
	call ui_changeDisplay;
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_openGroups = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	if (dayz_groupSystem) then {
		if (dayz_requireRadio && {!('ItemRadio' in p_items)}) then {
			localize 'STR_EPOCH_NEED_RADIO' call DZE_fnc_rollingMessages;
		} else {
			if (isNull findDisplay 80000) then {
				if (!isNil 'dayz_groupInit') then {[] spawn dayz_openGroupDialog};
			} else {
				findDisplay 80000 closeDisplay 2;
			};
		};
	} else {
		if (diag_tickTime - dayz_lastSave > 10) then {
			call player_forceSave;
		};
	};
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_handed = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	if !(DZE_buildKeysActive) then {

		[] spawn {

			DZE_LEFT_HANDED = !DZE_LEFT_HANDED;

			keyboard_keys = nil;
			[controlNull,1,false,false,false] call DZE_fnc_onKeyDown;

			local _handed = ['STR_EPOCH_RIGHT_HANDED','STR_EPOCH_LEFT_HANDED'] select DZE_LEFT_HANDED;
			[format [localize 'STR_EPOCH_KEYBOARD_HANDEDNESS', localize _handed], 1] call DZE_fnc_rollingMessages;
			profileNamespace setVariable ['leftHanded', DZE_LEFT_HANDED];
			saveProfileNamespace;
		};
	};
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_layout = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	if !(DZE_buildKeysActive) then {
		DZE_KEYBOARD = (DZE_KEYBOARD + 1) % 2;	// English and German keyboard layout for hotkeys
		{
			if (DZE_KEYBOARD == _x select 0) exitWith {DZE_LANGUAGE = _x select 1};
		} count DZE_HOTKEYS;

		[format [localize 'STR_EPOCH_KEYBOARD_LAYOUT', localize DZE_LANGUAGE], 1] call DZE_fnc_rollingMessages;
		profileNamespace setVariable ['keyboardLayout', DZE_KEYBOARD];
		saveProfileNamespace;
	};
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_lootText = {

	DZE_LOOT_TEXT = !DZE_LOOT_TEXT;
	local _text = ['STR_EPOCH_TUT_LOCAL_OFF','STR_EPOCH_TUT_LOCAL_ON'] select DZE_LOOT_TEXT;
	[format [localize 'STR_EPOCH_LOOT_TEXT', localize _text], 1] call DZE_fnc_rollingMessages;
	profileNamespace setVariable ['lootText', DZE_LOOT_TEXT];
	saveProfileNamespace;
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_switchWeapon = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	DIK_CODE call dz_fn_switchWeapon;
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_autoRun = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	if (!dayz_autoRun) then {

		dayz_autoRun		= true;
		dayz_autoRunThread	= [] spawn {

			local _weapon	= currentWeapon player;
			local _vp	= vehicle player;

			while {dayz_autoRun} do {

				// SurfaceIsWater does not work for ponds
				// Check weapon to detect Arma action (dayz action is handled in dz_fn_switchWeapon)

				if (player != _vp || {r_fracture_legs || {surfaceIsWater getPosATL _vp} || {currentWeapon player != _weapon} || {(call fn_nearWaterHole) select 0}}) exitWith {
///				if (p_inVehicle || {r_fracture_legs || {p_currentWeapon != _weapon || {surfaceIsWater p_posATL || {p_posASLZ < DZR_nearestWaterASL}}}}) exitWith {
					call dayz_autoRunOff;
				};

				player playAction 'FastF';
				uiSleep 0.5;
			};
		};
	} else {
		/// **** TODO **** move dayz_autoRunOff from compiles.sqf to its own function
		call dayz_autoRunOff;
	};
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// decrease degrees

kb_minus = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		KEY_MINUS = true;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// increase degrees

kb_equals = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		KEY_EQUALS = true;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// reset

kb_backspace = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		KEY_BACK = true;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// prev/next snapping point

kb_tab = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		call {
			if (NATURAL)	exitWith {KEY_TAB	= true};
			if (SHIFT_ONLY)	exitWith {KEY_TAB_SHIFT	= true};
		};
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_PgUp = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;

		if (ALT_ONLY)	exitWith {DZE_MOVE_IDX = 6; DZE_MOVE_Z = true};
		if (NATURAL)	exitWith {DZE_MOVE_IDX = 5; DZE_MOVE_Z = true};
		if (CTRL_ONLY)	exitWith {DZE_MOVE_IDX = 4; DZE_MOVE_Z = true};

		DZE_MOVE_IDX = 0;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_PgDn = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;

		if (ALT_ONLY)	exitWith {DZE_MOVE_IDX = 1; DZE_MOVE_Z = true};
		if (NATURAL)	exitWith {DZE_MOVE_IDX = 2; DZE_MOVE_Z = true};
		if (CTRL_ONLY)	exitWith {DZE_MOVE_IDX = 3; DZE_MOVE_Z = true};

		DZE_MOVE_IDX = 0;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_q = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled	= false;
	dayz_dodge	= true;

	if (DZE_buildKeysActive) then {
		_handled = true;

		if (ALT_ONLY)	exitWith {DZE_ROTATION_IDX = 1; DZE_ROTATE = true};
		if (NATURAL)	exitWith {DZE_ROTATION_IDX = 2; DZE_ROTATE = true};
		if (CTRL_ONLY)	exitWith {DZE_ROTATION_IDX = 3; DZE_ROTATE = true};

		DZE_ROTATION_IDX = 0;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_e = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled	= false;
	dayz_dodge	= true;

	if (DZE_buildKeysActive) then {
		_handled = true;

		if (ALT_ONLY)	exitWith {DZE_ROTATION_IDX = 6; DZE_ROTATE = true};
		if (NATURAL)	exitWith {DZE_ROTATION_IDX = 5; DZE_ROTATE = true};
		if (CTRL_ONLY)	exitWith {DZE_ROTATION_IDX = 4; DZE_ROTATE = true};

		DZE_ROTATION_IDX = 0;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_t = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		if (NATURAL) then {KEY_T = true};
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_p = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (SHIFT) then {
		_handled = true;
	} else {
		if (DZE_buildKeysActive) then {
			_handled = true;
			if (NATURAL) then {KEY_P = true};
		};
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_f = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

/// *** TODO *** if player has no weapons (inc. thrown) the handled state incorrectly defaults to player action ["SWITCHWEAPON", player, player, 1], which might be binoculars or something inappropriate

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		if (NATURAL) then {KEY_F = true};
///	} else {
///		[] spawn {uiSleep 0.01; local _state = weaponState p_vehicle; systemChat format ['%1', _state]; DZR_PREV_WPN = _state select 0; DZR_PREV_MUZZ = _state select 1; DZR_PREV_MODE = _state select 2};	/// debug
	};
	_handled
/**
	/// **** TODO **** once the toggle/select weapon logic has been done, replace with this:
	if (DZE_buildKeysActive) then {
		if (NATURAL) then {KEY_F = true};
	} else {
		call DZE_fnc_toggleWeapons;
	};
	true
**/
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_h = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		if (NATURAL) then {KEY_H = true};
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_l = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		if (NATURAL) then {KEY_L = true};
	} else {
		_handled = call DZE_fnc_enableFlashlight;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_handgun = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

///	call DZE_fnc_switchWeapon ???
///	true
	false
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_m = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	false
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_space = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;
		KEY_SPACE = true;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_playerMove = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	r_interrupt = true;
	if (DZE_Surrender) then {call dze_surrender_off};
	if (dayz_autoRun) then {call dayz_autoRunOff};
	false
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_playerMoveBack = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	if (DZE_isOnBike) then {DZE_isBraking = true};
	call kb_playerMove;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_getOver = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	r_interrupt = true;

	if (animationState player in ['bunnyhopunarmed','bunnyhoprifle'] || {player isKindOf 'PZombie_VB'}) exitWith {true};	// Fixes invisible weapon switch glitch if double tapping vault with no weapon in hands // do not allow player zombies to vault or jump

	local _handled	= false;
/// **** TODO ****
///	local _wall	= detectClimbable(DZR_cursorObject, DZR_cursorClass);

///	if (count _wall > 0) then {

///		_handled = true;

///		climbOver(_wall);

///	} else {

		local _nearbyObjects = nearestObjects [player, dayz_disallowedVault, 8];

		if (count _nearbyObjects > 0) then {

			if (diag_tickTime - dayz_lastCheckBit > 4) then {

				[objNull, player, rSwitchMove,'GetOver'] call RE;
				player playActionNow 'GetOver';
				dayz_lastCheckBit = diag_tickTime;

			} else {
				_handled = true;
			};
		};
///	};

	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_drop = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

/// **** TODO **** move this to its own function

	local _doors	= [];
	local _handled	= false;

	if (r_drag_sqf) then {
		_doors = nearestObjects [player, DayZ_DropDrageeObjects, 3];	// Prevent dropping dragged player through objects

		if (count _doors > 0) then {
			_handled = true;
		};

		force_dropBody = true;
	} else {
		_doors = nearestObjects [player, DZE_DoorsLocked, 3];		// Prevent sprint and prone through doors glitch

		if (count _doors > 0 && {speed player != 0}) then {
			_handled = true;
		};
	};

	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_reload = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown
/// **** TODO **** if damaged weapons and/or loose rounds are added, then a custom reload script may be needed

	false
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_gear = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	// TODO: left/right, when gear open: onKeyDown = "[_this,'onKeyDown',0,107,0,107] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
/// **** TODO ****
/**
	if (NATURAL) then {
		call {
			local _display = findDisplay DISPLAY_GEAR;

			if (!isNull _display) exitWith {		// gear display open
				_display closeDisplay IDC_CANCEL;
			};

			if (player != vehicle player) exitWith {	// in vehicle (locked or unlocked)

				createGearDialog [player, 'RscDisplayGear'];
			};

			[DZR_cursorObject] spawn DZE_fnc_actionGear;
		};
	};
	true
**/
	local _handled = false;

	if (NATURAL && {vehicle player != player && {!dialog}}) then {
		createGearDialog [player, "RscDisplayGear"];
		_handled = true;
	} else {
		if (vehicle player == player && {speed vehicle player > 0}) then {
			//[objNull, player, rSwitchMove,""] call RE;
			_handled = true;
		};
	};

	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_journal = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

/// **** TODO **** toggle journal dialog with same key

/// **** TODO **** move this to its own function

	if (!dayz_isSwimming && !dialog) then {
		[player, 4, true, getPosATL vehicle player] call player_alertZombies;
		createDialog 'horde_journal_front_cover';
	};
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_surrender = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	call player_surrender;
	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_talk = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_KEY_LOCK != NO_LOCK) then {	// action is currently locked

		if (isMicActive) then {KB_CLOSE_VOICE_CHAT};

		_handled = true;

	} else {

		if (isSideChannelActive) then {

			[format [localize 'STR_EPOCH_NO_VOICE', localize 'str_channel_side'], 1] call DZE_fnc_rollingMessages;

			if (isMicActive) then {KB_CLOSE_VOICE_CHAT};

			_handled = true;

		} else {

			if (diag_ticktime - dayz_lastCheckBit > 10) then {

				dayz_lastCheckBit = diag_ticktime;
				[player, 20, true, getPosATL player] call player_alertZombies;
			};
		};
	};

	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_switchChannel = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (isMicActive) then {		// when mic is active, current channel is always displayed

		[localize 'STR_EPOCH_NO_CHANNEL_SWITCH', 1] call DZE_fnc_rollingMessages;

		_handled = true;
	} else {

		if (DZE_KEY_LOCK != NO_LOCK) then {	// action is currently locked

			_handled = true;

		} else {

			DZE_KEY_LOCK = p1;	// set lock to specific keypress

			0 spawn {getCurrentChannel};
		};
	};

	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_switchChannel_keyUp = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyUp

	if (p1 == DZE_KEY_LOCK) then {DZE_KEY_LOCK = NO_LOCK};

	false
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_blockCheat = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _dik	= p1;
	local _shift	= p2;
	local _handled	= false;

	if (_dik == DIK_NUMPADMINUS) then {dayz_minusDownTime = diag_tickTime};

	if ((_dik == DIK_NUMPADMINUS && _shift) || {_dik == DIK_LSHIFT && (diag_tickTime - dayz_minusDownTime < 1)}) then {

		[localize 'STR_EPOCH_CHEAT_KEYS_DISABLED', 1] call DZE_fnc_rollingMessages;

		disableUserInput true; disableUserInput true;

		0 spawn {uiSleep 0.2; disableUserInput false; disableUserInput true; disableUserInput false; disableUserInput false};	// Enable input, disable and re-enable to prevent the last key press being input after re-enable

		_handled = true;
	};

	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_chat = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = isMicActive || (isSideChannelActive && {getPlayerUID player in CHAT_BLOCKED_PLAYERS});

	if (!_handled) then {

		DZE_KEY_LOCK = p1;

		0 spawn {

			waitUntil {!isNull findDisplay DISPLAY_CHAT};

			getCurrentChannel;	// old channel

			while {!isNull findDisplay DISPLAY_CHAT} do {

				if (isMicActive) then {KB_CLOSE_VOICE_CHAT};

				if (ctrlText (findDisplay DISPLAY_CHANNEL displayCtrl 101) != currentChannel) exitWith {

					getCurrentChannel;	// new channel

					KB_CLOSE_CHAT;

					[localize 'STR_EPOCH_NO_CHANNEL_SWITCH_CHAT', 1] call DZE_fnc_rollingMessages;
				};
			};

			DZE_KEY_LOCK = NO_LOCK;
		};
	};

	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Up Arrow or NUMPAD 8

kb_up = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;

		if (ALT_ONLY)	exitWith {DZE_ROTATION_IDX = 1; DZE_MOVE_Y = true};
		if (NATURAL)	exitWith {DZE_ROTATION_IDX = 2; DZE_MOVE_Y = true};
		if (CTRL_ONLY)	exitWith {DZE_ROTATION_IDX = 3; DZE_MOVE_Y = true};

		DZE_ROTATION_IDX = 0;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Down Arrow or NUMPAD 2

kb_down = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;

		if (ALT_ONLY)	exitWith {DZE_ROTATION_IDX = 6; DZE_MOVE_Y = true};
		if (NATURAL)	exitWith {DZE_ROTATION_IDX = 5; DZE_MOVE_Y = true};
		if (CTRL_ONLY)	exitWith {DZE_ROTATION_IDX = 4; DZE_MOVE_Y = true};

		DZE_ROTATION_IDX = 0;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// Left Arrow or NUMPAD 4

kb_left = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;

		if (ALT_ONLY)	exitWith {DZE_ROTATION_IDX = 1; DZE_MOVE_X = true};
		if (NATURAL)	exitWith {DZE_ROTATION_IDX = 2; DZE_MOVE_X = true};
		if (CTRL_ONLY)	exitWith {DZE_ROTATION_IDX = 3; DZE_MOVE_X = true};

		DZE_ROTATION_IDX = 0;
	};
	_handled
};

//////////////////////////////////////////////////////////////////////////////////////////////////

// Right Arrow or NUMPAD 6

kb_right = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	local _handled = false;

	if (DZE_buildKeysActive) then {
		_handled = true;

		if (ALT_ONLY)	exitWith {DZE_ROTATION_IDX = 6; DZE_MOVE_X = true};
		if (NATURAL)	exitWith {DZE_ROTATION_IDX = 5; DZE_MOVE_X = true};
		if (CTRL_ONLY)	exitWith {DZE_ROTATION_IDX = 4; DZE_MOVE_X = true};

		DZE_ROTATION_IDX = 0;
	};
	_handled
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_groupTags = {

	// params: [displayOrControl, key, shift, ctrl, alt] https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onKeyDown

	if (dayz_groupSystem) then {dayz_groupNameTags = !dayz_groupNameTags};

	true
};

///////////////////////////////////////////////////////////////////////////////////////////////////
