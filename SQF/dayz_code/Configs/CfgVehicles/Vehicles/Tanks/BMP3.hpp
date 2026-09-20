class BMP3;
class DZE_Veh_BMP3: BMP3 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP3";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP3_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP3_1: DZE_Veh_BMP3 {
	displayName = "$STR_VEH_NAME_BMP3+";
	original = "DZE_Veh_BMP3";
	maxSpeed = 100; // base 70
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP3_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP3_2: DZE_Veh_BMP3_1 {
	displayName = "$STR_VEH_NAME_BMP3++";
	armor = 385; // base 300
	damageResistance = 0.02734; // base 0.01403

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP3_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP3_3: DZE_Veh_BMP3_2 {
	displayName = "$STR_VEH_NAME_BMP3+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP3_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP3_4: DZE_Veh_BMP3_3 {
	displayName = "$STR_VEH_NAME_BMP3++++";
	fuelCapacity = 1200; // base 700
};
