class BTR60_TK_EP1;
class DZE_Veh_BTR60_Woodland: BTR60_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BTR60_WOOD";
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
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_BTR60_Woodland_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR60_Woodland_1: DZE_Veh_BTR60_Woodland {
	displayName = "$STR_VEH_NAME_BTR60_WOOD+";
	original = "DZE_Veh_BTR60_Woodland";
	maxSpeed = 120; // base 100
	terrainCoef = 1; // base 2
	turnCoef = 6;  // base 4

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_BTR60_Woodland_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR60_Woodland_2: DZE_Veh_BTR60_Woodland_1 {
	displayName = "$STR_VEH_NAME_BTR60_WOOD++";
	armor = 200; // base 120
	damageResistance = 0.037; // base 0.01849

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_BTR60_Woodland_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR60_Woodland_3: DZE_Veh_BTR60_Woodland_2 {
	displayName = "$STR_VEH_NAME_BTR60_WOOD+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_BTR60_Woodland_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_BTR60_Woodland_4: DZE_Veh_BTR60_Woodland_3 {
	displayName = "$STR_VEH_NAME_BTR60_WOOD++++";
	fuelCapacity = 200; // base 100
};

class DZE_Veh_BTR60_Green: DZE_Veh_BTR60_Woodland {
	displayName = "$STR_VEH_NAME_BTR60_GREEN";
	hiddenSelectionsTextures[] = {"\CorePatch\CorePatch_Vehicles\textures\btr60_body_gue_co.paa","\CorePatch\CorePatch_Vehicles\textures\btr60_details_gue_co.paa"};

	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_BTR60_Green_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR60_Green_1: DZE_Veh_BTR60_Green {
	displayName = "$STR_VEH_NAME_BTR60_GREEN+";
	original = "DZE_Veh_BTR60_Green";
	maxSpeed = 120; // base 100
	terrainCoef = 1; // base 2
	turnCoef = 6;  // base 4

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_BTR60_Green_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR60_Green_2: DZE_Veh_BTR60_Green_1 {
	displayName = "$STR_VEH_NAME_BTR60_GREEN++";
	armor = 200; // base 120
	damageResistance = 0.037; // base 0.01849

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_BTR60_Green_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR60_Green_3: DZE_Veh_BTR60_Green_2 {
	displayName = "$STR_VEH_NAME_BTR60_GREEN+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_BTR60_Green_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_BTR60_Green_4: DZE_Veh_BTR60_Green_3 {
	displayName = "$STR_VEH_NAME_BTR60_GREEN++++";
	fuelCapacity = 200; // base 100
};
