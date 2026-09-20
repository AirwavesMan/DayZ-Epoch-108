class pook_H13_amphib;
class DZE_Bell47_Amphib_Base: pook_H13_amphib {
	scope = 0;
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	radarType = 0;
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 4;
	attendant = 0;
	transportAmmo = 0;
	hideWeaponsCargo = 0;
	fuelCapacity = 450;
	supplyRadius = 1.3;

	class EventHandlers: DefaultEventhandlers {
		init = "";
	};
};

class DZE_Veh_Bell47_Amphib_Olive: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_OLIVE";
	hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa", "ca\air\data\clear_empty.paa", "\pook_h13\data\logo\csar.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_Olive_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_Olive_1: DZE_Veh_Bell47_Amphib_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_OLIVE+";
	original = "DZE_Veh_Bell47_Amphib_Olive";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_Olive_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_Olive_2: DZE_Veh_Bell47_Amphib_Olive_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_OLIVE++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_Olive_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_Olive_3: DZE_Veh_Bell47_Amphib_Olive_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_OLIVE+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Amphib_CDF: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CDF";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa", "ca\air\data\clear_empty.paa", "\pook_h13\data\logo\patrolczech.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_CDF_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_CDF_1: DZE_Veh_Bell47_Amphib_CDF {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CDF+";
	original = "DZE_Veh_Bell47_Amphib_CDF";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_CDF_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_CDF_2: DZE_Veh_Bell47_Amphib_CDF_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CDF++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_CDF_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_CDF_3: DZE_Veh_Bell47_Amphib_CDF_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CDF+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Amphib_TK: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_TK";
	hiddenSelectionsTextures[] = {"\CA\air_e\Data\mi17_body_ind_co.paa", "ca\air\data\clear_empty.paa", "\pook_h13\data\logo\patrolrussian.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_TK_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_TK_1: DZE_Veh_Bell47_Amphib_TK {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_TK+";
	original = "DZE_Veh_Bell47_Amphib_TK";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_TK_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_TK_2: DZE_Veh_Bell47_Amphib_TK_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_TK++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_TK_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_TK_3: DZE_Veh_Bell47_Amphib_TK_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_TK+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Amphib_INS: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_INS";
	hiddenSelectionsTextures[] = {"CA\air\Data\mi8_body_g_vsr_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_INS_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_INS_1: DZE_Veh_Bell47_Amphib_INS {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_INS+";
	original = "DZE_Veh_Bell47_Amphib_INS";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_INS_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_INS_2: DZE_Veh_Bell47_Amphib_INS_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_INS++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_INS_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_INS_3: DZE_Veh_Bell47_Amphib_INS_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_INS+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Amphib_UN: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_UN";
	hiddenSelectionsTextures[] = {"\CA\air_e\Data\mi17_body_un_co.paa", "ca\air\data\clear_empty.paa", "\pook_h13\data\logo\marinepatrol.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_UN_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_UN_1: DZE_Veh_Bell47_Amphib_UN {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_UN+";
	original = "DZE_Veh_Bell47_Amphib_UN";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_UN_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_UN_2: DZE_Veh_Bell47_Amphib_UN_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_UN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_UN_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_UN_3: DZE_Veh_Bell47_Amphib_UN_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_UN+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Amphib_PMC: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_PMC";
	hiddenSelectionsTextures[] = {"CA\air\Data\mi8_body_g_vsr_co.paa", "ca\air\data\clear_empty.paa", "\pook_h13\data\logo\CSAR.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_PMC_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_PMC_1: DZE_Veh_Bell47_Amphib_PMC {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_PMC+";
	original = "DZE_Veh_Bell47_Amphib_PMC";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_PMC_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_PMC_2: DZE_Veh_Bell47_Amphib_PMC_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_PMC++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_PMC_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_PMC_3: DZE_Veh_Bell47_Amphib_PMC_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_PMC+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Amphib_GUE: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_GUE";
	hiddenSelectionsTextures[] = {"CA\air\Data\mi8_body_g_vsr_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_GUE_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_GUE_1: DZE_Veh_Bell47_Amphib_GUE {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_GUE+";
	original = "DZE_Veh_Bell47_Amphib_GUE";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_GUE_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_GUE_2: DZE_Veh_Bell47_Amphib_GUE_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_GUE++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_GUE_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_GUE_3: DZE_Veh_Bell47_Amphib_GUE_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_GUE+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Amphib_CIV: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CIV";
	hiddenSelectionsTextures[] = {"\CA\air2\Chukar\Data\chukar_co.paa", "ca\air\data\clear_empty.paa", "\pook_h13\data\logo\cdfcg.paa"};

	weapons[] = {};
	magazines[] = {};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_CIV_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_CIV_1: DZE_Veh_Bell47_Amphib_CIV {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CIV+";
	original = "DZE_Veh_Bell47_Amphib_CIV";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_CIV_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_CIV_2: DZE_Veh_Bell47_Amphib_CIV_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CIV++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_CIV_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_CIV_3: DZE_Veh_Bell47_Amphib_CIV_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CIV+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Amphib_CIV_RU: DZE_Bell47_Amphib_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CIV_RU";
	hiddenSelectionsTextures[] = {"\CA\air2\Chukar\Data\chukar_co.paa", "ca\air\data\clear_empty.paa", "\pook_h13\data\logo\patrolrussian.paa"};

	weapons[] = {};
	magazines[] = {};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Amphib_CIV_RU_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_CIV_RU_1: DZE_Veh_Bell47_Amphib_CIV_RU {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CIV_RU+";
	original = "DZE_Veh_Bell47_Amphib_CIV_RU";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Amphib_CIV_RU_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Amphib_CIV_RU_2: DZE_Veh_Bell47_Amphib_CIV_RU_1 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CIV_RU++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Amphib_CIV_RU_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Amphib_CIV_RU_3: DZE_Veh_Bell47_Amphib_CIV_RU_2 {
	displayName = "$STR_VEH_NAME_BELLH13_AMPHIB_CIV_RU+++";
	fuelCapacity = 1000;
};
