class Su25_CDF;
class DZE_Veh_Su25_CDF: Su25_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_SU25_CDF";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Su25_CDF_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class Su25_Ins;
class DZE_Veh_Su25_INS: Su25_Ins {
	scope = 2;
	displayName = "$STR_VEH_NAME_SU25_INS";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Su25_INS_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class Su25_TK_EP1;
class DZE_Veh_Su25_TK: Su25_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_SU25_TK";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Su25_TK_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class Su39;
class DZE_Veh_Su25_RU: Su39 {
	scope = 2;
	displayName = "$STR_VEH_NAME_SU25_RU";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Su25_RU_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class DZE_Veh_Su25_CDF_1: DZE_Veh_Su25_CDF {
	displayName = "$STR_VEH_NAME_SU25_CDF+";
	original = "DZE_Veh_Su25_CDF";
	armor = 150;
	damageResistance = 0.0097;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Su25_CDF_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Su25_CDF_2: DZE_Veh_Su25_CDF_1 {
	displayName = "$STR_VEH_NAME_SU25_CDF++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Su25_CDF_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Su25_CDF_3: DZE_Veh_Su25_CDF_2 {
	displayName = "$STR_VEH_NAME_SU25_CDF+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_Su25_INS_1: DZE_Veh_Su25_INS {
	displayName = "$STR_VEH_NAME_SU25_INS+";
	original = "DZE_Veh_Su25_INS";
	armor = 150;
	damageResistance = 0.0097;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Su25_INS_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Su25_INS_2: DZE_Veh_Su25_INS_1 {
	displayName = "$STR_VEH_NAME_SU25_INS++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Su25_INS_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Su25_INS_3: DZE_Veh_Su25_INS_2 {
	displayName = "$STR_VEH_NAME_SU25_INS+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_Su25_TK_1: DZE_Veh_Su25_TK {
	displayName = "$STR_VEH_NAME_SU25_TK+";
	original = "DZE_Veh_Su25_TK";
	armor = 150;
	damageResistance = 0.0097;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Su25_TK_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Su25_TK_2: DZE_Veh_Su25_TK_1 {
	displayName = "$STR_VEH_NAME_SU25_TK++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Su25_TK_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Su25_TK_3: DZE_Veh_Su25_TK_2 {
	displayName = "$STR_VEH_NAME_SU25_TK+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_Su25_RU_1: DZE_Veh_Su25_RU {
	displayName = "$STR_VEH_NAME_SU25_RU+";
	original = "DZE_Veh_Su25_RU";
	armor = 150;
	damageResistance = 0.0097;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Su25_RU_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Su25_RU_2: DZE_Veh_Su25_RU_1 {
	displayName = "$STR_VEH_NAME_SU25_RU++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Su25_RU_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Su25_RU_3: DZE_Veh_Su25_RU_2 {
	displayName = "$STR_VEH_NAME_SU25_RU+++";
	fuelCapacity = 2000;

	class Upgrades {};
};
