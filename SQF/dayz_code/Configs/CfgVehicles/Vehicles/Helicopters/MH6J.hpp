class MH6J_EP1;
class DZE_Veh_MH6J: MH6J_EP1 {

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	enablemanualfire = 0;
	displayName = "$STR_VEH_NAME_MH6J";
	vehicleClass = "DZE Vehicles Helicopters";
	radartype = 0;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 4;
	fuelCapacity = 242;
	class Turrets {};
	supplyRadius = 1.3;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_MH6J_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_MH6J_1: DZE_Veh_MH6J {
	displayName = "$STR_VEH_NAME_MH6J+";
	original = "DZE_Veh_MH6J";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_MH6J_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_MH6J_2: DZE_Veh_MH6J_1 {
	displayName = "$STR_VEH_NAME_MH6J++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_MH6J_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_MH6J_3: DZE_Veh_MH6J_2 {
	displayName = "$STR_VEH_NAME_MH6J+++";
	fuelCapacity = 500;
};
