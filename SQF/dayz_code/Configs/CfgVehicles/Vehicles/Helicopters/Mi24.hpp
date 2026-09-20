class Mi24_D;
class DZE_Veh_Mi24D_CDF: Mi24_D {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24D_CDF";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi24D_CDF_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24D_CDF_1: DZE_Veh_Mi24D_CDF {
	displayName = "$STR_VEH_NAME_MI24D_CDF+";
	original = "DZE_Veh_Mi24D_CDF";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi24D_CDF_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24D_CDF_2: DZE_Veh_Mi24D_CDF_1 {
	displayName = "$STR_VEH_NAME_MI24D_CDF++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi24D_CDF_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi24D_CDF_3: DZE_Veh_Mi24D_CDF_2 {
	displayName = "$STR_VEH_NAME_MI24D_CDF+++";
	fuelCapacity = 2000; // base 1000
};

class Mi24_D_CZ_ACR;
class DZE_Veh_Mi24V_Woodland: Mi24_D_CZ_ACR {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24V_WOODLAND";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi24V_Woodland_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24V_Woodland_1: DZE_Veh_Mi24V_Woodland {
	displayName = "$STR_VEH_NAME_MI24V_WOODLAND+";
	original = "DZE_Veh_Mi24V_Woodland";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi24V_Woodland_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24V_Woodland_2: DZE_Veh_Mi24V_Woodland_1 {
	displayName = "$STR_VEH_NAME_MI24V_WOODLAND++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi24V_Woodland_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi24V_Woodland_3: DZE_Veh_Mi24V_Woodland_2 {
	displayName = "$STR_VEH_NAME_MI24V_WOODLAND+++";
	fuelCapacity = 2000; // base 1000
};

class Mi24_D_TK_EP1;
class DZE_Veh_Mi24D_TK: Mi24_D_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24D_TK";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi24D_TK_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24D_TK_1: DZE_Veh_Mi24D_TK {
	displayName = "$STR_VEH_NAME_MI24D_TK+";
	original = "DZE_Veh_Mi24D_TK";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi24D_TK_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24D_TK_2: DZE_Veh_Mi24D_TK_1 {
	displayName = "$STR_VEH_NAME_MI24D_TK++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi24D_TK_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi24D_TK_3: DZE_Veh_Mi24D_TK_2 {
	displayName = "$STR_VEH_NAME_MI24D_TK+++";
	fuelCapacity = 2000; // base 1000
};

class Mi24_P;
class DZE_Veh_Mi24P: Mi24_P {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24P";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi24P_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24P_1: DZE_Veh_Mi24P {
	displayName = "$STR_VEH_NAME_MI24P+";
	original = "DZE_Veh_Mi24P";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi24P_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24P_2: DZE_Veh_Mi24P_1 {
	displayName = "$STR_VEH_NAME_MI24P++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi24P_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi24P_3: DZE_Veh_Mi24P_2 {
	displayName = "$STR_VEH_NAME_MI24P+++";
	fuelCapacity = 2000; // base 1000
};

class Mi24_V;
class DZE_Veh_Mi24V_RU: Mi24_V {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24V_RU";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi24V_RU_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24V_RU_1: DZE_Veh_Mi24V_RU {
	displayName = "$STR_VEH_NAME_MI24V_RU+";
	original = "DZE_Veh_Mi24V_RU";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi24V_RU_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi24V_RU_2: DZE_Veh_Mi24V_RU_1 {
	displayName = "$STR_VEH_NAME_MI24V_RU++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi24V_RU_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi24V_RU_3: DZE_Veh_Mi24V_RU_2 {
	displayName = "$STR_VEH_NAME_MI24V_RU+++";
	fuelCapacity = 2000; // base 1000
};
