class T90;
class DZE_Veh_T90: T90 {
	scope = 2;
	displayName = "$STR_VEH_NAME_T90";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T90_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T90_1: DZE_Veh_T90 {
	displayName = "$STR_VEH_NAME_T90+";
	original = "DZE_Veh_T90";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T90_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T90_2: DZE_Veh_T90_1 {
	displayName = "$STR_VEH_NAME_T90++";
	armor = 1025; // base 800
	damageResistance = 0.00758; // base 0.00389

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T90_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T90_3: DZE_Veh_T90_2 {
	displayName = "$STR_VEH_NAME_T90+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T90_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T90_4: DZE_Veh_T90_3 {
	displayName = "$STR_VEH_NAME_T90++++";
	fuelCapacity = 1200; // base 700
};
