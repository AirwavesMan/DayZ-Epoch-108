///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_updateGUI
//
//	Description:	Handle primary GUI updates.
//	Groups:		GUI
//
//	Syntax:		call DZE_fnc_updateGUI
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

disableSerialization;

local _display = uiNamespace getVariable 'DAYZ_GUI_display';
if (isNil '_display') exitWith {}; // not ready		// **** TODO **** scheduler waitUntil spawn

local _foodVal			= 1 - dayz_hunger / SleepFood;
local _thirstVal		= 1 - dayz_thirst / SleepWater;
local _tempVal			= 1 - (dayz_temperatur - dayz_temperaturmin) / (dayz_temperaturmax - dayz_temperaturmin);	// Normalise to [0,1]
local _bloodVal			= r_player_blood / r_player_bloodTotal;

/// **** TODO **** can we move these variables to globals?
local _combatVal		= if ((player getVariable ['combatTimeout', 0] >= diag_tickTime) || {player getVariable ['combatNoTimeout', 0] == 1}) then {0} else {1};	/// **** TODO **** use v = [a,b] select (bool) method

local _ctrlBloodBorder		= 0;
local _ctrlFoodBorder		= 0;
local _ctrlThirstBorder		= 0;
local _ctrlTempBorder		= 0;
local _ctrlCombatBorder		= 0;
local _ctrlCombatBG		= 0;
local _ctrlCombat		= 0;
local _ctrlEar			= 0;
local _ctrlEye			= 0;
local _WHT			= [1,1,1,1];

local _ctrlBlood		= _display displayCtrl 1300;
local _ctrlBleed		= _display displayCtrl 1303;
local _ctrlFood			= _display displayCtrl 1301;
local _ctrlThirst		= _display displayCtrl 1302;
local _ctrlTemp			= _display displayCtrl 1306;
local _ctrlFracture		= _display displayCtrl 1203;
local _ctrlMuteBackground	= _display displayCtrl 1904;
local _ctrlMuteIcon		= _display displayCtrl 1204;

local _visualtext		= '';
local _audibletext		= '';
///local _bloodLvl			= [ceil (r_player_blood * 0.0005), 1, 6] call DZR_fnc_clamp;
///local _thirstLvl		= [round (_thirstVal * 4), 0, 4] call DZR_fnc_clamp;
///local _foodLvl			= [round (_foodVal * 4), 0, 4] call DZR_fnc_clamp;
local _bloodLvl			= clamp(ceil (r_player_blood * 0.0005), 1, 6);
local _thirstLvl		= clamp(round (_thirstVal * 4), 0, 4);
local _foodLvl			= clamp(round (_foodVal * 4), 0, 4);
local _tempLvl			= round dayz_temperatur;
local _path			= '';
local _visual			= 0;
local _audible			= 0;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					white borders
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _fnc_white_borders1 = {	// DZE_UI in [VANILLA, DARK, WHITE_BORDER]

	_ctrlBloodBorder	= _display displayCtrl 1200;
	_ctrlFoodBorder		= _display displayCtrl 1201;
	_ctrlThirstBorder	= _display displayCtrl 1202;
	_ctrlTempBorder		= _display displayCtrl 1208;

	_ctrlBloodBorder	ctrlSetTextColor _WHT;
	_ctrlFoodBorder		ctrlSetTextColor _WHT;
	_ctrlThirstBorder	ctrlSetTextColor _WHT;
	_ctrlTempBorder		ctrlSetTextColor _WHT;
};

local _fnc_white_borders2 = {	// DZE_UI in [DARK, WHITE_BORDER]

	_ctrlCombatBorder = _display displayCtrl 1207;
	_ctrlCombatBorder ctrlSetTextColor _WHT;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					combat icon
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _fnc_combat_icon1 = {	// DZE_UI == VANILLA

	if (DZE_VanillaUICombatIcon) then {

		_ctrlCombatBorder	= _display displayCtrl 1207;
		_ctrlCombat		= _display displayCtrl 1307;
		_ctrlCombatBG		= _display displayCtrl 1209;

		_ctrlCombatBorder ctrlSetTextColor _WHT;
		_ctrlCombat ctrlSetTextColor [Dayz_GUI_R + 0.3 * (1 - _combatVal), Dayz_GUI_G * _combatVal, Dayz_GUI_B * _combatVal, 1];

		_ctrlCombatBorder ctrlSetText	'\z\addons\dayz_code\gui\status\status_combat_border_new_CA.paa';
		_ctrlCombat ctrlSetText		'\z\addons\dayz_code\gui\status\status_combat_inside_new_ca.paa';
		_ctrlCombatBG ctrlSetText	'\z\addons\dayz_code\gui\status\status_bg.paa';
	};
};

local _fnc_combat_icon2 = {	// DZE_UI != VANILLA

	_ctrlCombat = _display displayCtrl 1307;
	_ctrlCombat ctrlSetTextColor [Dayz_GUI_R + 0.3 * (1 - _combatVal), Dayz_GUI_G * _combatVal, Dayz_GUI_B * _combatVal, 0.5];
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					stealth icons
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _fnc_stealth_icons1 = {	// DZE_UI in [VANILLA, DARK]

	_ctrlEar = _display displayCtrl 1304;
	_ctrlEye = _display displayCtrl 1305;
};

local _fnc_stealth_icons2 = {	// DZE_UI NOT in [VANILLA, DARK]

	_ctrlEar = _display displayCtrl 1308;
	_ctrlEye = _display displayCtrl 1309;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				primary food/medical icons
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _fnc_prim_icons1 = {	// DZE_UI == DARK

	_ctrlTemp ctrlSetTextColor	[1 - _tempVal,  1 - _tempVal,  1 - _tempVal,  0.5];
///	_ctrlBlood ctrlSetTextColor	[1 - _bloodVal, 1 - _bloodVal, 1 - _bloodVal, 0.5];	// **** TODO **** blood colour is hard to see, try [1, 1, 1, 0.5]
	_ctrlBlood ctrlSetTextColor	[1, 1, 1, 0.5];						// **** TODO **** blood colour is hard to see, try [1, 1, 1, 0.5]
	_ctrlFood ctrlSetTextColor	[_foodVal,   _foodVal,   _foodVal,   0.5];
	_ctrlThirst ctrlSetTextColor	[_thirstVal, _thirstVal, _thirstVal, 0.5];
	_ctrlCombat ctrlSetTextColor	[_combatVal, _combatVal, _combatVal, 0.5];
};

local _fnc_prim_icons2 = {	// DZE_UI != DARK

	_ctrlTemp ctrlSetTextColor	[Dayz_GUI_R + 0.3 * (1 - _tempVal),	Dayz_GUI_G * _tempVal,		_tempVal,			1];	// Color ranges from iceblue (cold) to red (hot) // << Already Done :)
	_ctrlBlood ctrlSetTextColor	[Dayz_GUI_R + 0.3 * (1 - _bloodVal),	Dayz_GUI_G * _bloodVal,		Dayz_GUI_B * _bloodVal,		1];
	_ctrlFood ctrlSetTextColor	[Dayz_GUI_R + 0.3 * (1 - _foodVal),	Dayz_GUI_G * _foodVal,		Dayz_GUI_B * _foodVal,		1];
	_ctrlThirst ctrlSetTextColor	[Dayz_GUI_R + 0.3 * (1 - _thirstVal),	Dayz_GUI_G * _thirstVal,	Dayz_GUI_B * _thirstVal,	1];
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					feedback levels
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _fnc_vanilla_arrows = {	// DZE_UI == VANILLA

	// Blood Regen & BloodLoss arrows
	local _idx = call {
		local _n = r_player_bloodpersec / 25;
		if (r_player_bloodpersec < 0) exitWith {floor _n};
		if (r_player_bloodpersec > 5) exitWith {ceil _n};
		0;
	};
///	_idx = [_idx, -3, 3] call DZR_fnc_clamp;
	_idx = clamp(_idx, -3, 3);

	local _text = call {
		local _n = str abs _idx;
		if (_idx < 0) exitWith {'_down' + _n};
		if (_idx > 0) exitWith {'_up' + _n};
		''
	};

	local _sick = if (r_player_infected) then {'_sick_ca.paa'} else {'_ca.paa'};	/// **** TODO **** use v = [a,b] select (bool) method
	local _bloodText = '\z\addons\dayz_code\gui\status\status_blood_border' + _text + _sick;

	_ctrlBloodBorder ctrlSetText _bloodText;

	// Temperature arrows
	local _tempText = '\z\addons\dayz_code\gui\status\status_temp_border';

	_tempText = call {	/// **** TODO **** needs algorithm

		if (r_player_temp_factor <= r_player_temp_min_factor)	 exitWith {_tempText + '_down3_ca.paa'};
		if (r_player_temp_factor <= r_player_temp_min_factor_50) exitWith {_tempText + '_down2_ca.paa'};
		if (r_player_temp_factor <= r_player_temp_min_factor_25) exitWith {_tempText + '_down1_ca.paa'};
		if (r_player_temp_factor >= r_player_temp_max_factor)	 exitWith {_tempText + '_up3_ca.paa'};
		if (r_player_temp_factor >= r_player_temp_max_factor_50) exitWith {_tempText + '_up2_ca.paa'};
		if (r_player_temp_factor >= r_player_temp_max_factor_25) exitWith {_tempText + '_up1_ca.paa'};

		'\z\addons\dayz_code\gui\status\status_temp_outside_ca.paa';
	};

	_ctrlTempBorder ctrlSetText _tempText;
};

local _fnc_icon_path1 = {	// DZE_UI == VANILLA
	_path = '\z\addons\dayz_code\gui\status\';
};

local _fnc_icon_path2 = {	// DZE_UI != VANILLA
	_path = '\z\addons\dayz_code\gui\status_epoch\';
};

local _fnc_icon_levels2 = {	// DZE_UI in [VANILLA, DARK]

///	_visual = [dayz_disVisual / 185, 0.2, 1] call DZR_fnc_clamp;
	_visual = clamp(dayz_disVisual / 185, 0.2, 1);
	_ctrlEye  ctrlSetTextColor [1, 1, 1, _visual];

///	_audible = [dayz_disAudial * 0.025, 0.2, 1] call DZR_fnc_clamp;
	_audible = clamp(dayz_disAudial * 0.025, 0.2, 1);
	_ctrlEar ctrlSetTextColor [1, 1, 1, _audible];
};

local _fnc_icon_levels3 = {	// DZE_UI NOT in [VANILLA, DARK]

///	_visual = [round (dayz_disVisual * 0.04), 0, 5] call DZR_fnc_clamp;
	_visual = clamp(round (dayz_disVisual * 0.04), 0, 5);
	if (_visual > 0) then {_visualtext = '\z\addons\dayz_code\gui\status_epoch\val_' + str _visual + '_ca.paa'};
	_ctrlEye ctrlSetText _visualtext;

	_audible = clamp(round (dayz_disAudial * 0.08), 0, 5);
	if (_audible > 0) then {_audibletext = '\z\addons\dayz_code\gui\status_epoch\val_' + str _audible + '_ca.paa'};
	_ctrlEar ctrlSetText _audibletext;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Blood Types
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _fnc_blood_types1 = {	// DZE_UI == DARK

	if (!dayz_classicBloodBagSystem) then {

		local _bloodTestdone = player getVariable ['blood_testdone', false];

		if (_bloodTestdone) then {

			local _bloodType = player getVariable ['blood_type', 'O'];
			local _rhFactor = if (player getVariable ['rh_factor', false]) then {'pos'} else {'neg'};	/// **** TODO **** use v = [a,b] select (bool) method
			_ctrlBloodType = _display displayCtrl 1310;
			_ctrlBloodType ctrlSetTextColor _WHT;

			_ctrlBloodType ctrlSetText ('\z\addons\dayz_code\gui\status\status_blood_type_' + _bloodType + '_' + _rhFactor + '_ca.paa');
		};
	};
};

local _fnc_blood_types2 = {	// DZE_UI != DARK

	if (!dayz_classicBloodBagSystem) then {

		local _bloodTestdone = player getVariable ['blood_testdone', false];

		if (_bloodTestdone) then {

			local _bloodType = player getVariable ['blood_type', 'O'];
			local _rhFactor = if (player getVariable ['rh_factor', false]) then {'pos'} else {'neg'};	/// **** TODO **** use v = [a,b] select (bool) method
			_ctrlBloodType = _display displayCtrl 1310;

			_ctrlBloodType ctrlSetText ('\z\addons\dayz_code\gui\status\status_blood_type_' + _bloodType + '_' + _rhFactor + '_ca.paa');
		};
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Flashing Icons
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _fnc_flash = {

	local _cond = _this select 0;
	local _ctrl = _this select 1;

	if (_cond) then {_ctrl ctrlShow !(ctrlShown _ctrl)} else {_ctrl ctrlShow true};
};

local _fnc_flashing1 = {	// DZE_UI != VANILLA
	[_combatVal == 0, _ctrlCombat] call _fnc_flash;	// in-combat icon
};

local _fnc_flashing2 = {	// DZE_UI == VANILLA
	if (DZE_VanillaUICombatIcon) then {call _fnc_flashing1};	/// **** TODO **** rewrite this setting to remove if-check
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				Common features for all UI Settings
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _fnc_all = {

	_ctrlMuteBackground ctrlShow dayz_soundMuted;
	_ctrlMuteIcon ctrlShow dayz_soundMuted;
	_ctrlFracture ctrlShow (!canStand player);

	_ctrlBlood	ctrlSetText (_path + 'status_blood_inside_'	+ str _bloodLvl +	'_ca.paa');	// clamped to [1, 6]
	_ctrlThirst	ctrlSetText (_path + 'status_thirst_inside_'	+ str _thirstLvl +	'_ca.paa');	// clamped to [0, 4]
	_ctrlFood	ctrlSetText (_path + 'status_food_inside_'	+ str _foodLvl +	'_ca.paa');	// clamped to [0, 4]

	local _tempImg = call {

/// **** TODO **** use algorithm

		if (_tempLvl >= 36) exitWith {4};
		if (_tempLvl >= 33) exitWith {3};
		if (_tempLvl >= 30) exitWith {2};
		if (_tempLvl >= 28) exitWith {1};
		0;
	};
	_ctrlTemp ctrlSetText (_path + 'status_temp_' + str _tempImg + '_ca.paa');

	[_bloodVal < 0.2, _ctrlBlood] call _fnc_flash;		// blood
	[_thirstVal < 0.2, _ctrlThirst] call _fnc_flash;	// thirst
	[_foodVal < 0.2, _ctrlFood] call _fnc_flash;		// hunger
	[_tempVal > 0.8, _ctrlTemp] call _fnc_flash;		// temperature

	if (r_player_injured) then {
		_ctrlBleed ctrlShow !(ctrlShown _ctrlBleed)
	} else {
		_ctrlBleed ctrlShow false;
	};

	///////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//			Opt-in tag system with friend tagging
	//
	///////////////////////////////////////////////////////////////////////////////////////////////////

	local _string = '';
	local _humanityTarget = cursorTarget;	// **** TODO **** move value to DZR_fnc_playerActions

	if (!isNull _humanityTarget && {isPlayer _humanityTarget} && {alive _humanityTarget}) then {

		local _distance = player distance _humanityTarget;

		if (_distance < DZE_HumanityTargetDistance) then {

///			local _size = [1 - floor (_distance * 0.2) * 0.1, 0.1, 1] call DZR_fnc_clamp;
			local _size = clamp(1 - floor (_distance * 0.2) * 0.1, 0.1, 1);

			// Display name if player opt-in or if friend
			local _friendlies = player getVariable ['friendlies', []];
			local _id = dayz_playerUID;
			local _rID = getPlayerUID _humanityTarget;

			local _rfriendlies = _humanityTarget getVariable ['friendlies', []];
			local _rfriendlyTo = _humanityTarget getVariable ['friendlyTo', []];
			local _color = '';

			if ((_rID in _friendlies) && {_id in _rfriendlies}) then {

				if !(_id in _rfriendlyTo) then {
					_rfriendlyTo set [count _rfriendlyTo, _id];
					_humanityTarget setVariable ["friendlyTo", _rfriendlyTo, true];
				};

				_color = "color='#339933'";
				_string = format ["<t %2 align='center' size='%3'>%1</t>", _humanityTarget call DZE_fnc_getNamePlayer, _color, _size];

			} else {

				// Humanity checks
				local _humanity = _humanityTarget getVariable ['humanity', 0];

/// **** TODO **** use index/algorithm/defined color strings

				_color = call {
					if (_humanity < -5000) exitWith {"color='#ff0000'"};	// red
					if (_humanity >  5000) exitWith {"color='#3333ff'"};	// blue
					"color='#ffffff'"					// white
				};

				if ((_humanityTarget getVariable ['DZE_display_name', false]) || (DZE_ForceNameTagsInTrader && isInTraderCity)) then {
					_string = format ["<t %2 align='center' size='%3'>%1</t>", _humanityTarget call DZE_fnc_getNamePlayer, _color, _size];
				};
			};
		};
	};

	// update gui if changed
	if (dayz_humanitytarget != _string) then {

		local _targetControl = _display displayCtrl 1199;
		_targetControl ctrlSetStructuredText (parseText _string);
		dayz_humanitytarget = _string;
	};

	///////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//				Single Currency System
	//
	///////////////////////////////////////////////////////////////////////////////////////////////////

	if (Z_singleCurrency) then {	/// **** TODO **** needs rewriting to avoid multiple if-checks

		_display = uiNameSpace getVariable "ZSC_Money_Display";

		if (isNil "_display") exitWith {}; // not ready	/// **** TODO **** new scheduler logic should not need this

		local _ctrlZSC = _display displayCtrl 4900;
		local _string = "";

		if (Z_showCurrencyUI) then {
			local _cashAmt = player getVariable [["cashMoney","globalMoney"] select Z_persistentMoney, 0];	/// **** TODO **** rewrite economy to standardise and preset/init this in variables.sqf
			_string = format ["<t size='0.9'>%1 </t><img size='1.4' align='right' image='\z\addons\dayz_code\gui\zsc\coins.paa'/><br/>", [_cashAmt] call BIS_fnc_numberText];
		};
		if (Z_globalBanking && Z_showBankUI) then {
			local _bankAmt = player getVariable ["bankMoney", 0];
			_string = _string + format ["<t size='0.9'>%1 </t><img size='1.4' align='right' image='\z\addons\dayz_code\gui\zsc\bank.paa'/><br/>", [_bankAmt] call BIS_fnc_numberText];
		};
		_ctrlZSC ctrlSetStructuredText parseText _string;
		_ctrlZSC ctrlCommit 0;
	};
};

//
//	**** TODO **** needs further refactoring for grouped functions below
//
local _fnc_GUI_none = {};

local _fnc_GUI_vanilla = {

	call _fnc_white_borders1;
	call _fnc_combat_icon1;
	call _fnc_stealth_icons1;
	call _fnc_prim_icons2;
	call _fnc_vanilla_arrows;
	call _fnc_icon_path1;
	call _fnc_icon_levels2;
	call _fnc_blood_types2;
	call _fnc_flashing2;
	call _fnc_all;
};

local _fnc_GUI_no_border = {

	call _fnc_combat_icon2;
	call _fnc_stealth_icons2;
	call _fnc_prim_icons2;
	call _fnc_icon_path2;
	call _fnc_icon_levels3;
	call _fnc_blood_types2;
	call _fnc_flashing1;
	call _fnc_all;
};

local _fnc_GUI_dark = {

	call _fnc_white_borders1;
	call _fnc_white_borders2;
	call _fnc_combat_icon2;
	call _fnc_stealth_icons1;
	call _fnc_prim_icons1;
	call _fnc_icon_path2;
	call _fnc_icon_levels2;
	call _fnc_blood_types1;
	call _fnc_flashing1;
	call _fnc_all;
};

local _fnc_GUI_white_border = {

	call _fnc_white_borders1;
	call _fnc_white_borders2;
	call _fnc_combat_icon2;
	call _fnc_stealth_icons2;
	call _fnc_prim_icons2;
	call _fnc_icon_path2;
	call _fnc_icon_levels3;
	call _fnc_blood_types2;
	call _fnc_flashing1;
	call _fnc_all;
};

local _fnc_GUI_green_border = {

	call _fnc_combat_icon2;
	call _fnc_stealth_icons2;
	call _fnc_prim_icons2;
	call _fnc_icon_path2;
	call _fnc_icon_levels3;
	call _fnc_blood_types2;
	call _fnc_flashing1;
	call _fnc_all;
};

if (isNil 'DZR_UI_ARRAY') then {

	DZR_UI_ARRAY = [];

	DZR_UI_ARRAY set [0, _fnc_GUI_none		];	// None
	DZR_UI_ARRAY set [1, _fnc_GUI_vanilla		];	// Vanilla
	DZR_UI_ARRAY set [2, _fnc_GUI_no_border		];	// Epoch
	DZR_UI_ARRAY set [3, _fnc_GUI_dark		];	// Dark Legacy
	DZR_UI_ARRAY set [4, _fnc_GUI_white_border	];	// White Legacy
	DZR_UI_ARRAY set [5, _fnc_GUI_green_border	];	// Green Legacy (original DayZ Mod)
};

local _code = DZR_UI_ARRAY select DZE_UI;
call _code;
