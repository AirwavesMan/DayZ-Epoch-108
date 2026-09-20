class An2_Base_EP1;
class DZE_Veh_AN2_Green: An2_Base_EP1 {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AN2_Green_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_AN2_GREEN";
	vehicleClass = "DZE Vehicles Planes";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	hiddenSelections[] = {};
	weapons[] = {};
	magazines[] = {};
	gunnerHasFlares = false;
	transportMaxWeapons = 10;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 15;
	fuelCapacity = 757;
};

class DZE_Veh_AN2_Vickers: DZE_Veh_AN2_Green {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AN2_Vickers_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_AN2_VICKER";
	weapons[] = {"TwinVickers"};
	magazines[] = {"500Rnd_TwinVickers","500Rnd_TwinVickers"};
};

class DZE_Veh_AN2_WhiteRed: DZE_Veh_AN2_Green {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AN2_WhiteRed_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_AN2_WHITERED";
	hiddenSelections[] ={"Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] =
	{
		"ca\Air_E\An2\Data\an2_1_A_CO",
		"ca\Air_E\An2\Data\an2_2_A_CO",
		"ca\Air_E\An2\Data\an2_wings_A_CO"
	};
};

class DZE_Veh_AN2_M134: DZE_Veh_AN2_WhiteRed {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AN2_M134_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_AN2_M134";
	weapons[] = {"TwinM134"};
	magazines[] = {"2000Rnd_762x51_M134"};
};

class An2_2_TK_CIV_EP1;
class DZE_Veh_AN2_WhiteGreen: An2_2_TK_CIV_EP1 {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AN2_WhiteGreen_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_AN2_WHITEGREEN";
	vehicleClass = "DZE Vehicles Planes";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	weapons[] = {};
	magazines[] = {};
	gunnerHasFlares = false;
	transportMaxWeapons = 10;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 15;
	fuelCapacity = 757;
};

class DZE_Veh_AN2_Green_1: DZE_Veh_AN2_Green {
	displayName = "$STR_VEH_NAME_AN2_GREEN+";
	original = "DZE_Veh_AN2_Green";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AN2_Green_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AN2_Green_2: DZE_Veh_AN2_Green_1 {
	displayName = "$STR_VEH_NAME_AN2_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AN2_Green_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AN2_Green_3: DZE_Veh_AN2_Green_2 {
	displayName = "$STR_VEH_NAME_AN2_GREEN+++";
	fuelCapacity = 1514;

	class Upgrades {};
};

class DZE_Veh_AN2_Vickers_1: DZE_Veh_AN2_Vickers {
	displayName = "$STR_VEH_NAME_AN2_VICKER+";
	original = "DZE_Veh_AN2_Vickers";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AN2_Vickers_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AN2_Vickers_2: DZE_Veh_AN2_Vickers_1 {
	displayName = "$STR_VEH_NAME_AN2_VICKER++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AN2_Vickers_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AN2_Vickers_3: DZE_Veh_AN2_Vickers_2 {
	displayName = "$STR_VEH_NAME_AN2_VICKER+++";
	fuelCapacity = 1514;

	class Upgrades {};
};

class DZE_Veh_AN2_WhiteRed_1: DZE_Veh_AN2_WhiteRed {
	displayName = "$STR_VEH_NAME_AN2_WHITERED+";
	original = "DZE_Veh_AN2_WhiteRed";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AN2_WhiteRed_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AN2_WhiteRed_2: DZE_Veh_AN2_WhiteRed_1 {
	displayName = "$STR_VEH_NAME_AN2_WHITERED++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AN2_WhiteRed_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AN2_WhiteRed_3: DZE_Veh_AN2_WhiteRed_2 {
	displayName = "$STR_VEH_NAME_AN2_WHITERED+++";
	fuelCapacity = 1514;

	class Upgrades {};
};

class DZE_Veh_AN2_M134_1: DZE_Veh_AN2_M134 {
	displayName = "$STR_VEH_NAME_AN2_M134+";
	original = "DZE_Veh_AN2_M134";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AN2_M134_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AN2_M134_2: DZE_Veh_AN2_M134_1 {
	displayName = "$STR_VEH_NAME_AN2_M134++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AN2_M134_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AN2_M134_3: DZE_Veh_AN2_M134_2 {
	displayName = "$STR_VEH_NAME_AN2_M134+++";
	fuelCapacity = 1514;

	class Upgrades {};
};

class DZE_Veh_AN2_WhiteGreen_1: DZE_Veh_AN2_WhiteGreen {
	displayName = "$STR_VEH_NAME_AN2_WHITEGREEN+";
	original = "DZE_Veh_AN2_WhiteGreen";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AN2_WhiteGreen_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AN2_WhiteGreen_2: DZE_Veh_AN2_WhiteGreen_1 {
	displayName = "$STR_VEH_NAME_AN2_WHITEGREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AN2_WhiteGreen_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AN2_WhiteGreen_3: DZE_Veh_AN2_WhiteGreen_2 {
	displayName = "$STR_VEH_NAME_AN2_WHITEGREEN+++";
	fuelCapacity = 1514;

	class Upgrades {};
};
