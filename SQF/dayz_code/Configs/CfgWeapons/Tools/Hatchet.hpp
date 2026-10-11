class DZE_Tool_Hatchet : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HATCHET";
	descriptionShort = "$STR_EQUIP_DESC_HATCHET";
	model = "\dayz_equip\models\hatchet.p3d";
	picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
	DZE_brokenItem = "DZE_Tool_HatchetBroken";
	DZE_swappedItem = "DZE_Melee_Hatchet";


	class ItemActions {
		class ToBack {
			text = "$STR_ACTIONS_2BACK";
			script = "spawn DZE_fnc_addToBack;";
			use[] = {"DZE_Tool_Hatchet"};
			output[] = {"DZE_Melee_Hatchet"};
		};

		class Toolbelt {
			text = "$STR_ACTIONS_RFROMTB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"DZE_Tool_Hatchet"};
			output[] = {"DZE_Melee_Hatchet"};
		};
	};
};

class DZE_Tool_HatchetBroken : ItemCore {
	scope = 2;
	displayName = "$STR_name_ItemHatchetBroken";
	descriptionShort = "$STR_desc_ItemHatchetBroken";
	picture = "\dayz_epoch_c\icons\tools\ItemHatchetBroken.paa";
	model = "\dayz_equip\models\hatchet.p3d";

	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_HATCHET";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Hatchet"};
			input[] = {{"equip_duct_tape",1},{"equip_lever",1}};
			inputweapons[] = {"DZE_Tool_HatchetBroken"};
		};
	};
};

class DZE_Tool_HatchetBlunt : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HATCHET_DULL";
	descriptionShort = "$STR_EQUIP_DESC_HATCHET_DULL";
	picture = "\dayz_epoch_c\icons\tools\ItemHatchetBroken.paa";
	model = "\dayz_equip\models\hatchet.p3d";

	class ItemActions {
		class SharpenHatchet {
			text = "$STR_ACTIONS_SHARPEN_HATCHET";
			script = "; ['DZE_Tool_HatchetBlunt','DZE_Tool_Hatchet'] spawn DZE_fnc_sharpenTool;";
		};
	};
};
