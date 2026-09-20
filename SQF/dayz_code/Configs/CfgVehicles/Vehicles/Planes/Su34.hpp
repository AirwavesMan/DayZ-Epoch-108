class Su34;
class DZE_Veh_Su34: Su34 {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Su34_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_SU34";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

};

class DZE_Veh_Su34_1: DZE_Veh_Su34 {
	displayName = "$STR_VEH_NAME_SU34+";
	original = "DZE_Veh_Su34";
	armor = 120;
	damageResistance = 0.00672;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Su34_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Su34_2: DZE_Veh_Su34_1 {
	displayName = "$STR_VEH_NAME_SU34++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Su34_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Su34_3: DZE_Veh_Su34_2 {
	displayName = "$STR_VEH_NAME_SU34+++";
	fuelCapacity = 2000;

	class Upgrades {};
};
