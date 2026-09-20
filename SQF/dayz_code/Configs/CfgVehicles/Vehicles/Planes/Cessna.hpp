class GNT_C185C;
class DZE_Veh_C185C_White: GNT_C185C {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_C185C_White_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_CESSNA_WHITE";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	gunnerHasFlares = false;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
	class Eventhandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class GNT_C185R;
class DZE_Veh_C185R_Yellow: GNT_C185R {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_C185R_Yellow_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_CESSNA_YELLOW";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	gunnerHasFlares = false;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
	class Eventhandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class GNT_C185;
class DZE_Veh_C185_Orange: GNT_C185 {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_C185_Orange_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_CESSNA_ORANGE";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	gunnerHasFlares = false;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
	class Eventhandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class GNT_C185U;
class DZE_Veh_C185U_Camo: GNT_C185U {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_C185U_Camo_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_CESSNA_CAMO";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	gunnerHasFlares = false;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
	class Eventhandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class GNT_C185T;
class DZE_Veh_C185T_Rockets: GNT_C185T {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_C185T_Rockets_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_CESSNA_ROCKETS";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	gunnerHasFlares = false;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};
	weapons[] = {"FFARLauncher_12"};
	magazines[] = {"12Rnd_FFAR"};
	class Eventhandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class DZE_Veh_C185T_TwinM60: DZE_Veh_C185T_Rockets {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_C185T_TwinM60_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_CESSNA_M60";
	weapons[] = {"pook_M60_dual_DZ"};
	magazines[] = {"pook_1300Rnd_762x51_M60"};
};

class GNT_C185F;
class DZE_Veh_C185F_Amphibian: GNT_C185F {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_C185F_Amphibian_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_CESSNA_AMPHIBIAN";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	gunnerHasFlares = false;
	fuelCapacity = 700;
	transportMaxWeapons = 7;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 2;
	soundEngine[]= {"\GNT_C185\engine.wav",5.6234102,1,1000};

	class Eventhandlers: DefaultEventhandlers {
		init = "_sxr = _this execvm ""\GNT_C185\scr\C185Init.sqf"";_scr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
		engine = "_this execVM ""\GNT_C185\scr\C185_Exhaust.sqf"";[_this select 0] execvm ""\GNT_C185\scr\G_CheckEngine.sqf"";";
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class DZE_Veh_C185C_White_1: DZE_Veh_C185C_White {
	displayName = "$STR_VEH_NAME_CESSNA_WHITE+";
	original = "DZE_Veh_C185C_White";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_C185C_White_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_C185C_White_2: DZE_Veh_C185C_White_1 {
	displayName = "$STR_VEH_NAME_CESSNA_WHITE++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_C185C_White_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_C185C_White_3: DZE_Veh_C185C_White_2 {
	displayName = "$STR_VEH_NAME_CESSNA_WHITE+++";
	fuelCapacity = 1400;

	class Upgrades {};
};

class DZE_Veh_C185R_Yellow_1: DZE_Veh_C185R_Yellow {
	displayName = "$STR_VEH_NAME_CESSNA_YELLOW+";
	original = "DZE_Veh_C185R_Yellow";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_C185R_Yellow_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_C185R_Yellow_2: DZE_Veh_C185R_Yellow_1 {
	displayName = "$STR_VEH_NAME_CESSNA_YELLOW++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_C185R_Yellow_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_C185R_Yellow_3: DZE_Veh_C185R_Yellow_2 {
	displayName = "$STR_VEH_NAME_CESSNA_YELLOW+++";
	fuelCapacity = 1400;

	class Upgrades {};
};

class DZE_Veh_C185_Orange_1: DZE_Veh_C185_Orange {
	displayName = "$STR_VEH_NAME_CESSNA_ORANGE+";
	original = "DZE_Veh_C185_Orange";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_C185_Orange_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_C185_Orange_2: DZE_Veh_C185_Orange_1 {
	displayName = "$STR_VEH_NAME_CESSNA_ORANGE++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_C185_Orange_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_C185_Orange_3: DZE_Veh_C185_Orange_2 {
	displayName = "$STR_VEH_NAME_CESSNA_ORANGE+++";
	fuelCapacity = 1400;

	class Upgrades {};
};

class DZE_Veh_C185U_Camo_1: DZE_Veh_C185U_Camo {
	displayName = "$STR_VEH_NAME_CESSNA_CAMO+";
	original = "DZE_Veh_C185U_Camo";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_C185U_Camo_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_C185U_Camo_2: DZE_Veh_C185U_Camo_1 {
	displayName = "$STR_VEH_NAME_CESSNA_CAMO++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_C185U_Camo_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_C185U_Camo_3: DZE_Veh_C185U_Camo_2 {
	displayName = "$STR_VEH_NAME_CESSNA_CAMO+++";
	fuelCapacity = 1400;

	class Upgrades {};
};

class DZE_Veh_C185T_Rockets_1: DZE_Veh_C185T_Rockets {
	displayName = "$STR_VEH_NAME_CESSNA_ROCKETS+";
	original = "DZE_Veh_C185T_Rockets";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_C185T_Rockets_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_C185T_Rockets_2: DZE_Veh_C185T_Rockets_1 {
	displayName = "$STR_VEH_NAME_CESSNA_ROCKETS++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_C185T_Rockets_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_C185T_Rockets_3: DZE_Veh_C185T_Rockets_2 {
	displayName = "$STR_VEH_NAME_CESSNA_ROCKETS+++";
	fuelCapacity = 1400;

	class Upgrades {};
};

class DZE_Veh_C185T_TwinM60_1: DZE_Veh_C185T_TwinM60 {
	displayName = "$STR_VEH_NAME_CESSNA_M60+";
	original = "DZE_Veh_C185T_TwinM60";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_C185T_TwinM60_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_C185T_TwinM60_2: DZE_Veh_C185T_TwinM60_1 {
	displayName = "$STR_VEH_NAME_CESSNA_M60++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_C185T_TwinM60_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_C185T_TwinM60_3: DZE_Veh_C185T_TwinM60_2 {
	displayName = "$STR_VEH_NAME_CESSNA_M60+++";
	fuelCapacity = 1400;

	class Upgrades {};
};

class DZE_Veh_C185F_Amphibian_1: DZE_Veh_C185F_Amphibian {
	displayName = "$STR_VEH_NAME_CESSNA_AMPHIBIAN+";
	original = "DZE_Veh_C185F_Amphibian";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_C185F_Amphibian_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_C185F_Amphibian_2: DZE_Veh_C185F_Amphibian_1 {
	displayName = "$STR_VEH_NAME_CESSNA_AMPHIBIAN++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_C185F_Amphibian_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_C185F_Amphibian_3: DZE_Veh_C185F_Amphibian_2 {
	displayName = "$STR_VEH_NAME_CESSNA_AMPHIBIAN+++";
	fuelCapacity = 1400;

	class Upgrades {};
};
