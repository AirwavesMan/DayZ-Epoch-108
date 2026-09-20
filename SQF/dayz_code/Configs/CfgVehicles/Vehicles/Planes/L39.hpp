class L39_2_ACR;
class DZE_Veh_L39ZA_Green: L39_2_ACR {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_L39ZA_Green_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_L39ZA_GREEN";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class L39_ACR;
class DZE_Veh_L39C: L39_ACR {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_L39C_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_L39C";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class L39_TK_EP1;
class DZE_Veh_L39ZA_TK: L39_TK_EP1 {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_L39ZA_TK_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_L39ZA_TK";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class DZE_Veh_L39ZA_Green_1: DZE_Veh_L39ZA_Green {
	displayName = "$STR_VEH_NAME_L39ZA_GREEN+";
	original = "DZE_Veh_L39ZA_Green";
	armor = 120;
	damageResistance = 0.008;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_L39ZA_Green_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_L39ZA_Green_2: DZE_Veh_L39ZA_Green_1 {
	displayName = "$STR_VEH_NAME_L39ZA_GREEN++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_L39ZA_Green_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_L39ZA_Green_3: DZE_Veh_L39ZA_Green_2 {
	displayName = "$STR_VEH_NAME_L39ZA_GREEN+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_L39C_1: DZE_Veh_L39C {
	displayName = "$STR_VEH_NAME_L39C+";
	original = "DZE_Veh_L39C";
	armor = 120;
	damageResistance = 0.008;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_L39C_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_L39C_2: DZE_Veh_L39C_1 {
	displayName = "$STR_VEH_NAME_L39C++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_L39C_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_L39C_3: DZE_Veh_L39C_2 {
	displayName = "$STR_VEH_NAME_L39C+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_L39ZA_TK_1: DZE_Veh_L39ZA_TK {
	displayName = "$STR_VEH_NAME_L39ZA_TK+";
	original = "DZE_Veh_L39ZA_TK";
	armor = 120;
	damageResistance = 0.008;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_L39ZA_TK_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_L39ZA_TK_2: DZE_Veh_L39ZA_TK_1 {
	displayName = "$STR_VEH_NAME_L39ZA_TK++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_L39ZA_TK_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_L39ZA_TK_3: DZE_Veh_L39ZA_TK_2 {
	displayName = "$STR_VEH_NAME_L39ZA_TK+++";
	fuelCapacity = 2000;

	class Upgrades {};
};
