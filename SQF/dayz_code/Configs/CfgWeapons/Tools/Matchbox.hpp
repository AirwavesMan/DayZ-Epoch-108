class DZE_Tool_Matchbox_Base: ItemCore {
	scope = 0;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	displayName = "$STR_TOOL_DISPLAY_NAME_MATCHBOX";
	descriptionShort = "$STR_TOOL_DESC_SHORT_MATCHBOX";
};

class DZE_Tool_MatchboxWet: DZE_Tool_Matchbox_Base {
	scope = 2;
	picture = "\dayz_epoch_c\icons\tools\ItemMatchesEmpty.paa";
	displayName = "$STR_TOOL_DISPLAY_NAME_MATCHBOX_WET";
	descriptionShort = "$STR_TOOL_DESC_SHORT_MATCHBOX_WET";
};

class DZE_Tool_MatchboxEmpty: DZE_Tool_Matchbox_Base {
	scope = 2;
	picture = "\dayz_epoch_c\icons\tools\ItemMatchesEmpty.paa";
	displayName = "$STR_TOOL_DISPLAY_NAME_MATCHBOX_EMPTY";
	descriptionShort = "$STR_TOOL_DESC_SHORT_MATCHBOX_EMPTY";
};

//Loot Spawn Table.
class DZE_Tool_Matchbox: DZE_Tool_Matchbox_Base {
	scope = 2;	
	model = "\dayz_equip\models\matchbox_gear.p3d"; // Some mods override this. We leave this here just to be sure.
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	DZE_matches = -1;
	DZE_qtyRemaining = "DZE_Tool_Matchbox5";
	
	class ItemActions {
		class Combine {
			text = "$STR_ACTION_TOOL_MATCHBOX_COMBINE";
			script = "spawn player_combineMatches;";
		};
	};
};

class DZE_Tool_Matchbox5: DZE_Tool_Matchbox {
	displayName = "$STR_TOOL_DISPLAY_NAME_MATCHBOX_5";
	descriptionShort = "$STR_TOOL_DESC_SHORT_MATCHBOX_5";
	DZE_matches = 5;
	DZE_qtyRemaining = "DZE_Tool_Matchbox4";
};

class DZE_Tool_Matchbox4: DZE_Tool_Matchbox {
	displayName = "$STR_TOOL_DISPLAY_NAME_MATCHBOX_4";
	descriptionShort = "$STR_TOOL_DESC_SHORT_MATCHBOX_4";
	DZE_qtyRemaining = "DZE_Tool_Matchbox3";
	DZE_matches = 4;
};

class DZE_Tool_Matchbox3: DZE_Tool_Matchbox {
	displayName = "$STR_TOOL_DISPLAY_NAME_MATCHBOX_3";
	descriptionShort = "$STR_TOOL_DESC_SHORT_MATCHBOX_3";
	DZE_qtyRemaining = "DZE_Tool_Matchbox2";
	DZE_matches = 3;
};

class DZE_Tool_Matchbox2: DZE_Tool_Matchbox {
	displayName = "$STR_TOOL_DISPLAY_NAME_MATCHBOX_2";
	descriptionShort = "$STR_TOOL_DESC_SHORT_MATCHBOX_2";
	DZE_qtyRemaining = "DZE_Tool_Matchbox1";
	DZE_matches = 2;
};

class DZE_Tool_Matchbox1: DZE_Tool_Matchbox {
	displayName = "$STR_TOOL_DISPLAY_NAME_MATCHBOX_1";
	descriptionShort = "$STR_TOOL_DESC_SHORT_MATCHBOX_1";
	DZE_qtyRemaining = "DZE_Tool_MatchboxEmpty";
	DZE_matches = 1;
};
