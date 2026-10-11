class ItemDocument: CA_Magazine {
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
			output[] = {{"ItemLetter",1},{"ItemDocumentRamp",1},{"ItemBook1",1},{"ItemBook2",1},{"ItemBook3",1},{"ItemBook4",1},{"ItemNewspaper",1},{"ItemORP",1},{"ItemAVE",1},{"ItemLRK",1},{"ItemTNK",1},{"ItemARM",1},{"ItemTruckORP",1},{"ItemTruckAVE",1},{"ItemTruckLRK",1},{"ItemTruckTNK",1},{"ItemTruckARM",1},{"ItemHeliAVE",1},{"ItemHeliLRK",1},{"ItemHeliTNK",1},{"ItemPlotDeed",1}};
			input[] = {{"ItemDocument",1}};
		};
	};
};

class ItemPlotDeed: CA_Magazine {
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
			input[] = {{"ItemPlotDeed",1},{"ItemGoldBar10oz",2}};
		};
	};
};

class ItemLetter: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LETTER";
	descriptionShort = "$STR_EPOCH_LETTER_DESC";
	model = "\z\addons\dayz_epoch\models\doc_letter.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_letter_ca.paa";
	count = 1;
	type = 256;
};

class ItemBook1: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ROMANCENOVEL";
	descriptionShort = "$STR_EPOCH_ROMANCENOVEL_DESC";
	model = "\z\addons\dayz_epoch\models\doc_trashy1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trashy1_ca.paa";
	count = 1;
	type = 256;
};

class ItemBook2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ROMANCENOVEL";
	descriptionShort = "$STR_EPOCH_ROMANCENOVEL_DESC2";
	model = "\z\addons\dayz_epoch\models\doc_trashy2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trashy2_ca.paa";
	count = 1;
	type = 256;
};

class ItemBook3: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BOOK";
	descriptionShort = "$STR_EPOCH_BOOK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	count = 1;
	type = 256;
};

class ItemBook4: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BOOK";
	descriptionShort = "$STR_EPOCH_BOOK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	count = 1;
	type = 256;
};

class ItemNewspaper: CA_Magazine {
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

class ItemDocumentRamp: CA_Magazine {
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
			input[] = {{"ItemDocumentRamp",1},{"PartWoodLumber",8}};
		};
	};
};

class ItemBookBible : CA_Magazine {
	scope = 2;
	displayName = "$STR_BOOK_NAME_BIBLE";
	descriptionShort = "$STR_BOOK_DESC_BIBLE";
	model = "z\addons\dayz_communityassets\models\bible.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bible_CA.paa";
	count = 1;
	type = 256;
};

class ItemTrashPaper : CA_Magazine {
	scope = 2;
	displayName = "$STR_name_ItemTrashPaper";
	descriptionShort = "$STR_desc_ItemTrashPaper";
	model = "z\addons\dayz_communityassets\models\paper_sheet_clean_note.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_paper_sheet_note_ca.paa";
	count = 1;
	type = 256;
};

class ItemTrashPaperMusic : CA_Magazine {
	scope = 2;
	displayName = "$STR_name_ItemTrashPaperMusic";
	descriptionShort = "$STR_desc_ItemTrashPaperMusic";
	model = "z\addons\dayz_communityassets\models\paper_sheet_musical.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_paper_sheet_musical_ca.paa";
	count = 1;
	type = 256;
};

class equip_paper_sheet : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_paper_sheet";
	descriptionShort = "$STR_ITEM_DESC_equip_paper_sheet";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_paper_sheet.paa";
	count = 1;
	type = 256;
};

class equip_note : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_note";
	descriptionShort = "$STR_ITEM_DESC_equip_note";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_note.paa";
	count = 1;
	type = 256;
};

// Vehicle upgrade parts
class ItemORP: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_ORP";
	descriptionShort = "$STR_EPOCH_VEHUP_ORP_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up1.p3d";
	picture = "\dayz_epoch_c\icons\documents\car_offroad.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemAVE: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_AVE";
	descriptionShort = "$STR_EPOCH_VEHUP_AVE_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up2.p3d";
	picture = "\dayz_epoch_c\icons\documents\car_armor.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemLRK: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_LRK";
	descriptionShort = "$STR_EPOCH_VEHUP_LRK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up3.p3d";
	picture = "\dayz_epoch_c\icons\documents\car_cargo.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTNK: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_TNK";
	descriptionShort = "$STR_EPOCH_VEHUP_TNK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up4.p3d";
	picture = "\dayz_epoch_c\icons\documents\car_fuel.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemARM: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_ARM";
	descriptionShort = "$STR_EPOCH_VEHUP_ARM_DESC";
	model = "\z\addons\dayz_epoch\models\doc_car_weps.p3d";
	picture = "\dayz_epoch_c\icons\documents\car_weapon.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};


class ItemTruckORP: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_ORP_TRUCK";
	descriptionShort = "$STR_EPOCH_VEHUP_ORP_TRUCK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_truck1.p3d";
	picture = "\dayz_epoch_c\icons\documents\truck_offroad.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTruckAVE: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_AVE_TRUCK";
	descriptionShort = "$STR_EPOCH_VEHUP_AVE_TRUCK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_truck2.p3d";
	picture = "\dayz_epoch_c\icons\documents\truck_armor.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTruckLRK: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_LRK_TRUCK";
	descriptionShort = "$STR_EPOCH_VEHUP_LRK_TRUCK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_truck3.p3d";
	picture = "\dayz_epoch_c\icons\documents\truck_cargo.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTruckTNK: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_TNK_TRUCK";
	descriptionShort = "$STR_EPOCH_VEHUP_TNK_TRUCK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_truck4.p3d";
	picture = "\dayz_epoch_c\icons\documents\truck_fuel.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTruckARM: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_ARM_TRUCK";
	descriptionShort = "$STR_EPOCH_VEHUP_ARM_TRUCK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_truck_weps.p3d";
	picture = "\dayz_epoch_c\icons\documents\truck_weapon.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTankORP: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_ORP_TANK";
	descriptionShort = "$STR_EPOCH_VEHUP_ORP_TANK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_bmp1.p3d";
	picture = "\dayz_epoch_c\icons\documents\bmp_offroad.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTankAVE: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_AVE_TANK";
	descriptionShort = "$STR_EPOCH_VEHUP_AVE_TANK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_bmp2.p3d";
	picture = "\dayz_epoch_c\icons\documents\bmp_armor.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTankLRK: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_LRK_TANK";
	descriptionShort = "$STR_EPOCH_VEHUP_LRK_TANK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_bmp3.p3d";
	picture = "\dayz_epoch_c\icons\documents\bmp_cargo.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemTankTNK: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_TNK_TANK";
	descriptionShort = "$STR_EPOCH_VEHUP_TNK_TANK_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_bmp4.p3d";
	picture = "\dayz_epoch_c\icons\documents\bmp_fuel.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemHeliAVE: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_AVE_HELI";
	descriptionShort = "$STR_EPOCH_VEHUP_AVE_HELI_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_heli1.p3d";
	picture = "\dayz_epoch_c\icons\documents\heli_armor.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemHeliLRK: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_LRK_HELI";
	descriptionShort = "$STR_EPOCH_VEHUP_LRK_HELI_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_heli2.p3d";
	picture = "\dayz_epoch_c\icons\documents\heli_cargo.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class ItemHeliTNK: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VEHUP_TNK_HELI";
	descriptionShort = "$STR_EPOCH_VEHUP_TNK_HELI_DESC";
	model = "\z\addons\dayz_epoch\models\doc_Up_heli3.p3d";
	picture = "\dayz_epoch_c\icons\documents\heli_fuel.paa";
	sfx = "document";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Upgrades {
			text = "$STR_EPOCH_PLAYER_UPGRADEV";
			script = "spawn player_upgradeVehicle;";
		};
	};
};

class Blueprint_01: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_01";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_01";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_02: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_02";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_02";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_03: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_03";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_03";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_04: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_04";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_04";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_05: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_05";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_05";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_06: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_06";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_06";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_07: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_07";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_07";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_08: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_08";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_08";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_09: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_09";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_09";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_10: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_10";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_10";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_11: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_11";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_11";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_12: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_12";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_12";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_13: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_13";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_13";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_14: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_14";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_14";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_15: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_15";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_15";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_16: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_16";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_16";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_17: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_17";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_17";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_18: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_18";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_18";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_19: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_19";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_19";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};
class Blueprint_20: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_BLUEPRINT_20";
	descriptionShort = "$STR_ITEM_DESC_BLUEPRINT_20";
	picture = "\dayz_epoch_c\icons\equipment\ItemBlueprint.paa";
	model = "\z\addons\dayz_epoch_w\items\bluprint_01.p3d";
	count = 1;
};

class PileBooks: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_PILEOFBOOKS";
	descriptionShort = "$STR_ITEM_DESC_PILEOFBOOKS";
	picture = "\dayz_epoch_c\icons\equipment\ItemPileBooks.paa";
	model = "\z\addons\dayz_epoch_w\items\books.p3d";
	count = 1;
};

class PileMedBooks: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_PILEOFMEDBOOKS";
	descriptionShort = "$STR_ITEM_DESC_PILEOFMEDBOOKS";
	picture = "\dayz_epoch_c\icons\equipment\ItemPileMedBooks.paa";
	model = "\z\addons\dayz_epoch_w\items\books_med.p3d";
	count = 1;
};

class StashFile_01: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_01";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_01";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_02: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_02";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_02";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_03: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_03";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_03";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_04: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_04";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_04";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_05: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_05";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_05";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_06: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_06";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_06";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_07: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_07";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_07";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_08: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_08";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_08";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_09: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_09";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_09";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_10: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_10";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_10";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_11: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_11";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_11";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_12: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_12";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_12";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_13: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_13";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_13";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_14: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_14";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_14";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_15: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_15";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_15";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_16: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_16";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_16";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_17: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_17";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_17";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_18: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_18";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_18";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_19: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_19";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_19";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_20: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_20";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_20";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_21: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_21";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_21";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_22: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_22";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_22";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_23: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_23";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_23";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_24: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_24";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_24";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_25: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_25";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_25";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_26: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_26";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_26";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_27: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_27";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_27";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_28: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_28";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_28";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_29: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_29";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_29";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_30: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_30";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_30";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_31: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_31";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_31";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_32: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_32";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_32";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_33: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_33";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_33";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_34: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_34";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_34";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_35: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_35";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_35";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_36: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_36";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_36";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_37: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_37";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_37";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_38: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_38";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_38";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_39: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_39";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_39";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class StashFile_40: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_STASHFILE_40";
	descriptionShort = "$STR_ITEM_DESC_STASHFILE_40";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	count = 1;
};

class DZE_Item_Document_Military: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_DOCUMENT_MILITARY";
	descriptionShort = "$STR_EQUIP_DOCUMENT_MILITARY_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Document_Random: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_DOCUMENT_RANDOM";
	descriptionShort = "$STR_EQUIP_DOCUMENT_RANDOM_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Document_Topsecret: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_DOCUMENT_TOPSECRET";
	descriptionShort = "$STR_EQUIP_DOCUMENT_TOPSECRET_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Manual_Camera: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MANUAL_CAMERA";
	descriptionShort = "$STR_EQUIP_MANUAL_CAMERA_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Manual_Electronics: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MANUAL_ELECTRONICS";
	descriptionShort = "$STR_EQUIP_MANUAL_ELECTRONICS_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Manual_Repair: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MANUAL_REPAIR";
	descriptionShort = "$STR_EQUIP_MANUAL_REPAIR_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Map_Military: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MAP_Military";
	descriptionShort = "$STR_EQUIP_MAP_Military_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Map_Survivor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_MAP_SURVIVOR";
	descriptionShort = "$STR_EQUIP_MAP_SURVIVOR_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Notebook_Bio: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_BIO";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_BIO_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Notebook_Che: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_CHE";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_CHE_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Notebook_Herbs: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_HERBS";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_HERBS_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Notebook_Phy: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_PHY";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_PHY_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
class DZE_Item_Notebook_Secret: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NOTEBOOK_SECRET";
	descriptionShort = "$STR_EQUIP_NOTEBOOK_SECRET_DESC";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	sfx = "document";
	count = 1;
	type = 256;
};
