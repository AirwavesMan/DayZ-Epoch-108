class C130J_US_EP1;
class DZE_Veh_C130J: C130J_US_EP1 {
	displayName = "$STR_VEH_NAME_C130";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_C130J_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
	transportMaxWeapons = 50;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 20;
	fuelCapacity = 34095;


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class DZE_Veh_C130J_1: DZE_Veh_C130J {
	displayName = "$STR_VEH_NAME_C130+";
	original = "DZE_Veh_C130J";
	armor = 140;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_C130J_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_C130J_2: DZE_Veh_C130J_1 {
	displayName = "$STR_VEH_NAME_C130++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 800;
	transportMaxBackpacks = 40;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_C130J_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_C130J_3: DZE_Veh_C130J_2 {
	displayName = "$STR_VEH_NAME_C130+++";
	fuelCapacity = 68190;

	class Upgrades {};
};
