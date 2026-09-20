class C130J_US_EP1;
class DZE_Veh_C130J: C130J_US_EP1 {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_C130J_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_C130";
	vehicleClass = "DZE Vehicles Planes";
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
		ItemHeliLRK[] = {"DZE_Veh_C130J_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_C130J_2: DZE_Veh_C130J_1 {
	displayName = "$STR_VEH_NAME_C130++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 800;
	transportMaxBackpacks = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_C130J_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_C130J_3: DZE_Veh_C130J_2 {
	displayName = "$STR_VEH_NAME_C130+++";
	fuelCapacity = 68190;

	class Upgrades {};
};
