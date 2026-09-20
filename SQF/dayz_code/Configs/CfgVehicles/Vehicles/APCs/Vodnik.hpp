class GAZ_Vodnik_HMG;
class DZE_Veh_Vodnik_HMG: GAZ_Vodnik_HMG {
	scope = 2;
	DZE_MACRO_VEHICLE_CANSEE_ARMORED


	DZE_MACRO_VEHICLE_SIDE
	displayName = "$STR_VEH_NAME_VODNIK_BPPU";
	vehicleClass = "DZE Vehicles APCs";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Vodnik_HMG_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Vodnik_HMG_1: DZE_Veh_Vodnik_HMG {
	displayName = "$STR_VEH_NAME_VODNIK_BPPU+";
	original = "DZE_Veh_Vodnik_HMG";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Vodnik_HMG_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Vodnik_HMG_2: DZE_Veh_Vodnik_HMG_1 {
	displayName = "$STR_VEH_NAME_VODNIK_BPPU++";
	armor = 120; // base 100
	damageResistance = 0.06; // base 0.02972

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Vodnik_HMG_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Vodnik_HMG_3: DZE_Veh_Vodnik_HMG_2 {
	displayName = "$STR_VEH_NAME_VODNIK_BPPU+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Vodnik_HMG_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_Vodnik_HMG_4: DZE_Veh_Vodnik_HMG_3 {
	displayName = "$STR_VEH_NAME_VODNIK_BPPU++++";
	fuelCapacity = 340; // base 220
};

class GAZ_Vodnik;
class DZE_Veh_Vodnik_MG: GAZ_Vodnik {
	scope = 2;
	DZE_MACRO_VEHICLE_CANSEE_ARMORED


	DZE_MACRO_VEHICLE_SIDE
	displayName = "$STR_VEH_NAME_VODNIK_PKT";
	vehicleClass = "DZE Vehicles APCs";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Vodnik_MG_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Vodnik_MG_1: DZE_Veh_Vodnik_MG {
	displayName = "$STR_VEH_NAME_VODNIK_PKT+";
	original = "DZE_Veh_Vodnik_MG";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Vodnik_MG_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Vodnik_MG_2: DZE_Veh_Vodnik_MG_1 {
	displayName = "$STR_VEH_NAME_VODNIK_PKT++";
	armor = 105; // base 85
	damageResistance = 0.065; // base 0.032

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Vodnik_MG_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Vodnik_MG_3: DZE_Veh_Vodnik_MG_2 {
	displayName = "$STR_VEH_NAME_VODNIK_PKT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Vodnik_MG_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_Vodnik_MG_4: DZE_Veh_Vodnik_MG_3 {
	displayName = "$STR_VEH_NAME_VODNIK_PKT++++";
	fuelCapacity = 340; // base 220
};

class GAZ_Vodnik_MedEvac;
class DZE_Veh_Vodnik_MedEvac: GAZ_Vodnik_MedEvac {
	scope = 2;

	crewVulnerable = 1;
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC";
	vehicleClass = "DZE Vehicles APCs";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	attendant = 0;
	supplyRadius = 1.8;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Vodnik_MedEvac_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Vodnik_MedEvac_1: DZE_Veh_Vodnik_MedEvac {
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC+";
	original = "DZE_Veh_Vodnik_MedEvac";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Vodnik_MedEvac_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Vodnik_MedEvac_2: DZE_Veh_Vodnik_MedEvac_1 {
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC++";
	armor = 105; // base 85
	damageResistance = 0.065; // base 0.032

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Vodnik_MedEvac_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Vodnik_MedEvac_3: DZE_Veh_Vodnik_MedEvac_2 {
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Vodnik_MedEvac_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_Vodnik_MedEvac_4: DZE_Veh_Vodnik_MedEvac_3 {
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC++++";
	fuelCapacity = 340; // base 220
};
