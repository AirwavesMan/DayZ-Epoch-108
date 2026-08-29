class DZE_Tool_Knife_Base : ItemCore {
	scope = 0;	
	model = "\dayz_equip\models\knife_gear.p3d";
	picture = "\dayz_equip\textures\equip_knife_ca.paa";
	displayName = "$STR_TOOL_DISPLAY_NAME_KNIFE";
	
	class ItemActions {
		class Use {
			text= "$STR_ACTION_TOOL_KNIFE_HARVEST";
			script="spawn player_harvestPlant;";
		};
	};
};

class DZE_Tool_Knife : DZE_Tool_Knife_Base {
	scope = 2;
	model = "\dayz_equip\models\knife_gear.p3d"; // Some mods override this. We leave this here just to be sure.
	picture = "\dayz_equip\textures\equip_knife_ca.paa";
	descriptionShort = "$STR_TOOL_DESC_SHORT_KNIFE";
	DZE_sharpnessRemaining = "DZE_Tool_Knife5";
};

class DZE_Tool_Knife5 : DZE_Tool_Knife_Base {
	scope = 2;
	descriptionShort = "$STR_TOOL_DESC_SHORT_KNIFE_5";
	DZE_sharpnessRemaining = "DZE_Tool_Knife4";
};

class DZE_Tool_Knife4 : DZE_Tool_Knife_Base {
	scope = 2;
	descriptionShort = "$STR_TOOL_DESC_SHORT_KNIFE_4";
	DZE_sharpnessRemaining = "DZE_Tool_Knife3";
};

class DZE_Tool_Knife3 : DZE_Tool_Knife_Base {
	scope = 2;
	descriptionShort = "$STR_TOOL_DESC_SHORT_KNIFE_3";
	DZE_sharpnessRemaining = "DZE_Tool_Knife2";
};

class DZE_Tool_Knife2 : DZE_Tool_Knife_Base {
	scope = 2;
	descriptionShort = "$STR_TOOL_DESC_SHORT_KNIFE_2";
	DZE_sharpnessRemaining = "DZE_Tool_Knife1";
};

class DZE_Tool_Knife1 : DZE_Tool_Knife_Base {
	scope = 2;
	descriptionShort = "$STR_TOOL_DESC_SHORT_KNIFE_1";
	DZE_sharpnessRemaining = "DZE_Tool_KnifeBlunt";
};

class DZE_Tool_KnifeBlunt : DZE_Tool_Knife_Base {
	scope = 2;
	displayName = "$STR_TOOL_DISPLAY_NAME_KNIFE_BLUNT";
	descriptionShort = "$STR_TOOL_DESC_SHORT_KNIFE_BLUNT";
	DZE_sharpnessRemaining = "DZE_Tool_KnifeBlunt";
	class ItemActions {
		class FixKnife {
			text = "$STR_ACTION_TOOL_KNIFE_SHARPEN";
			script = "; ['DZE_Tool_KnifeBlunt','DZE_Tool_Knife'] spawn DZE_fnc_sharpenTool;";
		};
		class Use {
			text= "$STR_ACTION_TOOL_KNIFE_HARVEST";
			script="spawn player_harvestPlant;";
		};
	};
};
