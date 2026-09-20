class M1126_ICV_M2_EP1;
class DZE_Veh_M1126_ICV_M2: M1126_ICV_M2_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_M1126_ICV_M2";
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
		ItemTankORP[] = {"DZE_Veh_M1126_ICV_M2_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1126_ICV_M2_1: DZE_Veh_M1126_ICV_M2 {
	displayName = "$STR_VEH_NAME_M1126_ICV_M2+";
	original = "DZE_Veh_M1126_ICV_M2";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5;
	turnCoef = 5;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1126_ICV_M2_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1126_ICV_M2_2: DZE_Veh_M1126_ICV_M2_1 {
	displayName = "$STR_VEH_NAME_M1126_ICV_M2++";
	armor = 220; // base 160
	damageResistance = 0.048; // base 0.0082

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1126_ICV_M2_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1126_ICV_M2_3: DZE_Veh_M1126_ICV_M2_2 {
	displayName = "$STR_VEH_NAME_M1126_ICV_M2+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1126_ICV_M2_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1126_ICV_M2_4: DZE_Veh_M1126_ICV_M2_3 {
	displayName = "$STR_VEH_NAME_M1126_ICV_M2++++";
	fuelCapacity = 550; // base 246
};

class M1126_ICV_mk19_EP1;
class DZE_Veh_M1126_ICV_MK19: M1126_ICV_mk19_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_M1126_ICV_MK19";
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
		ItemTankORP[] = {"DZE_Veh_M1126_ICV_MK19_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1126_ICV_MK19_1: DZE_Veh_M1126_ICV_MK19 {
	displayName = "$STR_VEH_NAME_M1126_ICV_MK19+";
	original = "DZE_Veh_M1126_ICV_MK19";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5;
	turnCoef = 5;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1126_ICV_MK19_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1126_ICV_MK19_2: DZE_Veh_M1126_ICV_MK19_1 {
	displayName = "$STR_VEH_NAME_M1126_ICV_MK19++";
	armor = 220; // base 160
	damageResistance = 0.048; // base 0.0082

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1126_ICV_MK19_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1126_ICV_MK19_3: DZE_Veh_M1126_ICV_MK19_2 {
	displayName = "$STR_VEH_NAME_M1126_ICV_MK19+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1126_ICV_MK19_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1126_ICV_MK19_4: DZE_Veh_M1126_ICV_MK19_3 {
	displayName = "$STR_VEH_NAME_M1126_ICV_MK19++++";
	fuelCapacity = 550; // base 246
};

class M1128_MGS_EP1;
class DZE_Veh_M1128_MGS: M1128_MGS_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_M1128_MGS";
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
		ItemTankORP[] = {"DZE_Veh_M1128_MGS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1128_MGS_1: DZE_Veh_M1128_MGS {
	displayName = "$STR_VEH_NAME_M1128_MGS+";
	original = "DZE_Veh_M1128_MGS";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5;
	turnCoef = 5;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1128_MGS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1128_MGS_2: DZE_Veh_M1128_MGS_1 {
	displayName = "$STR_VEH_NAME_M1128_MGS++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.01199

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1128_MGS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1128_MGS_3: DZE_Veh_M1128_MGS_2 {
	displayName = "$STR_VEH_NAME_M1128_MGS+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1128_MGS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1128_MGS_4: DZE_Veh_M1128_MGS_3 {
	displayName = "$STR_VEH_NAME_M1128_MGS++++";
	fuelCapacity = 550; // base 246
};

class M1129_MC_EP1;
class DZE_Veh_M1129_MC: M1129_MC_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_M1129_MC";
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
		ItemTankORP[] = {"DZE_Veh_M1129_MC_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1129_MC_1: DZE_Veh_M1129_MC {
	displayName = "$STR_VEH_NAME_M1129_MC+";
	original = "DZE_Veh_M1129_MC";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5;
	turnCoef = 5;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1129_MC_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1129_MC_2: DZE_Veh_M1129_MC_1 {
	displayName = "$STR_VEH_NAME_M1129_MC++";
	armor = 220; // base 160
	damageResistance = 0.048; // base 0.0082

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1129_MC_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1129_MC_3: DZE_Veh_M1129_MC_2 {
	displayName = "$STR_VEH_NAME_M1129_MC+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1129_MC_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1129_MC_4: DZE_Veh_M1129_MC_3 {
	displayName = "$STR_VEH_NAME_M1129_MC++++";
	fuelCapacity = 550; // base 246
};

class M1130_CV_EP1;
class DZE_Veh_M1130_CV: M1130_CV_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_M1130_CV";
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
		ItemTankORP[] = {"DZE_Veh_M1130_CV_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1130_CV_1: DZE_Veh_M1130_CV {
	displayName = "$STR_VEH_NAME_M1130_CV+";
	original = "DZE_Veh_M1130_CV";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5;
	turnCoef = 5;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1130_CV_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1130_CV_2: DZE_Veh_M1130_CV_1 {
	displayName = "$STR_VEH_NAME_M1130_CV++";
	armor = 220; // base 160
	damageResistance = 0.048; // base 0.0082

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1130_CV_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1130_CV_3: DZE_Veh_M1130_CV_2 {
	displayName = "$STR_VEH_NAME_M1130_CV+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1130_CV_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1130_CV_4: DZE_Veh_M1130_CV_3 {
	displayName = "$STR_VEH_NAME_M1130_CV++++";
	fuelCapacity = 550; // base 246
};

class M1133_MEV_EP1;
class DZE_Veh_M1133_MEV: M1133_MEV_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_M1133_MEV";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;

	supplyRadius = 1.8;
	crewVulnerable = 1;
	attendant = 0;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_M1133_MEV_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1133_MEV_1: DZE_Veh_M1133_MEV {
	displayName = "$STR_VEH_NAME_M1133_MEV+";
	original = "DZE_Veh_M1133_MEV";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5;
	turnCoef = 5;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1133_MEV_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1133_MEV_2: DZE_Veh_M1133_MEV_1 {
	displayName = "$STR_VEH_NAME_M1133_MEV++";
	armor = 220; // base 160
	damageResistance = 0.048; // base 0.0082

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1133_MEV_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1133_MEV_3: DZE_Veh_M1133_MEV_2 {
	displayName = "$STR_VEH_NAME_M1133_MEV+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1133_MEV_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1133_MEV_4: DZE_Veh_M1133_MEV_3 {
	displayName = "$STR_VEH_NAME_M1133_MEV++++";
	fuelCapacity = 550; // base 246
};

class M1135_ATGMV_EP1;
class DZE_Veh_M1135_ATGMV: M1135_ATGMV_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_M1135_ATGMV";
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
		ItemTankORP[] = {"DZE_Veh_M1135_ATGMV_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1135_ATGMV_1: DZE_Veh_M1135_ATGMV {
	displayName = "$STR_VEH_NAME_M1135_ATGMV+";
	original = "DZE_Veh_M1135_ATGMV";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5;
	turnCoef = 5;  // base 4

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M1135_ATGMV_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1135_ATGMV_2: DZE_Veh_M1135_ATGMV_1 {
	displayName = "$STR_VEH_NAME_M1135_ATGMV++";
	armor = 220; // base 160
	damageResistance = 0.048; // base 0.0082

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M1135_ATGMV_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1135_ATGMV_3: DZE_Veh_M1135_ATGMV_2 {
	displayName = "$STR_VEH_NAME_M1135_ATGMV+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M1135_ATGMV_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M1135_ATGMV_4: DZE_Veh_M1135_ATGMV_3 {
	displayName = "$STR_VEH_NAME_M1135_ATGMV++++";
	fuelCapacity = 550; // base 246
};
