class DZE_Item_Kit_Sandbag: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SANDBAGS";
	descriptionShort = "$STR_EQUIP_DESC_SANDBAGS";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTION_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Sandbag";
			byPass = "byPassRoadCheck";
			require[] = {"DZE_Tool_Etool"};
			consume[] = {"DZE_Item_Kit_Sandbag"};
			//bypass RoadCheck
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_273";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_SandbagLarge",1}};
			input[] = {{"DZE_Item_Kit_Sandbag",3},{"DZE_Item_Kit_Wire",1},{"DZE_Item_Kit_TankTrap",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_274";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Sandbag_Nest",1}};
			input[] = {{"DZE_Item_Kit_Sandbag",4},{"PartWoodPlywood",2},{"PartWoodLumber",4}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_298";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_BagFenceRound",1}};
			input[] = {{"DZE_Item_Kit_Sandbag",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_HBF"; // "Craft Heavy Bag Fence"
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_SandbagHeavy",1}};
			input[] = {{"DZE_Item_Kit_Sandbag",2},{"PartWoodPile",1}};
		};
	};
};

class DZE_Item_Kit_BagFenceRound: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SANDBAGS_ROUND";
	descriptionShort = "$STR_EQUIP_DESC_SANDBAGS_ROUND";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_299";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_BagFenceRound";
			require[] = {"DZE_Tool_Etool"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_195";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Sandbag",1}};
			input[] = {{"DZE_Item_Kit_BagFenceRound",1}};
		};
	};
};

class DZE_Item_Kit_SandbagLarge: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_21_HBARRIER";
	descriptionShort = "$STR_EQUIP_DESC_21_HBARRIER";
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_273_3";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_HBarrier1";
			require[] = {"DZE_Tool_Etool"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_273_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_SandbagExLarge",1}};
			input[] = {{"DZE_Item_Kit_SandbagLarge",3}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_WBARRIER5"; // "Craft 5x Warfare Barrier"
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_WarfareBarrier5x",1}};
			input[] = {{"DZE_Item_Kit_SandbagLarge",5}};
		};
	};
};

class DZE_Item_Kit_SandbagExLarge: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_21_3XHBARRIER";
	descriptionShort = "$STR_EQUIP_DESC_21_HBARRIER";
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_273_4"; // "Build 3x H-Barrier"
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_HBarrier3";
			require[] = {"DZE_Tool_Etool"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_273_2"; // "Craft 5x H-Barrier"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_SandbagExLarge5x",1}};
			input[] = {{"DZE_Item_Kit_SandbagExLarge",1},{"DZE_Item_Kit_SandbagLarge",2}};
		};
	};
};

class DZE_Item_Kit_SandbagExLarge5x: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_21_5XHBARRIER";
	descriptionShort = "$STR_EQUIP_DESC_21_HBARRIER";
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_273_5"; // "Build 5x H-Barrier"
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_HBarrier5";
			require[] = {"DZE_Tool_Etool"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_HBARRIER5CURVED"; // "Craft 5x H-Barrier (Curved)"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_SandbagExLarge5xCurved",1}};
			input[] = {{"DZE_Item_Kit_SandbagExLarge5x",1}};
		};
	};
};

class DZE_Item_Kit_SandbagExLarge5xCurved: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HBARRIER5CURVED";
	descriptionShort = "$STR_EQUIP_DESC_HBARRIER5CURVED";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_HBARRIER5CURVED_2"; // "Build 5x H-Barrier (Curved)"
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_HBarrier5Curved";
			require[] = {"DZE_Tool_Etool"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_273_2"; // "Craft 5x H-Barrier"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_SandbagExLarge5x",1}};
			input[] = {{"DZE_Item_Kit_SandbagExLarge5xCurved",1}};
		};
	};
};

class DZE_Item_Kit_Sandbag_Nest: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_21_NEST";
	descriptionShort = "$STR_EQUIP_DESC_21_NEST";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_SandNest";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_LARGENEST"; // "Craft Large Sandbag Nest"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Sandbag_Nest_Large",1}};
			input[] = {{"DZE_Item_Kit_Sandbag_Nest",4},{"DZE_Item_Kit_SandBagHeavyCorner",4}};
		};
	};
};

class DZE_Item_Kit_Sandbag_Nest_Large: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_LARGENEST";
	descriptionShort = "$STR_EQUIP_DESC_LARGENEST";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_LARGENEST_2"; // "Build Large Sandbag Nest"
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_SandNestLarge";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_SandbagHeavy: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HBF"; // "Heavy Bag Fence"
	descriptionShort = "$STR_EQUIP_DESC_HBF";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_HeavyBagFence";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_HBF_CORNER"; // "Craft Heavy Bag Fence (Corner)"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_SandBagHeavyCorner",1}};
			input[] = {{"DZE_Item_Kit_SandbagHeavy",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_HBF_ROUND"; // "Craft Heavy Bag Fence (Round)"
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_SandbagHeavyRound",1}};
			input[] = {{"DZE_Item_Kit_SandbagHeavy",3}};
		};
	};
};

class DZE_Item_Kit_SandBagHeavyCorner: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HBF_CORNER"; // "Heavy Bag Fence (Corner)"
	descriptionShort = "$STR_EQUIP_DESC_HBF_CORNER";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_HeavyBagFenceCorner";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_LARGENEST"; // "Craft Large Sandbag Nest"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Sandbag_Nest_Large",1}};
			input[] = {{"DZE_Item_Kit_Sandbag_Nest",4},{"DZE_Item_Kit_SandBagHeavyCorner",4}};
		};
	};
};

class DZE_Item_Kit_SandbagHeavyRound: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HBF_ROUND"; // "Heavy Bag Fence (Round)"
	descriptionShort = "$STR_EQUIP_DESC_HBF_ROUND";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_HeavyBagFenceRound";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WarfareBarrier5x: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBARRIER5";
	descriptionShort = "$STR_EQUIP_DESC_WBARRIER5";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_WBARRIER5_2"; // "Build 5x Warfare Barrier"
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WarfareBarrier5x";
			require[] = {"DZE_Tool_Etool"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_WBARRIER10"; // "Craft 10x Warfare Barrier"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_WarfareBarrier10x",1}};
			input[] = {{"DZE_Item_Kit_WarfareBarrier5x",2}};
		};
	};
};

class DZE_Item_Kit_WarfareBarrier10x: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBARRIER10";
	descriptionShort = "$STR_EQUIP_DESC_WBARRIER10";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_WBARRIER10_2"; // "Build 10x Warfare Barrier"
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WarfareBarrier10x";
			require[] = {"DZE_Tool_Etool"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_WBARRIER10TALL"; // "Craft 10x Warfare Barrier (Tall)"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_WarfareBarrier10xTall",1}};
			input[] = {{"DZE_Item_Kit_WarfareBarrier10x",3}};
		};
	};
};

class DZE_Item_Kit_WarfareBarrier10xTall: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBARRIER10TALL";
	descriptionShort = "$STR_EQUIP_DESC_WBARRIER10TALL";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_WBARRIER10TALL_2"; // "Build 10x Warfare Barrier (Tall)"
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WarfareBarrier10xTall";
			require[] = {"DZE_Tool_Etool"};
		};
	};
};
