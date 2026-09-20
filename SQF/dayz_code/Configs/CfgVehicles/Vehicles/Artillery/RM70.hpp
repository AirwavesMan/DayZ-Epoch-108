class RM70_ACR;
class DZE_Veh_RM70: RM70_ACR {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_RM70";
	vehicleClass = "DZE Vehicles Artillery";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_RM70_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_RM70_1: DZE_Veh_RM70 {
	displayName = "$STR_VEH_NAME_RM70+";
	original = "DZE_Veh_RM70";
	maxSpeed = 110; // base 85
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_RM70_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_RM70_2: DZE_Veh_RM70_1 {
	displayName = "$STR_VEH_NAME_RM70++";
	armor = 110; // base 50
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_RM70_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_RM70_3: DZE_Veh_RM70_2 {
	displayName = "$STR_VEH_NAME_RM70+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_RM70_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_RM70_4: DZE_Veh_RM70_3 {
	displayName = "$STR_VEH_NAME_RM70++++";
	fuelCapacity = 205; // base 100
};
