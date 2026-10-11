class ItemLog: CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_ItemLog"; //"Wooden Log"
	descriptionShort = "$STR_BLD_desc_ItemLog"; //"Rough Wooden Log"
	picture = "\z\addons\dayz_buildings\equip\item_log.paa";
	model = "z\addons\dayz_buildings\models\logs.p3d";
	count = 1;
	type = 256;
	
	DZE_burnTimer = 1200;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_MAKEFIRE";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Camp_Fire_Medium";
			require[] = {"DZE_Tool_Matchbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_242"; //"Lumber"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Hatchet","DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"PartWoodLumber",2}};
			input[] = {{"ItemLog",1}};
		};
		class Crafting1 {
			text = "$STR_BLD_craft_ItemLog"; //"Wooden Plank"
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Hatchet","DZE_Tool_Handsaw"};
			output[] = {{"ItemPlank",2}};
			input[] = {{"ItemLog",1}};
		};
		class Crafting2 {
			text = "$STR_EQUIP_NAME_WOOD_PILE"; //"Wood Piles"
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"DZE_Tool_Hatchet"};
			output[] = {{"PartWoodPile",4}};
			input[] = {{"ItemLog",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_256";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Hammer","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_Deer_Stand",1}};
			input[] = {{"ItemLog",8},{"ItemPlank",2},{"equip_nails",2}};
		};
		class Crafting4 {
			text = "$STR_BLD_name_WoodenGate_Foundation";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_Woodfence_Gate_Foundation",1}};
			input[] = {{"ItemLog",6}};
		};
	};
};

class ItemPlank: CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_ItemPlank"; //"Sawn Planks"
	descriptionShort = "$STR_BLD_desc_ItemPlank"; //"Saw Planks"
	picture = "\z\addons\dayz_buildings\equip\item_plank.paa";
	model = "z\addons\dayz_buildings\models\planks.p3d";
	count = 1;
	type = 256;
	
	DZE_burnTimer = 500;

	class ItemActions {
		class Crafting {
			text = "$STR_EQUIP_NAME_WOOD_PILE"; //"Wood Piles"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"DZE_Tool_Hatchet"};
			output[] = {{"PartWoodPile",2}};
			input[] = {{"ItemPlank",1}};
		};
		class Crafting1 {
			text = "$STR_CRAFTING_SPLINT";
			Script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"equip_woodensplint",1}};
			input[] = {{"ItemPlank",1},{"equip_duct_tape",1},{"equip_string",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_255";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"bulk_empty",1}};
			input[] = {{"ItemPlank",2},{"PartGeneric",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_260_1";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_Advanced_WorkBench",1}};
			input[] = {{"ItemPlank",4},{"PartWoodPlywood",4},{"equip_nails",2}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_ACTION_CRAFT_STORAGE_CRATE";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_Storage_Crate",1}};
			input[] = {{"ItemPlank",6},{"equip_nails",1}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_ACTION_CRAFT_CAMO_STORAGE_CRATE";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_Camo_Storage_Crate",1}};
			input[] = {{"ItemPlank",2},{"PartWoodLumber",6},{"DZE_Item_Kit_Net_Forest",1},{"equip_nails",1}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_ACTION_CRAFT_SIMPLE_FOOTBRIDGE";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Simple_Footbridge",1}};
			input[] = {{"ItemPlank",3}};
		};
		class Crafting7 {
			text = "$STR_EPOCH_ACTION_CRAFT_WOODEN_FOOTBRIDGE";
			script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_Wooden_Footbridge",1}};
			input[] = {{"ItemPlank",3},{"PartWoodLumber",2},{"equip_nails",1}};
		};
		class Crafting8 {
			text = "$STR_EPOCH_ACTION_CRAFT_WOODEN_PALLET";
			script = ";['Crafting8','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"equip_wood_pallet",1}};
			input[] = {{"ItemPlank",7},{"equip_nails",1}};
		};
	};
};

class PartWoodPile: CA_Magazine {	
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WOOD_PILE";
	descriptionShort = "$STR_EQUIP_DESC_WOOD_PILE";
	model = "\dayz_equip\models\woodPile.p3d";
	picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
	count = 1;
	type = 256;
	
	DZE_burnTimer = 300;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_MAKEFIRE";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Camp_Fire_Small";
			require[] = {"DZE_Tool_Matchbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_242";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"PartWoodLumber",1}};
			input[] = {{"PartWoodPile",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_243";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"1Rnd_Arrow_Wood",5}};
			input[] = {{"PartWoodPile",1},{"equip_feathers",2}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_244";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Stick_Fence",1}};
			input[] = {{"PartWoodPile",6}};
		};
		class Crafting3 {
			text = "$STR_CRAFTING_SPLINT";
			Script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"equip_woodensplint",1}};
			input[] = {{"PartWoodPile",1},{"equip_duct_tape",1},{"equip_string",1}};
		};
	};
};

class PartWoodLumber: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LUMBER";
	descriptionShort = "$STR_EPOCH_LUMBER_DESC";
	model = "\z\addons\dayz_epoch\models\planks.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wood_planks_CA.paa";
	count = 1;
	type = 256;
	
	DZE_burnTimer = 400;
	
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_254";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"PartWoodPlywood",1}};
			input[] = {{"PartWoodLumber",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_WOODHANDRAIL";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_WoodHandRail",2}};
			input[] = {{"PartWoodLumber",6},{"equip_nails",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_ACTION_WOODPILLAR";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_WoodPillar",2}};
			input[] = {{"PartWoodLumber",8},{"equip_nails",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_257";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_WoodStairs",1}};
			input[] = {{"PartWoodLumber",8},{"equip_nails",2}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_PLAYER_258";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_WoodLadder",1}};
			input[] = {{"PartWoodLumber",8},{"equip_nails",2}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_PLAYER_259";
			Script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"PartPlankPack",1}};
			input[] = {{"PartWoodLumber",3}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_PLAYER_277";
			Script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_GunRack",1}};
			input[] = {{"PartWoodPlywood",1},{"PartWoodLumber",4},{"equip_nails",1}};
		};
		class Crafting7 {
			text = "$STR_CRAFTING_SPLINT";
			Script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"equip_woodensplint",1}};
			input[] = {{"PartWoodLumber",1},{"equip_duct_tape",1},{"equip_string",1}};
		};
		class Crafting8 {
			text = "$STR_EPOCH_ACTION_CRAFT_WOODEN_FOOTBRIDGE";
			Script = ";['Crafting8','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_Wooden_Footbridge",1}};
			input[] = {{"PartWoodLumber",2},{"ItemPlank",3},{"equip_nails",1}};
		};
	};
};

class PartWoodPlywood: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_PLYWOOD";
	descriptionShort = "$STR_EPOCH_PLYWOOD_DESC";
	model = "\z\addons\dayz_epoch\models\plywood.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_plywood_CA.paa";
	count = 1;
	type = 256;
	
	DZE_burnTimer = 300;
	
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_260";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_WorkBench_Epoch",1}};
			input[] = {{"PartWoodPlywood",1},{"PartWoodLumber",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_261";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_Wood_Shack",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4},{"equip_nails",2}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_262";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodFloorQuarter",1}};
			input[] = {{"PartWoodPlywood",3},{"PartWoodLumber",3}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_263";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallThird",1}};
			input[] = {{"PartWoodPlywood",3},{"PartWoodLumber",3}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_PLAYER_264";
			Script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"PartPlywoodPack",1}};
			input[] = {{"PartWoodPlywood",3}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_PLAYER_304";
			Script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_WoodCrate",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",2},{"equip_nails",1}};
		};
	};
};

class PartPlankPack: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LUMBERPACK";
	descriptionShort = "$STR_EPOCH_LUMBERPACK_DESC";
	model = "\z\addons\dayz_epoch\models\plank_pack.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_lumber_pack_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"PartWoodLumber",3}};
			input[] = {{"PartPlankPack",1}};
		};
	};
};

class PartPlywoodPack: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_PLYWOODPACK";
	descriptionShort = "$STR_EPOCH_PLYWOODPACK_DESC";
	model = "\z\addons\dayz_epoch\models\plywood_pack.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_plywood_pack_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"PartWoodPlywood",3}};
			input[] = {{"PartPlywoodPack",1}};
		};
	};
};

class equip_wood_pallet: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_wood_pallet";
	descriptionShort = "$STR_ITEM_DESC_equip_wood_pallet";
	model = "\z\addons\dayz_communityassets\models\wooden_pallet.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_wpallet_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {

		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_WINDBREAK";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"};
			output[] = {{"DZE_Item_Kit_Windbreak",1}};
			input[] = {{"equip_wood_pallet",2},{"PartWoodLumber",2},{"equip_nails",1}};
		};
	};
};

class equip_crate: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_crate";
	descriptionShort = "$STR_ITEM_DESC_equip_crate";
	model = "\z\addons\dayz_communityassets\models\crate.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_crate.paa";
	count = 1;
	type = 256;
};
