class AH64D;
class DZE_Veh_AH64D_USMC: AH64D {
	scope = 2;
	displayName = "$STR_VEH_NAME_AH64D_USMC";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AH64D_USMC_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH64D_USMC_1: DZE_Veh_AH64D_USMC {
	displayName = "$STR_VEH_NAME_AH64D_USMC+";
	original = "DZE_Veh_AH64D_USMC";
	armor = 120; // base 60
	damageResistance = 0.01186; // base 0.00593

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AH64D_USMC_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH64D_USMC_2: DZE_Veh_AH64D_USMC_1 {
	displayName = "$STR_VEH_NAME_AH64D_USMC++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AH64D_USMC_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AH64D_USMC_3: DZE_Veh_AH64D_USMC_2 {
	displayName = "$STR_VEH_NAME_AH64D_USMC+++";
	fuelCapacity = 2000; // base 1000
};

class AH64D_EP1;
class DZE_Veh_AH64D_US: AH64D_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_AH64D_US";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AH64D_US_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH64D_US_1: DZE_Veh_AH64D_US {
	displayName = "$STR_VEH_NAME_AH64D_US+";
	original = "DZE_Veh_AH64D_US";
	armor = 120; // base 60
	damageResistance = 0.0111; // base 0.00555

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AH64D_US_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH64D_US_2: DZE_Veh_AH64D_US_1 {
	displayName = "$STR_VEH_NAME_AH64D_US++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AH64D_US_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AH64D_US_3: DZE_Veh_AH64D_US_2 {
	displayName = "$STR_VEH_NAME_AH64D_US+++";
	fuelCapacity = 2000; // base 1000
};

class BAF_Apache_AH1_D;
class DZE_Veh_Apache_AH1: BAF_Apache_AH1_D {
	scope = 2;
	displayName = "$STR_VEH_NAME_APACHE_AH1";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Apache_AH1_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Apache_AH1_1: DZE_Veh_Apache_AH1 {
	displayName = "$STR_VEH_NAME_APACHE_AH1+";
	original = "DZE_Veh_Apache_AH1";
	armor = 120; // base 60
	damageResistance = 0.0111; // base 0.00555

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Apache_AH1_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Apache_AH1_2: DZE_Veh_Apache_AH1_1 {
	displayName = "$STR_VEH_NAME_APACHE_AH1++";
	transportMaxWeapons = 36;
	transportMaxMagazines = 360;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Apache_AH1_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Apache_AH1_3: DZE_Veh_Apache_AH1_2 {
	displayName = "$STR_VEH_NAME_APACHE_AH1+++";
	fuelCapacity = 2000; // base 1000
};
