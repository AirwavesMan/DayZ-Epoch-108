class PBX;
class DZE_Veh_PBX: PBX {
	displayName = "$STR_VEH_NAME_PBX";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_PBX_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	transportMaxWeapons = 5;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 1;
	fuelCapacity = 20;
	supplyRadius = 2;

};

class Zodiac;
class DZE_Veh_CRRC: Zodiac {
	displayName = "$STR_VEH_NAME_CRRC";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_CRRC_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	transportMaxWeapons = 5;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 1;
	fuelCapacity = 20;
	supplyRadius = 2;

};

class DZE_Veh_PBX_1: DZE_Veh_PBX {
	displayName = "$STR_VEH_NAME_PBX+";
	original = "DZE_Veh_PBX";
	armor = 40;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_PBX_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_PBX_2: DZE_Veh_PBX_1 {
	displayName = "$STR_VEH_NAME_PBX++";
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_PBX_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_PBX_3: DZE_Veh_PBX_2 {
	displayName = "$STR_VEH_NAME_PBX+++";
	fuelCapacity = 40;

	class Upgrades {};
};

class DZE_Veh_CRRC_1: DZE_Veh_CRRC {
	displayName = "$STR_VEH_NAME_CRRC+";
	original = "DZE_Veh_CRRC";
	armor = 40;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_CRRC_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_CRRC_2: DZE_Veh_CRRC_1 {
	displayName = "$STR_VEH_NAME_CRRC++";
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_CRRC_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_CRRC_3: DZE_Veh_CRRC_2 {
	displayName = "$STR_VEH_NAME_CRRC+++";
	fuelCapacity = 40;

	class Upgrades {};
};
