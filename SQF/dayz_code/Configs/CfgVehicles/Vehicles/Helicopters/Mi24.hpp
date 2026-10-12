class Mi24_D;
class DZE_Veh_Mi24D_CDF: Mi24_D {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24D_CDF";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Mi24D_CDF_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24D_CDF_1: DZE_Veh_Mi24D_CDF {
	displayName = "$STR_VEH_NAME_MI24D_CDF+";
	original = "DZE_Veh_Mi24D_CDF";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Mi24D_CDF_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24D_CDF_2: DZE_Veh_Mi24D_CDF_1 {
	displayName = "$STR_VEH_NAME_MI24D_CDF++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Mi24D_CDF_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Mi24D_CDF_3: DZE_Veh_Mi24D_CDF_2 {
	displayName = "$STR_VEH_NAME_MI24D_CDF+++";
	fuelCapacity = 2000; // base 1000
};

class Mi24_D_CZ_ACR;
class DZE_Veh_Mi24V_Woodland: Mi24_D_CZ_ACR {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24V_WOODLAND";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Mi24V_Woodland_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24V_Woodland_1: DZE_Veh_Mi24V_Woodland {
	displayName = "$STR_VEH_NAME_MI24V_WOODLAND+";
	original = "DZE_Veh_Mi24V_Woodland";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Mi24V_Woodland_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24V_Woodland_2: DZE_Veh_Mi24V_Woodland_1 {
	displayName = "$STR_VEH_NAME_MI24V_WOODLAND++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Mi24V_Woodland_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Mi24V_Woodland_3: DZE_Veh_Mi24V_Woodland_2 {
	displayName = "$STR_VEH_NAME_MI24V_WOODLAND+++";
	fuelCapacity = 2000; // base 1000
};

class Mi24_D_TK_EP1;
class DZE_Veh_Mi24D_TK: Mi24_D_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24D_TK";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Mi24D_TK_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24D_TK_1: DZE_Veh_Mi24D_TK {
	displayName = "$STR_VEH_NAME_MI24D_TK+";
	original = "DZE_Veh_Mi24D_TK";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Mi24D_TK_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24D_TK_2: DZE_Veh_Mi24D_TK_1 {
	displayName = "$STR_VEH_NAME_MI24D_TK++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Mi24D_TK_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Mi24D_TK_3: DZE_Veh_Mi24D_TK_2 {
	displayName = "$STR_VEH_NAME_MI24D_TK+++";
	fuelCapacity = 2000; // base 1000
};

class Mi24_P;
class DZE_Veh_Mi24P: Mi24_P {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24P";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Mi24P_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24P_1: DZE_Veh_Mi24P {
	displayName = "$STR_VEH_NAME_MI24P+";
	original = "DZE_Veh_Mi24P";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Mi24P_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24P_2: DZE_Veh_Mi24P_1 {
	displayName = "$STR_VEH_NAME_MI24P++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Mi24P_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Mi24P_3: DZE_Veh_Mi24P_2 {
	displayName = "$STR_VEH_NAME_MI24P+++";
	fuelCapacity = 2000; // base 1000
};

class Mi24_V;
class DZE_Veh_Mi24V_RU: Mi24_V {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI24V_RU";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Mi24V_RU_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24V_RU_1: DZE_Veh_Mi24V_RU {
	displayName = "$STR_VEH_NAME_MI24V_RU+";
	original = "DZE_Veh_Mi24V_RU";
	armor = 100; // base 50
	damageResistance = 0.00276; // base 0.00138

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Mi24V_RU_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Mi24V_RU_2: DZE_Veh_Mi24V_RU_1 {
	displayName = "$STR_VEH_NAME_MI24V_RU++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Mi24V_RU_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Mi24V_RU_3: DZE_Veh_Mi24V_RU_2 {
	displayName = "$STR_VEH_NAME_MI24V_RU+++";
	fuelCapacity = 2000; // base 1000
};
