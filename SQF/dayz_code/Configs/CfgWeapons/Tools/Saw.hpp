class DZE_Tool_Handsaw: ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_SAW";
	descriptionShort = "$STR_EQUIP_SAW_DESC";
	picture = "\dayz_epoch_c\icons\tools\ItemSaw.paa";
	model = "\z\addons\dayz_epoch_w\items\handsaw.p3d";
};

class DZE_Tool_HandsawBroken: ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_SAW_BROKEN";
	descriptionShort = "$STR_EQUIP_SAW_BROKEN_DESC";
	picture = "\dayz_epoch_c\icons\tools\ItemSawBroken.paa";
	model = "\z\addons\dayz_epoch_w\items\handsaw.p3d";

	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_SAW";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Handsaw"};
			input[] = {{"DZE_Item_Metal_Parts",1}};
			inputweapons[] = {"DZE_Tool_HandsawBroken"};
		};
	};
};