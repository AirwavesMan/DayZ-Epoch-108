class Ka137_MG_PMC;
class DZE_Veh_Ka137_PK: Ka137_MG_PMC {
	scope = 2;
	DZE_MACRO_VEHICLE_CANSEE_AIR

	displayName = "$STR_VEH_NAME_KA137_PK";
	vehicleClass = "DZE Vehicles Helicopters";
	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 1.3;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Ka137_PK_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka137_PK_1: DZE_Veh_Ka137_PK {
	displayName = "$STR_VEH_NAME_KA137_PK+";
	original = "DZE_Veh_Ka137_PK";
	armor = 2; // base 1
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Ka137_PK_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka137_PK_2: DZE_Veh_Ka137_PK_1 {
	displayName = "$STR_VEH_NAME_KA137_PK++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Ka137_PK_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Ka137_PK_3: DZE_Veh_Ka137_PK_2 {
	displayName = "$STR_VEH_NAME_KA137_PK+++";
	fuelCapacity = 2000; // base 1000
};

class Ka137_PMC;
class DZE_Veh_Ka137: Ka137_PMC {
	scope = 2;
	DZE_MACRO_VEHICLE_CANSEE_AIR

	displayName = "$STR_VEH_NAME_KA137";
	vehicleClass = "DZE Vehicles Helicopters";
	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 1.3;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Ka137_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka137_1: DZE_Veh_Ka137 {
	displayName = "$STR_VEH_NAME_KA137+";
	original = "DZE_Veh_Ka137";
	armor = 2; // base 1
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Ka137_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka137_2: DZE_Veh_Ka137_1 {
	displayName = "$STR_VEH_NAME_KA137++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Ka137_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Ka137_3: DZE_Veh_Ka137_2 {
	displayName = "$STR_VEH_NAME_KA137+++";
	fuelCapacity = 2000; // base 1000
};
