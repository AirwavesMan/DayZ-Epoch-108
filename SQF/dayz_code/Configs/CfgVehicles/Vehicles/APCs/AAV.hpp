class AAV;
class DZE_Veh_AAVP7A1: AAV {
	scope = 2;
	
	displayName = "$STR_VEH_NAME_AAV";
	vehicleClass = "DZE Vehicles APCs";	
	

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;	
	
	supplyRadius = 5;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_AAVP7A1_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};	
};

class DZE_Veh_AAVP7A1_1: DZE_Veh_AAVP7A1 {
	displayName = "$STR_VEH_NAME_AAV+";
	original = "DZE_Veh_AAVP7A1";
	maxspeed = 110; // base 72
	turnCoef = 0.5;  // base 1
	
	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_AAVP7A1_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_AAVP7A1_2: DZE_Veh_AAVP7A1_1 {
	displayName = "$STR_VEH_NAME_AAV++";
	armor = 350; // base 210
	damageResistance = 0.023; // base 0.01168
	
	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_AAVP7A1_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_AAVP7A1_3: DZE_Veh_AAVP7A1_2 {
	displayName = "$STR_VEH_NAME_AAV+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;
	
	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_AAVP7A1_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_AAVP7A1_4: DZE_Veh_AAVP7A1_3 {
	displayName = "$STR_VEH_NAME_AAV++++";
	fuelCapacity = 980; // base 700	
};

