class AH6J_EP1;
class DZE_Veh_AH6J_M134: AH6J_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_AH6J_M134";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	weapons[] = {"TwinM134","CMFlareLauncher"};
	magazines[] = {"4000Rnd_762x51_M134","60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};

	class Turrets {};
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 4;
	fuelCapacity = 242;
	supplyRadius = 1.3;
	radartype = 0;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AH6J_M134_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH6J_M134_1: DZE_Veh_AH6J_M134 {
	displayName = "$STR_VEH_NAME_AH6J_M134+";
	original = "DZE_Veh_AH6J_M134";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AH6J_M134_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH6J_M134_2: DZE_Veh_AH6J_M134_1 {
	displayName = "$STR_VEH_NAME_AH6J_M134++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AH6J_M134_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AH6J_M134_3: DZE_Veh_AH6J_M134_2 {
	displayName = "$STR_VEH_NAME_AH6J_M134+++";
	fuelCapacity = 500;
};

class DZE_Veh_AH6J_FFAR: AH6J_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_AH6J_FFAR";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 4;
	fuelCapacity = 242;
	supplyRadius = 1.3;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AH6J_FFAR_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH6J_FFAR_1: DZE_Veh_AH6J_FFAR {
	displayName = "$STR_VEH_NAME_AH6J_FFAR+";
	original = "DZE_Veh_AH6J_FFAR";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AH6J_FFAR_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH6J_FFAR_2: DZE_Veh_AH6J_FFAR_1 {
	displayName = "$STR_VEH_NAME_AH6J_FFAR++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AH6J_FFAR_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AH6J_FFAR_3: DZE_Veh_AH6J_FFAR_2 {
	displayName = "$STR_VEH_NAME_AH6J_FFAR+++";
	fuelCapacity = 500;
};

class AH6X_EP1;
class DZE_Veh_AH6X: AH6X_EP1 {
	displayName = "$STR_VEH_NAME_AH6X";
	vehicleClass = "DZE Vehicles Helicopters";
	model = "dayz_vehicles\helicopters\greybird\greybird.p3d";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 4;
	fuelCapacity = 242;
	radartype = 0;
	supplyRadius = 1.3;

	class Turrets {};

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AH6X_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH6X_1: DZE_Veh_AH6X {
	displayName = "$STR_VEH_NAME_AH6X+";
	original = "DZE_Veh_AH6X";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AH6X_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH6X_2: DZE_Veh_AH6X_1 {
	displayName = "$STR_VEH_NAME_AH6X++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AH6X_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AH6X_3: DZE_Veh_AH6X_2 {
	displayName = "$STR_VEH_NAME_AH6X+++";
	fuelCapacity = 500;
};
