class BMP2_HQ_CDF;
class DZE_Veh_BMP2_HQ_CDF: BMP2_HQ_CDF {
	displayName = "$STR_VEH_NAME_BMP2_CDF";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference

	scope = 2;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_HQ_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_CDF_1: DZE_Veh_BMP2_HQ_CDF {
	displayName = "$STR_VEH_NAME_BMP2_CDF+";
	original = "DZE_Veh_BMP2_HQ_CDF";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_HQ_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_CDF_2: DZE_Veh_BMP2_HQ_CDF_1 {
	displayName = "$STR_VEH_NAME_BMP2_CDF++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_HQ_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_CDF_3: DZE_Veh_BMP2_HQ_CDF_2 {
	displayName = "$STR_VEH_NAME_BMP2_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_HQ_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_HQ_CDF_4: DZE_Veh_BMP2_HQ_CDF_3 {
	displayName = "$STR_VEH_NAME_BMP2_CDF++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_HQ_INS;
class DZE_Veh_BMP2_HQ_INS: BMP2_HQ_INS {
	displayName = "$STR_VEH_NAME_BMP2_INS";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference

	scope = 2;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_HQ_INS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_INS_1: DZE_Veh_BMP2_HQ_INS {
	displayName = "$STR_VEH_NAME_BMP2_INS+";
	original = "DZE_Veh_BMP2_HQ_INS";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_HQ_INS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_INS_2: DZE_Veh_BMP2_HQ_INS_1 {
	displayName = "$STR_VEH_NAME_BMP2_INS++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_HQ_INS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_INS_3: DZE_Veh_BMP2_HQ_INS_2 {
	displayName = "$STR_VEH_NAME_BMP2_INS+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_HQ_INS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_HQ_INS_4: DZE_Veh_BMP2_HQ_INS_3 {
	displayName = "$STR_VEH_NAME_BMP2_INS++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_HQ_TK_EP1;
class DZE_Veh_BMP2_HQ_TK: BMP2_HQ_TK_EP1 {
	displayName = "$STR_VEH_NAME_BMP2_TK";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Turrets; // External class reference
	class MainTurret; // External class reference

	scope = 2;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_HQ_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_TK_1: DZE_Veh_BMP2_HQ_TK {
	displayName = "$STR_VEH_NAME_BMP2_TK+";
	original = "DZE_Veh_BMP2_HQ_TK";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_HQ_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_TK_2: DZE_Veh_BMP2_HQ_TK_1 {
	displayName = "$STR_VEH_NAME_BMP2_TK++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_HQ_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_HQ_TK_3: DZE_Veh_BMP2_HQ_TK_2 {
	displayName = "$STR_VEH_NAME_BMP2_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_HQ_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_HQ_TK_4: DZE_Veh_BMP2_HQ_TK_3 {
	displayName = "$STR_VEH_NAME_BMP2_TK++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_Ambul_INS;
class DZE_Veh_BMP2_Ambulance_INS: BMP2_Ambul_INS {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;
	attendant = 0;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_Ambulance_INS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_INS_1: DZE_Veh_BMP2_Ambulance_INS {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS+";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS+";
	original = "DZE_Veh_BMP2_Ambulance_INS";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_Ambulance_INS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_INS_2: DZE_Veh_BMP2_Ambulance_INS_1 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_Ambulance_INS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_INS_3: DZE_Veh_BMP2_Ambulance_INS_2 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS+++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_Ambulance_INS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_Ambulance_INS_4: DZE_Veh_BMP2_Ambulance_INS_3 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_INS++++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_INS++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_Ambul_CDF;
class DZE_Veh_BMP2_Ambulance_CDF: BMP2_Ambul_CDF {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;
	attendant = 0;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_Ambulance_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_CDF_1: DZE_Veh_BMP2_Ambulance_CDF {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF+";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF+";
	original = "DZE_Veh_BMP2_Ambulance_CDF";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_Ambulance_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_CDF_2: DZE_Veh_BMP2_Ambulance_CDF_1 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_Ambulance_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_CDF_3: DZE_Veh_BMP2_Ambulance_CDF_2 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF+++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_Ambulance_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_Ambulance_CDF_4: DZE_Veh_BMP2_Ambulance_CDF_3 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF++++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF++++";
	fuelCapacity = 1200; // base 700
};

class DZE_Veh_BMP2_Ambulance_Winter: DZE_Veh_BMP2_Ambulance_CDF {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\bmp\bmp2_01_camo_winter_co.paa","\dayz_epoch_c\skins\bmp\bmp2_02_camo_winter_co.paa"};

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_Ambulance_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_Winter_1: DZE_Veh_BMP2_Ambulance_Winter {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER+";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER+";
	original = "DZE_Veh_BMP2_Ambulance_Winter";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_Ambulance_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_Winter_2: DZE_Veh_BMP2_Ambulance_Winter_1 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_Ambulance_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Ambulance_Winter_3: DZE_Veh_BMP2_Ambulance_Winter_2 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER+++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_Ambulance_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_Ambulance_Winter_4: DZE_Veh_BMP2_Ambulance_Winter_3 {
	displayName = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER++++";
	displayNameShort = "$STR_VEH_NAME_BMP2_AMBULANCE_CDF_WINTER++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_INS;
class DZE_Veh_BMP2_Rusty: BMP2_INS {
	scope = 2;
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	vehicleClass = "DZE Vehicles Tanks";
	DZE_MACRO_VEHICLE_SIDE
	displayName = "$STR_VEH_NAME_BMP2_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\bmp\bmp2_01_wrecked_co.paa","\dayz_epoch_c\skins\bmp\bmp2_02_wrecked_co.paa"};

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_Rusty_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Rusty_1: DZE_Veh_BMP2_Rusty {
	displayName = "$STR_VEH_NAME_BMP2_RUST+";
	original = "DZE_Veh_BMP2_Rusty";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_Rusty_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Rusty_2: DZE_Veh_BMP2_Rusty_1 {
	displayName = "$STR_VEH_NAME_BMP2_RUST++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_Rusty_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Rusty_3: DZE_Veh_BMP2_Rusty_2 {
	displayName = "$STR_VEH_NAME_BMP2_RUST+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_Rusty_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_Rusty_4: DZE_Veh_BMP2_Rusty_3 {
	displayName = "$STR_VEH_NAME_BMP2_RUST++++";
	fuelCapacity = 1200; // base 700
};

class DZE_Veh_BMP2_Winter: BMP2_INS {
	scope = 2;
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	vehicleClass = "DZE Vehicles Tanks";
	displayName = "$STR_VEH_NAME_BMP2_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\bmp\bmp2_01_winter.paa","\dayz_epoch_c\skins\bmp\bmp2_02_winter.paa"};

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Winter_1: DZE_Veh_BMP2_Winter {
	displayName = "$STR_VEH_NAME_BMP2_WINTER+";
	original = "DZE_Veh_BMP2_Winter";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Winter_2: DZE_Veh_BMP2_Winter_1 {
	displayName = "$STR_VEH_NAME_BMP2_WINTER++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Winter_3: DZE_Veh_BMP2_Winter_2 {
	displayName = "$STR_VEH_NAME_BMP2_WINTER+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_Winter_4: DZE_Veh_BMP2_Winter_3 {
	displayName = "$STR_VEH_NAME_BMP2_WINTER++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_ACR;
class DZE_Veh_BMP2_Woodland: BMP2_ACR {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_IFV_WOODLAND";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Woodland_1: DZE_Veh_BMP2_Woodland {
	displayName = "$STR_VEH_NAME_BMP2_IFV_WOODLAND+";
	original = "DZE_Veh_BMP2_Woodland";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Woodland_2: DZE_Veh_BMP2_Woodland_1 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_WOODLAND++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Woodland_3: DZE_Veh_BMP2_Woodland_2 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_WOODLAND+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_Woodland_4: DZE_Veh_BMP2_Woodland_3 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_WOODLAND++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_CDF;
class DZE_Veh_BMP2_CDF: BMP2_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_IFV_CDF";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_CDF_1: DZE_Veh_BMP2_CDF {
	displayName = "$STR_VEH_NAME_BMP2_IFV_CDF+";
	original = "DZE_Veh_BMP2_CDF";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_CDF_2: DZE_Veh_BMP2_CDF_1 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_CDF++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_CDF_3: DZE_Veh_BMP2_CDF_2 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_CDF_4: DZE_Veh_BMP2_CDF_3 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_CDF++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_Des_ACR;
class DZE_Veh_BMP2_Desert: BMP2_Des_ACR {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_IFV_DESERT";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_Desert_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Desert_1: DZE_Veh_BMP2_Desert {
	displayName = "$STR_VEH_NAME_BMP2_IFV_DESERT+";
	original = "DZE_Veh_BMP2_Desert";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_Desert_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Desert_2: DZE_Veh_BMP2_Desert_1 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_DESERT++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_Desert_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_Desert_3: DZE_Veh_BMP2_Desert_2 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_DESERT+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_Desert_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_Desert_4: DZE_Veh_BMP2_Desert_3 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_DESERT++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_Gue;
class DZE_Veh_BMP2_GUE: BMP2_Gue {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_IFV_GUE";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_GUE_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_GUE_1: DZE_Veh_BMP2_GUE {
	displayName = "$STR_VEH_NAME_BMP2_IFV_GUE+";
	original = "DZE_Veh_BMP2_GUE";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_GUE_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_GUE_2: DZE_Veh_BMP2_GUE_1 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_GUE++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_GUE_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_GUE_3: DZE_Veh_BMP2_GUE_2 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_GUE+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_GUE_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_GUE_4: DZE_Veh_BMP2_GUE_3 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_GUE++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_TK_EP1;
class DZE_Veh_BMP2_TK: BMP2_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_IFV_TK";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_TK_1: DZE_Veh_BMP2_TK {
	displayName = "$STR_VEH_NAME_BMP2_IFV_TK+";
	original = "DZE_Veh_BMP2_TK";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_TK_2: DZE_Veh_BMP2_TK_1 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_TK++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_TK_3: DZE_Veh_BMP2_TK_2 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_TK_4: DZE_Veh_BMP2_TK_3 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_TK++++";
	fuelCapacity = 1200; // base 700
};

class BMP2_UN_EP1;
class DZE_Veh_BMP2_UN: BMP2_UN_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BMP2_IFV_UN";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_BMP2_UN_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_UN_1: DZE_Veh_BMP2_UN {
	displayName = "$STR_VEH_NAME_BMP2_IFV_UN+";
	original = "DZE_Veh_BMP2_UN";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_BMP2_UN_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_UN_2: DZE_Veh_BMP2_UN_1 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_UN++";
	armor = 320; // base 250
	damageResistance = 0.035; // base 0.01796

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_BMP2_UN_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BMP2_UN_3: DZE_Veh_BMP2_UN_2 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_UN+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_BMP2_UN_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_BMP2_UN_4: DZE_Veh_BMP2_UN_3 {
	displayName = "$STR_VEH_NAME_BMP2_IFV_UN++++";
	fuelCapacity = 1200; // base 700
};
