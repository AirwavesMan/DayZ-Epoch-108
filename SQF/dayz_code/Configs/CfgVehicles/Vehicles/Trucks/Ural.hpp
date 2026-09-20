class Ural_INS;
class DZE_Veh_Ural_INS: Ural_INS {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_INS";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_INS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_INS_1: DZE_Veh_Ural_INS {
	displayName = "$STR_VEH_NAME_URAL_INS+";
	original = "DZE_Veh_Ural_INS";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_INS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_INS_2: DZE_Veh_Ural_INS_1 {
	displayName = "$STR_VEH_NAME_URAL_INS++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_INS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_INS_3: DZE_Veh_Ural_INS_2 {
	displayName = "$STR_VEH_NAME_URAL_INS+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_INS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_INS_4: DZE_Veh_Ural_INS_3 {
	displayName = "$STR_VEH_NAME_URAL_INS++++";
	fuelCapacity = 615;
};

class DZE_Veh_Ural_Rusty: Ural_INS {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_kabina_wrecked_co.paa","dayz_epoch_c\skins\ural\ural_plachta_wrecked_co.paa"};
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Rusty_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Rusty_1: DZE_Veh_Ural_Rusty {
	displayName = "$STR_VEH_NAME_URAL_RUST+";
	original = "DZE_Veh_Ural_Rusty";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Rusty_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_Rusty_2: DZE_Veh_Ural_Rusty_1 {
	displayName = "$STR_VEH_NAME_URAL_RUST++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Rusty_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Rusty_3: DZE_Veh_Ural_Rusty_2 {
	displayName = "$STR_VEH_NAME_URAL_RUST+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Rusty_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_Rusty_4: DZE_Veh_Ural_Rusty_3 {
	displayName = "$STR_VEH_NAME_URAL_RUST++++";
	fuelCapacity = 615;
};

class Ural_CDF;
class DZE_Veh_Ural_CDF: Ural_CDF {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_CDF";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_CDF_1: DZE_Veh_Ural_CDF {
	displayName = "$STR_VEH_NAME_URAL_CDF+";
	original = "DZE_Veh_Ural_CDF";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_CDF_2: DZE_Veh_Ural_CDF_1 {
	displayName = "$STR_VEH_NAME_URAL_CDF++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_CDF_3: DZE_Veh_Ural_CDF_2 {
	displayName = "$STR_VEH_NAME_URAL_CDF+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_CDF_4: DZE_Veh_Ural_CDF_3 {
	displayName = "$STR_VEH_NAME_URAL_CDF++++";
	fuelCapacity = 615;
};

class UralOpen_CDF;
class DZE_Veh_Ural_Open_CDF: UralOpen_CDF {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Open_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Open_CDF_1: DZE_Veh_Ural_Open_CDF {
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN+";
	original = "DZE_Veh_Ural_Open_CDF";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Open_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_Open_CDF_2: DZE_Veh_Ural_Open_CDF_1 {
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Open_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Open_CDF_3: DZE_Veh_Ural_Open_CDF_2 {
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Open_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_Open_CDF_4: DZE_Veh_Ural_Open_CDF_3 {
	displayName = "$STR_VEH_NAME_URAL_CDF_OPEN++++";
	fuelCapacity = 615;
};

class Ural_TK_CIV_EP1;
class DZE_Veh_Ural_TK: Ural_TK_CIV_EP1 {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_TK";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_TK_1: DZE_Veh_Ural_TK {
	displayName = "$STR_VEH_NAME_URAL_TK+";
	original = "DZE_Veh_Ural_TK";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_TK_2: DZE_Veh_Ural_TK_1 {
	displayName = "$STR_VEH_NAME_URAL_TK++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_TK_3: DZE_Veh_Ural_TK_2 {
	displayName = "$STR_VEH_NAME_URAL_TK+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_TK_4: DZE_Veh_Ural_TK_3 {
	displayName = "$STR_VEH_NAME_URAL_TK++++";
	fuelCapacity = 615;
};

class Ural_UN_EP1;
class DZE_Veh_Ural_UN: Ural_UN_EP1 {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_UN";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_UN_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_UN_1: DZE_Veh_Ural_UN {
	displayName = "$STR_VEH_NAME_URAL_UN+";
	original = "DZE_Veh_Ural_UN";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_UN_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_UN_2: DZE_Veh_Ural_UN_1 {
	displayName = "$STR_VEH_NAME_URAL_UN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_UN_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_UN_3: DZE_Veh_Ural_UN_2 {
	displayName = "$STR_VEH_NAME_URAL_UN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_UN_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_UN_4: DZE_Veh_Ural_UN_3 {
	displayName = "$STR_VEH_NAME_URAL_UN++++";
	fuelCapacity = 615;
};

class UralCivil;
class DZE_Veh_Ural_Civil: UralCivil {
	displayName = "$STR_VEH_NAME_URAL_CIVIL";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Civil_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Civil_1: DZE_Veh_Ural_Civil {
	displayName = "$STR_VEH_NAME_URAL_CIVIL+";
	original = "DZE_Veh_Ural_Civil";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Civil_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_Civil_2: DZE_Veh_Ural_Civil_1 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Civil_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Civil_3: DZE_Veh_Ural_Civil_2 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Civil_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_Civil_4: DZE_Veh_Ural_Civil_3 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL++++";
	fuelCapacity = 615;
};

class UralCivil2;
class DZE_Veh_Ural_Open_Civil: UralCivil2 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN";
	picture = "\Ca\wheeled\data\ico\Ural_Open_CA.paa";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Open_Civil_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Open_Civil_1: DZE_Veh_Ural_Open_Civil {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN+";
	original = "DZE_Veh_Ural_Open_Civil";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Open_Civil_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_Open_Civil_2: DZE_Veh_Ural_Open_Civil_1 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Open_Civil_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Open_Civil_3: DZE_Veh_Ural_Open_Civil_2 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Open_Civil_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_Open_Civil_4: DZE_Veh_Ural_Open_Civil_3 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN++++";
	fuelCapacity = 615;
};

class UralSupply_TK_EP1;
class DZE_Veh_Ural_Supply_TK: UralSupply_TK_EP1 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Supply_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Supply_TK_1: DZE_Veh_Ural_Supply_TK {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN+";
	original = "DZE_Veh_Ural_Supply_TK";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Supply_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_Supply_TK_2: DZE_Veh_Ural_Supply_TK_1 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Supply_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Supply_TK_3: DZE_Veh_Ural_Supply_TK_2 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Supply_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_Supply_TK_4: DZE_Veh_Ural_Supply_TK_3 {
	displayName = "$STR_VEH_NAME_URAL_CIVIL_OPEN++++";
	fuelCapacity = 615;
};

class UralRefuel_TK_EP1;
class DZE_Veh_Ural_Fuel_Woodland: UralRefuel_TK_EP1 {
	displayName = "$STR_VEH_NAME_URAL_FUEL";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 5;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Fuel_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Ural_Fuel_Woodland_1: DZE_Veh_Ural_Fuel_Woodland {
	displayName = "$STR_VEH_NAME_URAL_FUEL+";
	original = "DZE_Veh_Ural_Fuel_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Fuel_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class DZE_Veh_Ural_Fuel_Woodland_2: DZE_Veh_Ural_Fuel_Woodland_1 {
	displayName = "$STR_VEH_NAME_URAL_FUEL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Fuel_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Ural_Fuel_Woodland_3: DZE_Veh_Ural_Fuel_Woodland_2 {
	displayName = "$STR_VEH_NAME_URAL_FUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Fuel_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class DZE_Veh_Ural_Fuel_Woodland_4: DZE_Veh_Ural_Fuel_Woodland_3 {
	displayName = "$STR_VEH_NAME_URAL_FUEL++++";
	fuelCapacity = 20000;
};

class UralRefuel_CDF;
class DZE_Veh_Ural_Fuel_CDF: UralRefuel_CDF {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 5;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Fuel_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Ural_Fuel_CDF_1: DZE_Veh_Ural_Fuel_CDF {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF+";
	original = "DZE_Veh_Ural_Fuel_CDF";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Fuel_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class DZE_Veh_Ural_Fuel_CDF_2: DZE_Veh_Ural_Fuel_CDF_1 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Fuel_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Ural_Fuel_CDF_3: DZE_Veh_Ural_Fuel_CDF_2 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Fuel_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class DZE_Veh_Ural_Fuel_CDF_4: DZE_Veh_Ural_Fuel_CDF_3 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_CDF++++";
	fuelCapacity = 20000;
};

class UralReammo_CDF;
class DZE_Veh_Ural_WeaponTransport_Woodland: UralReammo_CDF {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 8;
	transportAmmo = 0;
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_WeaponTransport_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_Woodland_1: DZE_Veh_Ural_WeaponTransport_Woodland {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS+";
	original = "DZE_Veh_Ural_WeaponTransport_Woodland";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_WeaponTransport_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_Woodland_2: DZE_Veh_Ural_WeaponTransport_Woodland_1 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_WeaponTransport_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_Woodland_3: DZE_Veh_Ural_WeaponTransport_Woodland_2 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_WeaponTransport_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_Woodland_4: DZE_Veh_Ural_WeaponTransport_Woodland_3 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS++++";
	fuelCapacity = 615;
};

class UralRepair_CDF;
class DZE_Veh_Ural_MaterialTransport_Woodland: UralRepair_CDF {
	displayName = "$STR_VEH_NAME_URAL_AMMO";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 8;
	transportRepair = 0;
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_MaterialTransport_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_Woodland_1: DZE_Veh_Ural_MaterialTransport_Woodland {
	displayName = "$STR_VEH_NAME_URAL_AMMO+";
	original = "DZE_Veh_Ural_MaterialTransport_Woodland";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_MaterialTransport_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_Woodland_2: DZE_Veh_Ural_MaterialTransport_Woodland_1 {
	displayName = "$STR_VEH_NAME_URAL_AMMO++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_MaterialTransport_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_Woodland_3: DZE_Veh_Ural_MaterialTransport_Woodland_2 {
	displayName = "$STR_VEH_NAME_URAL_AMMO+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_MaterialTransport_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_Woodland_4: DZE_Veh_Ural_MaterialTransport_Woodland_3 {
	displayName = "$STR_VEH_NAME_URAL_AMMO++++";
	fuelCapacity = 615;
};

class UralRefuel_INS;
class DZE_Veh_Ural_Fuel_INS: UralRefuel_INS {
	displayName = "$STR_VEH_NAME_URAL_FUEL_INS";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 5;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Fuel_INS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Ural_Fuel_INS_1: DZE_Veh_Ural_Fuel_INS {
	displayName = "$STR_VEH_NAME_URAL_FUEL_INS+";
	original = "DZE_Veh_Ural_Fuel_INS";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Fuel_INS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class DZE_Veh_Ural_Fuel_INS_2: DZE_Veh_Ural_Fuel_INS_1 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_INS++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Fuel_INS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Ural_Fuel_INS_3: DZE_Veh_Ural_Fuel_INS_2 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_INS+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Fuel_INS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class DZE_Veh_Ural_Fuel_INS_4: DZE_Veh_Ural_Fuel_INS_3 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_INS++++";
	fuelCapacity = 20000;
};

class UralReammo_INS;
class DZE_Veh_Ural_WeaponTransport_INS: UralReammo_INS {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_INS";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 8;
	transportAmmo = 0;
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_WeaponTransport_INS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_INS_1: DZE_Veh_Ural_WeaponTransport_INS {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_INS+";
	original = "DZE_Veh_Ural_WeaponTransport_INS";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_WeaponTransport_INS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_INS_2: DZE_Veh_Ural_WeaponTransport_INS_1 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_INS++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_WeaponTransport_INS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_INS_3: DZE_Veh_Ural_WeaponTransport_INS_2 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_INS+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_WeaponTransport_INS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_INS_4: DZE_Veh_Ural_WeaponTransport_INS_3 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_INS++++";
	fuelCapacity = 615;
};

class UralRepair_INS;
class DZE_Veh_Ural_MaterialTransport_INS: UralRepair_INS {
	displayName = "$STR_VEH_NAME_URAL_AMMO_INS";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 8;
	transportRepair = 0;
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_MaterialTransport_INS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_INS_1: DZE_Veh_Ural_MaterialTransport_INS {
	displayName = "$STR_VEH_NAME_URAL_AMMO_INS+";
	original = "DZE_Veh_Ural_MaterialTransport_INS";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_MaterialTransport_INS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_INS_2: DZE_Veh_Ural_MaterialTransport_INS_1 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_INS++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_MaterialTransport_INS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_INS_3: DZE_Veh_Ural_MaterialTransport_INS_2 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_INS+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_MaterialTransport_INS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_INS_4: DZE_Veh_Ural_MaterialTransport_INS_3 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_INS++++";
	fuelCapacity = 615;
};

class DZE_Veh_Ural_Winter: DZE_Veh_Ural_INS {
	displayName = "$STR_VEH_NAME_URAL_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_plachta_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Winter_1: DZE_Veh_Ural_Winter {
	displayName = "$STR_VEH_NAME_URAL_WINTER+";
	original = "DZE_Veh_Ural_Winter";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_Winter_2: DZE_Veh_Ural_Winter_1 {
	displayName = "$STR_VEH_NAME_URAL_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Winter_3: DZE_Veh_Ural_Winter_2 {
	displayName = "$STR_VEH_NAME_URAL_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_Winter_4: DZE_Veh_Ural_Winter_3 {
	displayName = "$STR_VEH_NAME_URAL_WINTER++++";
	fuelCapacity = 615;
};

class DZE_Veh_Ural_Open_Winter: DZE_Veh_Ural_Open_CDF {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_open_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Open_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Open_Winter_1: DZE_Veh_Ural_Open_Winter {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN+";
	original = "DZE_Veh_Ural_Open_Winter";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Open_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_Open_Winter_2: DZE_Veh_Ural_Open_Winter_1 {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Open_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_Open_Winter_3: DZE_Veh_Ural_Open_Winter_2 {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Open_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_Open_Winter_4: DZE_Veh_Ural_Open_Winter_3 {
	displayName = "$STR_VEH_NAME_URAL_WINTER_OPEN++++";
	fuelCapacity = 615;
};

class DZE_Veh_Ural_Fuel_Winter: DZE_Veh_Ural_Fuel_Woodland {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_open_winter_co.paa","\dayz_epoch_c\skins\ural\ural_fuel_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_Fuel_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Ural_Fuel_Winter_1: DZE_Veh_Ural_Fuel_Winter {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER+";
	original = "DZE_Veh_Ural_Fuel_Winter";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_Fuel_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class DZE_Veh_Ural_Fuel_Winter_2: DZE_Veh_Ural_Fuel_Winter_1 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_Fuel_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Ural_Fuel_Winter_3: DZE_Veh_Ural_Fuel_Winter_2 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_Fuel_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class DZE_Veh_Ural_Fuel_Winter_4: DZE_Veh_Ural_Fuel_Winter_3 {
	displayName = "$STR_VEH_NAME_URAL_FUEL_WINTER++++";
	fuelCapacity = 20000;
};

class DZE_Veh_Ural_WeaponTransport_Winter: DZE_Veh_Ural_WeaponTransport_Woodland {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_plachta_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_WeaponTransport_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_Winter_1: DZE_Veh_Ural_WeaponTransport_Winter {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER+";
	original = "DZE_Veh_Ural_WeaponTransport_Winter";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_WeaponTransport_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_Winter_2: DZE_Veh_Ural_WeaponTransport_Winter_1 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_WeaponTransport_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_Winter_3: DZE_Veh_Ural_WeaponTransport_Winter_2 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_WeaponTransport_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_WeaponTransport_Winter_4: DZE_Veh_Ural_WeaponTransport_Winter_3 {
	displayName = "$STR_VEH_NAME_URAL_WEAPONS_WINTER++++";
	fuelCapacity = 615;
};

class DZE_Veh_Ural_MaterialTransport_Winter: DZE_Veh_Ural_MaterialTransport_Woodland {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ural\ural_winter_co.paa","\dayz_epoch_c\skins\ural\ural_repair_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_MaterialTransport_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_Winter_1: DZE_Veh_Ural_MaterialTransport_Winter {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER+";
	original = "DZE_Veh_Ural_MaterialTransport_Winter";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_MaterialTransport_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_Winter_2: DZE_Veh_Ural_MaterialTransport_Winter_1 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_MaterialTransport_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_Winter_3: DZE_Veh_Ural_MaterialTransport_Winter_2 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_MaterialTransport_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_MaterialTransport_Winter_4: DZE_Veh_Ural_MaterialTransport_Winter_3 {
	displayName = "$STR_VEH_NAME_URAL_AMMO_WINTER++++";
	fuelCapacity = 615;
};
