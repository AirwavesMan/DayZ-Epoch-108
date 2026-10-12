class DZE_Item_Docu_Document: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_DOCUMENT";
	descriptionShort = "$STR_EPOCH_DOCUMENT_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_188";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			randomOutput = 1;
			output[] = {{"DZE_Item_Docu_Letter",1},{"DZE_Item_Docu_WoodRamp",1},{"DZE_Item_Docu_Book1",1},{"DZE_Item_Docu_Book2",1},{"DZE_Item_Docu_Book3",1},{"DZE_Item_Docu_Book4",1},{"DZE_Item_Docu_Newspaper",1},{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Upgrade_TruckARM",1},{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Docu_PlotDeed",1}};
			input[] = {{"DZE_Item_Docu_Document",1}};
		};
	};
};

class DZE_Item_Docu_PlotDeed: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_PLOTDEED";
	descriptionShort = "$STR_EPOCH_PLOTDEED_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLOTDEED_ACTION";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Plot_Pole",1}};
			input[] = {{"DZE_Item_Docu_PlotDeed",1},{"DZE_Item_Cur_GoldBar10oz",2}};
		};
	};
};

class DZE_Item_Docu_Letter: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LETTER";
	descriptionShort = "$STR_EPOCH_LETTER_DESC";
	model = "\z\addons\dayz_epoch\models\doc_letter.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_letter_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Book1: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ROMANCENOVEL";
	descriptionShort = "$STR_EPOCH_ROMANCENOVEL_DESC";
	model = "\z\addons\dayz_epoch\models\doc_trashy1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trashy1_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Book2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ROMANCENOVEL";
	descriptionShort = "$STR_EPOCH_ROMANCENOVEL_DESC2";
	model = "\z\addons\dayz_epoch\models\doc_trashy2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trashy2_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Book3: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BOOK";
	descriptionShort = "$STR_EPOCH_BOOK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Book4: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BOOK";
	descriptionShort = "$STR_EPOCH_BOOK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Newspaper: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_TORNNEWSPAPER";
	descriptionShort = "$STR_EPOCH_TORNNEWSPAPER_DESC";
	model = "\z\addons\dayz_epoch\models\doc_deaths.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_deaths_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Obituaries {
			text = "$STR_EPOCH_TORNNEWSPAPER_ACTION";
			script = "spawn player_deathBoard;";
		};
	};
};

class DZE_Item_Docu_WoodRamp: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODRAMP";
	descriptionShort = "$STR_EPOCH_WOODRAMP_DESC";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_189";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Wood_Ramp",1}};
			input[] = {{"DZE_Item_Docu_WoodRamp",1},{"DZE_Item_Wood_Lumber",8}};
		};
	};
};

class DZE_Item_Docu_BookBible: CA_Magazine {
	scope = 2;
	displayName = "$STR_BOOK_NAME_BIBLE";
	descriptionShort = "$STR_BOOK_DESC_BIBLE";
	model = "z\addons\dayz_communityassets\models\bible.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bible_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Paper: CA_Magazine {
	scope = 2;
	displayName = "$STR_name_ItemTrashPaper";
	descriptionShort = "$STR_desc_ItemTrashPaper";
	model = "z\addons\dayz_communityassets\models\paper_sheet_clean_note.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_paper_sheet_note_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_PaperMusic: CA_Magazine {
	scope = 2;
	displayName = "$STR_name_ItemTrashPaperMusic";
	descriptionShort = "$STR_desc_ItemTrashPaperMusic";
	model = "z\addons\dayz_communityassets\models\paper_sheet_musical.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_paper_sheet_musical_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Paper_Sheet: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_paper_sheet";
	descriptionShort = "$STR_ITEM_DESC_equip_paper_sheet";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_paper_sheet.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Note: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_note";
	descriptionShort = "$STR_ITEM_DESC_equip_note";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_note.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Blueprint_01: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_01";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_01";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_02: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_02";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_02";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_03: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_03";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_03";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_04: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_04";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_04";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_05: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_05";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_05";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_06: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_06";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_06";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_07: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_07";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_07";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_08: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_08";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_08";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_09: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_09";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_09";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_10: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_10";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_10";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_11: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_11";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_11";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_12: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_12";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_12";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_13: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_13";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_13";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_14: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_14";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_14";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_15: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_15";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_15";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_16: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_16";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_16";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_17: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_17";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_17";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_18: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_18";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_18";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_19: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_19";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_19";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Blueprint_20: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_20";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_20";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class DZE_Item_Docu_PileBooks: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_PILEOFBOOKS";
	descriptionShort = "$STR_ITEM_DESC_PILEOFBOOKS";
	picture = "\dayz_epoch_c\icons\equipment\ItemPileBooks.paa";
	model = "\z\addons\dayz_epoch_w\items\books.p3d";
	count = 1;
};

class DZE_Item_Docu_PileMedBooks: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_PILEOFMEDBOOKS";
	descriptionShort = "$STR_ITEM_DESC_PILEOFMEDBOOKS";
	picture = "\dayz_epoch_c\icons\equipment\ItemPileMedBooks.paa";
	model = "\z\addons\dayz_epoch_w\items\books_med.p3d";
	count = 1;
};

class DZE_Item_StashFile_01: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_01";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_01";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_02: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_02";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_02";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_03: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_03";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_03";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_04: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_04";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_04";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_05: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_05";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_05";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_06: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_06";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_06";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_07: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_07";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_07";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_08: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_08";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_08";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_09: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_09";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_09";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_10: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_10";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_10";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_11: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_11";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_11";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_12: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_12";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_12";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_13: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_13";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_13";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_14: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_14";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_14";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_15: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_15";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_15";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_16: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_16";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_16";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_17: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_17";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_17";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_18: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_18";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_18";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_19: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_19";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_19";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_20: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_20";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_20";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_21: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_21";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_21";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_22: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_22";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_22";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_23: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_23";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_23";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_24: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_24";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_24";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_25: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_25";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_25";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_26: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_26";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_26";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_27: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_27";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_27";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_28: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_28";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_28";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_29: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_29";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_29";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_30: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_30";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_30";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_31: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_31";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_31";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_32: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_32";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_32";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_33: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_33";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_33";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_34: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_34";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_34";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_35: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_35";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_35";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_36: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_36";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_36";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_37: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_37";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_37";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_38: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_38";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_38";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_39: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_39";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_39";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_StashFile_40: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_40";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_40";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_Docu_Document_Military: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_DOCUMENT_MILITARY";
	descriptionShort = "$STR_EQUIP_DOCUMENT_MILITARY_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Document_Random: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_DOCUMENT_RANDOM";
	descriptionShort = "$STR_EQUIP_DOCUMENT_RANDOM_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Document_Topsecret: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_DOCUMENT_TOPSECRET";
	descriptionShort = "$STR_EQUIP_DOCUMENT_TOPSECRET_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Manual_Camera: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MANUAL_CAMERA";
	descriptionShort = "$STR_EQUIP_MANUAL_CAMERA_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Manual_Electronics: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MANUAL_ELECTRONICS";
	descriptionShort = "$STR_EQUIP_MANUAL_ELECTRONICS_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Manual_Repair: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MANUAL_REPAIR";
	descriptionShort = "$STR_EQUIP_MANUAL_REPAIR_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Map_Military: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MAP_Military";
	descriptionShort = "$STR_EQUIP_MAP_Military_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Map_Survivor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MAP_SURVIVOR";
	descriptionShort = "$STR_EQUIP_MAP_SURVIVOR_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Notebook_Bio: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_BIO";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_BIO_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Notebook_Che: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_CHE";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_CHE_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Notebook_Herbs: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_HERBS";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_HERBS_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Notebook_Phy: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_PHY";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_PHY_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};

class DZE_Item_Docu_Notebook_Secret: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_SECRET";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_SECRET_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
