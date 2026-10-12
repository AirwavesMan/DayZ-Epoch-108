class Chukar;
class DZE_Veh_BQM74_USMC: Chukar {
	scope = 2;
	displayName = "$STR_VEH_NAME_BQM74_USMC";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_BQM74_USMC_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};

	DZE_MACRO_VEHICLE_CANSEE_AIR

	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
};

class Chukar_EP1;
class DZE_Veh_BQM74_US: Chukar_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BQM74_US";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_BQM74_US_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};

	DZE_MACRO_VEHICLE_CANSEE_AIR

	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
};

class DZE_Veh_BQM74_USMC_1: DZE_Veh_BQM74_USMC {
	displayName = "$STR_VEH_NAME_BQM74_USMC+";
	original = "DZE_Veh_BQM74_USMC";
	armor = 20;
	damageResistance = 0.01352;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_BQM74_USMC_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_BQM74_USMC_2: DZE_Veh_BQM74_USMC_1 {
	displayName = "$STR_VEH_NAME_BQM74_USMC++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_BQM74_USMC_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_BQM74_USMC_3: DZE_Veh_BQM74_USMC_2 {
	displayName = "$STR_VEH_NAME_BQM74_USMC+++";
	fuelCapacity = 6000;

	class Upgrades {};
};

class DZE_Veh_BQM74_US_1: DZE_Veh_BQM74_US {
	displayName = "$STR_VEH_NAME_BQM74_US+";
	original = "DZE_Veh_BQM74_US";
	armor = 20;
	damageResistance = 0.01352;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_BQM74_US_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_BQM74_US_2: DZE_Veh_BQM74_US_1 {
	displayName = "$STR_VEH_NAME_BQM74_US++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_BQM74_US_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_BQM74_US_3: DZE_Veh_BQM74_US_2 {
	displayName = "$STR_VEH_NAME_BQM74_US+++";
	fuelCapacity = 6000;

	class Upgrades {};
};
