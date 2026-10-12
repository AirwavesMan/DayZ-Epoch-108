class AH64D;
class DZE_Veh_AH64D_USMC: AH64D {
	scope = 2;
	displayName = "$STR_VEH_NAME_AH64D_USMC";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AH64D_USMC_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH64D_USMC_1: DZE_Veh_AH64D_USMC {
	displayName = "$STR_VEH_NAME_AH64D_USMC+";
	original = "DZE_Veh_AH64D_USMC";
	armor = 120; // base 60
	damageResistance = 0.01186; // base 0.00593

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AH64D_USMC_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH64D_USMC_2: DZE_Veh_AH64D_USMC_1 {
	displayName = "$STR_VEH_NAME_AH64D_USMC++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AH64D_USMC_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AH64D_USMC_3: DZE_Veh_AH64D_USMC_2 {
	displayName = "$STR_VEH_NAME_AH64D_USMC+++";
	fuelCapacity = 2000; // base 1000
};

class AH64D_EP1;
class DZE_Veh_AH64D_US: AH64D_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_AH64D_US";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AH64D_US_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH64D_US_1: DZE_Veh_AH64D_US {
	displayName = "$STR_VEH_NAME_AH64D_US+";
	original = "DZE_Veh_AH64D_US";
	armor = 120; // base 60
	damageResistance = 0.0111; // base 0.00555

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AH64D_US_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH64D_US_2: DZE_Veh_AH64D_US_1 {
	displayName = "$STR_VEH_NAME_AH64D_US++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AH64D_US_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AH64D_US_3: DZE_Veh_AH64D_US_2 {
	displayName = "$STR_VEH_NAME_AH64D_US+++";
	fuelCapacity = 2000; // base 1000
};

class BAF_Apache_AH1_D;
class DZE_Veh_Apache_AH1: BAF_Apache_AH1_D {
	scope = 2;
	displayName = "$STR_VEH_NAME_APACHE_AH1";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Apache_AH1_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Apache_AH1_1: DZE_Veh_Apache_AH1 {
	displayName = "$STR_VEH_NAME_APACHE_AH1+";
	original = "DZE_Veh_Apache_AH1";
	armor = 120; // base 60
	damageResistance = 0.0111; // base 0.00555

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Apache_AH1_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Apache_AH1_2: DZE_Veh_Apache_AH1_1 {
	displayName = "$STR_VEH_NAME_APACHE_AH1++";
	transportMaxWeapons = 36;
	transportMaxMagazines = 360;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Apache_AH1_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Apache_AH1_3: DZE_Veh_Apache_AH1_2 {
	displayName = "$STR_VEH_NAME_APACHE_AH1+++";
	fuelCapacity = 2000; // base 1000
};
