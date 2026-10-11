class PartGeneric: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SCRAP_METAL";
	descriptionShort = "$STR_EQUIP_DESC_SCRAP_METAL";
	model = "\dayz_equip\models\genericparts.p3d";
	picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_213";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"ItemPole",1}};
			input[] = {{"PartGeneric",2}};
		};
		class Crafting1 {
			text = "$STR_CRAFTING_NAILS";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"equip_nails",4}};
			input[] = {{"PartGeneric",2}};
		};
		class Crafting2 {
			text = "$STR_CRAFTING_CORRUGATEDSHEETS";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"ItemMetalSheet",1}};
			input[] = {{"PartGeneric",3}};
		};
		class Crafting3 {
			text = "$STR_CRAFTING_METALSHEET";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"equip_metal_sheet",1}};
			input[] = {{"PartGeneric",2},{"DZE_Item_Kit_TankTrap",2}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_ACTION_METAL_DOORWAY";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Door_Frame",1}};
			input[] = {{"ItemPole",4},{"DZE_Item_Kit_TankTrap",4},{"PartGeneric",2}};
		};
	};
};

class ItemPole: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALPOLE";
	descriptionShort = "$STR_EPOCH_METALPOLE_DESC";
	model = "\z\addons\dayz_epoch\models\pipe.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_pipe_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_218";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Corrugated",1}};
			input[] = {{"ItemPole",2},{"ItemMetalSheet",2},{"PartWoodLumber",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_219";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Rusty_Gate",1}};
			input[] = {{"ItemPole",3},{"DZE_Item_Kit_TankTrap",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_220";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Metal_Panel",1}};
			input[] = {{"ItemPole",4},{"DZE_Item_Kit_TankTrap",4}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_ACTION_METAL_DOORWAY";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Door_Frame",1}};
			input[] = {{"ItemPole",4},{"DZE_Item_Kit_TankTrap",4},{"PartGeneric",2}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_ACTION_GLASS_FLOOR_QUARTER";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Glass_Floor_Quarter",1}};
			input[] = {{"ItemPole",8},{"PartGlass",4}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_PLAYER_228_2";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Metal_Floor_Quarter",1}};
			input[] = {{"ItemPole",4},{"equip_metal_sheet",4}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_ACTION_CRAFT_BARBED_GATE";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Barbed_Gate",1}};
			input[] = {{"DZE_Item_Kit_Wire",1},{"DZE_Item_Kit_TankTrap",2},{"ItemPole",2}};
		};
	};
};

class ItemMetalSheet: CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_ItemMetalSheet"; //"Corrugated Sheet"
	descriptionShort = "$STR_BLD_desc_ItemMetalSheet"; //"Metal Sheeting"
	picture = "\z\addons\dayz_buildings\equip\item_sheetmetal.paa";
	model = "z\addons\dayz_buildings\models\sheet_metal.p3d";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_218";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Corrugated",1}};
			input[] = {{"ItemPole",2},{"ItemMetalSheet",2},{"PartWoodLumber",2}};
		};
	};
};

class equip_metal_sheet: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_metal_sheet";
	descriptionShort = "$STR_ITEM_DESC_equip_metal_sheet";
	model = "\z\addons\dayz_communityassets\models\metal_sheet_clean.p3d";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_metal_sheet.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_213_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Metal_Pillar",2}};
			input[] = {{"ItemPole",2},{"equip_metal_sheet",4}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_228_2";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Metal_Floor_Quarter",1}};
			input[] = {{"ItemPole",4},{"equip_metal_sheet",4}};
		};
	};
};

class equip_metal_sheet_rusted: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_metal_sheet_rusted";
	descriptionShort = "$STR_ITEM_DESC_equip_metal_sheet_rusted";
	model = "\z\addons\dayz_communityassets\models\metal_sheet_rusted.p3d";
	picture = "\z\addons\dayz_communityassets\CraftingPlaceholders\equip_metal_sheet_rusted.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_CRAFTING_METALSHEET";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"equip_metal_sheet",1}};
			input[] = {{"equip_metal_sheet_rusted",1}};
		};
	};
};

class ItemRSJ: CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_ItemRSJ"; //"Steel Beam"
	descriptionShort = "$STR_BLD_desc_ItemRSJ"; //"Steel RSJ Support Beam"
	picture = "\z\addons\dayz_buildings\equip\item_rsj.paa";
	model = "z\addons\dayz_buildings\models\rsj.p3d";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_BRIDGE";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Metal_Drawbridge",1}};
			input[] = {{"ItemRSJ",6},{"DZE_Item_Kit_Metal_Floor",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_265"; // Craft Scrap Metal
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"PartGeneric",6}};
			input[] = {{"ItemRSJ",1}};
		};
	};
};

class equip_1inch_metal_pipe: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_1inch_metal_pipe";
	descriptionShort = "$STR_ITEM_DESC_equip_1inch_metal_pipe";
	model = "\z\addons\dayz_communityassets\models\1in_pipe.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_1inch_metal_pipe_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_305";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Scaffolding",1}};
			input[] = {{"equip_2inch_metal_pipe",4},{"equip_1inch_metal_pipe",2},{"PartWoodLumber",4}};
		};
	};
};

class equip_2inch_metal_pipe: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_2inch_metal_pipe";
	descriptionShort = "$STR_ITEM_DESC_equip_2inch_metal_pipe";
	model = "\z\addons\dayz_communityassets\models\2in_pipe.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2inch_metal_pipe.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_305";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Scaffolding",1}};
			input[] = {{"equip_2inch_metal_pipe",4},{"equip_1inch_metal_pipe",2},{"PartWoodLumber",4}};
		};
	};
};

class equip_tent_poles: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_tent_poles";
	descriptionShort = "$STR_ITEM_DESC_equip_tent_poles";
	model = "z\addons\dayz_communityassets\models\1m_pole_6.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_1m_pole_6_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_190";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Tent",1}};
			input[] = {{"ItemCanvas",2},{"equip_tent_poles",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_191";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Tent_Desert",1}};
			input[] = {{"ItemCanvas",3},{"equip_tent_poles",2}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_192";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Tent_Dome",1}};
			input[] = {{"ItemCanvas",3},{"equip_tent_poles",2}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_192_1";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Tent_Winter",1}};
			input[] = {{"ItemCanvas",3},{"equip_tent_poles",2}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_PLAYER_192_2";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Tent_Dome_Winter",1}};
			input[] = {{"ItemCanvas",3},{"equip_tent_poles",2}};
		};		
	};
};