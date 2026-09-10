///////////////////////////////////////////////////////////////////////////
/// Styles
///////////////////////////////////////////////////////////////////////////

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////

class DZE_KeypadDialog {
	movingEnable = 0;
	onLoad = "keypadCancel = true;";
};

class DZE_StorageKeypadDialog: DZE_KeypadDialog {
	idd = -1;
	onUnload = "if (keypadCancel) then {dayz_combination = ''; [] spawn keyPadReset;};";
};

class DZE_SafeKeypadButton: RscButton {
	idc = -1;
	font = "Zeppelin33";
	sizeEx = 0.05;
	colorText[] = {0,0.6,1,1};
	colorBackground[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
};

class DZE_ComboLockButton: RscButton {
	idc = -1;
	text = "";
	style = ST_CENTER + ST_SHADOW;
	colorText[] = {1,1,1,0};
	colorDisabled[] = {1,1,1,0};
	colorBackground[] = {1,1,1,0};
	colorBackgroundDisabled[] = {1,1,1,0};
	colorBackgroundActive[] = {1,1,1,0};
	colorShadow[] = {1,1,1,0};
	colorFocused[] = {1,1,1,0};
	soundClick[] = {"",0.6,1};
};

class DZE_LockboxKeypadButton: DZE_ComboLockButton {
	colorBackgroundActive[] = {1,1,1,0.1};
	colorFocused[] = {1,1,1,0.1};
};

///////////////////////////////////////////////////////////////////////////
/// Dialogs
///////////////////////////////////////////////////////////////////////////

class SafeKeyPad: DZE_StorageKeypadDialog {

	class Controls {
		class SafeKeyPadPic: RscPicture {
			idc = -1;
			text = "\z\addons\dayz_epoch\pictures\SafeKeyPad.paa";
			x = 0.361701 * safezoneW + safezoneX;
			y = 0.255985 * safezoneH + safezoneY;
			w = 0.281637 * safezoneW;
			h = 0.470087 * safezoneH;
		};
		class b1: DZE_SafeKeypadButton {
			x = 0.444897 * safezoneW + safezoneX;
			y = 0.39423 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "1";
			onButtonClick = "[1,false] call DZE_fnc_keypadInput";
		};
		class b4: DZE_SafeKeypadButton {
			x = 0.444897 * safezoneW + safezoneX;
			y = 0.441239 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "4";
			onButtonClick = "[4,false] call DZE_fnc_keypadInput";
		};
		class b7: DZE_SafeKeypadButton {
			x = 0.444897 * safezoneW + safezoneX;
			y = 0.488248 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "7";
			onButtonClick = "[7,false] call DZE_fnc_keypadInput";
		};
		class b2: DZE_SafeKeypadButton {
			x = 0.487755 * safezoneW + safezoneX;
			y = 0.39423 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "2";
			onButtonClick = "[2,false] call DZE_fnc_keypadInput";
		};
		class b8: DZE_SafeKeypadButton {
			x = 0.487755 * safezoneW + safezoneX;
			y = 0.488248 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "8";
			onButtonClick = "[8,false] call DZE_fnc_keypadInput";
		};
		class b5: DZE_SafeKeypadButton {
			x = 0.487755 * safezoneW + safezoneX;
			y = 0.441239 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "5";
			onButtonClick = "[5,false] call DZE_fnc_keypadInput";
		};
		class b3: DZE_SafeKeypadButton {
			x = 0.530613 * safezoneW + safezoneX;
			y = 0.39423 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "3";
			onButtonClick = "[3,false] call DZE_fnc_keypadInput";
		};
		class b6: DZE_SafeKeypadButton {
			x = 0.530613 * safezoneW + safezoneX;
			y = 0.441239 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "6";
			onButtonClick = "[6,false] call DZE_fnc_keypadInput";
		};
		class b9: DZE_SafeKeypadButton {
			x = 0.530613 * safezoneW + safezoneX;
			y = 0.488248 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "9";
			onButtonClick = "[9,false] call DZE_fnc_keypadInput";
		};
		class b0: DZE_SafeKeypadButton {
			x = 0.487755 * safezoneW + safezoneX;
			y = 0.535257 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			text = "0";
			onButtonClick = "[0,false] call DZE_fnc_keypadInput";
		};
		
		class bcancel: DZE_SafeKeypadButton {
			x = 0.444897 * safezoneW + safezoneX;
			y = 0.545257 * safezoneH + safezoneY;
			w = 0.0263751 * safezoneW;
			h = 0.0440667 * safezoneH;
			sizeEx = 0.1;
			text = "*";
			colorText[] = {1,0.1,0.1,1};
			onButtonClick = "[_this select 0,false] call DZE_fnc_storageKeypadAction";
		};
		class benter: DZE_SafeKeypadButton {
			x = 0.530613 * safezoneW + safezoneX;
			y = 0.535257 * safezoneH + safezoneY;
			w = 0.0263751 * safezoneW;
			h = 0.0440667 * safezoneH;
			font = "Zeppelin33Italic";
			sizeEx = 0.1;
			text = "#";
			colorText[] = {0,1,0,1};
			onButtonClick = "[_this select 0,true] call DZE_fnc_storageKeypadAction";
		};
	};
};

// SafeKeyPadTest
class ComboLockUI: DZE_KeypadDialog {
	idd = 41144;
	onUnload = "if (keypadCancel) then {DZE_Lock_Door = ''; [] spawn keyPadReset;};";

	class Controls {
		class ComboLockUIPic: RscPicture {
			idc = -1;
			text = "\z\addons\dayz_epoch\ui\combo_gui.paa";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		class top_combo: RscPicture {
			idc = 17734;
			text = "\z\addons\dayz_epoch\ui\top_0.paa";
			x = 0.418883;
			y = 0.234042;
			w = 0.388564;
			h = 0.161072;
		};
		class middle_combo: RscPicture {
			idc = 17735;
			text = "\z\addons\dayz_epoch\ui\mid_0.paa";
			x = 0.420213;
			y = 0.431049;
			w = 0.387234;
			h = 0.161072;
		};
		class bottom_combo: RscPicture {
			idc = 17736;
			text = "\z\addons\dayz_epoch\ui\bot_0.paa";
			x = 0.420212;
			y = 0.616233;
			w = 0.387234;
			h = 0.180772;
		};
		class unlock_combo: RscPicture {
			idc = 17737;
			text = "\z\addons\dayz_epoch\ui\unlock_a.paa";
			x = 0.219415;
			y = 0.762017;
			w = 0.199734;
			h = 0.208353;
		};
		class exit_combo: RscPicture {
			idc = 17738;
			text = "\z\addons\dayz_epoch\ui\exit_a.paa";
			x = 0.863032;
			y = 0.0252169;
			w = 0.0946809;
			h = 0.0724192;
		};

		class top_left: DZE_ComboLockButton {
			x = 0.43484;
			y = 0.243893;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17734,true,'top'] call DZE_fnc_comboLockInput";
		};
		class top_right: DZE_ComboLockButton {
			x = 0.660904;
			y = 0.241923;
			w = 0.147872;
			h = 0.135461;
			onButtonClick = "[17734,false,'top'] call DZE_fnc_comboLockInput";
		};
		class mid_left: DZE_ComboLockButton {
			x = 0.43484;
			y = 0.433018;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17735,true,'mid'] call DZE_fnc_comboLockInput";
		};
		class mid_right: DZE_ComboLockButton {
			x = 0.659574;
			y = 0.427108;
			w = 0.153191;
			h = 0.135461;
			onButtonClick = "[17735,false,'mid'] call DZE_fnc_comboLockInput";
		};
		class bottom_left: DZE_ComboLockButton {
			x = 0.4375;
			y = 0.637904;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17736,true,'bot'] call DZE_fnc_comboLockInput";
		};
		class bottom_right: DZE_ComboLockButton {
			x = 0.658245;
			y = 0.633964;
			w = 0.155851;
			h = 0.133491;
			onButtonClick = "[17736,false,'bot'] call DZE_fnc_comboLockInput";
		};
		class exit_combo_btn: DZE_ComboLockButton {
			x = 0.827128;
			y = 0.0153665;
			w = 0.158511;
			h = 0.153191;
			onButtonClick = "[_this select 0,false] call DZE_fnc_comboLockAction";
		};
		class unlock_combo_btn: DZE_ComboLockButton {
			x = 0.218085;
			y = 0.762017;
			w = 0.201064;
			h = 0.233964;
			onButtonClick = "[_this select 0,true] call DZE_fnc_comboLockAction";
		};
	};
};


class KeypadUI: DZE_StorageKeypadDialog {
	class Controls {
		class KeypadUIPic: RscPicture {
			idc = -1;
			text = "\z\addons\dayz_epoch\ui\lockbox_gui.paa";
			x = 0.0492023;
			y = 0.00788009;
			w = 0.902925;
			h = 0.98818;
		};
		class red_button: DZE_LockboxKeypadButton {
			x = 0.171543;
			y = 0.115839;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[100,true] call DZE_fnc_keypadInput";
		};
		class green_button: DZE_LockboxKeypadButton {
			x = 0.343085;
			y = 0.115839;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[101,true] call DZE_fnc_keypadInput";
		};
		class blue_button: DZE_LockboxKeypadButton {
			x = 0.514628;
			y = 0.115839;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[102,true] call DZE_fnc_keypadInput";
		};
		class keypad_1: DZE_LockboxKeypadButton {
			x = 0.174202;
			y = 0.308905;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[1,true] call DZE_fnc_keypadInput";
		};
		class keypad_2: DZE_LockboxKeypadButton {
			x = 0.344415;
			y = 0.310875;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[2,true] call DZE_fnc_keypadInput";
		};
		class keypad_3: DZE_LockboxKeypadButton {
			x = 0.515957;
			y = 0.312845;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[3,true] call DZE_fnc_keypadInput";
		};
		class keypad_4: DZE_LockboxKeypadButton {
			x = 0.178192;
			y = 0.50788;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[4,true] call DZE_fnc_keypadInput";
		};
		class keypad_5: DZE_LockboxKeypadButton {
			x = 0.344415;
			y = 0.50788;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[5,true] call DZE_fnc_keypadInput";
		};
		class keypad_6: DZE_LockboxKeypadButton {
			x = 0.517287;
			y = 0.50985;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[6,true] call DZE_fnc_keypadInput";
		};
		class keypad_7: DZE_LockboxKeypadButton {
			x = 0.179521;
			y = 0.700946;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[7,true] call DZE_fnc_keypadInput";
		};
		class keypad_8: DZE_LockboxKeypadButton {
			x = 0.344415;
			y = 0.700946;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[8,true] call DZE_fnc_keypadInput";
		};
		class keypad_9: DZE_LockboxKeypadButton {
			x = 0.518617;
			y = 0.704886;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[9,true] call DZE_fnc_keypadInput";
		};
		class keypad_0: DZE_LockboxKeypadButton {
			x = 0.692819;
			y = 0.704886;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[0,true] call DZE_fnc_keypadInput";
		};
		
		class kpbcancel: DZE_LockboxKeypadButton {
			x = 0.68617;
			y = 0.312845;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[_this select 0,false] call DZE_fnc_storageKeypadAction";
		};
		class kpbcancel2: DZE_LockboxKeypadButton {
			x = 0.69016;
			y = 0.50985;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[_this select 0,false] call DZE_fnc_storageKeypadAction";
		};
		class kpbenter: DZE_LockboxKeypadButton {
			x = 0.6875;
			y = 0.121749;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "[_this select 0,true] call DZE_fnc_storageKeypadAction";
		};
	};
};


