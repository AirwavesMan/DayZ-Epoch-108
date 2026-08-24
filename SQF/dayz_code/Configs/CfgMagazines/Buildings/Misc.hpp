class ItemFireBarrel_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FIREBARRELKIT;
	descriptionShort = $STR_EPOCH_FIREBARRELKIT_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_FireBarrel";
		};
	};
};

class workbench_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WORKBENCH;
	descriptionShort = $STR_EPOCH_WORKBENCH_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_WorkBench";
		};
	};
};

// DayZ Mod workbench
class ItemWorkBench_DZE : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemWorkBench;
	model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
	picture = "\z\addons\dayz_buildings\equip\item_workbench.paa";
	descriptionShort = $STR_BLD_desc_ItemWorkBench;
	
	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_WorkBench";
		};
	};
};

// DayZ Mod workbench
class ItemWorkBench: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemWorkBench;
	model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
	picture = "\z\addons\dayz_buildings\equip\item_workbench.paa";
	descriptionShort = $STR_BLD_desc_ItemWorkBench;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_WorkBench";
		};
	};
};
 
class wood_ramp_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODRAMP;
	descriptionShort = $STR_EPOCH_WOODENRAMP_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_WoodRamp";
		};
	};
};

class plot_pole_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_PLAYER_246;
	descriptionShort = $STR_EPOCH_PLOT_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_Plastic_Pole_EP1";
		};
	};
};

class metal_panel_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALPANEL;
	descriptionShort = $STR_EPOCH_METALPANEL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_MetalPanel";
		};
	};
};

class ItemCorrugated: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CORRUGATEDFENCE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_CORRUGATEDFENCE_DESC;

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_214;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_Fence_corrugated";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_215;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"wooden_shed_kit",1}};
			input[] = {{"ItemCorrugated",2},{"PartWoodPlywood",4},{"PartWoodLumber",4}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_217;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"outhouse_kit",1}};
			input[] = {{"ItemCorrugated",1},{"PartWoodPlywood",3},{"PartWoodLumber",3},{"ItemTrashToiletpaper",1}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_216;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","Handsaw_DZE"};
			output[] = {{"storage_shed_kit",1}};
			input[] = {{"ItemCorrugated",4},{"PartWoodPlywood",2},{"PartWoodLumber",2}};
		};
	};
};

class ItemWire: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\dayz_equip\models\Fence_wire_kit.p3d";
	picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
	displayName = $STR_EQUIP_NAME_WIRE_FENCE;
	descriptionShort = $STR_EQUIP_DESC_WIRE_FENCE;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemWire"};
			create = "DZE_Fort_RazorWire"; // vanilla uses Wire_cat1
			byPass = "byPassRoadCheck";
		};
		class Crafting
		{
			text = $STR_ACTION_CRAFT_FORT_WIRE;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"fortified_wire_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_BARBED_GATE;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"barbed_gate_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2},{"ItemPole",2}};
		};
	};
};

class fortified_wire_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	displayName = $STR_EQUIP_NAME_FORT_WIRE;
	descriptionShort = $STR_EQUIP_DESC_FORT_WIRE;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD_FORT_WIRE;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			consume[] = {"fortified_wire_kit"};
			create = "DZE_FortifiedWire";
			byPass = "byPassRoadCheck";
		};
	};
};

class ItemTankTrap: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\dayz_equip\models\tank_trap_kit.p3d";
	picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
	displayName = $STR_EQUIP_NAME_TANK_TRAP;
	descriptionShort = $STR_EQUIP_DESC_TANK_TRAP;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemTankTrap"};
			create = "DZE_Hedgehog";
			byPass = "byPassRoadCheck";
		};
		class Crafting
		{
			text = $STR_ACTION_CRAFT_FORT_WIRE;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"fortified_wire_kit",1}};
			input[] = {{"ItemTankTrap",2},{"ItemWire",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_BARBED_GATE;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"barbed_gate_kit",1}};
			input[] = {{"ItemWire",1},{"ItemTankTrap",2},{"ItemPole",2}};
		};
	};
};

class barbed_gate_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	displayName = $STR_EQUIP_NAME_BARBED_GATE;
	descriptionShort = $STR_EQUIP_DESC_BARBED_GATE;

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_BARBED_GATE;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			consume[] = {"barbed_gate_kit"};
			create = "DZE_BarbedGate";
		};
	};
};

class ItemGenerator: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\dayz_equip\models\generator_gear.p3d";
	picture = "\dayz_equip\textures\equip_generator_ca.paa";
	displayName = $STR_EQUIP_NAME_31;
	descriptionShort = $STR_EQUIP_DESC_31;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemGenerator"};
			create = "DZE_Generator";
		};
	};
};

class fuel_pump_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FUELPUMP;
	descriptionShort = $STR_EPOCH_FUELPUMP;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_FuelPump";
		};
	};
};

class light_pole_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LIGHTPOLE;
	descriptionShort = $STR_EPOCH_LIGHTPOLE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_LightPole";
		};
	};
};

class deer_stand_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DEERSTAND;
	descriptionShort = $STR_EPOCH_DEERSTAND_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_DeerStand";
		};
	};
};

class m240_nest_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_M240NEST;
	descriptionShort = $STR_EPOCH_M240NEST;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_M240Nest";
		};
	};
};

class rusty_gate_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_RUSTYGATE;
	descriptionShort = $STR_EPOCH_RUSTYGATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_MetalGate";
		};
	};
};

class stick_fence_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STICKFENCE;
	descriptionShort = $STR_EPOCH_STICKFENCE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_StickFence";
		};
	};
};

class sun_shade_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CANVASSUNSHADE;
	descriptionShort = $STR_EPOCH_CANVASSUNSHADE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_CanvasHut";
		};
	};
};

class park_bench_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODBENCH;
	descriptionShort = $STR_EPOCH_WOODBENCH;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_ParkBench";
		};
	};
};

class ItemScaffoldingKit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SCAFFOLDING;
	descriptionShort = $STR_EPOCH_SCAFFOLDING;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DZE_Scaffolding";
		};
	};
};

class notebook_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_NOTEBOOK;
	descriptionShort = $STR_EPOCH_NOTEBOOK_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_Notebook";
		};
	};
};

class water_pump_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WATERPUMP;
	descriptionShort = $STR_EPOCH_WATERPUMP_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Water_Pump";
		};
	};
};

class greenhouse_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GREENHOUSE;
	descriptionShort = $STR_EPOCH_GREENHOUSE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Greenhouse";
		};
	};
};

class bed_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BED;
	descriptionShort = $STR_EPOCH_BED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Bed";
		};
	};
};

class table_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_TABLE;
	descriptionShort = $STR_EPOCH_TABLE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Table";
		};
	};
};

class office_chair_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CHAIR;
	descriptionShort = $STR_EPOCH_CHAIR_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Office_Chair";
		};
	};
};

class garage_green_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GARAGE_GREEN;
	descriptionShort = $STR_EPOCH_GARAGE_GREEN_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Garage_Green";
		};
	};
};

class garage_white_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GARAGE_WHITE;
	descriptionShort = $STR_EPOCH_GARAGE_WHITE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Garage_White";
		};
	};
};

class garage_brown_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GARAGE_BROWN;
	descriptionShort = $STR_EPOCH_GARAGE_BROWN_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Garage_Brown";
		};
	};
};

class garage_grey_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GARAGE_GREY;
	descriptionShort = $STR_EPOCH_GARAGE_GREY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Garage_Grey";
		};
	};
};

class helipad_civil_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_CIVIL;
	descriptionShort = $STR_EPOCH_HELIPAD_CIVIL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Helipad_Civil";
		};
	};
};

class helipad_rescue_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_RESCUE;
	descriptionShort = $STR_EPOCH_HELIPAD_RESCUE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Helipad_Rescue";
		};
	};
};

class helipad_army_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_ARMY;
	descriptionShort = $STR_EPOCH_HELIPAD_ARMY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Helipad_Army";
		};
	};
};

class helipad_cross_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_CROSS;
	descriptionShort = $STR_EPOCH_HELIPAD_CROSS_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Helipad_Cross";
		};
	};
};

class helipad_parkborder_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_HELIPAD_PARKBORDER;
	descriptionShort = $STR_EPOCH_HELIPAD_PARKBORDER_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Helipad_ParkBorder";
		};
	};
};

class cctv_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CCTV;
	descriptionShort = $STR_EPOCH_CCTV_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_CCTV";
		};
	};
};

class concrete_barrier_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CNC_BARRIER;
	descriptionShort = $STR_EQUIP_DESC_CNC_BARRIER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_CNC_BARRIER;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_ConcreteBarrier";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_CNC_BARRIER_STRIPED;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"concrete_barrier_striped_kit",1}};
			input[] = {{"concrete_barrier_kit",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_CONCRETE_WALL;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"concrete_wall_kit",1}};
			input[] = {{"concrete_barrier_kit",5},{"CementBag",2}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_ACTION_CRAFT_CONCRETE_PIPE;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"concrete_pipe_kit",1}};
			input[] = {{"concrete_barrier_kit",6},{"CementBag",2}};
		};
	};
};

class concrete_barrier_striped_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CNC_BARRIER_STRIPED;
	descriptionShort = $STR_EQUIP_DESC_CNC_BARRIER_STRIPED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_CNC_BARRIER_STRIPED;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_ConcreteBarrierStriped";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_CNC_BARRIER;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"concrete_barrier_kit",1}};
			input[] = {{"concrete_barrier_striped_kit",1}};
		};
	};
};

class concrete_wall_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CONCRETE_WALL;
	descriptionShort = $STR_EQUIP_DESC_CONCRETE_WALL;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_CONCRETE_WALL;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_ConcreteWall";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_DRAGONTEETH;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"dragonteeth_kit",1}};
			input[] = {{"concrete_wall_kit",1},{"ItemStone",6},{"CementBag",4}};
		};
	};
};

class concrete_pipe_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CONCRETE_PIPE;
	descriptionShort = $STR_EQUIP_DESC_CONCRETE_PIPE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_CONCRETE_PIPE;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_ConcretePipe";
		};
	};
};

class dragonteeth_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_DRAGONTEETH;
	descriptionShort = $STR_EQUIP_DESC_DRAGONTEETH;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_DRAGONTEETH;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_DragonTeeth";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_DRAGONTEETH_BIG;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemSledge"};
			output[] = {{"dragonteeth_big_kit",1}};
			input[] = {{"dragonteeth_kit",1},{"ItemStone",6},{"CementBag",4}};
		};
	};
};

class dragonteeth_big_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_DRAGONTEETH_BIG;
	descriptionShort = $STR_EQUIP_DESC_DRAGONTEETH_BIG;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_DRAGONTEETH_BIG;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_DragonTeethBig";
		};
	};
};

class simple_footbridge_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_SIMPLE_FOOTBRIDGE;
	descriptionShort = $STR_EQUIP_DESC_SIMPLE_FOOTBRIDGE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_SIMPLE_FOOTBRIDGE;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_SimpleFootbridge";
		};
	};
};

class wooden_footbridge_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_WOODEN_FOOTBRIDGE;
	descriptionShort = $STR_EQUIP_DESC_WOODEN_FOOTBRIDGE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_WOODEN_FOOTBRIDGE;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_WoodenFootbridge";
		};
	};
};

class windbreak_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_WINDBREAK;
	descriptionShort = $STR_EQUIP_DESC_WINDBREAK;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_WINDBREAK;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Windbreak";
		};
	};
};

class metal_container_1a_kit: CA_Magazine	// red
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1A;
	descriptionShort = $STR_EQUIP_DESC_METAL_CONTAINER_1A;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1A;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_MetalContainer1A";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1B;	// craft green
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1b_kit",1}};
			input[] = {{"metal_container_1a_kit",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1G;	// craft white
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1g_kit",1}};
			input[] = {{"metal_container_1a_kit",1}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_2D;	// craft 2x red
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"metal_container_2d_kit",1}};
			input[] = {{"metal_container_1a_kit",2}};
		};
	};
};

class metal_container_1b_kit: CA_Magazine	// green
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1B;
	descriptionShort = $STR_EQUIP_DESC_METAL_CONTAINER_1B;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1B;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_MetalContainer1B";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A;	// craft red
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1a_kit",1}};
			input[] = {{"metal_container_1b_kit",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1G;	// craft white
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1g_kit",1}};
			input[] = {{"metal_container_1b_kit",1}};
		};
	};
};

class metal_container_1g_kit: CA_Magazine	// white
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1G;
	descriptionShort = $STR_EQUIP_DESC_METAL_CONTAINER_1G;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_1G;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_MetalContainer1G";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1A;	// craft red
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1a_kit",1}};
			input[] = {{"metal_container_1g_kit",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_ACTION_CRAFT_METAL_CONTAINER_1B;	// craft green
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"metal_container_1b_kit",1}};
			input[] = {{"metal_container_1g_kit",1}};
		};
	};
};

class metal_container_2d_kit: CA_Magazine	// 2x red
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_2D;
	descriptionShort = $STR_EQUIP_DESC_METAL_CONTAINER_2D;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {

		class Build
		{
			text = $STR_EPOCH_ACTION_BUILD_METAL_CONTAINER_2D;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_MetalContainer2D";
		};
	};
};

class compost_barrel_empty_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_COMPOST_BARREL_EMTPY;
	descriptionShort = $STR_EPOCH_COMPOST_BARREL_EMTPY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {
		class Build	{
			text = $STR_EPOCH_BUILD_COMPOST_BARREL;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_Compost_Barrel_Empty";
		};
	};
};

class compost_barrel_full_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_COMPOST_BARREL_FULL;
	descriptionShort = $STR_EPOCH_COMPOST_BARREL_FULL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions {
		class Build	{
			text = $STR_EPOCH_BUILD_COMPOST_BARREL;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemShovel"};
			create = "DZE_Compost_Barrel_Full";
		};
	};
};

class boggle_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_BOGGLE;
	descriptionShort = $STR_EQUIP_DESC_BOGGLE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Boggle";
		};
	};
};

class satellite_dish_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_SATELLITE_DISH;
	descriptionShort = $STR_EQUIP_DESC_SATELLITE_DISH;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Satellite_Dish";
		};
	};
};

class fueltank_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_FUELTANK_BIG;
	descriptionShort = $STR_EQUIP_DESC_FUELTANK_BIG;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Fueltank";
		};
	};
};

class watertank_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_WATERTANK;
	descriptionShort = $STR_EQUIP_DESC_WATERTANK;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Watertank";
		};
	};
};

class watertower_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_WATERTOWER;
	descriptionShort = $STR_EQUIP_DESC_WATERTOWER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Watertower";
		};
	};
};