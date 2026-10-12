class An2_Base_EP1;
class DZE_Veh_AN2_Green: An2_Base_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_AN2_GREEN";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AN2_Green_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	hiddenSelections[] = {};
	weapons[] = {};
	magazines[] = {};
	gunnerHasFlares = false;
	transportMaxWeapons = 10;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 15;
	fuelCapacity = 757;

};

class DZE_Veh_AN2_Vickers: DZE_Veh_AN2_Green {
	displayName = "$STR_VEH_NAME_AN2_VICKER";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AN2_Vickers_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
	weapons[] = {"TwinVickers"};
	magazines[] = {"500Rnd_TwinVickers","500Rnd_TwinVickers"};

};

class DZE_Veh_AN2_WhiteRed: DZE_Veh_AN2_Green {
	displayName = "$STR_VEH_NAME_AN2_WHITERED";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AN2_WhiteRed_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
	hiddenSelections[] ={"Camo1","Camo2","Camo3"};

	hiddenSelectionsTextures[] =
	{
		"ca\Air_E\An2\Data\an2_1_A_CO",
		"ca\Air_E\An2\Data\an2_2_A_CO",
		"ca\Air_E\An2\Data\an2_wings_A_CO"
	};
};

class DZE_Veh_AN2_M134: DZE_Veh_AN2_WhiteRed {
	displayName = "$STR_VEH_NAME_AN2_M134";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AN2_M134_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
	weapons[] = {"TwinM134"};
	magazines[] = {"2000Rnd_762x51_M134"};

};

class An2_2_TK_CIV_EP1;
class DZE_Veh_AN2_WhiteGreen: An2_2_TK_CIV_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_AN2_WHITEGREEN";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AN2_WhiteGreen_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	weapons[] = {};
	magazines[] = {};
	gunnerHasFlares = false;
	transportMaxWeapons = 10;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 15;
	fuelCapacity = 757;

};

class DZE_Veh_AN2_Green_1: DZE_Veh_AN2_Green {
	displayName = "$STR_VEH_NAME_AN2_GREEN+";
	original = "DZE_Veh_AN2_Green";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AN2_Green_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AN2_Green_2: DZE_Veh_AN2_Green_1 {
	displayName = "$STR_VEH_NAME_AN2_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AN2_Green_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AN2_Green_3: DZE_Veh_AN2_Green_2 {
	displayName = "$STR_VEH_NAME_AN2_GREEN+++";
	fuelCapacity = 1514;

	class Upgrades {};
};

class DZE_Veh_AN2_Vickers_1: DZE_Veh_AN2_Vickers {
	displayName = "$STR_VEH_NAME_AN2_VICKER+";
	original = "DZE_Veh_AN2_Vickers";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AN2_Vickers_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AN2_Vickers_2: DZE_Veh_AN2_Vickers_1 {
	displayName = "$STR_VEH_NAME_AN2_VICKER++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AN2_Vickers_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AN2_Vickers_3: DZE_Veh_AN2_Vickers_2 {
	displayName = "$STR_VEH_NAME_AN2_VICKER+++";
	fuelCapacity = 1514;

	class Upgrades {};
};

class DZE_Veh_AN2_WhiteRed_1: DZE_Veh_AN2_WhiteRed {
	displayName = "$STR_VEH_NAME_AN2_WHITERED+";
	original = "DZE_Veh_AN2_WhiteRed";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AN2_WhiteRed_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AN2_WhiteRed_2: DZE_Veh_AN2_WhiteRed_1 {
	displayName = "$STR_VEH_NAME_AN2_WHITERED++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AN2_WhiteRed_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AN2_WhiteRed_3: DZE_Veh_AN2_WhiteRed_2 {
	displayName = "$STR_VEH_NAME_AN2_WHITERED+++";
	fuelCapacity = 1514;

	class Upgrades {};
};

class DZE_Veh_AN2_M134_1: DZE_Veh_AN2_M134 {
	displayName = "$STR_VEH_NAME_AN2_M134+";
	original = "DZE_Veh_AN2_M134";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AN2_M134_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AN2_M134_2: DZE_Veh_AN2_M134_1 {
	displayName = "$STR_VEH_NAME_AN2_M134++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AN2_M134_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AN2_M134_3: DZE_Veh_AN2_M134_2 {
	displayName = "$STR_VEH_NAME_AN2_M134+++";
	fuelCapacity = 1514;

	class Upgrades {};
};

class DZE_Veh_AN2_WhiteGreen_1: DZE_Veh_AN2_WhiteGreen {
	displayName = "$STR_VEH_NAME_AN2_WHITEGREEN+";
	original = "DZE_Veh_AN2_WhiteGreen";
	armor = 50;
	damageResistance = 0.00556;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AN2_WhiteGreen_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AN2_WhiteGreen_2: DZE_Veh_AN2_WhiteGreen_1 {
	displayName = "$STR_VEH_NAME_AN2_WHITEGREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 30;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AN2_WhiteGreen_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AN2_WhiteGreen_3: DZE_Veh_AN2_WhiteGreen_2 {
	displayName = "$STR_VEH_NAME_AN2_WHITEGREEN+++";
	fuelCapacity = 1514;

	class Upgrades {};
};
