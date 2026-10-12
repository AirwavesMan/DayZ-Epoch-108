class L39_2_ACR;
class DZE_Veh_L39ZA_Green: L39_2_ACR {
	scope = 2;
	displayName = "$STR_VEH_NAME_L39ZA_GREEN";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_L39ZA_Green_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class L39_ACR;
class DZE_Veh_L39C: L39_ACR {
	scope = 2;
	displayName = "$STR_VEH_NAME_L39C";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_L39C_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class L39_TK_EP1;
class DZE_Veh_L39ZA_TK: L39_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_L39ZA_TK";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_L39ZA_TK_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class DZE_Veh_L39ZA_Green_1: DZE_Veh_L39ZA_Green {
	displayName = "$STR_VEH_NAME_L39ZA_GREEN+";
	original = "DZE_Veh_L39ZA_Green";
	armor = 120;
	damageResistance = 0.008;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_L39ZA_Green_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_L39ZA_Green_2: DZE_Veh_L39ZA_Green_1 {
	displayName = "$STR_VEH_NAME_L39ZA_GREEN++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_L39ZA_Green_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_L39ZA_Green_3: DZE_Veh_L39ZA_Green_2 {
	displayName = "$STR_VEH_NAME_L39ZA_GREEN+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_L39C_1: DZE_Veh_L39C {
	displayName = "$STR_VEH_NAME_L39C+";
	original = "DZE_Veh_L39C";
	armor = 120;
	damageResistance = 0.008;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_L39C_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_L39C_2: DZE_Veh_L39C_1 {
	displayName = "$STR_VEH_NAME_L39C++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_L39C_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_L39C_3: DZE_Veh_L39C_2 {
	displayName = "$STR_VEH_NAME_L39C+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_L39ZA_TK_1: DZE_Veh_L39ZA_TK {
	displayName = "$STR_VEH_NAME_L39ZA_TK+";
	original = "DZE_Veh_L39ZA_TK";
	armor = 120;
	damageResistance = 0.008;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_L39ZA_TK_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_L39ZA_TK_2: DZE_Veh_L39ZA_TK_1 {
	displayName = "$STR_VEH_NAME_L39ZA_TK++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_L39ZA_TK_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_L39ZA_TK_3: DZE_Veh_L39ZA_TK_2 {
	displayName = "$STR_VEH_NAME_L39ZA_TK+++";
	fuelCapacity = 2000;

	class Upgrades {};
};
