class A10;
class DZE_Veh_A10_USMC: A10 {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_A10_USMC_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_A10_USMC";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class A10_US_EP1;
class DZE_Veh_A10_US: A10_US_EP1 {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_A10_US_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_A10_US";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class DZE_Veh_A10_USMC_1: DZE_Veh_A10_USMC {
	displayName = "$STR_VEH_NAME_A10_USMC+";
	original = "DZE_Veh_A10_USMC";
	armor = 150;
	damageResistance = 0.0097;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_A10_USMC_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_A10_USMC_2: DZE_Veh_A10_USMC_1 {
	displayName = "$STR_VEH_NAME_A10_USMC++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_A10_USMC_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_A10_USMC_3: DZE_Veh_A10_USMC_2 {
	displayName = "$STR_VEH_NAME_A10_USMC+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_A10_US_1: DZE_Veh_A10_US {
	displayName = "$STR_VEH_NAME_A10_US+";
	original = "DZE_Veh_A10_US";
	armor = 150;
	damageResistance = 0.0097;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_A10_US_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_A10_US_2: DZE_Veh_A10_US_1 {
	displayName = "$STR_VEH_NAME_A10_US++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_A10_US_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_A10_US_3: DZE_Veh_A10_US_2 {
	displayName = "$STR_VEH_NAME_A10_US+++";
	fuelCapacity = 2000;

	class Upgrades {};
};
