#include "storageManagementDefines.hpp"
#include "storageManagementControls.hpp"

class DZE_StorageManagement {
	idd = DZE_STORAGE_IDD;
	movingEnable = 0;
	enableSimulation = 1;
	class Controls {
		class DZE_Background: DZE_StorageText {
			idc = DZE_STORAGE_IDC_BACKGROUND;
			x = DZE_STORAGE_X * safezoneW + safezoneX;
			y = DZE_STORAGE_Y * safezoneH + safezoneY;
			w = DZE_STORAGE_W * safezoneW;
			h = DZE_STORAGE_H * safezoneH;
			colorBackground[] = {DZE_STORAGE_COLOR_BACKGROUND};
		};
		class DZE_Title: DZE_StorageText {
			idc = DZE_STORAGE_IDC_TITLE;
			text = "$STR_STORAGE_MANAGEMENT_TITLE";
			x = DZE_STORAGE_X * safezoneW + safezoneX;
			y = DZE_STORAGE_Y * safezoneH + safezoneY;
			w = DZE_STORAGE_W * safezoneW;
			h = DZE_STORAGE_TITLE_H * safezoneH;
			colorBackground[] = {DZE_STORAGE_COLOR_ACCENT};
		};
		class DZE_Description: DZE_StorageText {
			idc = DZE_STORAGE_IDC_DESCRIPTION;
			text = "$STR_STORAGE_MANAGEMENT_DESCRIPTION";
			sizeEx = DZE_STORAGE_DESCRIPTION_FONT_SIZE;
			x = DZE_STORAGE_LEFT_X * safezoneW + safezoneX;
			y = DZE_STORAGE_DESCRIPTION_Y * safezoneH + safezoneY;
			w = DZE_STORAGE_DESCRIPTION_W * safezoneW;
			h = DZE_STORAGE_DESCRIPTION_H * safezoneH;
		};
		class DZE_PlayersLabel: DZE_StorageText {
			idc = DZE_STORAGE_IDC_PLAYERS_LABEL;
			text = "$STR_MP_PLAYERS";
			x = DZE_STORAGE_LEFT_X * safezoneW + safezoneX;
			y = DZE_STORAGE_LABEL_Y * safezoneH + safezoneY;
			w = DZE_STORAGE_COLUMN_W * safezoneW;
			h = DZE_STORAGE_LABEL_H * safezoneH;
		};
		class DZE_FriendsLabel: DZE_StorageText {
			idc = DZE_STORAGE_IDC_FRIENDS_LABEL;
			text = "$STR_BASE_MANAGEMENT_FRIENDS";
			x = DZE_STORAGE_RIGHT_X * safezoneW + safezoneX;
			y = DZE_STORAGE_LABEL_Y * safezoneH + safezoneY;
			w = DZE_STORAGE_COLUMN_W * safezoneW;
			h = DZE_STORAGE_LABEL_H * safezoneH;
		};
		class DZE_Players: DZE_StorageListBox {
			idc = DZE_STORAGE_IDC_PLAYERS;
			x = DZE_STORAGE_LEFT_X * safezoneW + safezoneX;
		};
		class DZE_Friends: DZE_StorageListBox {
			idc = DZE_STORAGE_IDC_FRIENDS;
			x = DZE_STORAGE_RIGHT_X * safezoneW + safezoneX;
		};
		class DZE_Add: DZE_StorageButton {
			idc = DZE_STORAGE_IDC_ADD;
			text = "$STR_EPOCH_ADD";
			x = DZE_STORAGE_ADD_X * safezoneW + safezoneX;
			onButtonClick = "'add' call DZE_fnc_storageChangeFriend;";
		};
		class DZE_Remove: DZE_StorageButton {
			idc = DZE_STORAGE_IDC_REMOVE;
			text = "$STR_DISP_DELETE";
			x = DZE_STORAGE_REMOVE_X * safezoneW + safezoneX;
			onButtonClick = "'remove' call DZE_fnc_storageChangeFriend;";
		};
		class DZE_Close: DZE_StorageButton {
			idc = DZE_STORAGE_IDC_CLOSE;
			text = "$STR_UI_CLOSE";
			x = DZE_STORAGE_CLOSE_X * safezoneW + safezoneX;
			y = DZE_STORAGE_CLOSE_Y * safezoneH + safezoneY;
			onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2;";
		};
	};
};
