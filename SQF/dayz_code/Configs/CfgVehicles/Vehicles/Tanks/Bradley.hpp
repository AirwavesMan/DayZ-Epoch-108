class M2A2_EP1;
class DZE_Veh_M2A2: M2A2_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_M2A2";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_M2A2_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M2A2_1: DZE_Veh_M2A2 {
	displayName = "$STR_VEH_NAME_M2A2+";
	original = "DZE_Veh_M2A2";
	maxSpeed = 85; // base 61
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_M2A2_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M2A2_2: DZE_Veh_M2A2_1 {
	displayName = "$STR_VEH_NAME_M2A2++";
	armor = 385; // base 300
	damageResistance = 0.02317; // base 0.01189

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_M2A2_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M2A2_3: DZE_Veh_M2A2_2 {
	displayName = "$STR_VEH_NAME_M2A2+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_M2A2_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_M2A2_4: DZE_Veh_M2A2_3 {
	displayName = "$STR_VEH_NAME_M2A2++++";
	fuelCapacity = 1200; // base 700
};

class M2A3_EP1;
class DZE_Veh_M2A3: M2A3_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_M2A3";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_M2A3_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M2A3_1: DZE_Veh_M2A3 {
	displayName = "$STR_VEH_NAME_M2A3+";
	original = "DZE_Veh_M2A3";
	maxSpeed = 85; // base 61
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_M2A3_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M2A3_2: DZE_Veh_M2A3_1 {
	displayName = "$STR_VEH_NAME_M2A3++";
	armor = 515; // base 400
	damageResistance = 0.02146; // base 0.01101

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_M2A3_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M2A3_3: DZE_Veh_M2A3_2 {
	displayName = "$STR_VEH_NAME_M2A3+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_M2A3_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_M2A3_4: DZE_Veh_M2A3_3 {
	displayName = "$STR_VEH_NAME_M2A3++++";
	fuelCapacity = 1200; // base 700
};

class M6_EP1;
class DZE_Veh_M6: M6_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_M6";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_M6_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M6_1: DZE_Veh_M6 {
	displayName = "$STR_VEH_NAME_M6+";
	original = "DZE_Veh_M6";
	maxSpeed = 85; // base 61
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_M6_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M6_2: DZE_Veh_M6_1 {
	displayName = "$STR_VEH_NAME_M6++";
	armor = 385; // base 300
	damageResistance = 0.02146; // base 0.01101

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_M6_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M6_3: DZE_Veh_M6_2 {
	displayName = "$STR_VEH_NAME_M6+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_M6_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_M6_4: DZE_Veh_M6_3 {
	displayName = "$STR_VEH_NAME_M6++++";
	fuelCapacity = 1200; // base 700
};
