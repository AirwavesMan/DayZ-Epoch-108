class MQ9PredatorB;
class DZE_Veh_MQ9_USMC: MQ9PredatorB {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_MQ9_USMC_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	DZE_MACRO_VEHICLE_CANSEE_AIR

	displayName = "$STR_VEH_NAME_MQ9_USMC";
	vehicleClass = "DZE Vehicles Planes";
	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
};

class MQ9PredatorB_US_EP1;
class DZE_Veh_MQ9_US: MQ9PredatorB_US_EP1 {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_MQ9_US_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	DZE_MACRO_VEHICLE_CANSEE_AIR

	displayName = "$STR_VEH_NAME_MQ9_US";
	vehicleClass = "DZE Vehicles Planes";
	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
};

class DZE_Veh_MQ9_USMC_1: DZE_Veh_MQ9_USMC {
	displayName = "$STR_VEH_NAME_MQ9_USMC+";
	original = "DZE_Veh_MQ9_USMC";
	armor = 20;
	damageResistance = 0.01352;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_MQ9_USMC_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_MQ9_USMC_2: DZE_Veh_MQ9_USMC_1 {
	displayName = "$STR_VEH_NAME_MQ9_USMC++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_MQ9_USMC_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_MQ9_USMC_3: DZE_Veh_MQ9_USMC_2 {
	displayName = "$STR_VEH_NAME_MQ9_USMC+++";
	fuelCapacity = 7200;

	class Upgrades {};
};

class DZE_Veh_MQ9_US_1: DZE_Veh_MQ9_US {
	displayName = "$STR_VEH_NAME_MQ9_US+";
	original = "DZE_Veh_MQ9_US";
	armor = 20;
	damageResistance = 0.01352;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_MQ9_US_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_MQ9_US_2: DZE_Veh_MQ9_US_1 {
	displayName = "$STR_VEH_NAME_MQ9_US++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_MQ9_US_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_MQ9_US_3: DZE_Veh_MQ9_US_2 {
	displayName = "$STR_VEH_NAME_MQ9_US+++";
	fuelCapacity = 7200;

	class Upgrades {};
};
