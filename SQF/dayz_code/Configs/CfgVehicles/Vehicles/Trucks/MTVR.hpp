class MTVR;
class DZE_Veh_MTVR_Woodland: MTVR {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_MTVR_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_Woodland_1: DZE_Veh_MTVR_Woodland {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND+";
	original = "DZE_Veh_MTVR_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 7.0;  // base 5.0

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_MTVR_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_MTVR_Woodland_2: DZE_Veh_MTVR_Woodland_1 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_MTVR_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_Woodland_3: DZE_Veh_MTVR_Woodland_2 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_MTVR_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_MTVR_Woodland_4: DZE_Veh_MTVR_Woodland_3 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND++++";
	fuelCapacity = 615;
};

class MTVR_DES_EP1;
class DZE_Veh_MTVR_Desert: MTVR_DES_EP1 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_MTVR_Desert_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_Desert_1: DZE_Veh_MTVR_Desert {
	displayName = "$STR_VEH_NAME_MTVR_DESERT+";
	original = "DZE_Veh_MTVR_Desert";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 7.0;  // base 5.0

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_MTVR_Desert_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_MTVR_Desert_2: DZE_Veh_MTVR_Desert_1 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_MTVR_Desert_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_Desert_3: DZE_Veh_MTVR_Desert_2 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_MTVR_Desert_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_MTVR_Desert_4: DZE_Veh_MTVR_Desert_3 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT++++";
	fuelCapacity = 615;
};

class MtvrRefuel_DES_EP1;
class DZE_Veh_MTVR_Fuel_Desert: MtvrRefuel_DES_EP1 {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL";
	vehicleClass = "DZE Vehicles Trucks";
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 5;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_MTVR_Fuel_Desert_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class DZE_Veh_MTVR_Fuel_Desert_1: DZE_Veh_MTVR_Fuel_Desert {
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL+";
	original = "DZE_Veh_MTVR_Fuel_Desert";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 7.0;  // base 5.0

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_MTVR_Fuel_Desert_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class DZE_Veh_MTVR_Fuel_Desert_2: DZE_Veh_MTVR_Fuel_Desert_1 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_MTVR_Fuel_Desert_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class DZE_Veh_MTVR_Fuel_Desert_3: DZE_Veh_MTVR_Fuel_Desert_2 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_MTVR_Fuel_Desert_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class DZE_Veh_MTVR_Fuel_Desert_4: DZE_Veh_MTVR_Fuel_Desert_3 {
	displayName = "$STR_VEH_NAME_MTVR_DESERT_REFUEL++++";
	fuelCapacity = 20000;
};

class MtvrRefuel;
class DZE_Veh_MTVR_Fuel_Woodland: MtvrRefuel {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL";
	vehicleClass = "DZE Vehicles Trucks";
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 5;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_MTVR_Fuel_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class DZE_Veh_MTVR_Fuel_Woodland_1: DZE_Veh_MTVR_Fuel_Woodland {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL+";
	original = "DZE_Veh_MTVR_Fuel_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 7.0;  // base 5.0

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_MTVR_Fuel_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class DZE_Veh_MTVR_Fuel_Woodland_2: DZE_Veh_MTVR_Fuel_Woodland_1 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_MTVR_Fuel_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class DZE_Veh_MTVR_Fuel_Woodland_3: DZE_Veh_MTVR_Fuel_Woodland_2 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_MTVR_Fuel_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class DZE_Veh_MTVR_Fuel_Woodland_4: DZE_Veh_MTVR_Fuel_Woodland_3 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_REFUEL++++";
	fuelCapacity = 20000;
};

class MtvrRepair;
class DZE_Veh_MTVR_MaterialTransport_Woodland: MtvrRepair {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_MTVR_AMMO";
	vehicleClass = "DZE Vehicles Trucks";
	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 8;
	transportRepair = 0;
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_MTVR_MaterialTransport_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_MaterialTransport_Woodland_1: DZE_Veh_MTVR_MaterialTransport_Woodland {
	displayName = "$STR_VEH_NAME_MTVR_AMMO+";
	original = "DZE_Veh_MTVR_MaterialTransport_Woodland";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 7.0;  // base 5.0

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_MTVR_MaterialTransport_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_MTVR_MaterialTransport_Woodland_2: DZE_Veh_MTVR_MaterialTransport_Woodland_1 {
	displayName = "$STR_VEH_NAME_MTVR_AMMO++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_MTVR_MaterialTransport_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_MaterialTransport_Woodland_3: DZE_Veh_MTVR_MaterialTransport_Woodland_2 {
	displayName = "$STR_VEH_NAME_MTVR_AMMO+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_MTVR_MaterialTransport_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_MTVR_MaterialTransport_Woodland_4: DZE_Veh_MTVR_MaterialTransport_Woodland_3 {
	displayName = "$STR_VEH_NAME_MTVR_AMMO++++";
	fuelCapacity = 615;
};

class MtvrReammo;
class DZE_Veh_MTVR_WeaponTransport_Woodland: MtvrReammo {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_MTVR_WEAPONS";
	vehicleClass = "DZE Vehicles Trucks";
	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 8;
	transportAmmo = 0;
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_MTVR_WeaponTransport_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_WeaponTransport_Woodland_1: DZE_Veh_MTVR_WeaponTransport_Woodland {
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS+";
	original = "DZE_Veh_MTVR_WeaponTransport_Woodland";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 7.0;  // base 5.0

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_MTVR_WeaponTransport_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_MTVR_WeaponTransport_Woodland_2: DZE_Veh_MTVR_WeaponTransport_Woodland_1 {
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_MTVR_WeaponTransport_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_WeaponTransport_Woodland_3: DZE_Veh_MTVR_WeaponTransport_Woodland_2 {
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_MTVR_WeaponTransport_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_MTVR_WeaponTransport_Woodland_4: DZE_Veh_MTVR_WeaponTransport_Woodland_3 {
	displayName = "$STR_VEH_NAME_MTVR_WEAPONS++++";
	fuelCapacity = 615;
};

class DZE_Veh_MTVR_Open_Woodland: MTVR {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN";
	model = "\z\addons\dayz_epoch_v\vehicles\mtvr\dze_mtvr";
	picture = "\Ca\wheeled2\data\UI\Picture_MTVR_repair_CA.paa";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportSoldier = 2;
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_MTVR_Open_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_Open_Woodland_1: DZE_Veh_MTVR_Open_Woodland {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN+";
	original = "DZE_Veh_MTVR_Open_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 7.0;  // base 5.0

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_MTVR_Open_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_MTVR_Open_Woodland_2: DZE_Veh_MTVR_Open_Woodland_1 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_MTVR_Open_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_MTVR_Open_Woodland_3: DZE_Veh_MTVR_Open_Woodland_2 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_MTVR_Open_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_MTVR_Open_Woodland_4: DZE_Veh_MTVR_Open_Woodland_3 {
	displayName = "$STR_VEH_NAME_MTVR_WOODLAND_OPEN++++";
	fuelCapacity = 615;
};
