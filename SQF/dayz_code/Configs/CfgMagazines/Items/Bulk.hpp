class DZE_Item_Bulk_Base: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BULK_NAME";
	descriptionShort = "$STR_EPOCH_BULK_DESC";
	model = "\z\addons\dayz_communityassets\models\crate.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_crate.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Bulk_Empty: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_EMPTY";
	descriptionShort = "$STR_EPOCH_BULK_DESC_EMPTY";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_221";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_SodaCoke",1}};
			input[] = {{"DZE_Item_Bulk_Empty",1},{"DZE_Item_Drink_Coke",6}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_222";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_SodaPepsi",1}};
			input[] = {{"DZE_Item_Bulk_Empty",1},{"DZE_Item_Drink_SodaPepsi",6}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_223";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_GenericHalf",1}};
			input[] = {{"DZE_Item_Bulk_Empty",1},{"DZE_Item_Metal_Parts",6}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_224";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_TankTrapHalf",1}};
			input[] = {{"DZE_Item_Bulk_Empty",1},{"DZE_Item_Kit_TankTrap",6}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_PLAYER_225";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_WireHalf",1}};
			input[] = {{"DZE_Item_Bulk_Empty",1},{"DZE_Item_Kit_Wire",6}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_PLAYER_226";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_BaconCooked",1}};
			input[] = {{"DZE_Item_Bulk_Empty",1},{"DZE_Item_Meat_Cooked_Bacon",6}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_PLAYER_332";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_SandbagHalf",1}};
			input[] = {{"DZE_Item_Bulk_Empty",1},{"DZE_Item_Kit_Sandbag",6}};
		};
	};
};

//Edibles
class DZE_Item_Bulk_SodaCoke: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_SODACOKE_HALF";
	descriptionShort = "$STR_EPOCH_BULK_DESC_SODACOKE_HALF";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Drink_Coke",6,"magazine"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_221";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_SodaCokeFull",1}};
			input[] = {{"DZE_Item_Bulk_SodaCoke",1},{"DZE_Item_Drink_Coke",6}};
		};
	};
};
class DZE_Item_Bulk_SodaCokeFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_SODACOKE_FULL";
	descriptionShort = "$STR_EPOCH_BULK_DESC_SODACOKE_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Drink_Coke",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_SodaPepsi: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_SODAPEPSI_HALF";
	descriptionShort = "$STR_EPOCH_BULK_DESC_SODAPEPSI_HALF";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Drink_SodaPepsi",6,"magazine"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_222";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_SodaPepsiFull",1}};
			input[] = {{"DZE_Item_Bulk_SodaPepsi",1},{"DZE_Item_Drink_SodaPepsi",6}};
		};
	};
};
class DZE_Item_Bulk_SodaPepsiFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_SODAPEPSI_FULL";
	descriptionShort = "$STR_EPOCH_BULK_DESC_SODAPEPSI_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Drink_SodaPepsi",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_BaconCooked: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_BACON_HALF";
	descriptionShort = "$STR_EPOCH_BULK_DESC_BACON_HALF";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Meat_Cooked_Bacon",6,"magazine"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_227";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_BaconCookedFull",1}};
			input[] = {{"DZE_Item_Bulk_BaconCooked",1},{"DZE_Item_Meat_Cooked_Bacon",6}};
		};
	};
};
class DZE_Item_Bulk_BaconCookedFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_BACON_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_BACON_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Meat_Cooked_Bacon",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_Garlic_BulbFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_garlic_bulb_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_garlic_bulb_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Food_Garlic_Bulb",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_FishCookedSeaBassFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FishCookedSeaBass_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FishCookedSeaBass_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Food_Fish_Cooked_SeaBass",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_FishCookedTroutFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FishCookedTrout_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FishCookedTrout_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Food_Fish_Cooked_Trout",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_FishCookedTunaFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FishCookedTuna_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FishCookedTuna_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Food_Fish_Cooked_Tuna",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_BeefCookedFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodBeefCooked_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodBeefCooked_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Meat_Cooked_Beef",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_CarrotFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodCarrot_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodCarrot_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Food_Carrot",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_ChickenCookedFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodChickenCooked_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodChickenCooked_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Meat_Cooked_Chicken",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_DogCookedFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodDogCooked_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodDogCooked_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Meat_Cooked_Dog",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_GoatCookedFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodGoatCooked_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodGoatCooked_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Meat_Cooked_Goat",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_MuttonCookedFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodMuttonCooked_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodMuttonCooked_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Meat_Cooked_Mutton",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_PotatoRawFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodPotatoRaw_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodPotatoRaw_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Farm_PotatoRaw",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_PumpkinFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodPumpkin_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodPumpkin_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Food_Pumpkin",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_RabbitCookedFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_FoodRabbitCooked_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_FoodRabbitCooked_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Meat_Cooked_Rabbit",12,"magazine"};
		};
	};
};

//Building items
class DZE_Item_Bulk_SandbagHalf: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_SANDBAG_HALF";
	descriptionShort = "$STR_EPOCH_BULK_DESC_SANDBAG_HALF";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Kit_Sandbag",6,"magazine"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_332";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_Sandbag",1}};
			input[] = {{"DZE_Item_Bulk_SandbagHalf",1},{"DZE_Item_Kit_Sandbag",6}};
		};
	};
};
class DZE_Item_Bulk_Sandbag: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_SANDBAG";
	descriptionShort = "$STR_EPOCH_BULK_DESC_SANDBAG";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Kit_Sandbag",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_TankTrapHalf: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_TANKTRAP_HALF";
	descriptionShort = "$STR_EPOCH_BULK_DESC_TANKTRAP_HALF";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Kit_TankTrap",6,"magazine"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_224";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_TankTrap",1}};
			input[] = {{"DZE_Item_Bulk_TankTrapHalf",1},{"DZE_Item_Kit_TankTrap",6}};
		};
	};
};
class DZE_Item_Bulk_TankTrap: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_TANKTRAP_FULL";
	descriptionShort = "$STR_EPOCH_BULK_DESC_TANKTRAP_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Kit_TankTrap",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_WireHalf: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_WIREKIT_HALF";
	descriptionShort = "$STR_EPOCH_BULK_DESC_WIREKIT_HALF";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Kit_Wire",6,"magazine"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_225";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_Wire",1}};
			input[] = {{"DZE_Item_Bulk_WireHalf",1},{"DZE_Item_Kit_Wire",6}};
		};
	};
};
class DZE_Item_Bulk_Wire: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_WIREKIT_FULL";
	descriptionShort = "$STR_EPOCH_BULK_DESC_WIREKIT_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Kit_Wire",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_GenericHalf: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_GENERIC_HALF";
	descriptionShort = "$STR_EPOCH_BULK_DESC_GENERIC_HALF";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Metal_Parts",6,"magazine"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_223";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Bulk_Metal_Parts",1}};
			input[] = {{"DZE_Item_Bulk_GenericHalf",1},{"DZE_Item_Metal_Parts",6}};
		};
	};
};
class DZE_Item_Bulk_Metal_Parts: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_GENERIC_FULL";
	descriptionShort = "$STR_EPOCH_BULK_DESC_GENERIC_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Metal_Parts",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_ComboLockFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemComboLock_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemComboLock_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Locks_ComboLock",12,"magazine"};
		};
	};
};

//Misc
class DZE_Item_Bulk_AA_BatteryFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_aa_battery_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_aa_battery_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Elec_Aa_Battery",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_D_BatteryFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_d_battery_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_d_battery_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Elec_D_Battery",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_Duct_TapeFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_duct_tape_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_duct_tape_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Plastic_Duct_Tape",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_FeathersFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_feathers_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_feathers_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Feathers",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_FloppywireFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_floppywire_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_floppywire_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Elec_Floppywire",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_NailsFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_nails_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_nails_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Metal_Nails",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_Pvc_BoxFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_pvc_box_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_pvc_box_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Plastic_PVC_Box",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_RagFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_rag_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_rag_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Tex_Rag",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_RopeFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_rope_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_rope_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Tex_Rope",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_ScrapelectronicsFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_scrapelectronics_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_scrapelectronics_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Elec_Scrapelectronics",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_StringFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_equip_string_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_equip_string_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Tex_String",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_ChemBlueFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_HandChemBlue_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_HandChemBlue_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Flares_ChemBlue",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_ChemGreenFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_HandChemGreen_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_HandChemGreen_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Flares_ChemGreen",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_ChemRedFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_HandChemRed_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_HandChemRed_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Flares_ChemRed",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_RoadFlareFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_HandRoadFlare_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_HandRoadFlare_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Flares_RoadFlare",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_C4ChargeFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemC4Charge_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemC4Charge_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Expl_C4Charge",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_DogTagFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemDogTag_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemDogTag_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_DogTag",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_HotwireKitFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemHotwireKit_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemHotwireKit_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Misc_HotwireKit",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_KosmosSmokesFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemKosmosSmokes_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemKosmosSmokes_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Cig_Kosmos",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_LightBulbFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemLightBulb_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemLightBulb_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Elec_LightBulb",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_MixOilFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemMixOil_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemMixOil_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_ChainGas_MixOil",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_ScrewsFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemScrews_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemScrews_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Metal_Screws",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_GlassFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_PartGlass_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_PartGlass_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Parts_Glass",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_WheelFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_PartWheel_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_PartWheel_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Parts_Wheel",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_PipeBombFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_PipeBomb_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_PipeBomb_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Expl_PipeBomb",12,"magazine"};
		};
	};
};

//Planting
class DZE_Item_Bulk_FertilizerFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemFertilizer_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemFertilizer_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Farm_Fertilizer",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_KiloBlackTeaFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemKiloBlackTea_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemKiloBlackTea_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Farm_KiloBlackTea",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_KiloHempFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemKiloHemp_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemKiloHemp_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Farm_KiloHemp",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_KiloTobaccoFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemKiloTobacco_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemKiloTobacco_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Farm_KiloTobacco",12,"magazine"};
		};
	};
};

//Animal Craftables
class DZE_Item_Bulk_AnimalSkinFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemAnimalSkin_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemAnimalSkin_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_AnimalSkin",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_SkinRabbitFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemSkinRabbit_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemSkinRabbit_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Rabbit",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_SkinCowFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemSkinCow_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemSkinCow_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Cow",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_SkinGoatFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemSkinGoat_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemSkinGoat_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Goat",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_SkinBoarFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemSkinBoar_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemSkinBoar_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Boar",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_SkinDogFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemSkinDog_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemSkinDog_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Dog",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_SkinSheepFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemSkinSheep_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemSkinSheep_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Sheep",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_WoolFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemWool_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemWool_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Wool",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_LeatherFull: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_ItemLeather_FULL";
	descriptionshort = "$STR_EPOCH_BULK_DESC_ItemLeather_FULL";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"DZE_Item_Hide_Leather",12,"magazine"};
		};
	};
};

// Ammo
class DZE_Item_Bulk_17Rnd_9x19_Glock17: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_G17";
	descriptionShort = "$STR_EPOCH_BULK_DESC_G17";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"17Rnd_9x19_glock17",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_15Rnd_9x19_M9SD: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_M9SD";
	descriptionShort = "$STR_EPOCH_BULK_DESC_M9SD";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"15Rnd_9x19_M9SD",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_30Rnd_9x19_MP5SD: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_MP5SD";
	descriptionShort = "$STR_EPOCH_BULK_DESC_MP5SD";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"30Rnd_9x19_MP5SD",12,"magazine"};
		};
	};
};
class DZE_Item_Bulk_30Rnd_556x45_StanagSD: DZE_Item_Bulk_Base {
	displayName = "$STR_EPOCH_BULK_DISP_STANAGSD";
	descriptionShort = "$STR_EPOCH_BULK_DESC_STANAGSD";

	class ItemActions {
		class CreateMags {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = "spawn player_loadCrate;";
			output[] = {"30Rnd_556x45_StanagSD",12,"magazine"};
		};
	};
};