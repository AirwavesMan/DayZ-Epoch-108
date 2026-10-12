class BAF_Merlin_HC3_D;
class DZE_Veh_AW101: BAF_Merlin_HC3_D {
	displayName = "$STR_VEH_NAME_AW101";
	vehicleClass = "DZE Vehicles Helicopters";
	magazines[] = {"120Rnd_CMFlareMagazine"};

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 6;
	fuelCapacity = 3222;
	radartype = 0;
	supplyRadius = 1.3;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AW101_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AW101_1: DZE_Veh_AW101 {
	displayName = "$STR_VEH_NAME_AW101+";
	original = "DZE_Veh_AW101";
	armor = 120;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AW101_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AW101_2: DZE_Veh_AW101_1 {
	displayName = "$STR_VEH_NAME_AW101++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 320;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AW101_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AW101_3: DZE_Veh_AW101_2 {
	displayName = "$STR_VEH_NAME_AW101+++";
	fuelCapacity = 6500;
};
