class Ka52;
class DZE_Veh_Ka52: Ka52 {
	scope = 2;
	displayName = "$STR_VEH_NAME_KA52";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Ka52_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Ka52_1: DZE_Veh_Ka52 {
	displayName = "$STR_VEH_NAME_KA52+";
	original = "DZE_Veh_Ka52";
	armor = 130; // base 65
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Ka52_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Ka52_2: DZE_Veh_Ka52_1 {
	displayName = "$STR_VEH_NAME_KA52++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Ka52_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Ka52_3: DZE_Veh_Ka52_2 {
	displayName = "$STR_VEH_NAME_KA52+++";
	fuelCapacity = 2000; // base 1000
};

class Ka52Black;
class DZE_Veh_Ka52_Black: Ka52Black {
	scope = 2;
	displayName = "$STR_VEH_NAME_KA52_BLACK";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_Ka52_Black_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Ka52_Black_1: DZE_Veh_Ka52_Black {
	displayName = "$STR_VEH_NAME_KA52_BLACK+";
	original = "DZE_Veh_Ka52_Black";
	armor = 130; // base 65
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_Ka52_Black_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_Ka52_Black_2: DZE_Veh_Ka52_Black_1 {
	displayName = "$STR_VEH_NAME_KA52_BLACK++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_Ka52_Black_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_Ka52_Black_3: DZE_Veh_Ka52_Black_2 {
	displayName = "$STR_VEH_NAME_KA52_BLACK+++";
	fuelCapacity = 2000; // base 1000
};
