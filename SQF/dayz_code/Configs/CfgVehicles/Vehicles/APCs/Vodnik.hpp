class GAZ_Vodnik_HMG;
class DZE_Veh_Vodnik_HMG: GAZ_Vodnik_HMG {
	scope = 2;
	displayName = "$STR_VEH_NAME_VODNIK_BPPU";
	vehicleClass = "DZE Vehicles APCs";
	DZE_MACRO_VEHICLE_CANSEE_ARMORED


	DZE_MACRO_VEHICLE_SIDE
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Vodnik_HMG_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Vodnik_HMG_1: DZE_Veh_Vodnik_HMG {
	displayName = "$STR_VEH_NAME_VODNIK_BPPU+";
	original = "DZE_Veh_Vodnik_HMG";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Vodnik_HMG_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Vodnik_HMG_2: DZE_Veh_Vodnik_HMG_1 {
	displayName = "$STR_VEH_NAME_VODNIK_BPPU++";
	armor = 120; // base 100
	damageResistance = 0.06; // base 0.02972

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Vodnik_HMG_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Vodnik_HMG_3: DZE_Veh_Vodnik_HMG_2 {
	displayName = "$STR_VEH_NAME_VODNIK_BPPU+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Vodnik_HMG_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_Vodnik_HMG_4: DZE_Veh_Vodnik_HMG_3 {
	displayName = "$STR_VEH_NAME_VODNIK_BPPU++++";
	fuelCapacity = 340; // base 220
};

class GAZ_Vodnik;
class DZE_Veh_Vodnik_MG: GAZ_Vodnik {
	scope = 2;
	displayName = "$STR_VEH_NAME_VODNIK_PKT";
	vehicleClass = "DZE Vehicles APCs";
	DZE_MACRO_VEHICLE_CANSEE_ARMORED


	DZE_MACRO_VEHICLE_SIDE
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	supplyRadius = 1.8;
	crewVulnerable = 1;

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Vodnik_MG_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Vodnik_MG_1: DZE_Veh_Vodnik_MG {
	displayName = "$STR_VEH_NAME_VODNIK_PKT+";
	original = "DZE_Veh_Vodnik_MG";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Vodnik_MG_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Vodnik_MG_2: DZE_Veh_Vodnik_MG_1 {
	displayName = "$STR_VEH_NAME_VODNIK_PKT++";
	armor = 105; // base 85
	damageResistance = 0.065; // base 0.032

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Vodnik_MG_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Vodnik_MG_3: DZE_Veh_Vodnik_MG_2 {
	displayName = "$STR_VEH_NAME_VODNIK_PKT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Vodnik_MG_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_Vodnik_MG_4: DZE_Veh_Vodnik_MG_3 {
	displayName = "$STR_VEH_NAME_VODNIK_PKT++++";
	fuelCapacity = 340; // base 220
};

class GAZ_Vodnik_MedEvac;
class DZE_Veh_Vodnik_MedEvac: GAZ_Vodnik_MedEvac {
	scope = 2;
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC";
	vehicleClass = "DZE Vehicles APCs";
	crewVulnerable = 1;


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	attendant = 0;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Vodnik_MedEvac_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Vodnik_MedEvac_1: DZE_Veh_Vodnik_MedEvac {
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC+";
	original = "DZE_Veh_Vodnik_MedEvac";
	maxSpeed = 115; // base 100
	turnCoef = 7; // base 5
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Vodnik_MedEvac_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Vodnik_MedEvac_2: DZE_Veh_Vodnik_MedEvac_1 {
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC++";
	armor = 105; // base 85
	damageResistance = 0.065; // base 0.032

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Vodnik_MedEvac_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Vodnik_MedEvac_3: DZE_Veh_Vodnik_MedEvac_2 {
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Vodnik_MedEvac_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_Vodnik_MedEvac_4: DZE_Veh_Vodnik_MedEvac_3 {
	displayName = "$STR_VEH_NAME_VODNIK_MEDEVAC++++";
	fuelCapacity = 340; // base 220
};
