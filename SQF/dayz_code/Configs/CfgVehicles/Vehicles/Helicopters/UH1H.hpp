class UH1H_base: Helicopter {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics;
			class Turrets: Turrets {};
		};
		class LeftDoorGun: MainTurret {
			class Turrets: Turrets {};
		};
	};
};

class DZE_Veh_UH1H_Green: UH1H_base {
	displayName = "$STR_VEH_NAME_UH1H_GREEN";
	vehicleClass = "DZE Vehicles Helicopters";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	model = "dayz_vehicles\helicopters\huey\huey.p3d";
	hiddenSelections[] = {};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	transportMaxWeapons = 15;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 6;
	fuelCapacity = 1333;
	radartype = 0;
	supplyRadius = 1.3;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {"100Rnd_762x51_M240"};

			gunnerCompartments = "compartment3";
		};
		class LeftDoorGun: LeftDoorGun {
			magazines[] = {"100Rnd_762x51_M240"};

			gunnerCompartments = "compartment3";
		};
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_Green_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Green_1: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_GREEN+";
	original = "DZE_Veh_UH1H_Green";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_Green_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Green_2: DZE_Veh_UH1H_Green_1 {
	displayName = "$STR_VEH_NAME_UH1H_GREEN++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_Green_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_Green_3: DZE_Veh_UH1H_Green_2 {
	displayName = "$STR_VEH_NAME_UH1H_GREEN+++";
	fuelCapacity = 2700;
};

class DZE_Veh_UH1H_Desert: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_DESERT";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"ca\air_E\UH1H\data\UH1D_TKA_CO.paa","ca\air_E\UH1H\data\UH1D_in_TKA_CO.paa","ca\air_E\UH1H\data\default_TKA_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_Desert_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Desert_1: DZE_Veh_UH1H_Desert {
	displayName = "$STR_VEH_NAME_UH1H_DESERT+";
	original = "DZE_Veh_UH1H_Desert";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_Desert_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Desert_2: DZE_Veh_UH1H_Desert_1 {
	displayName = "$STR_VEH_NAME_UH1H_DESERT++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_Desert_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_Desert_3: DZE_Veh_UH1H_Desert_2 {
	displayName = "$STR_VEH_NAME_UH1H_DESERT+++";
	fuelCapacity = 2700;
};

class DZE_Veh_UH1H_CDF: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_CDF";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_cdf_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_cdf_co.paa","ca\air_E\UH1H\data\default_TKA_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_CDF_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_CDF_1: DZE_Veh_UH1H_CDF {
	displayName = "$STR_VEH_NAME_UH1H_CDF+";
	original = "DZE_Veh_UH1H_CDF";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_CDF_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_CDF_2: DZE_Veh_UH1H_CDF_1 {
	displayName = "$STR_VEH_NAME_UH1H_CDF++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_CDF_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_CDF_3: DZE_Veh_UH1H_CDF_2 {
	displayName = "$STR_VEH_NAME_UH1H_CDF+++";
	fuelCapacity = 2700;
};

class DZE_Veh_UH1H_Woodland: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_WOODLAND";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_wdl_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_wdl_co.paa","\dayz_epoch_c\skins\uh1h\default_wdl_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_Woodland_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Woodland_1: DZE_Veh_UH1H_Woodland {
	displayName = "$STR_VEH_NAME_UH1H_WOODLAND+";
	original = "DZE_Veh_UH1H_Woodland";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_Woodland_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Woodland_2: DZE_Veh_UH1H_Woodland_1 {
	displayName = "$STR_VEH_NAME_UH1H_WOODLAND++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_Woodland_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_Woodland_3: DZE_Veh_UH1H_Woodland_2 {
	displayName = "$STR_VEH_NAME_UH1H_WOODLAND+++";
	fuelCapacity = 2700;
};

class DZE_Veh_UH1H_DesertLight: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_DESERT_LIGHT";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_racs_2_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_racs_co.paa","\dayz_epoch_c\skins\uh1h\default_des_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_DesertLight_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_DesertLight_1: DZE_Veh_UH1H_DesertLight {
	displayName = "$STR_VEH_NAME_UH1H_DESERT_LIGHT+";
	original = "DZE_Veh_UH1H_DesertLight";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_DesertLight_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_DesertLight_2: DZE_Veh_UH1H_DesertLight_1 {
	displayName = "$STR_VEH_NAME_UH1H_DESERT_LIGHT++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_DesertLight_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_DesertLight_3: DZE_Veh_UH1H_DesertLight_2 {
	displayName = "$STR_VEH_NAME_UH1H_DESERT_LIGHT+++";
	fuelCapacity = 2700;
};

class DZE_Veh_UH1H_Grey: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_GREY";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_sf_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_sf_co.paa","\dayz_epoch_c\skins\uh1h\default_grey_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_Grey_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Grey_1: DZE_Veh_UH1H_Grey {
	displayName = "$STR_VEH_NAME_UH1H_GREY+";
	original = "DZE_Veh_UH1H_Grey";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_Grey_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Grey_2: DZE_Veh_UH1H_Grey_1 {
	displayName = "$STR_VEH_NAME_UH1H_GREY++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_Grey_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_Grey_3: DZE_Veh_UH1H_Grey_2 {
	displayName = "$STR_VEH_NAME_UH1H_GREY+++";
	fuelCapacity = 2700;
};

class DZE_Veh_UH1H_Black: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_BLACK";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_bl_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_in_bl_co.paa","\dayz_epoch_c\skins\uh1h\default_black_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_Black_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Black_1: DZE_Veh_UH1H_Black {
	displayName = "$STR_VEH_NAME_UH1H_BLACK+";
	original = "DZE_Veh_UH1H_Black";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_Black_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Black_2: DZE_Veh_UH1H_Black_1 {
	displayName = "$STR_VEH_NAME_UH1H_BLACK++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_Black_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_Black_3: DZE_Veh_UH1H_Black_2 {
	displayName = "$STR_VEH_NAME_UH1H_BLACK+++";
	fuelCapacity = 2700;
};

class DZE_Veh_UH1H_SAR: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_SAR";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\uh1d_sar_co.paa","\dayz_epoch_c\skins\uh1h\uh1d_sar_in_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_SAR_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_SAR_1: DZE_Veh_UH1H_SAR {
	displayName = "$STR_VEH_NAME_UH1H_SAR+";
	original = "DZE_Veh_UH1H_SAR";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_SAR_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_SAR_2: DZE_Veh_UH1H_SAR_1 {
	displayName = "$STR_VEH_NAME_UH1H_SAR++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_SAR_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_SAR_3: DZE_Veh_UH1H_SAR_2 {
	displayName = "$STR_VEH_NAME_UH1H_SAR+++";
	fuelCapacity = 2700;
};

class DZE_Veh_UH1H_Winter: DZE_Veh_UH1H_Green {
	displayName = "$STR_VEH_NAME_UH1H_WINTER";
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uh1h\UH1D_winter_CO.paa","\dayz_epoch_c\skins\uh1h\UH1D_in_winter_CO.paa","\dayz_epoch_c\skins\uh1h\default_winter_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1H_Winter_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Winter_1: DZE_Veh_UH1H_Winter {
	displayName = "$STR_VEH_NAME_UH1H_WINTER+";
	original = "DZE_Veh_UH1H_Winter";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1H_Winter_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1H_Winter_2: DZE_Veh_UH1H_Winter_1 {
	displayName = "$STR_VEH_NAME_UH1H_WINTER++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1H_Winter_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1H_Winter_3: DZE_Veh_UH1H_Winter_2 {
	displayName = "$STR_VEH_NAME_UH1H_WINTER+++";
	fuelCapacity = 2700;
};
