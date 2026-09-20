class KamazOpen;
class DZE_Veh_Kamaz_Open_Woodland: KamazOpen {
	displayName = "$STR_VEH_NAME_KAMAZ";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_Open_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Open_Woodland_1: DZE_Veh_Kamaz_Open_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ+";
	original = "DZE_Veh_Kamaz_Open_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_Open_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_Open_Woodland_2: DZE_Veh_Kamaz_Open_Woodland_1 {
	displayName = "$STR_VEH_NAME_KAMAZ++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_Open_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Open_Woodland_3: DZE_Veh_Kamaz_Open_Woodland_2 {
	displayName = "$STR_VEH_NAME_KAMAZ+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_Open_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Kamaz_Open_Woodland_4: DZE_Veh_Kamaz_Open_Woodland_3 {
	displayName = "$STR_VEH_NAME_KAMAZ++++";
	fuelCapacity = 615;
};

class Kamaz;
class DZE_Veh_Kamaz_Woodland: Kamaz {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Woodland_1: DZE_Veh_Kamaz_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT+";
	original = "DZE_Veh_Kamaz_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_Woodland_2: DZE_Veh_Kamaz_Woodland_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Woodland_3: DZE_Veh_Kamaz_Woodland_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Kamaz_Woodland_4: DZE_Veh_Kamaz_Woodland_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT++++";
	fuelCapacity = 615;
};

class KamazRefuel;
class DZE_Veh_Kamaz_Fuel_Woodland: KamazRefuel {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 5;
	fuelCapacity = 10400;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_Fuel_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Kamaz_Fuel_Woodland_1: DZE_Veh_Kamaz_Fuel_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL+";
	original = "DZE_Veh_Kamaz_Fuel_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_Fuel_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};
class DZE_Veh_Kamaz_Fuel_Woodland_2: DZE_Veh_Kamaz_Fuel_Woodland_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_Fuel_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};
class DZE_Veh_Kamaz_Fuel_Woodland_3: DZE_Veh_Kamaz_Fuel_Woodland_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_Fuel_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};
class DZE_Veh_Kamaz_Fuel_Woodland_4: DZE_Veh_Kamaz_Fuel_Woodland_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL++++";
	fuelCapacity = 20000;
};

class KamazRepair;
class DZE_Veh_Kamaz_MaterialTransport_Woodland: KamazRepair {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 25;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 8;
	supplyRadius = 2.6;
	transportRepair = 0;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_MaterialTransport_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_MaterialTransport_Woodland_1: DZE_Veh_Kamaz_MaterialTransport_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO+";
	original = "DZE_Veh_Kamaz_MaterialTransport_Woodland";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_MaterialTransport_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_MaterialTransport_Woodland_2: DZE_Veh_Kamaz_MaterialTransport_Woodland_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_MaterialTransport_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_MaterialTransport_Woodland_3: DZE_Veh_Kamaz_MaterialTransport_Woodland_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_MaterialTransport_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Kamaz_MaterialTransport_Woodland_4: DZE_Veh_Kamaz_MaterialTransport_Woodland_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO++++";
	fuelCapacity = 615;
};

class KamazReammo;
class DZE_Veh_Kamaz_WeaponTransport_Woodland: KamazReammo {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 75;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 8;
	supplyRadius = 2.6;
	transportAmmo = 0;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_WeaponTransport_Woodland_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_WeaponTransport_Woodland_1: DZE_Veh_Kamaz_WeaponTransport_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS+";
	original = "DZE_Veh_Kamaz_WeaponTransport_Woodland";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_WeaponTransport_Woodland_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_WeaponTransport_Woodland_2: DZE_Veh_Kamaz_WeaponTransport_Woodland_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_WeaponTransport_Woodland_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_WeaponTransport_Woodland_3: DZE_Veh_Kamaz_WeaponTransport_Woodland_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_WeaponTransport_Woodland_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Kamaz_WeaponTransport_Woodland_4: DZE_Veh_Kamaz_WeaponTransport_Woodland_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS++++";
	fuelCapacity = 615;
};

class DZE_Veh_Kamaz_Open_Winter: DZE_Veh_Kamaz_Open_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_kuz_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_Open_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Open_Winter_1: DZE_Veh_Kamaz_Open_Winter {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER+";
	original = "DZE_Veh_Kamaz_Open_Winter";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_Open_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_Open_Winter_2: DZE_Veh_Kamaz_Open_Winter_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_Open_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Open_Winter_3: DZE_Veh_Kamaz_Open_Winter_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_Open_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Kamaz_Open_Winter_4: DZE_Veh_Kamaz_Open_Winter_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_WINTER++++";
	fuelCapacity = 615;
};

class DZE_Veh_Kamaz_Winter: DZE_Veh_Kamaz_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_kuz_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Winter_1: DZE_Veh_Kamaz_Winter {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER+";
	original = "DZE_Veh_Kamaz_Winter";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_Winter_2: DZE_Veh_Kamaz_Winter_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243
	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Winter_3: DZE_Veh_Kamaz_Winter_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Kamaz_Winter_4: DZE_Veh_Kamaz_Winter_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_COVERT_WINTER++++";
	fuelCapacity = 615;
};

class DZE_Veh_Kamaz_Fuel_Winter: DZE_Veh_Kamaz_Fuel_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_fuel_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_Fuel_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Fuel_Winter_1: DZE_Veh_Kamaz_Fuel_Winter {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER+";
	original = "DZE_Veh_Kamaz_Fuel_Winter";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_Fuel_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_Fuel_Winter_2: DZE_Veh_Kamaz_Fuel_Winter_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_Fuel_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_Fuel_Winter_3: DZE_Veh_Kamaz_Fuel_Winter_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_Fuel_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemFuelBarrel",6}}};
	};
};

class DZE_Veh_Kamaz_Fuel_Winter_4: DZE_Veh_Kamaz_Fuel_Winter_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_REFUEL_WINTER++++";
	fuelCapacity = 20000;
};

class DZE_Veh_Kamaz_MaterialTransport_Winter: DZE_Veh_Kamaz_MaterialTransport_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_repair_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_MaterialTransport_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_MaterialTransport_Winter_1: DZE_Veh_Kamaz_MaterialTransport_Winter {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER+";
	original = "DZE_Veh_Kamaz_MaterialTransport_Winter";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_MaterialTransport_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_MaterialTransport_Winter_2: DZE_Veh_Kamaz_MaterialTransport_Winter_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_MaterialTransport_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",6},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_MaterialTransport_Winter_3: DZE_Veh_Kamaz_MaterialTransport_Winter_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER+++";
	transportMaxWeapons = 50;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_MaterialTransport_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Kamaz_MaterialTransport_Winter_4: DZE_Veh_Kamaz_MaterialTransport_Winter_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_AMMO_WINTER++++";
	fuelCapacity = 615;
};

class DZE_Veh_Kamaz_WeaponTransport_Winter: DZE_Veh_Kamaz_WeaponTransport_Woodland {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\kamaz\kamaz_kab_winter_co.paa","\dayz_epoch_c\skins\kamaz\kamaz_kuz_winter_co.paa"};

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Kamaz_WeaponTransport_Winter_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_WeaponTransport_Winter_1: DZE_Veh_Kamaz_WeaponTransport_Winter {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER+";
	original = "DZE_Veh_Kamaz_WeaponTransport_Winter";
	maxSpeed = 100;
	terrainCoef = 1.8;
	turnCoef = 5.0;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Kamaz_WeaponTransport_Winter_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Kamaz_WeaponTransport_Winter_2: DZE_Veh_Kamaz_WeaponTransport_Winter_1 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER++";
	armor = 70;
	damageResistance = 0.0255;

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Kamaz_WeaponTransport_Winter_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Kamaz_WeaponTransport_Winter_3: DZE_Veh_Kamaz_WeaponTransport_Winter_2 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER+++";
	transportMaxWeapons = 150;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Kamaz_WeaponTransport_Winter_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Kamaz_WeaponTransport_Winter_4: DZE_Veh_Kamaz_WeaponTransport_Winter_3 {
	displayName = "$STR_VEH_NAME_KAMAZ_WEAPONS_WINTER++++";
	fuelCapacity = 615;
};
