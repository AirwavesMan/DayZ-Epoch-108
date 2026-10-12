class JetSkiYanahui_Case_Yellow;
class DZE_Veh_JetSki_Yellow: JetSkiYanahui_Case_Yellow {
	scope = 2;
	displayName = "$STR_VEH_NAME_JETSKI_YELLOW";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_JetSki_Yellow_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2;

};

class JetSkiYanahui_Case_Green;
class DZE_Veh_JetSki_Green: JetSkiYanahui_Case_Green {
	scope = 2;
	displayName = "$STR_VEH_NAME_JETSKI_GREEN";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_JetSki_Green_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2;

};

class JetSkiYanahui_Case_Blue;
class DZE_Veh_JetSki_Blue: JetSkiYanahui_Case_Blue {
	scope = 2;
	displayName = "$STR_VEH_NAME_JETSKI_BLUE";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_JetSki_Blue_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2;

};

class JetSkiYanahui_Case_Red;
class DZE_Veh_JetSki_Red: JetSkiYanahui_Case_Red {
	scope = 2;
	displayName = "$STR_VEH_NAME_JETSKI_RED";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_JetSki_Red_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2;

};

class DZE_Veh_JetSki_Yellow_1: DZE_Veh_JetSki_Yellow {
	displayName = "$STR_VEH_NAME_JETSKI_YELLOW+";
	original = "DZE_Veh_JetSki_Yellow";
	armor = 60;
	damageResistance = 0.01826;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_JetSki_Yellow_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_JetSki_Yellow_2: DZE_Veh_JetSki_Yellow_1 {
	displayName = "$STR_VEH_NAME_JETSKI_YELLOW++";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_JetSki_Yellow_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_JetSki_Yellow_3: DZE_Veh_JetSki_Yellow_2 {
	displayName = "$STR_VEH_NAME_JETSKI_YELLOW+++";
	fuelCapacity = 60;

	class Upgrades {};
};

class DZE_Veh_JetSki_Green_1: DZE_Veh_JetSki_Green {
	displayName = "$STR_VEH_NAME_JETSKI_GREEN+";
	original = "DZE_Veh_JetSki_Green";
	armor = 60;
	damageResistance = 0.01826;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_JetSki_Green_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_JetSki_Green_2: DZE_Veh_JetSki_Green_1 {
	displayName = "$STR_VEH_NAME_JETSKI_GREEN++";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_JetSki_Green_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_JetSki_Green_3: DZE_Veh_JetSki_Green_2 {
	displayName = "$STR_VEH_NAME_JETSKI_GREEN+++";
	fuelCapacity = 60;

	class Upgrades {};
};

class DZE_Veh_JetSki_Blue_1: DZE_Veh_JetSki_Blue {
	displayName = "$STR_VEH_NAME_JETSKI_BLUE+";
	original = "DZE_Veh_JetSki_Blue";
	armor = 60;
	damageResistance = 0.01826;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_JetSki_Blue_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_JetSki_Blue_2: DZE_Veh_JetSki_Blue_1 {
	displayName = "$STR_VEH_NAME_JETSKI_BLUE++";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_JetSki_Blue_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_JetSki_Blue_3: DZE_Veh_JetSki_Blue_2 {
	displayName = "$STR_VEH_NAME_JETSKI_BLUE+++";
	fuelCapacity = 60;

	class Upgrades {};
};

class DZE_Veh_JetSki_Red_1: DZE_Veh_JetSki_Red {
	displayName = "$STR_VEH_NAME_JETSKI_RED+";
	original = "DZE_Veh_JetSki_Red";
	armor = 60;
	damageResistance = 0.01826;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_JetSki_Red_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_JetSki_Red_2: DZE_Veh_JetSki_Red_1 {
	displayName = "$STR_VEH_NAME_JETSKI_RED++";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_JetSki_Red_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_JetSki_Red_3: DZE_Veh_JetSki_Red_2 {
	displayName = "$STR_VEH_NAME_JETSKI_RED+++";
	fuelCapacity = 60;

	class Upgrades {};
};
