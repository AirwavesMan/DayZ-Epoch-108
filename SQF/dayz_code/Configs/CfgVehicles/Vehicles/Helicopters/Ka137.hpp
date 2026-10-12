class Ka137_MG_PMC;
class DZE_Veh_Ka137_PK: Ka137_MG_PMC {
	scope = 2;
	displayName = "$STR_VEH_NAME_KA137_PK";
	vehicleClass = "DZE Vehicles Helicopters";
	DZE_MACRO_VEHICLE_CANSEE_AIR

	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 1.3;

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Ka137_PK_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Ka137_PK_1: DZE_Veh_Ka137_PK {
	displayName = "$STR_VEH_NAME_KA137_PK+";
	original = "DZE_Veh_Ka137_PK";
	armor = 2; // base 1
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Ka137_PK_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Ka137_PK_2: DZE_Veh_Ka137_PK_1 {
	displayName = "$STR_VEH_NAME_KA137_PK++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Ka137_PK_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Ka137_PK_3: DZE_Veh_Ka137_PK_2 {
	displayName = "$STR_VEH_NAME_KA137_PK+++";
	fuelCapacity = 2000; // base 1000
};

class Ka137_PMC;
class DZE_Veh_Ka137: Ka137_PMC {
	scope = 2;
	displayName = "$STR_VEH_NAME_KA137";
	vehicleClass = "DZE Vehicles Helicopters";
	DZE_MACRO_VEHICLE_CANSEE_AIR

	DZE_MACRO_VEHICLE_SIDE
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = 1.3;

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Ka137_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Ka137_1: DZE_Veh_Ka137 {
	displayName = "$STR_VEH_NAME_KA137+";
	original = "DZE_Veh_Ka137";
	armor = 2; // base 1
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Ka137_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Ka137_2: DZE_Veh_Ka137_1 {
	displayName = "$STR_VEH_NAME_KA137++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Ka137_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Ka137_3: DZE_Veh_Ka137_2 {
	displayName = "$STR_VEH_NAME_KA137+++";
	fuelCapacity = 2000; // base 1000
};
