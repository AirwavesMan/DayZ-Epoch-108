class BTR90;
class DZE_Veh_BTR90: BTR90 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BTR90";
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
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_BTR90_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR90_1: DZE_Veh_BTR90 {
	displayName = "$STR_VEH_NAME_BTR90+";
	original = "DZE_Veh_BTR90";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5; // base 1.5
	turnCoef = 6;  // base 4

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_BTR90_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR90_2: DZE_Veh_BTR90_1 {
	displayName = "$STR_VEH_NAME_BTR90++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.02432

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_BTR90_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR90_3: DZE_Veh_BTR90_2 {
	displayName = "$STR_VEH_NAME_BTR90+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_BTR90_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_BTR90_4: DZE_Veh_BTR90_3 {
	displayName = "$STR_VEH_NAME_BTR90++++";
	fuelCapacity = 550; // base 300
};

class BTR90_HQ;
class DZE_Veh_BTR90_HQ: BTR90_HQ {
	scope = 2;
	displayName = "$STR_VEH_NAME_BTR90_HQ";
	vehicleClass = "DZE Vehicles APCs";



	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportSoldier = 6;
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;
	crewVulnerable = 1;



	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_BTR90_HQ_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR90_HQ_1: DZE_Veh_BTR90_HQ {
	displayName = "$STR_VEH_NAME_BTR90_HQ+";
	original = "DZE_Veh_BTR90_HQ";
	maxSpeed = 120; // base 100
	terrainCoef = 0.5; // base 1.5
	turnCoef = 6;  // base 4

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_BTR90_HQ_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR90_HQ_2: DZE_Veh_BTR90_HQ_1 {
	displayName = "$STR_VEH_NAME_BTR90_HQ++";
	armor = 220; // base 150
	damageResistance = 0.048; // base 0.02432

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_BTR90_HQ_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR90_HQ_3: DZE_Veh_BTR90_HQ_2 {
	displayName = "$STR_VEH_NAME_BTR90_HQ+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_BTR90_HQ_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_BTR90_HQ_4: DZE_Veh_BTR90_HQ_3 {
	displayName = "$STR_VEH_NAME_BTR90_HQ++++";
	fuelCapacity = 550; // base 300
};
