class DZE_Tool_Pickaxe: ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_PICKAXE";
	descriptionShort = "$STR_EQUIP_DESC_PICKAXE";
	model = "z\addons\dayz_communityweapons\models\pickaxe\pickaxe.p3d";
	picture = "\z\addons\dayz_communityweapons\models\pickaxe\pickaxe.paa";
	DZE_brokenItem = "DZE_Tool_PickaxeBroken";

	class ItemActions {
		class Use {
			text = "$STR_ACTIONS_MINE_STONE";
			script = "spawn player_mineStone;";
		};
	};
};

class DZE_Tool_PickaxeBroken: ItemCore {
	scope = 2;
	displayName = "$STR_name_ItemPickaxeBroken";
	descriptionShort = "$STR_desc_ItemPickaxeBroken";
	model = "z\addons\dayz_communityweapons\models\pickaxe\pickaxe.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemPickaxeBroken.paa";

	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_PICKAXE";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Pickaxe"};
			input[] = {{"DZE_Item_Plastic_Duct_Tape",1},{"DZE_Item_Tool_Lever",1}};
			inputweapons[] = {"DZE_Tool_PickaxeBroken"};
		};
	};
};
