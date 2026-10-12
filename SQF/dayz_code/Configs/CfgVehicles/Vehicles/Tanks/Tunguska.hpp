class 2S6M_Tunguska;
class DZE_Veh_2S6M_Tunguska: 2S6M_Tunguska {
	scope = 2;
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_2S6M_Tunguska_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_2S6M_Tunguska_1: DZE_Veh_2S6M_Tunguska {
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA+";
	original = "DZE_Veh_2S6M_Tunguska";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_2S6M_Tunguska_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_2S6M_Tunguska_2: DZE_Veh_2S6M_Tunguska_1 {
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA++";
	armor = 205; // base 160
	damageResistance = 0.05283; // base 0.02711

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_2S6M_Tunguska_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_2S6M_Tunguska_3: DZE_Veh_2S6M_Tunguska_2 {
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_2S6M_Tunguska_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_2S6M_Tunguska_4: DZE_Veh_2S6M_Tunguska_3 {
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA++++";
	fuelCapacity = 857; // base 500
};
