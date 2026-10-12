class T34;
class DZE_Veh_T34: T34 {
	scope = 2;
	displayName = "$STR_VEH_NAME_T34";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_T34_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_1: DZE_Veh_T34 {
	displayName = "$STR_VEH_NAME_T34+";
	original = "DZE_Veh_T34";
	maxSpeed = 80; // base 55
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_T34_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_2: DZE_Veh_T34_1 {
	displayName = "$STR_VEH_NAME_T34++";
	armor = 385; // base 300
	damageResistance = 0.0197; // base 0.01011

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_T34_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_3: DZE_Veh_T34_2 {
	displayName = "$STR_VEH_NAME_T34+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_T34_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_T34_4: DZE_Veh_T34_3 {
	displayName = "$STR_VEH_NAME_T34++++";
	fuelCapacity = 1200; // base 700
};

class T34_TK_EP1;
class DZE_Veh_T34_TK: T34_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_T34_TK";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_T34_TK_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_TK_1: DZE_Veh_T34_TK {
	displayName = "$STR_VEH_NAME_T34_TK+";
	original = "DZE_Veh_T34_TK";
	maxSpeed = 80; // base 55
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_T34_TK_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_TK_2: DZE_Veh_T34_TK_1 {
	displayName = "$STR_VEH_NAME_T34_TK++";
	armor = 385; // base 300
	damageResistance = 0.0197; // base 0.01011

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_T34_TK_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_TK_3: DZE_Veh_T34_TK_2 {
	displayName = "$STR_VEH_NAME_T34_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_T34_TK_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_T34_TK_4: DZE_Veh_T34_TK_3 {
	displayName = "$STR_VEH_NAME_T34_TK++++";
	fuelCapacity = 1200; // base 700
};

class T34_TK_GUE_EP1;
class DZE_Veh_T34_TK_GUE: T34_TK_GUE_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_T34_TK_GUE";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_T34_TK_GUE_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_TK_GUE_1: DZE_Veh_T34_TK_GUE {
	displayName = "$STR_VEH_NAME_T34_TK_GUE+";
	original = "DZE_Veh_T34_TK_GUE";
	maxSpeed = 80; // base 55
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_T34_TK_GUE_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_TK_GUE_2: DZE_Veh_T34_TK_GUE_1 {
	displayName = "$STR_VEH_NAME_T34_TK_GUE++";
	armor = 385; // base 300
	damageResistance = 0.0197; // base 0.01011

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_T34_TK_GUE_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_T34_TK_GUE_3: DZE_Veh_T34_TK_GUE_2 {
	displayName = "$STR_VEH_NAME_T34_TK_GUE+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_T34_TK_GUE_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_T34_TK_GUE_4: DZE_Veh_T34_TK_GUE_3 {
	displayName = "$STR_VEH_NAME_T34_TK_GUE++++";
	fuelCapacity = 1200; // base 700
};
