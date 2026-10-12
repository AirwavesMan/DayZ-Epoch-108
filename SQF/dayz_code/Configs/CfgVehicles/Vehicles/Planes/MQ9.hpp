class MQ9PredatorB;
class DZE_Veh_MQ9_USMC: MQ9PredatorB {
	scope = 2;
	displayName = "$STR_VEH_NAME_MQ9_USMC";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_MQ9_USMC_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};

	DZE_MACRO_VEHICLE_CANSEE_AIR

	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
};

class MQ9PredatorB_US_EP1;
class DZE_Veh_MQ9_US: MQ9PredatorB_US_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_MQ9_US";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_MQ9_US_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};

	DZE_MACRO_VEHICLE_CANSEE_AIR

	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
};

class DZE_Veh_MQ9_USMC_1: DZE_Veh_MQ9_USMC {
	displayName = "$STR_VEH_NAME_MQ9_USMC+";
	original = "DZE_Veh_MQ9_USMC";
	armor = 20;
	damageResistance = 0.01352;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_MQ9_USMC_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_MQ9_USMC_2: DZE_Veh_MQ9_USMC_1 {
	displayName = "$STR_VEH_NAME_MQ9_USMC++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_MQ9_USMC_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_MQ9_USMC_3: DZE_Veh_MQ9_USMC_2 {
	displayName = "$STR_VEH_NAME_MQ9_USMC+++";
	fuelCapacity = 7200;

	class Upgrades {};
};

class DZE_Veh_MQ9_US_1: DZE_Veh_MQ9_US {
	displayName = "$STR_VEH_NAME_MQ9_US+";
	original = "DZE_Veh_MQ9_US";
	armor = 20;
	damageResistance = 0.01352;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_MQ9_US_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_MQ9_US_2: DZE_Veh_MQ9_US_1 {
	displayName = "$STR_VEH_NAME_MQ9_US++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_MQ9_US_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_MQ9_US_3: DZE_Veh_MQ9_US_2 {
	displayName = "$STR_VEH_NAME_MQ9_US+++";
	fuelCapacity = 7200;

	class Upgrades {};
};
