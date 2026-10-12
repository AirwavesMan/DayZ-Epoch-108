class AAV;
class DZE_Veh_AAVP7A1: AAV {
	scope = 2;
	displayName = "$STR_VEH_NAME_AAV";
	vehicleClass = "DZE Vehicles APCs";



	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	supplyRadius = 5;



	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_AAVP7A1_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_AAVP7A1_1: DZE_Veh_AAVP7A1 {
	displayName = "$STR_VEH_NAME_AAV+";
	original = "DZE_Veh_AAVP7A1";
	maxspeed = 110; // base 72
	turnCoef = 0.5;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_AAVP7A1_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_AAVP7A1_2: DZE_Veh_AAVP7A1_1 {
	displayName = "$STR_VEH_NAME_AAV++";
	armor = 350; // base 210
	damageResistance = 0.023; // base 0.01168

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_AAVP7A1_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_AAVP7A1_3: DZE_Veh_AAVP7A1_2 {
	displayName = "$STR_VEH_NAME_AAV+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_AAVP7A1_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_AAVP7A1_4: DZE_Veh_AAVP7A1_3 {
	displayName = "$STR_VEH_NAME_AAV++++";
	fuelCapacity = 980; // base 700
};

