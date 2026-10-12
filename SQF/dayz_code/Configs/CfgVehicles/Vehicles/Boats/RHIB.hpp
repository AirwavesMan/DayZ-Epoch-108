class RHIB;
class DZE_Veh_RHIB_M2: RHIB {
	displayName = "$STR_VEH_NAME_RHIB_M2";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_RHIB_M2_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	enableManualFire = 0;
	supplyRadius = 3;

};

class RHIB2Turret;
class DZE_Veh_RHIB_MK19: RHIB2Turret {
	displayName = "$STR_VEH_NAME_RHIB_MK19";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_RHIB_MK19_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
	enableManualFire = 0;
	supplyRadius = 3;


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

};

class DZE_Veh_RHIB_M2_1: DZE_Veh_RHIB_M2 {
	displayName = "$STR_VEH_NAME_RHIB_M2+";
	original = "DZE_Veh_RHIB_M2";
	armor = 60;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_RHIB_M2_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_RHIB_M2_2: DZE_Veh_RHIB_M2_1 {
	displayName = "$STR_VEH_NAME_RHIB_M2++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 4;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_RHIB_M2_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_RHIB_M2_3: DZE_Veh_RHIB_M2_2 {
	displayName = "$STR_VEH_NAME_RHIB_M2+++";
	fuelCapacity = 200;

	class Upgrades {};
};

class DZE_Veh_RHIB_MK19_1: DZE_Veh_RHIB_MK19 {
	displayName = "$STR_VEH_NAME_RHIB_MK19+";
	original = "DZE_Veh_RHIB_MK19";
	armor = 60;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_RHIB_MK19_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_RHIB_MK19_2: DZE_Veh_RHIB_MK19_1 {
	displayName = "$STR_VEH_NAME_RHIB_MK19++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 4;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_RHIB_MK19_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_RHIB_MK19_3: DZE_Veh_RHIB_MK19_2 {
	displayName = "$STR_VEH_NAME_RHIB_MK19+++";
	fuelCapacity = 200;

	class Upgrades {};
};
