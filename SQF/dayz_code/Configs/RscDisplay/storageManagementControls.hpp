#ifndef DZE_STORAGE_MANAGEMENT_CONTROLS
#define DZE_STORAGE_MANAGEMENT_CONTROLS
#include "storageManagementDefines.hpp"

class DZE_StorageScrollBar {
	color[] = {1,1,1,0.6};
	colorActive[] = {DZE_STORAGE_COLOR_TEXT};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
	arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
	border = "\ca\ui\data\ui_border_scroll_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};

class DZE_StorageText {
	idc = -1;
	type = DZE_STORAGE_CT_TEXT;
	style = DZE_STORAGE_ST_LEFT;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	shadow = 1;
	colorShadow[] = {0,0,0,0.5};
	font = DZE_STORAGE_FONT;
	sizeEx = DZE_STORAGE_FONT_SIZE;
	text = "";
	colorText[] = {DZE_STORAGE_COLOR_TEXT};
	colorBackground[] = {0,0,0,0};
	linespacing = 1;
	tooltipColorText[] = {DZE_STORAGE_COLOR_TEXT};
	tooltipColorBox[] = {DZE_STORAGE_COLOR_TEXT};
	tooltipColorShade[] = {0,0,0,0.65};
};

class DZE_StorageListBox {
	idc = -1;
	type = DZE_STORAGE_CT_LISTBOX;
	style = DZE_STORAGE_ST_LIST;
	x = 0;
	y = DZE_STORAGE_LIST_Y * safezoneH + safezoneY;
	w = DZE_STORAGE_COLUMN_W * safezoneW;
	h = DZE_STORAGE_LIST_H * safezoneH;
	font = DZE_STORAGE_FONT;
	sizeEx = DZE_STORAGE_LIST_FONT_SIZE;
	colorText[] = {DZE_STORAGE_COLOR_TEXT};
	colorSelect[] = {DZE_STORAGE_COLOR_TEXT};
	colorSelect2[] = {DZE_STORAGE_COLOR_TEXT};
	colorBackground[] = {DZE_STORAGE_COLOR_LIST};
	colorSelectBackground[] = {DZE_STORAGE_COLOR_SELECTION};
	colorSelectBackground2[] = {DZE_STORAGE_COLOR_SELECTION};
	colorScrollbar[] = {0.2,0.2,0.2,1};
	color[] = {0.7,0.7,0.7,1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
	wholeHeight = 0.45;
	rowHeight = 0.04;
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	tooltipColorText[] = {DZE_STORAGE_COLOR_TEXT};
	tooltipColorBox[] = {DZE_STORAGE_COLOR_TEXT};
	tooltipColorShade[] = {0,0,0,0.65};
	class ScrollBar: DZE_StorageScrollBar {};
	class ListScrollBar: DZE_StorageScrollBar {};
	soundSelect[] = {"",0.1,1};
	soundPush[] = {"",0,1};
	soundEnter[] = {"",0,1};
	soundClick[] = {"",0,1};
	soundEscape[] = {"",0,1};
	sound[] = {"",0,1};
};

class DZE_StorageButton {
	idc = -1;
	type = DZE_STORAGE_CT_SHORTCUT_BUTTON;
	style = DZE_STORAGE_ST_BUTTON;
	default = 0;
	shadow = 0;
	x = 0;
	y = DZE_STORAGE_BUTTON_Y * safezoneH + safezoneY;
	w = DZE_STORAGE_BUTTON_W * safezoneW;
	h = DZE_STORAGE_BUTTON_H;
	font = DZE_STORAGE_FONT;
	size = DZE_STORAGE_FONT_SIZE;
	sizeEx = DZE_STORAGE_FONT_SIZE;
	text = "";
	action = "";
	textureNoShortcut = "";
	animTextureNormal = DZE_STORAGE_BUTTON_TEXTURE;
	animTextureDisabled = DZE_STORAGE_BUTTON_TEXTURE;
	animTextureOver = DZE_STORAGE_BUTTON_TEXTURE;
	animTextureFocused = DZE_STORAGE_BUTTON_TEXTURE;
	animTexturePressed = DZE_STORAGE_BUTTON_TEXTURE;
	animTextureDefault = DZE_STORAGE_BUTTON_TEXTURE;
	colorBackground[] = {DZE_STORAGE_COLOR_ACCENT};
	colorBackgroundFocused[] = {DZE_STORAGE_COLOR_HOVER};
	colorBackground2[] = {DZE_STORAGE_COLOR_HOVER};
	color[] = {DZE_STORAGE_COLOR_TEXT};
	colorFocused[] = {DZE_STORAGE_COLOR_TEXT};
	color2[] = {DZE_STORAGE_COLOR_TEXT};
	colorText[] = {DZE_STORAGE_COLOR_TEXT};
	colorDisabled[] = {DZE_STORAGE_COLOR_DISABLED};
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	tooltipColorText[] = {DZE_STORAGE_COLOR_TEXT};
	tooltipColorBox[] = {DZE_STORAGE_COLOR_TEXT};
	tooltipColorShade[] = {0,0,0,0.65};
	class HitZone {
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class TextPos {
		left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = 0;
		right = 0.005;
		bottom = 0;
	};
	class Attributes {
		font = DZE_STORAGE_FONT;
		color = "#E5E5E5";
		align = "center";
		shadow = "false";
	};
	class AttributesImage {
		font = DZE_STORAGE_FONT;
		color = "#E5E5E5";
		align = "left";
	};
	class ShortcutPos {
		left = "(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
	soundPush[] = {"",0,1};
	soundEnter[] = {"",0,1};
	soundClick[] = {"",0,1};
	soundEscape[] = {"",0,1};
	sound[] = {"",0,1};
};

#endif
