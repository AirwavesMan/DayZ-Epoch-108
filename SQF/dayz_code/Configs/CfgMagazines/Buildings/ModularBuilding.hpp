class DZE_Item_Kit_Glass_Floor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GLASSFLOOR";
	descriptionShort = "$STR_EPOCH_GLASSFLOOR";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_GlassFloor";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Glass_Floor_Half: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GLASSFLOORHALF";
	descriptionShort = "$STR_EPOCH_GLASSFLOORHALF";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_GlassFloor_Half";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_GLASS_FLOOR";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Glass_Floor",1}};
			input[] = {{"DZE_Item_Kit_Glass_Floor_Half",2}};
		};
	};
};

class DZE_Item_Kit_Glass_Floor_Quarter: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GLASSFLOORQUARTER";
	descriptionShort = "$STR_EPOCH_GLASSFLOORQUARTER";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_GlassFloor_Quarter";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_GLASS_FLOOR_HALF";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Glass_Floor_Half",1}};
			input[] = {{"DZE_Item_Kit_Glass_Floor_Quarter",2}};
		};
	};
};

class DZE_Item_Kit_Metal_Floor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOOR";
	descriptionShort = "$STR_EPOCH_METALFLOOR";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalFloor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_228_3";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Metal_Floor4x",1}};
			input[] = {{"DZE_Item_Kit_Metal_Floor",4}};
		};
	};
};

class DZE_Item_Kit_Metal_Floor_Half: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOORHALF";
	descriptionShort = "$STR_EPOCH_METALFLOORHALF";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalFloor_Half";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_228";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Metal_Floor",1}};
			input[] = {{"DZE_Item_Kit_Metal_Floor_Half",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A"; // red
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Metal_Container_1a",1}};
			input[] = {{"DZE_Item_Kit_Metal_Floor_Half",4},{"DZE_Item_Kit_Metal_Floor_Quarter",2},{"DZE_Item_Kit_TankTrap",2}};
		};
	};
};

class DZE_Item_Kit_Metal_Floor_Quarter: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOORQUARTER";
	descriptionShort = "$STR_EPOCH_METALFLOORQUARTER";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalFloor_Quarter";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_228_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Metal_Floor_Half",1}};
			input[] = {{"DZE_Item_Kit_Metal_Floor_Quarter",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A"; // red
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Metal_Container_1a",1}};
			input[] = {{"DZE_Item_Kit_Metal_Floor_Half",4},{"DZE_Item_Kit_Metal_Floor_Quarter",2},{"DZE_Item_Kit_TankTrap",2}};
		};
	};
};

class DZE_Item_Kit_Metal_Floor4x: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOOR4x";
	descriptionShort = "$STR_EPOCH_METALFLOOR4x";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalFloor4x";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Metal_Pillar: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALPILLAR";
	descriptionShort = "$STR_EPOCH_METALPILLAR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalPillar";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Half_Cinder_Wall: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALL_HALF";
	descriptionShort = "$STR_EPOCH_CINDERBLOCKWALL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallHalf";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_252_2";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Half_Cinder_Wall_Gap",1}};
			input[] = {{"DZE_Item_Kit_Half_Cinder_Wall",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_252_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Full_Cinder_Wall",1}};
			input[] = {{"DZE_Item_Kit_Half_Cinder_Wall",1},{"CinderBlocks",4},{"MortarBucket",1}};
		};
	};
};

class DZE_Item_Kit_Half_Cinder_Wall_Gap: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALL_HALF_GAP";
	descriptionShort = "$STR_EPOCH_CINDERBLOCKWALL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallHalf_Gap";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_252";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Half_Cinder_Wall",1}};
			input[] = {{"DZE_Item_Kit_Half_Cinder_Wall_Gap",1}};
		};
	};
};

class DZE_Item_Kit_Full_Cinder_Wall: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALL";
	descriptionShort = "$STR_EPOCH_FULLCINDERBLOCKWALL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWall";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Cinderwall_Window: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALLWINDOW";
	descriptionShort = "$STR_EPOCH_CINDERBLOCKWALLWINDOW_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallWindow";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239_1_2";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Cinderwall_Window_Locked",1}};
			input[] = {{"DZE_Item_Kit_Cinderwall_Window",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_Cinderwall_Window_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALLWINDOW_LOCKED";
	descriptionShort = "$STR_EPOCH_CINDERBLOCKWALLWINDOW_LOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallWindowLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Cinder_Door_Frame: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOORWAY";
	descriptionShort = "$STR_EPOCH_BLOCKDOORWAY_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallSmallDoorway";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_238";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Door",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Door_Frame",1},{"ItemPole",1},{"DZE_Item_Kit_TankTrap",1}};
		};
	};
};

class DZE_Item_Kit_Cinder_Door: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOOR";
	descriptionShort = "$STR_EPOCH_BLOCKDOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallDoorSmall";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Cinder_Door_Kit_Locked",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Door",1},{"ItemComboLock",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_238_2";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Cinder_Door_Hatch",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Door",1}};
		};
	};
};

class DZE_Item_Kit_Cinder_Door_Kit_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOORLOCKED";
	descriptionShort = "$STR_EPOCH_BLOCKDOORWAY_LOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallDoorSmallLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Cinder_Door_Hatch: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOOR_HATCH";
	descriptionShort = "$STR_EPOCH_BLOCKDOOR_HATCH_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderDoorHatch";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Cinder_Door_Hatch_Kit_Locked",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Door_Hatch",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_Cinder_Door_Hatch_Kit_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOORLOCKED_HATCH";
	descriptionShort = "$STR_EPOCH_BLOCKDOORWAY_HATCH_LOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderDoorHatchLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Cinder_Garage_Frame: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKGARAGEDOORWAY";
	descriptionShort = "$STR_EPOCH_BLOCKGARAGEDOORWAY_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallDoorway";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_240";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Garage",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Garage_Frame",1},{"ItemPole",3},{"DZE_Item_Kit_TankTrap",3}};
		};
	};
};

class DZE_Item_Kit_Cinder_Garage: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKGARAGEDOOR";
	descriptionShort = "$STR_EPOCH_BLOCKGARAGEDOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallDoor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Cinder_Garage_Kit_Locked",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Garage",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_Cinder_Garage_Kit_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKGARAGEDOORLOCKED";
	descriptionShort = "$STR_EPOCH_BLOCKGARAGEDOORWAY_LOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderWallDoorLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Cinder_Garage_Top_Open_Frame: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDEROPENTOPGARAGEFRAME";
	descriptionShort = "$STR_EPOCH_CINDEROPENTOPGARAGEFRAME_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderGarageOpenTopFrame";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_240";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Garage_Top_Open",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Garage_Top_Open_Frame",1},{"ItemPole",3},{"DZE_Item_Kit_TankTrap",3}};
		};
	};
};

class DZE_Item_Kit_Cinder_Garage_Top_Open: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDEROPENTOPGARAGEDOOR";
	descriptionShort = "$STR_EPOCH_CINDEROPENTOPGARAGEDOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderGarageOpenTop";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Cinder_Garage_Top_Open_Kit_Locked",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Garage_Top_Open",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_Cinder_Garage_Top_Open_Kit_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDEROPENTOPGARAGEDOORLOCKED";
	descriptionShort = "$STR_EPOCH_CINDEROPENTOPGARAGEDOORLOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderGarageOpenTopLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Cinder_Gate_Frame: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERGATEFRAME";
	descriptionShort = "$STR_EPOCH_CINDERGATEFRAME_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderGateFrame";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239_1_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Gate",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Gate_Frame",1},{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}};
		};
	};
};


class DZE_Item_Kit_Cinder_Gate: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERGATE";
	descriptionShort = "$STR_EPOCH_CINDERGATE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderGate";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Cinder_Gate_Kit_Locked",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Gate",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_Cinder_Gate_Kit_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERGATELOCKED";
	descriptionShort = "$STR_EPOCH_CINDERGATELOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CinderGateLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Cinder_Bunker: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBUNKER";
	descriptionShort = "$STR_EPOCH_CINDERBUNKER_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Concrete_Bunker";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239_1_2";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Cinder_Bunker_Kit_Locked",1}};
			input[] = {{"DZE_Item_Kit_Cinder_Bunker",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_Cinder_Bunker_Kit_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBUNKERLOCKED";
	descriptionShort = "$STR_EPOCH_CINDERBUNKER_LOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Concrete_Bunker_Locked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Metal_Drawbridge: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALDRAWBRIDGE";
	descriptionShort = "$STR_EPOCH_METALDRAWBRIDGE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Metal_Drawbridge";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Metal_Drawbridge_Kit_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALDRAWBRIDGELOCKED";
	descriptionShort = "$STR_EPOCH_METALDRAWBRIDGELOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Metal_DrawbridgeLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};


class DZE_Item_Kit_WoodFloor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FLOORCEILING";
	descriptionShort = "$STR_EPOCH_FLOORCEILING_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodFloor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_WOODFLOORSTAIRS";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodFloorStairs",1}};
			input[] = {{"DZE_Item_Kit_WoodStairs",1},{"DZE_Item_Kit_WoodFloor",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_232c";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodFloor4x",1}};
			input[] = {{"DZE_Item_Kit_WoodFloor",4}};
		};
	};
};

class DZE_Item_Kit_WoodFloor4x: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FLOORCEILING4x";
	descriptionShort = "$STR_EPOCH_FLOORCEILING_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodFloor4x";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodFloorStairs: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODFLOORSTAIRS";
	descriptionShort = "$STR_EPOCH_WOODFLOORSTAIRS_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodFloorStairs";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_TriangleWoodFloor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_TRIANGLE_WOODFLOOR";
	descriptionShort = "$STR_EPOCH_TRIANGLE_WOODFLOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodTriangleFloor";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodFloorHalf: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FLOORCEILINGHALF";
	descriptionShort = "$STR_EPOCH_FLOORCEILING_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodFloorHalf";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_232";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodFloor",1}};
			input[] = {{"DZE_Item_Kit_WoodFloorHalf",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_WOODENTRIANGLEWALL";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_TriangleWoodWall",1}};
			input[] = {{"DZE_Item_Kit_WoodFloorQuarter",1},{"DZE_Item_Kit_WoodFloorHalf",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_ACTION_WOODENTRIANGLEFLOOR";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_TriangleWoodFloor",1}};
			input[] = {{"DZE_Item_Kit_WoodFloorQuarter",1},{"DZE_Item_Kit_WoodFloorHalf",1}};
		};
	};
};

class DZE_Item_Kit_WoodFloorQuarter: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FLOORCEILINGQUARTER";
	descriptionShort = "$STR_EPOCH_FLOORCEILING_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodFloorQuarter";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_232a";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodFloorHalf",1}};
			input[] = {{"DZE_Item_Kit_WoodFloorQuarter",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_WOODENTRIANGLEWALL";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_TriangleWoodWall",1}};
			input[] = {{"DZE_Item_Kit_WoodFloorQuarter",1},{"DZE_Item_Kit_WoodFloorHalf",1}};
		};
	};
};

class DZE_Item_Kit_WoodStairs: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSTAIRS";
	descriptionShort = "$STR_EPOCH_WOODSTAIRS";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodStairsSans";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_233";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodStairsSupport",1}};
			input[] = {{"DZE_Item_Kit_WoodStairs",1},{"PartWoodLumber",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_WOODFLOORSTAIRS";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodFloorStairs",1}};
			input[] = {{"DZE_Item_Kit_WoodStairs",1},{"DZE_Item_Kit_WoodFloor",1}};
		};
	};
};

class DZE_Item_Kit_WoodStairsSupport: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSTAIRSWITHSUPPORTS";
	descriptionShort = "$STR_EPOCH_WOODSTAIRSWITHSUPPORTS_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodStairs";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodStairsRails: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSTAIRSRAILS";
	descriptionShort = "$STR_EPOCH_WOODSTAIRSRAILS_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodStairsRails";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodLadder: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODLADDER";
	descriptionShort = "$STR_EPOCH_WOODLADDER";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodLadder";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodHandRail: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODRAIL";
	descriptionShort = "$STR_EPOCH_WOODRAIL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodHandrail";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodPillar: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODPILLAR";
	descriptionShort = "$STR_EPOCH_WOODPILLAR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodPillar";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodWall: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODWALL";
	descriptionShort = "$STR_EPOCH_WOODWALL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodSmallWall";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_234";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallDoor",1}};
			input[] = {{"DZE_Item_Kit_WoodWall",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_235";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallWindow",1}};
			input[] = {{"DZE_Item_Kit_WoodWall",1},{"PartGlass",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_236";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallLg",1}};
			input[] = {{"DZE_Item_Kit_WoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class DZE_Item_Kit_TriangleWoodWall: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_TRIANGLE_WOODWALL";
	descriptionShort = "$STR_EPOCH_TRIANGLE_WOODWALL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodTriangleWall";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodWallThird: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODWALLTHIRDPART";
	descriptionShort = "$STR_EPOCH_WOODWALLTHIRDPART_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodSmallWallThird";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_237";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWall",1}};
			input[] = {{"DZE_Item_Kit_WoodWallThird",3}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_237_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodGateFrame",1}};
			input[] = {{"DZE_Item_Kit_WoodWallThird",6}};
		};
	};
};

class DZE_Item_Kit_WoodWallWindow: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHWINDOW";
	descriptionShort = "$STR_EPOCH_WALLWITHWINDOW_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodSmallWallWin";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodWallDoor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHDOORWAY";
	descriptionShort = "$STR_EPOCH_WALLWITHDOORWAY_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodSmallWallDoor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_238";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallWithDoor",1}};
			input[] = {{"DZE_Item_Kit_WoodWallDoor",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class DZE_Item_Kit_WoodWallWithDoor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHDOOR";
	descriptionShort = "$STR_EPOCH_WALLWITHDOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WoodDoor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_WoodWallWithDoorLocked",1}};
			input[] = {{"DZE_Item_Kit_WoodWallWithDoor",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_WoodWallWithDoorLocked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHDOORLOCKED";
	descriptionShort = "$STR_EPOCH_WALLWITHDOORLOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WoodDoorLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodWallGarageDoor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGARAGEDOOR";
	descriptionShort = "$STR_EPOCH_WOODGARAGEDOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_GarageWoodDoor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_WoodWallGarageDoorLocked",1}};
			input[] = {{"DZE_Item_Kit_WoodWallGarageDoor",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_WoodWallGarageDoorLocked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGARAGEDOORLOCKED";
	descriptionShort = "$STR_EPOCH_WOODGARAGEDOORLOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_GarageWoodDoorLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodOpenTopGarageDoor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODOPENTOPGARAGEDOOR";
	descriptionShort = "$STR_EPOCH_WOODOPENTOPGARAGEDOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WoodOpenTopGarageDoor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_WoodOpenTopGarageDoorLocked",1}};
			input[] = {{"DZE_Item_Kit_WoodOpenTopGarageDoor",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_WoodOpenTopGarageDoorLocked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODOPENTOPGARAGEDOORLOCKED";
	descriptionShort = "$STR_EPOCH_WOODOPENTOPGARAGEDOORLOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WoodOpenTopGarageLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodWallLg: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWOODWALL";
	descriptionShort = "$STR_EPOCH_LARGEWOODWALL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodLargeWall";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_234";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallDoorLg",1}};
			input[] = {{"DZE_Item_Kit_WoodWallLg",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_235";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallWindowLg",1}};
			input[] = {{"DZE_Item_Kit_WoodWallLg",1},{"PartGlass",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_240";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallGarageDoor",1}};
			input[] = {{"DZE_Item_Kit_WoodWallLg",1},{"PartWoodLumber",2}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_240_1";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodOpenTopGarageDoor",1}};
			input[] = {{"DZE_Item_Kit_WoodWallLg",1},{"PartWoodLumber",2}};
		};
	};
};

class DZE_Item_Kit_WoodWallWindowLg: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHWINDOW";
	descriptionShort = "$STR_EPOCH_LARGEWALLWITHWINDOW_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodLargeWallWin";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodWallDoorLg: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHDOORWAY";
	descriptionShort = "$STR_EPOCH_LARGEWALLWITHDOORWAY_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodLargeWallDoor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_238";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodWallWithDoorLg",1}};
			input[] = {{"DZE_Item_Kit_WoodWallDoorLg",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class DZE_Item_Kit_WoodWallWithDoorLg: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHDOOR";
	descriptionShort = "$STR_EPOCH_LARGEWALLWITHDOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_LargeWoodDoor";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_WoodWallWithDoorLgLocked",1}};
			input[] = {{"DZE_Item_Kit_WoodWallWithDoorLg",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_WoodWallWithDoorLgLocked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHDOORLOCKED";
	descriptionShort = "$STR_EPOCH_LARGEWALLWITHDOORLOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_LargeWoodDoorLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_WoodGateFrame: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGATEFRAME";
	descriptionShort = "$STR_EPOCH_WOODGATEFRAME_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodGateFrame";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239_1_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"DZE_Item_Kit_WoodGate",1}};
			input[] = {{"DZE_Item_Kit_WoodGateFrame",1},{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}};
		};
	};
};

class DZE_Item_Kit_WoodGate: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGATE";
	descriptionShort = "$STR_EPOCH_WOODGATE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WoodGate";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_WoodGateLocked",1}};
			input[] = {{"DZE_Item_Kit_WoodGate",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_WoodGateLocked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGATELOCKED";
	descriptionShort = "$STR_EPOCH_WOODGATELOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Land_WoodGateLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Door_Frame: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_DOORWAY";
	descriptionShort = "$STR_EPOCH_DOORWAY_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DoorFrame";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_238";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Door",1}};
			input[] = {{"DZE_Item_Kit_Door_Frame",1},{"ItemPole",1},{"DZE_Item_Kit_TankTrap",1}};
		};
	};
};

class DZE_Item_Kit_Door: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_DOOR";
	descriptionShort = "$STR_EPOCH_DOOR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Door";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_239";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Kit_Door_Locked",1}};
			input[] = {{"DZE_Item_Kit_Door",1},{"ItemComboLock",1}};
		};
	};
};

class DZE_Item_Kit_Door_Locked: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_DOORLOCKED";
	descriptionShort = "$STR_EPOCH_DOOR_LOCKED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DoorLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Elevatorstart: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ELEVATORSTART";
	descriptionShort = "$STR_EPOCH_ELEVATORSTART";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ElevatorStart";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Elevatorstop_Glass: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ELEVATORSTOP_GLASS";
	descriptionShort = "$STR_EPOCH_ELEVATORSTOP_GLASS";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ElevatorStop_Glass";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class DZE_Item_Kit_Elevatorstop_Transparent: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ELEVATORSTOP_TRANSPARENT";
	descriptionShort = "$STR_EPOCH_ELEVATORSTOP_TRANSPARENT";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ElevatorStop_Transparent";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};
