class DZE_Tool_Hammer: ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_HAMMER";
	descriptionShort = "$STR_EQUIP_HAMMER_DESC";
	picture = "\dayz_epoch_c\icons\tools\ItemHammer.paa";
	model = "\z\addons\dayz_epoch_w\items\hammer.p3d";
};

class DZE_Tool_HammerBroken: ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_HAMMER_BROKEN";
	descriptionShort = "$STR_EQUIP_HAMMER_BROKEN_DESC";
	picture = "\dayz_epoch_c\icons\tools\ItemHammerBroken.paa";
	model = "\z\addons\dayz_epoch_w\items\hammer.p3d";

	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_HAMMER";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Hammer"};
			input[] = {{"DZE_Item_Plastic_Duct_Tape",1},{"DZE_Item_Tool_Lever",1}};
			inputweapons[] = {"DZE_Tool_HammerBroken"};
		};
	};
};