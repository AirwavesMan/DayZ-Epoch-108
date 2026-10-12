class A10;
class DZE_Veh_A10_USMC: A10 {
	scope = 2;
	displayName = "$STR_VEH_NAME_A10_USMC";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_A10_USMC_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class A10_US_EP1;
class DZE_Veh_A10_US: A10_US_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_A10_US";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_A10_US_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class DZE_Veh_A10_USMC_1: DZE_Veh_A10_USMC {
	displayName = "$STR_VEH_NAME_A10_USMC+";
	original = "DZE_Veh_A10_USMC";
	armor = 150;
	damageResistance = 0.0097;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_A10_USMC_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_A10_USMC_2: DZE_Veh_A10_USMC_1 {
	displayName = "$STR_VEH_NAME_A10_USMC++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_A10_USMC_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_A10_USMC_3: DZE_Veh_A10_USMC_2 {
	displayName = "$STR_VEH_NAME_A10_USMC+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_A10_US_1: DZE_Veh_A10_US {
	displayName = "$STR_VEH_NAME_A10_US+";
	original = "DZE_Veh_A10_US";
	armor = 150;
	damageResistance = 0.0097;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_A10_US_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_A10_US_2: DZE_Veh_A10_US_1 {
	displayName = "$STR_VEH_NAME_A10_US++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_A10_US_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_A10_US_3: DZE_Veh_A10_US_2 {
	displayName = "$STR_VEH_NAME_A10_US+++";
	fuelCapacity = 2000;

	class Upgrades {};
};
