class glass_floor_kit: CA_Magazine {
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

class glass_floor_half_kit: CA_Magazine {
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
			output[] = {{"glass_floor_kit",1}};
			input[] = {{"glass_floor_half_kit",2}};
		};
	};
};

class glass_floor_quarter_kit: CA_Magazine {
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
			output[] = {{"glass_floor_half_kit",1}};
			input[] = {{"glass_floor_quarter_kit",2}};
		};
	};
};

class metal_floor_kit: CA_Magazine {
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
			output[] = {{"metal_floor4x_kit",1}};
			input[] = {{"metal_floor_kit",4}};
		};
	};
};

class metal_floor_half_kit: CA_Magazine {
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
			output[] = {{"metal_floor_kit",1}};
			input[] = {{"metal_floor_half_kit",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A"; // red
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"metal_container_1a_kit",1}};
			input[] = {{"metal_floor_half_kit",4},{"metal_floor_quarter_kit",2},{"ItemTankTrap",2}};
		};
	};
};

class metal_floor_quarter_kit: CA_Magazine {
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
			output[] = {{"metal_floor_half_kit",1}};
			input[] = {{"metal_floor_quarter_kit",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A"; // red
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"};
			output[] = {{"metal_container_1a_kit",1}};
			input[] = {{"metal_floor_half_kit",4},{"metal_floor_quarter_kit",2},{"ItemTankTrap",2}};
		};
	};
};

class metal_floor4x_kit: CA_Magazine {
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

class metal_pillar_kit: CA_Magazine {
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

class half_cinder_wall_kit: CA_Magazine {
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
			output[] = {{"half_cinder_wall_gap_kit",1}};
			input[] = {{"half_cinder_wall_kit",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_252_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"full_cinder_wall_kit",1}};
			input[] = {{"half_cinder_wall_kit",1},{"CinderBlocks",4},{"MortarBucket",1}};
		};
	};
};

class half_cinder_wall_gap_kit: CA_Magazine {
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
			output[] = {{"half_cinder_wall_kit",1}};
			input[] = {{"half_cinder_wall_gap_kit",1}};
		};
	};
};

class full_cinder_wall_kit: CA_Magazine {
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

class cinderwall_window_kit: CA_Magazine {
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
			output[] = {{"cinderwall_window_locked_kit",1}};
			input[] = {{"cinderwall_window_kit",1},{"ItemComboLock",1}};
		};
	};
};

class cinderwall_window_locked_kit: CA_Magazine {
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

class cinder_door_frame_kit: CA_Magazine {
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
			output[] = {{"cinder_door_kit",1}};
			input[] = {{"cinder_door_frame_kit",1},{"ItemPole",1},{"ItemTankTrap",1}};
		};
	};
};

class cinder_door_kit: CA_Magazine {
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
			output[] = {{"cinder_door_kit_locked",1}};
			input[] = {{"cinder_door_kit",1},{"ItemComboLock",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_238_2";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"cinder_door_hatch_kit",1}};
			input[] = {{"cinder_door_kit",1}};
		};
	};
};

class cinder_door_kit_locked: CA_Magazine {
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

class cinder_door_hatch_kit: CA_Magazine {
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
			output[] = {{"cinder_door_hatch_kit_locked",1}};
			input[] = {{"cinder_door_hatch_kit",1},{"ItemComboLock",1}};
		};
	};
};

class cinder_door_hatch_kit_locked: CA_Magazine {
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

class cinder_garage_frame_kit: CA_Magazine {
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
			output[] = {{"cinder_garage_kit",1}};
			input[] = {{"cinder_garage_frame_kit",1},{"ItemPole",3},{"ItemTankTrap",3}};
		};
	};
};

class cinder_garage_kit: CA_Magazine {
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
			output[] = {{"cinder_garage_kit_locked",1}};
			input[] = {{"cinder_garage_kit",1},{"ItemComboLock",1}};
		};
	};
};

class cinder_garage_kit_locked: CA_Magazine {
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

class cinder_garage_top_open_frame_kit: CA_Magazine {
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
			output[] = {{"cinder_garage_top_open_kit",1}};
			input[] = {{"cinder_garage_top_open_frame_kit",1},{"ItemPole",3},{"ItemTankTrap",3}};
		};
	};
};

class cinder_garage_top_open_kit: CA_Magazine {
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
			output[] = {{"cinder_garage_top_open_kit_locked",1}};
			input[] = {{"cinder_garage_top_open_kit",1},{"ItemComboLock",1}};
		};
	};
};

class cinder_garage_top_open_kit_locked: CA_Magazine {
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

class cinder_gate_frame_kit: CA_Magazine {
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
			output[] = {{"cinder_gate_kit",1}};
			input[] = {{"cinder_gate_frame_kit",1},{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}};
		};
	};
};


class cinder_gate_kit: CA_Magazine {
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
			output[] = {{"cinder_gate_kit_locked",1}};
			input[] = {{"cinder_gate_kit",1},{"ItemComboLock",1}};
		};
	};
};

class cinder_gate_kit_locked: CA_Magazine {
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

class cinder_bunker_kit: CA_Magazine {
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
			output[] = {{"cinder_bunker_kit_locked",1}};
			input[] = {{"cinder_bunker_kit",1},{"ItemComboLock",1}};
		};
	};
};

class cinder_bunker_kit_locked: CA_Magazine {
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

class metal_drawbridge_kit: CA_Magazine {
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

class metal_drawbridge_kit_locked: CA_Magazine {
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


class ItemWoodFloor: CA_Magazine {
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
			output[] = {{"ItemWoodFloorStairs",1}};
			input[] = {{"ItemWoodStairs",1},{"ItemWoodFloor",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_232c";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemWoodFloor4x",1}};
			input[] = {{"ItemWoodFloor",4}};
		};
	};
};

class ItemWoodFloor4x: CA_Magazine {
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

class ItemWoodFloorStairs: CA_Magazine {
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

class ItemTriangleWoodFloor: CA_Magazine {
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

class ItemWoodFloorHalf: CA_Magazine {
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
			output[] = {{"ItemWoodFloor",1}};
			input[] = {{"ItemWoodFloorHalf",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_WOODENTRIANGLEWALL";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemTriangleWoodWall",1}};
			input[] = {{"ItemWoodFloorQuarter",1},{"ItemWoodFloorHalf",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_ACTION_WOODENTRIANGLEFLOOR";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemTriangleWoodFloor",1}};
			input[] = {{"ItemWoodFloorQuarter",1},{"ItemWoodFloorHalf",1}};
		};
	};
};

class ItemWoodFloorQuarter: CA_Magazine {
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
			output[] = {{"ItemWoodFloorHalf",1}};
			input[] = {{"ItemWoodFloorQuarter",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_WOODENTRIANGLEWALL";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemTriangleWoodWall",1}};
			input[] = {{"ItemWoodFloorQuarter",1},{"ItemWoodFloorHalf",1}};
		};
	};
};

class ItemWoodStairs: CA_Magazine {
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
			output[] = {{"ItemWoodStairsSupport",1}};
			input[] = {{"ItemWoodStairs",1},{"PartWoodLumber",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_WOODFLOORSTAIRS";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemWoodFloorStairs",1}};
			input[] = {{"ItemWoodStairs",1},{"ItemWoodFloor",1}};
		};
	};
};

class ItemWoodStairsSupport: CA_Magazine {
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

class ItemWoodStairsRails: CA_Magazine {
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

class ItemWoodLadder: CA_Magazine {
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

class ItemWoodHandRail: CA_Magazine {
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

class ItemWoodPillar: CA_Magazine {
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

class ItemWoodWall: CA_Magazine {
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
			output[] = {{"ItemWoodWallDoor",1}};
			input[] = {{"ItemWoodWall",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_235";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemWoodWallWindow",1}};
			input[] = {{"ItemWoodWall",1},{"PartGlass",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_236";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemWoodWallLg",1}};
			input[] = {{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemTriangleWoodWall: CA_Magazine {
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

class ItemWoodWallThird: CA_Magazine {
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
			output[] = {{"ItemWoodWall",1}};
			input[] = {{"ItemWoodWallThird",3}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_237_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemWoodGateFrame",1}};
			input[] = {{"ItemWoodWallThird",6}};
		};
	};
};

class ItemWoodWallWindow: CA_Magazine {
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

class ItemWoodWallDoor: CA_Magazine {
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
			output[] = {{"ItemWoodWallWithDoor",1}};
			input[] = {{"ItemWoodWallDoor",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemWoodWallWithDoor: CA_Magazine {
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
			output[] = {{"ItemWoodWallWithDoorLocked",1}};
			input[] = {{"ItemWoodWallWithDoor",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallWithDoorLocked: CA_Magazine {
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

class ItemWoodWallGarageDoor: CA_Magazine {
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
			output[] = {{"ItemWoodWallGarageDoorLocked",1}};
			input[] = {{"ItemWoodWallGarageDoor",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallGarageDoorLocked: CA_Magazine {
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

class ItemWoodOpenTopGarageDoor: CA_Magazine {
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
			output[] = {{"ItemWoodOpenTopGarageDoorLocked",1}};
			input[] = {{"ItemWoodOpenTopGarageDoor",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodOpenTopGarageDoorLocked: CA_Magazine {
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

class ItemWoodWallLg: CA_Magazine {
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
			output[] = {{"ItemWoodWallDoorLg",1}};
			input[] = {{"ItemWoodWallLg",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_235";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemWoodWallWindowLg",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartGlass",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_240";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemWoodWallGarageDoor",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartWoodLumber",2}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_240_1";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"ItemWoodOpenTopGarageDoor",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartWoodLumber",2}};
		};
	};
};

class ItemWoodWallWindowLg: CA_Magazine {
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

class ItemWoodWallDoorLg: CA_Magazine {
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
			output[] = {{"ItemWoodWallWithDoorLg",1}};
			input[] = {{"ItemWoodWallDoorLg",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemWoodWallWithDoorLg: CA_Magazine {
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
			output[] = {{"ItemWoodWallWithDoorLgLocked",1}};
			input[] = {{"ItemWoodWallWithDoorLg",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallWithDoorLgLocked: CA_Magazine {
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

class ItemWoodGateFrame: CA_Magazine {
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
			output[] = {{"ItemWoodGate",1}};
			input[] = {{"ItemWoodGateFrame",1},{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}};
		};
	};
};

class ItemWoodGate: CA_Magazine {
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
			output[] = {{"ItemWoodGateLocked",1}};
			input[] = {{"ItemWoodGate",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodGateLocked: CA_Magazine {
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

class door_frame_kit: CA_Magazine {
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
			output[] = {{"door_kit",1}};
			input[] = {{"door_frame_kit",1},{"ItemPole",1},{"ItemTankTrap",1}};
		};
	};
};

class door_kit: CA_Magazine {
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
			output[] = {{"door_locked_kit",1}};
			input[] = {{"door_kit",1},{"ItemComboLock",1}};
		};
	};
};

class door_locked_kit: CA_Magazine {
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

class elevatorstart_kit: CA_Magazine {
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

class elevatorstop_glass_kit: CA_Magazine {
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

class elevatorstop_transparent_kit: CA_Magazine {
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
