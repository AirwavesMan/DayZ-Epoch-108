class M1A2_TUSK_MG;
class DZE_Veh_M1A2_TUSK_Woodland: M1A2_TUSK_MG {
	scope = 2;
	displayName = "$STR_VEH_NAME_M1A2_TUSK_WOODLAND";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_M1A2_TUSK_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1A2_TUSK_Woodland_1: DZE_Veh_M1A2_TUSK_Woodland {
	displayName = "$STR_VEH_NAME_M1A2_TUSK_WOODLAND+";
	original = "DZE_Veh_M1A2_TUSK_Woodland";
	maxSpeed = 100; // base 72
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1A2_TUSK_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1A2_TUSK_Woodland_2: DZE_Veh_M1A2_TUSK_Woodland_1 {
	displayName = "$STR_VEH_NAME_M1A2_TUSK_WOODLAND++";
	armor = 1155; // base 900
	damageResistance = 0.01006; // base 0.00516

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1A2_TUSK_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1A2_TUSK_Woodland_3: DZE_Veh_M1A2_TUSK_Woodland_2 {
	displayName = "$STR_VEH_NAME_M1A2_TUSK_WOODLAND+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1A2_TUSK_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1A2_TUSK_Woodland_4: DZE_Veh_M1A2_TUSK_Woodland_3 {
	displayName = "$STR_VEH_NAME_M1A2_TUSK_WOODLAND++++";
	fuelCapacity = 1200; // base 700
};

class M1A2_US_TUSK_MG_EP1;
class DZE_Veh_M1A2_TUSK_Desert: M1A2_US_TUSK_MG_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_M1A2_TUSK_DESERT";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_M1A2_TUSK_Desert_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1A2_TUSK_Desert_1: DZE_Veh_M1A2_TUSK_Desert {
	displayName = "$STR_VEH_NAME_M1A2_TUSK_DESERT+";
	original = "DZE_Veh_M1A2_TUSK_Desert";
	maxSpeed = 100; // base 72
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1A2_TUSK_Desert_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1A2_TUSK_Desert_2: DZE_Veh_M1A2_TUSK_Desert_1 {
	displayName = "$STR_VEH_NAME_M1A2_TUSK_DESERT++";
	armor = 1155; // base 900
	damageResistance = 0.01006; // base 0.00516

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1A2_TUSK_Desert_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1A2_TUSK_Desert_3: DZE_Veh_M1A2_TUSK_Desert_2 {
	displayName = "$STR_VEH_NAME_M1A2_TUSK_DESERT+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1A2_TUSK_Desert_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1A2_TUSK_Desert_4: DZE_Veh_M1A2_TUSK_Desert_3 {
	displayName = "$STR_VEH_NAME_M1A2_TUSK_DESERT++++";
	fuelCapacity = 1200; // base 700
};
