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
		ItemHeliAVE[] = {"DZE_Veh_AW101_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AW101_1: DZE_Veh_AW101 {
	displayName = "$STR_VEH_NAME_AW101+";
	original = "DZE_Veh_AW101";
	armor = 120;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AW101_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AW101_2: DZE_Veh_AW101_1 {
	displayName = "$STR_VEH_NAME_AW101++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 320;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AW101_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AW101_3: DZE_Veh_AW101_2 {
	displayName = "$STR_VEH_NAME_AW101+++";
	fuelCapacity = 6500;
};
