class RM70_ACR;
class DZE_Veh_RM70: RM70_ACR {
	scope = 2;
	displayName = "$STR_VEH_NAME_RM70";
	vehicleClass = "DZE Vehicles Artillery";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_RM70_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_RM70_1: DZE_Veh_RM70 {
	displayName = "$STR_VEH_NAME_RM70+";
	original = "DZE_Veh_RM70";
	maxSpeed = 110; // base 85
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_RM70_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_RM70_2: DZE_Veh_RM70_1 {
	displayName = "$STR_VEH_NAME_RM70++";
	armor = 110; // base 50
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_RM70_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_RM70_3: DZE_Veh_RM70_2 {
	displayName = "$STR_VEH_NAME_RM70+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_RM70_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_RM70_4: DZE_Veh_RM70_3 {
	displayName = "$STR_VEH_NAME_RM70++++";
	fuelCapacity = 205; // base 100
};
