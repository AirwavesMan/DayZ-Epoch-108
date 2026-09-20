class T72_INS;
class DZE_Veh_T72_Rusty: T72_INS {
	scope = 2;
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	vehicleClass = "DZE Vehicles Tanks";
	DZE_MACRO_VEHICLE_SIDE
	displayName = "$STR_VEH_NAME_T72_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\t72\T72_1_wrecked_co.paa","\dayz_epoch_c\skins\t72\T72_2_wrecked_co.paa","\dayz_epoch_c\skins\t72\T72_3_wrecked_co.paa"};

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T72_Rusty_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_Rusty_1: DZE_Veh_T72_Rusty {
	displayName = "$STR_VEH_NAME_T72_RUST+";
	original = "DZE_Veh_T72_Rusty";
	maxSpeed = 85; // base 60
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T72_Rusty_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_Rusty_2: DZE_Veh_T72_Rusty_1 {
	displayName = "$STR_VEH_NAME_T72_RUST++";
	armor = 885; // base 690
	damageResistance = 0.0106; // base 0.00544

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T72_Rusty_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_Rusty_3: DZE_Veh_T72_Rusty_2 {
	displayName = "$STR_VEH_NAME_T72_RUST+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T72_Rusty_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T72_Rusty_4: DZE_Veh_T72_Rusty_3 {
	displayName = "$STR_VEH_NAME_T72_RUST++++";
	fuelCapacity = 1200; // base 700
};

class DZE_Veh_T72_Winter: T72_INS {
	scope = 2;
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	vehicleClass = "DZE Vehicles Tanks";
	DZE_MACRO_VEHICLE_SIDE
	displayName = "$STR_VEH_NAME_T72_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\t72\T72_1_winter_co.paa","\dayz_epoch_c\skins\t72\T72_2_winter_co.paa","\dayz_epoch_c\skins\t72\T72_3_winter_co.paa"};

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T72_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_Winter_1: DZE_Veh_T72_Winter {
	displayName = "$STR_VEH_NAME_T72_WINTER+";
	original = "DZE_Veh_T72_Winter";
	maxSpeed = 85; // base 60
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T72_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_Winter_2: DZE_Veh_T72_Winter_1 {
	displayName = "$STR_VEH_NAME_T72_WINTER++";
	armor = 885; // base 690
	damageResistance = 0.0106; // base 0.00544

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T72_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_Winter_3: DZE_Veh_T72_Winter_2 {
	displayName = "$STR_VEH_NAME_T72_WINTER+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T72_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T72_Winter_4: DZE_Veh_T72_Winter_3 {
	displayName = "$STR_VEH_NAME_T72_WINTER++++";
	fuelCapacity = 1200; // base 700
};

class T72_ACR;
class DZE_Veh_T72M4: T72_ACR {
	scope = 2;
	displayName = "$STR_VEH_NAME_T72M4";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T72M4_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72M4_1: DZE_Veh_T72M4 {
	displayName = "$STR_VEH_NAME_T72M4+";
	original = "DZE_Veh_T72M4";
	maxSpeed = 100; // base 70
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T72M4_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72M4_2: DZE_Veh_T72M4_1 {
	displayName = "$STR_VEH_NAME_T72M4++";
	armor = 955; // base 745
	damageResistance = 0.00974; // base 0.005

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T72M4_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72M4_3: DZE_Veh_T72M4_2 {
	displayName = "$STR_VEH_NAME_T72M4+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T72M4_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T72M4_4: DZE_Veh_T72M4_3 {
	displayName = "$STR_VEH_NAME_T72M4++++";
	fuelCapacity = 1200; // base 700
};

class T72_CDF;
class DZE_Veh_T72_CDF: T72_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_T72_CDF";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T72_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_CDF_1: DZE_Veh_T72_CDF {
	displayName = "$STR_VEH_NAME_T72_CDF+";
	original = "DZE_Veh_T72_CDF";
	maxSpeed = 85; // base 60
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T72_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_CDF_2: DZE_Veh_T72_CDF_1 {
	displayName = "$STR_VEH_NAME_T72_CDF++";
	armor = 885; // base 690
	damageResistance = 0.0106; // base 0.00544

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T72_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_CDF_3: DZE_Veh_T72_CDF_2 {
	displayName = "$STR_VEH_NAME_T72_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T72_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T72_CDF_4: DZE_Veh_T72_CDF_3 {
	displayName = "$STR_VEH_NAME_T72_CDF++++";
	fuelCapacity = 1200; // base 700
};

class T72_Gue;
class DZE_Veh_T72_GUE: T72_Gue {
	scope = 2;
	displayName = "$STR_VEH_NAME_T72_GUE";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T72_GUE_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_GUE_1: DZE_Veh_T72_GUE {
	displayName = "$STR_VEH_NAME_T72_GUE+";
	original = "DZE_Veh_T72_GUE";
	maxSpeed = 85; // base 60
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T72_GUE_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_GUE_2: DZE_Veh_T72_GUE_1 {
	displayName = "$STR_VEH_NAME_T72_GUE++";
	armor = 885; // base 690
	damageResistance = 0.0106; // base 0.00544

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T72_GUE_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_GUE_3: DZE_Veh_T72_GUE_2 {
	displayName = "$STR_VEH_NAME_T72_GUE+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T72_GUE_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T72_GUE_4: DZE_Veh_T72_GUE_3 {
	displayName = "$STR_VEH_NAME_T72_GUE++++";
	fuelCapacity = 1200; // base 700
};

class T72_RU;
class DZE_Veh_T72_RU: T72_RU {
	scope = 2;
	displayName = "$STR_VEH_NAME_T72_RU";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T72_RU_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_RU_1: DZE_Veh_T72_RU {
	displayName = "$STR_VEH_NAME_T72_RU+";
	original = "DZE_Veh_T72_RU";
	maxSpeed = 85; // base 60
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T72_RU_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_RU_2: DZE_Veh_T72_RU_1 {
	displayName = "$STR_VEH_NAME_T72_RU++";
	armor = 885; // base 690
	damageResistance = 0.0106; // base 0.00544

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T72_RU_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_RU_3: DZE_Veh_T72_RU_2 {
	displayName = "$STR_VEH_NAME_T72_RU+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T72_RU_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T72_RU_4: DZE_Veh_T72_RU_3 {
	displayName = "$STR_VEH_NAME_T72_RU++++";
	fuelCapacity = 1200; // base 700
};

class T72_TK_EP1;
class DZE_Veh_T72_TK: T72_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_T72_TK";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T72_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_TK_1: DZE_Veh_T72_TK {
	displayName = "$STR_VEH_NAME_T72_TK+";
	original = "DZE_Veh_T72_TK";
	maxSpeed = 85; // base 60
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T72_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_TK_2: DZE_Veh_T72_TK_1 {
	displayName = "$STR_VEH_NAME_T72_TK++";
	armor = 885; // base 690
	damageResistance = 0.0106; // base 0.00544

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T72_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T72_TK_3: DZE_Veh_T72_TK_2 {
	displayName = "$STR_VEH_NAME_T72_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T72_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T72_TK_4: DZE_Veh_T72_TK_3 {
	displayName = "$STR_VEH_NAME_T72_TK++++";
	fuelCapacity = 1200; // base 700
};
