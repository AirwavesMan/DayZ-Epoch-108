class AV8B;
class DZE_Veh_AV8B_LGB: AV8B {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AV8B_LGB_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_AV8B_LGB";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class AV8B2;
class DZE_Veh_AV8B: AV8B2 {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AV8B_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_AV8B";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class DZE_Veh_AV8B_LGB_1: DZE_Veh_AV8B_LGB {
	displayName = "$STR_VEH_NAME_AV8B_LGB+";
	original = "DZE_Veh_AV8B_LGB";
	armor = 80;
	damageResistance = 0.02492;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AV8B_LGB_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AV8B_LGB_2: DZE_Veh_AV8B_LGB_1 {
	displayName = "$STR_VEH_NAME_AV8B_LGB++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AV8B_LGB_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AV8B_LGB_3: DZE_Veh_AV8B_LGB_2 {
	displayName = "$STR_VEH_NAME_AV8B_LGB+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_AV8B_1: DZE_Veh_AV8B {
	displayName = "$STR_VEH_NAME_AV8B+";
	original = "DZE_Veh_AV8B";
	armor = 80;
	damageResistance = 0.02492;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AV8B_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AV8B_2: DZE_Veh_AV8B_1 {
	displayName = "$STR_VEH_NAME_AV8B++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AV8B_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AV8B_3: DZE_Veh_AV8B_2 {
	displayName = "$STR_VEH_NAME_AV8B+++";
	fuelCapacity = 2000;

	class Upgrades {};
};
