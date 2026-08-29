class DZE_Tool_Matchbox_Base: ItemCore {
	scope = 0;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	displayName = "$STR_EQUIP_NAME_MATCHES";
	descriptionShort = "$STR_EQUIP_DESC_MATCHES";
};

class DZE_Tool_MatchboxWet: DZE_Tool_Matchbox_Base {
	scope = 2;
	picture = "\dayz_epoch_c\icons\tools\ItemMatchesEmpty.paa";
	displayName = "$STR_EQUIP_NAME_MATCHES_WET";
	descriptionShort = "$STR_EQUIP_DESC_MATCHES_WET";
};

class DZE_Tool_MatchboxEmpty: DZE_Tool_Matchbox_Base {
	scope = 2;
	picture = "\dayz_epoch_c\icons\tools\ItemMatchesEmpty.paa";
	displayName = "$STR_EQUIP_NAME_MATCHES_EMPTY";
	descriptionShort = "$STR_EQUIP_DESC_MATCHES_EMPTY";
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
			text = "$STR_ANTIBIOTICS_COMBINE";
			script = "spawn player_combineMatches;";
		};
	};
};

class DZE_Tool_Matchbox5: DZE_Tool_Matchbox {
	displayName = "$STR_EQUIP_NAME_MATCHES_5";
	descriptionShort = "$STR_EQUIP_DESC_MATCHES_5";
	DZE_matches = 5;
	DZE_qtyRemaining = "DZE_Tool_Matchbox4";
};

class DZE_Tool_Matchbox4: DZE_Tool_Matchbox {
	displayName = "$STR_EQUIP_NAME_MATCHES_4";
	descriptionShort = "$STR_EQUIP_DESC_MATCHES_4";
	DZE_qtyRemaining = "DZE_Tool_Matchbox3";
	DZE_matches = 4;
};

class DZE_Tool_Matchbox3: DZE_Tool_Matchbox {
	displayName = "$STR_EQUIP_NAME_MATCHES_3";
	descriptionShort = "$STR_EQUIP_DESC_MATCHES_3";
	DZE_qtyRemaining = "DZE_Tool_Matchbox2";
	DZE_matches = 3;
};

class DZE_Tool_Matchbox2: DZE_Tool_Matchbox {
	displayName = "$STR_EQUIP_NAME_MATCHES_2";
	descriptionShort = "$STR_EQUIP_DESC_MATCHES_2";
	DZE_qtyRemaining = "DZE_Tool_Matchbox1";
	DZE_matches = 2;
};

class DZE_Tool_Matchbox1: DZE_Tool_Matchbox {
	displayName = "$STR_EQUIP_NAME_MATCHES_1";
	descriptionShort = "$STR_EQUIP_DESC_MATCHES_1";
	DZE_qtyRemaining = "DZE_Tool_MatchboxEmpty";
	DZE_matches = 1;
};
