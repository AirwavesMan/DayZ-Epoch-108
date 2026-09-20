class BTR90;
class DZE_Veh_BTR90: BTR90 {
	scope = 2;

	displayName = "$STR_VEH_NAME_BTR90";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BTR90_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BTR90_1: DZE_Veh_BTR90 {
	displayName = "$STR_VEH_NAME_BTR90+";
	original = "DZE_Veh_BTR90";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5; // base 1.5
	turnCoef = 6;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BTR90_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BTR90_2: DZE_Veh_BTR90_1 {
	displayName = "$STR_VEH_NAME_BTR90++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.02432

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BTR90_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BTR90_3: DZE_Veh_BTR90_2 {
	displayName = "$STR_VEH_NAME_BTR90+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BTR90_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BTR90_4: DZE_Veh_BTR90_3 {
	displayName = "$STR_VEH_NAME_BTR90++++";
	fuelCapacity = 550; // base 300
};

class BTR90_HQ;
class DZE_Veh_BTR90_HQ: BTR90_HQ {
	scope = 2;

	displayName = "$STR_VEH_NAME_BTR90_HQ";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportSoldier = 6;

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BTR90_HQ_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BTR90_HQ_1: DZE_Veh_BTR90_HQ {
	displayName = "$STR_VEH_NAME_BTR90_HQ+";
	original = "DZE_Veh_BTR90_HQ";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5; // base 1.5
	turnCoef = 6;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BTR90_HQ_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BTR90_HQ_2: DZE_Veh_BTR90_HQ_1 {
	displayName = "$STR_VEH_NAME_BTR90_HQ++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.02432

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BTR90_HQ_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BTR90_HQ_3: DZE_Veh_BTR90_HQ_2 {
	displayName = "$STR_VEH_NAME_BTR90_HQ+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BTR90_HQ_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BTR90_HQ_4: DZE_Veh_BTR90_HQ_3 {
	displayName = "$STR_VEH_NAME_BTR90_HQ++++";
	fuelCapacity = 550; // base 300
};
