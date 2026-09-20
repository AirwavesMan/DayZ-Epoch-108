class JetSkiYanahui_Case_Yellow;
class DZE_Veh_JetSki_Yellow: JetSkiYanahui_Case_Yellow {
	scope = 2;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_JetSki_Yellow_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_JETSKI_YELLOW";
	vehicleClass = "DZE Vehicles Boats";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 2;
};

class JetSkiYanahui_Case_Green;
class DZE_Veh_JetSki_Green: JetSkiYanahui_Case_Green {
	scope = 2;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_JetSki_Green_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_JETSKI_GREEN";
	vehicleClass = "DZE Vehicles Boats";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 2;
};

class JetSkiYanahui_Case_Blue;
class DZE_Veh_JetSki_Blue: JetSkiYanahui_Case_Blue {
	scope = 2;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_JetSki_Blue_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_JETSKI_BLUE";
	vehicleClass = "DZE Vehicles Boats";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 2;
};

class JetSkiYanahui_Case_Red;
class DZE_Veh_JetSki_Red: JetSkiYanahui_Case_Red {
	scope = 2;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_JetSki_Red_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_JETSKI_RED";
	vehicleClass = "DZE Vehicles Boats";

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
		ItemLRK[] = {"DZE_Veh_JetSki_Yellow_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_JetSki_Yellow_2: DZE_Veh_JetSki_Yellow_1 {
	displayName = "$STR_VEH_NAME_JETSKI_YELLOW++";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_JetSki_Yellow_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
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
		ItemLRK[] = {"DZE_Veh_JetSki_Green_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_JetSki_Green_2: DZE_Veh_JetSki_Green_1 {
	displayName = "$STR_VEH_NAME_JETSKI_GREEN++";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_JetSki_Green_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
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
		ItemLRK[] = {"DZE_Veh_JetSki_Blue_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_JetSki_Blue_2: DZE_Veh_JetSki_Blue_1 {
	displayName = "$STR_VEH_NAME_JETSKI_BLUE++";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_JetSki_Blue_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
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
		ItemLRK[] = {"DZE_Veh_JetSki_Red_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_JetSki_Red_2: DZE_Veh_JetSki_Red_1 {
	displayName = "$STR_VEH_NAME_JETSKI_RED++";
	transportMaxWeapons = 4;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_JetSki_Red_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_JetSki_Red_3: DZE_Veh_JetSki_Red_2 {
	displayName = "$STR_VEH_NAME_JETSKI_RED+++";
	fuelCapacity = 60;

	class Upgrades {};
};
