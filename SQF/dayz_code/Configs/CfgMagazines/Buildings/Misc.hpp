class ItemFireBarrel_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FIREBARRELKIT";
	descriptionShort = "$STR_EPOCH_FIREBARRELKIT_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_FireBarrel";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class workbench_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WORKBENCH";
	descriptionShort = "$STR_EPOCH_WORKBENCH_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WorkBench";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

// DayZ Mod workbench
class ItemWorkBench_DZE : CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_ItemWorkBench";
	descriptionShort = "$STR_BLD_desc_ItemWorkBench";
	model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
	picture = "\z\addons\dayz_buildings\equip\item_workbench.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WorkBench";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

// DayZ Mod workbench
class ItemWorkBench: CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_ItemWorkBench";
	descriptionShort = "$STR_BLD_desc_ItemWorkBench";
	model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
	picture = "\z\addons\dayz_buildings\equip\item_workbench.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WorkBench";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};
 
class wood_ramp_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODRAMP";
	descriptionShort = "$STR_EPOCH_WOODENRAMP_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodRamp";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class plot_pole_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_PLAYER_246";
	descriptionShort = "$STR_EPOCH_PLOT_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Plastic_Pole_EP1";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class metal_panel_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METALPANEL";
	descriptionShort = "$STR_EPOCH_METALPANEL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalPanel";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class ItemCorrugated: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CORRUGATEDFENCE";
	descriptionShort = "$STR_EPOCH_CORRUGATEDFENCE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_214";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Fence_corrugated";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_215";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"wooden_shed_kit",1}};
			input[] = {{"ItemCorrugated",2},{"PartWoodPlywood",4},{"PartWoodLumber",4}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_217";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Handsaw"};
			output[] = {{"outhouse_kit",1}};
			input[] = {{"ItemCorrugated",1},{"PartWoodPlywood",3},{"PartWoodLumber",3},{"ItemTrashToiletpaper",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_216";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Handsaw"};
			output[] = {{"storage_shed_kit",1}};
			input[] = {{"ItemCorrugated",4},{"PartWoodPlywood",2},{"PartWoodLumber",2}};
		};
	};
};

class ItemWire: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WIRE_FENCE";
	descriptionShort = "$STR_EQUIP_DESC_WIRE_FENCE";
	model = "\dayz_equip\models\Fence_wire_kit.p3d";
	picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTION_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Fort_RazorWire"; // vanilla uses Wire_cat1
			byPass = "byPassRoadCheck";
			require[] = {"DZE_Tool_Toolbox"};
			consume[] = {"ItemWire"};
		};
		class Crafting {
			text = "$STR_ACTION_CRAFT_FORT_WIRE";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"fortified_wire_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_BARBED_GATE";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"barbed_gate_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2},{"ItemPole",2}};
		};
	};
};

class fortified_wire_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_FORT_WIRE";
	descriptionShort = "$STR_EQUIP_DESC_FORT_WIRE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTION_BUILD_FORT_WIRE";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_FortifiedWire";
			byPass = "byPassRoadCheck";
			require[] = {"DZE_Tool_Toolbox"};
			consume[] = {"fortified_wire_kit"};
		};
	};
};

class ItemTankTrap: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_TANK_TRAP";
	descriptionShort = "$STR_EQUIP_DESC_TANK_TRAP";
	model = "\dayz_equip\models\tank_trap_kit.p3d";
	picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTION_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Hedgehog";
			byPass = "byPassRoadCheck";
			require[] = {"DZE_Tool_Toolbox"};
			consume[] = {"ItemTankTrap"};
		};
		class Crafting {
			text = "$STR_ACTION_CRAFT_FORT_WIRE";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"fortified_wire_kit",1}};
			input[] = {{"ItemTankTrap",2},{"ItemWire",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_BARBED_GATE";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"barbed_gate_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2},{"ItemPole",2}};
		};
	};
};

class barbed_gate_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_BARBED_GATE";
	descriptionShort = "$STR_EQUIP_DESC_BARBED_GATE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_BARBED_GATE";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_BarbedGate";
			require[] = {"DZE_Tool_Toolbox"};
			consume[] = {"barbed_gate_kit"};
		};
	};
};

class ItemGenerator: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_31";
	descriptionShort = "$STR_EQUIP_DESC_31";
	model = "\dayz_equip\models\generator_gear.p3d";
	picture = "\dayz_equip\textures\equip_generator_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTION_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Generator";
			require[] = {"DZE_Tool_Toolbox"};
			consume[] = {"ItemGenerator"};
		};
	};
};

class fuel_pump_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FUELPUMP";
	descriptionShort = "$STR_EPOCH_FUELPUMP";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_FuelPump";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class light_pole_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LIGHTPOLE";
	descriptionShort = "$STR_EPOCH_LIGHTPOLE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LightPole";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class deer_stand_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_DEERSTAND";
	descriptionShort = "$STR_EPOCH_DEERSTAND_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DeerStand";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class m240_nest_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_M240NEST";
	descriptionShort = "$STR_EPOCH_M240NEST";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_M240Nest";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class rusty_gate_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_RUSTYGATE";
	descriptionShort = "$STR_EPOCH_RUSTYGATE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalGate";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class stick_fence_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_STICKFENCE";
	descriptionShort = "$STR_EPOCH_STICKFENCE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StickFence";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class sun_shade_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CANVASSUNSHADE";
	descriptionShort = "$STR_EPOCH_CANVASSUNSHADE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CanvasHut";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class park_bench_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODBENCH";
	descriptionShort = "$STR_EPOCH_WOODBENCH";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ParkBench";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemScaffoldingKit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SCAFFOLDING";
	descriptionShort = "$STR_EPOCH_SCAFFOLDING";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Scaffolding";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};

class notebook_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_NOTEBOOK";
	descriptionShort = "$STR_EPOCH_NOTEBOOK_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Notebook";
			require[] = {};
		};
	};
};

class water_pump_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WATERPUMP";
	descriptionShort = "$STR_EPOCH_WATERPUMP_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Water_Pump";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class greenhouse_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GREENHOUSE";
	descriptionShort = "$STR_EPOCH_GREENHOUSE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Greenhouse";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class bed_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BED";
	descriptionShort = "$STR_EPOCH_BED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Bed";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class table_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_TABLE";
	descriptionShort = "$STR_EPOCH_TABLE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Table";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class office_chair_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CHAIR";
	descriptionShort = "$STR_EPOCH_CHAIR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Office_Chair";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class garage_green_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GARAGE_GREEN";
	descriptionShort = "$STR_EPOCH_GARAGE_GREEN_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Garage_Green";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class garage_white_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GARAGE_WHITE";
	descriptionShort = "$STR_EPOCH_GARAGE_WHITE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Garage_White";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class garage_brown_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GARAGE_BROWN";
	descriptionShort = "$STR_EPOCH_GARAGE_BROWN_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Garage_Brown";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class garage_grey_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GARAGE_GREY";
	descriptionShort = "$STR_EPOCH_GARAGE_GREY_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Garage_Grey";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class helipad_civil_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_HELIPAD_CIVIL";
	descriptionShort = "$STR_EPOCH_HELIPAD_CIVIL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Helipad_Civil";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class helipad_rescue_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_HELIPAD_RESCUE";
	descriptionShort = "$STR_EPOCH_HELIPAD_RESCUE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Helipad_Rescue";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class helipad_army_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_HELIPAD_ARMY";
	descriptionShort = "$STR_EPOCH_HELIPAD_ARMY_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Helipad_Army";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class helipad_cross_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_HELIPAD_CROSS";
	descriptionShort = "$STR_EPOCH_HELIPAD_CROSS_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Helipad_Cross";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class helipad_parkborder_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_HELIPAD_PARKBORDER";
	descriptionShort = "$STR_EPOCH_HELIPAD_PARKBORDER_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Helipad_ParkBorder";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class cctv_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CCTV";
	descriptionShort = "$STR_EPOCH_CCTV_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CCTV";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class concrete_barrier_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CNC_BARRIER";
	descriptionShort = "$STR_EQUIP_DESC_CNC_BARRIER";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_CNC_BARRIER";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ConcreteBarrier";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_CNC_BARRIER_STRIPED";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"concrete_barrier_striped_kit",1}};
			input[] = {{"concrete_barrier_kit",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_CONCRETE_WALL";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"concrete_wall_kit",1}};
			input[] = {{"concrete_barrier_kit",5},{"CementBag",2}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_ACTION_CRAFT_CONCRETE_PIPE";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"concrete_pipe_kit",1}};
			input[] = {{"concrete_barrier_kit",6},{"CementBag",2}};
		};
	};
};

class concrete_barrier_striped_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CNC_BARRIER_STRIPED";
	descriptionShort = "$STR_EQUIP_DESC_CNC_BARRIER_STRIPED";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_CNC_BARRIER_STRIPED";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ConcreteBarrierStriped";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_CNC_BARRIER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"concrete_barrier_kit",1}};
			input[] = {{"concrete_barrier_striped_kit",1}};
		};
	};
};

class concrete_wall_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CONCRETE_WALL";
	descriptionShort = "$STR_EQUIP_DESC_CONCRETE_WALL";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_CONCRETE_WALL";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ConcreteWall";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_DRAGONTEETH";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"dragonteeth_kit",1}};
			input[] = {{"concrete_wall_kit",1},{"ItemStone",6},{"CementBag",4}};
		};
	};
};

class concrete_pipe_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CONCRETE_PIPE";
	descriptionShort = "$STR_EQUIP_DESC_CONCRETE_PIPE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_CONCRETE_PIPE";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ConcretePipe";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class dragonteeth_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_DRAGONTEETH";
	descriptionShort = "$STR_EQUIP_DESC_DRAGONTEETH";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_DRAGONTEETH";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DragonTeeth";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_DRAGONTEETH_BIG";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"dragonteeth_big_kit",1}};
			input[] = {{"dragonteeth_kit",1},{"ItemStone",6},{"CementBag",4}};
		};
	};
};

class dragonteeth_big_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_DRAGONTEETH_BIG";
	descriptionShort = "$STR_EQUIP_DESC_DRAGONTEETH_BIG";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_DRAGONTEETH_BIG";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DragonTeethBig";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class simple_footbridge_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SIMPLE_FOOTBRIDGE";
	descriptionShort = "$STR_EQUIP_DESC_SIMPLE_FOOTBRIDGE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_SIMPLE_FOOTBRIDGE";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_SimpleFootbridge";
			require[] = {};
		};
	};
};

class wooden_footbridge_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WOODEN_FOOTBRIDGE";
	descriptionShort = "$STR_EQUIP_DESC_WOODEN_FOOTBRIDGE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_WOODEN_FOOTBRIDGE";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodenFootbridge";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class windbreak_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WINDBREAK";
	descriptionShort = "$STR_EQUIP_DESC_WINDBREAK";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {

		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_WINDBREAK";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Windbreak";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class metal_container_1a_kit: CA_Magazine { // red
	scope = 2;
	displayName = "$STR_EQUIP_NAME_METAL_CONTAINER_1A";
	descriptionShort = "$STR_EQUIP_DESC_METAL_CONTAINER_1A";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {

		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1A";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalContainer1A";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1B"; // craft green
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1b_kit",1}};
			input[] = {{"metal_container_1a_kit",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1G"; // craft white
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1g_kit",1}};
			input[] = {{"metal_container_1a_kit",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_2D"; // craft 2x red
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"metal_container_2d_kit",1}};
			input[] = {{"metal_container_1a_kit",2}};
		};
	};
};

class metal_container_1b_kit: CA_Magazine { // green
	scope = 2;
	displayName = "$STR_EQUIP_NAME_METAL_CONTAINER_1B";
	descriptionShort = "$STR_EQUIP_DESC_METAL_CONTAINER_1B";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {

		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1B";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalContainer1B";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A"; // craft red
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1a_kit",1}};
			input[] = {{"metal_container_1b_kit",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1G"; // craft white
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1g_kit",1}};
			input[] = {{"metal_container_1b_kit",1}};
		};
	};
};

class metal_container_1g_kit: CA_Magazine { // white
	scope = 2;
	displayName = "$STR_EQUIP_NAME_METAL_CONTAINER_1G";
	descriptionShort = "$STR_EQUIP_DESC_METAL_CONTAINER_1G";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {

		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1G";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalContainer1G";
			require[] = {"DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A"; // craft red
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1a_kit",1}};
			input[] = {{"metal_container_1g_kit",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1B"; // craft green
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1b_kit",1}};
			input[] = {{"metal_container_1g_kit",1}};
		};
	};
};

class metal_container_2d_kit: CA_Magazine { // 2x red
	scope = 2;
	displayName = "$STR_EQUIP_NAME_METAL_CONTAINER_2D";
	descriptionShort = "$STR_EQUIP_DESC_METAL_CONTAINER_2D";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {

		class Build {
			text = "$STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_2D";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_MetalContainer2D";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class compost_barrel_empty_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_COMPOST_BARREL_EMTPY";
	descriptionShort = "$STR_EPOCH_COMPOST_BARREL_EMTPY_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build	{
			text = "$STR_EPOCH_BUILD_COMPOST_BARREL";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Compost_Barrel_Empty";
			require[] = {};
		};
	};
};

class compost_barrel_full_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_COMPOST_BARREL_FULL";
	descriptionShort = "$STR_EPOCH_COMPOST_BARREL_FULL_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build	{
			text = "$STR_EPOCH_BUILD_COMPOST_BARREL";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Compost_Barrel_Full";
			require[] = {"DZE_Tool_Shovel"};
		};
	};
};

class boggle_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_BOGGLE";
	descriptionShort = "$STR_EQUIP_DESC_BOGGLE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Boggle";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class satellite_dish_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SATELLITE_DISH";
	descriptionShort = "$STR_EQUIP_DESC_SATELLITE_DISH";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Satellite_Dish";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class fueltank_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_FUELTANK_BIG";
	descriptionShort = "$STR_EQUIP_DESC_FUELTANK_BIG";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Fueltank";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class watertank_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WATERTANK";
	descriptionShort = "$STR_EQUIP_DESC_WATERTANK";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Watertank";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class watertower_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WATERTOWER";
	descriptionShort = "$STR_EQUIP_DESC_WATERTOWER";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Watertower";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};