class AH6J_EP1;
class DZE_Veh_AH6J_M134: AH6J_EP1 {
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

	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AH6J_M134_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH6J_M134_1: DZE_Veh_AH6J_M134 {
	displayName = "$STR_VEH_NAME_AH6J_M134+";
	original = "DZE_Veh_AH6J_M134";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AH6J_M134_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH6J_M134_2: DZE_Veh_AH6J_M134_1 {
	displayName = "$STR_VEH_NAME_AH6J_M134++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AH6J_M134_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
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
		ItemHeliAVE[] = {"DZE_Veh_AH6J_FFAR_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH6J_FFAR_1: DZE_Veh_AH6J_FFAR {
	displayName = "$STR_VEH_NAME_AH6J_FFAR+";
	original = "DZE_Veh_AH6J_FFAR";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AH6J_FFAR_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH6J_FFAR_2: DZE_Veh_AH6J_FFAR_1 {
	displayName = "$STR_VEH_NAME_AH6J_FFAR++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AH6J_FFAR_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
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
		ItemHeliAVE[] = {"DZE_Veh_AH6X_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH6X_1: DZE_Veh_AH6X {
	displayName = "$STR_VEH_NAME_AH6X+";
	original = "DZE_Veh_AH6X";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AH6X_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH6X_2: DZE_Veh_AH6X_1 {
	displayName = "$STR_VEH_NAME_AH6X++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AH6X_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AH6X_3: DZE_Veh_AH6X_2 {
	displayName = "$STR_VEH_NAME_AH6X+++";
	fuelCapacity = 500;
};
