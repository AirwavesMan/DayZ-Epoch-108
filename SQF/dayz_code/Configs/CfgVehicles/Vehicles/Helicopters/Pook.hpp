class pook_H13_base;
class DZE_Bell47_Base: pook_H13_base {
	scope = 0;
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	enablemanualfire = 0;
	radarType = 0;
	class Turrets {};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	threat[] = {0,0,0};
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 4;
	attendant = 0;
	transportAmmo = 0;
	hideWeaponsCargo = 0;
	fuelCapacity = 450;
	supplyRadius = 1.3;
};

class DZE_Veh_Bell47_MedEvac_Olive: DZE_Bell47_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC";
	model = "\pook_H13\pook_H13_medevac.p3d";
	hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};
	transportSoldier = 3;
	cargoAction[] = {"UAZ_Cargo01","M113_Cargo04_EP1","M113_Cargo04_EP1"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_MedEvac_Olive_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Olive_1: DZE_Veh_Bell47_MedEvac_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC+";
	original = "DZE_Veh_Bell47_MedEvac_Olive";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_MedEvac_Olive_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Olive_2: DZE_Veh_Bell47_MedEvac_Olive_1 {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_MedEvac_Olive_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Olive_3: DZE_Veh_Bell47_MedEvac_Olive_2 {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_MedEvac_Green: DZE_Veh_Bell47_MedEvac_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_GREEN";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_MedEvac_Green_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Green_1: DZE_Veh_Bell47_MedEvac_Green {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_GREEN+";
	original = "DZE_Veh_Bell47_MedEvac_Green";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_MedEvac_Green_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Green_2: DZE_Veh_Bell47_MedEvac_Green_1 {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_MedEvac_Green_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Green_3: DZE_Veh_Bell47_MedEvac_Green_2 {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_GREEN+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_MedEvac_Orange: DZE_Veh_Bell47_MedEvac_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE";
	hiddenSelectionsTextures[] = {"\CA\air2\Chukar\Data\chukar_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_MedEvac_Orange_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Orange_1: DZE_Veh_Bell47_MedEvac_Orange {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE+";
	original = "DZE_Veh_Bell47_MedEvac_Orange";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_MedEvac_Orange_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Orange_2: DZE_Veh_Bell47_MedEvac_Orange_1 {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_MedEvac_Orange_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_MedEvac_Orange_3: DZE_Veh_Bell47_MedEvac_Orange_2 {
	displayName = "$STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Gunship_M60_Olive: DZE_Bell47_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP";
	model = "\pook_H13\pook_H13_gunship.p3d";
	hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa","ca\a10\data\a10_01_co.paa","ca\a10\data\a10_02_co.paa"};
	transportSoldier = 1;
	threat[] = {0.05,0.1,0.01};
	gunBeg[] = {"muzzle_1","muzzle_2"};
	gunEnd[] = {"chamber_1","chamber_2"};
	memoryPointGun = "machinegun";
	memoryPointLMissile = "Missile_1";
	memoryPointRMissile = "Missile_2";
	memoryPointLRocket = "Rocket_1";
	memoryPointRRocket = "Rocket_2";
	selectionFireAnim = "zasleh";
	weapons[] = {"pook_M60_dual_DZ","pook_H13Grenades","CMFlareLauncher"};
	magazines[] = {"pook_1300Rnd_762x51_M60","pook_12Rnd_Grenade_Camel","60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Gunship_M60_Olive_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Gunship_M60_Olive_1: DZE_Veh_Bell47_Gunship_M60_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP+";
	original = "DZE_Veh_Bell47_Gunship_M60_Olive";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Gunship_M60_Olive_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Gunship_M60_Olive_2: DZE_Veh_Bell47_Gunship_M60_Olive_1 {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Gunship_M60_Olive_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Gunship_M60_Olive_3: DZE_Veh_Bell47_Gunship_M60_Olive_2 {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Gunship_M60_Green: DZE_Veh_Bell47_Gunship_M60_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Gunship_M60_Green_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Gunship_M60_Green_1: DZE_Veh_Bell47_Gunship_M60_Green {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN+";
	original = "DZE_Veh_Bell47_Gunship_M60_Green";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Gunship_M60_Green_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Gunship_M60_Green_2: DZE_Veh_Bell47_Gunship_M60_Green_1 {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Gunship_M60_Green_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Gunship_M60_Green_3: DZE_Veh_Bell47_Gunship_M60_Green_2 {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN+++";
	fuelCapacity = 1000;
};

class pook_H13_transport: pook_H13_base {
	class Turrets; // External class reference
	class MainTurret; // External class reference
};
class DZE_Veh_Bell47_Transport_Olive: pook_H13_transport {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT";

	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	radarType = 0;
	cargoIsCoDriver[] = {1,0,0};
	cargoAction[] = {"MH6_Cargo01","MH6_Cargo03","MH6_Cargo02"};
	threat[] = {0.01,0.01,0.01};
	transportMaxWeapons = 3;
	transportMaxMagazines = 30;
	transportMaxBackpacks = 2;
	attendant = 0;
	transportAmmo = 0;
	hideWeaponsCargo = 0;
	fuelCapacity = 450;
	weapons[] = {"pook_H13Grenades","CMFlareLauncher"};
	magazines[] = {"pook_12Rnd_Grenade_Camel","60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"pook_M60_side_DZ","pook_H13Grenades"};
			//magazines[] = {"pook_250Rnd_762x51","pook_250Rnd_762x51","pook_250Rnd_762x51","pook_250Rnd_762x51","pook_250Rnd_762x51","pook_12Rnd_Grenade_Camel"};
		};
	};

	enableManualFire = 0;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Transport_Olive_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Transport_Olive_1: DZE_Veh_Bell47_Transport_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT+";
	original = "DZE_Veh_Bell47_Transport_Olive";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Transport_Olive_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Transport_Olive_2: DZE_Veh_Bell47_Transport_Olive_1 {
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Transport_Olive_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Transport_Olive_3: DZE_Veh_Bell47_Transport_Olive_2 {
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Transport_Green: DZE_Veh_Bell47_Transport_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT_GREEN";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};

	enableManualFire = 0;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Transport_Green_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Transport_Green_1: DZE_Veh_Bell47_Transport_Green {
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT_GREEN+";
	original = "DZE_Veh_Bell47_Transport_Green";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Transport_Green_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Transport_Green_2: DZE_Veh_Bell47_Transport_Green_1 {
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Transport_Green_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Transport_Green_3: DZE_Veh_Bell47_Transport_Green_2 {
	displayName = "$STR_VEH_NAME_BELLH13_TRANSPORT_GREEN+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_BlueWhite: DZE_Bell47_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_BELLH13_CIV";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8civil_body_g_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_BlueWhite_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_BlueWhite_1: DZE_Veh_Bell47_BlueWhite {
	displayName = "$STR_VEH_NAME_BELLH13_CIV+";
	original = "DZE_Veh_Bell47_BlueWhite";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_BlueWhite_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_BlueWhite_2: DZE_Veh_Bell47_BlueWhite_1 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_BlueWhite_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_BlueWhite_3: DZE_Veh_Bell47_BlueWhite_2 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_White: DZE_Veh_Bell47_BlueWhite {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_WHITE";
	hiddenSelectionsTextures[] = {"\CA\air_e\Data\mi17_body_un_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_White_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_White_1: DZE_Veh_Bell47_White {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_WHITE+";
	original = "DZE_Veh_Bell47_White";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_White_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_White_2: DZE_Veh_Bell47_White_1 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_WHITE++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_White_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_White_3: DZE_Veh_Bell47_White_2 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_WHITE+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Blue: DZE_Veh_Bell47_BlueWhite {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLUE";
	hiddenSelectionsTextures[] = {"\CA\water2\Seafox\Data\seafox_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Blue_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Blue_1: DZE_Veh_Bell47_Blue {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLUE+";
	original = "DZE_Veh_Bell47_Blue";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Blue_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Blue_2: DZE_Veh_Bell47_Blue_1 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLUE++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Blue_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Blue_3: DZE_Veh_Bell47_Blue_2 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLUE+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Black: DZE_Veh_Bell47_BlueWhite {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLACK";
	hiddenSelectionsTextures[] = {"ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Black_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Black_1: DZE_Veh_Bell47_Black {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLACK+";
	original = "DZE_Veh_Bell47_Black";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Black_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Black_2: DZE_Veh_Bell47_Black_1 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLACK++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Black_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Black_3: DZE_Veh_Bell47_Black_2 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_BLACK+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Yellow: DZE_Veh_Bell47_BlueWhite {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_YELLOW";
	hiddenSelectionsTextures[] = {"pook_h13\data\yellow.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Yellow_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Yellow_1: DZE_Veh_Bell47_Yellow {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_YELLOW+";
	original = "DZE_Veh_Bell47_Yellow";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Yellow_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Yellow_2: DZE_Veh_Bell47_Yellow_1 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_YELLOW++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Yellow_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Yellow_3: DZE_Veh_Bell47_Yellow_2 {
	displayName = "$STR_VEH_NAME_BELLH13_CIV_YELLOW+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Gunship_M134_Olive: DZE_Veh_Bell47_Gunship_M60_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP";
	weapons[] = {"pook_M60_dual_m134_DZ","pook_H13Grenades","CMFlareLauncher"};
	magazines[] = {"2000Rnd_762x51_M134","pook_12Rnd_Grenade_Camel","60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Gunship_M134_Olive_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Gunship_M134_Olive_1: DZE_Veh_Bell47_Gunship_M134_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP+";
	original = "DZE_Veh_Bell47_Gunship_M134_Olive";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Gunship_M134_Olive_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Gunship_M134_Olive_2: DZE_Veh_Bell47_Gunship_M134_Olive_1 {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Gunship_M134_Olive_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Gunship_M134_Olive_3: DZE_Veh_Bell47_Gunship_M134_Olive_2 {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP+++";
	fuelCapacity = 1000;
};

class DZE_Veh_Bell47_Gunship_M134_Green: DZE_Veh_Bell47_Gunship_M134_Olive {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN";
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Bell47_Gunship_M134_Green_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Gunship_M134_Green_1: DZE_Veh_Bell47_Gunship_M134_Green {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN+";
	original = "DZE_Veh_Bell47_Gunship_M134_Green";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Bell47_Gunship_M134_Green_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Bell47_Gunship_M134_Green_2: DZE_Veh_Bell47_Gunship_M134_Green_1 {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Bell47_Gunship_M134_Green_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Bell47_Gunship_M134_Green_3: DZE_Veh_Bell47_Gunship_M134_Green_2 {
	displayName = "$STR_VEH_NAME_BELLH13_GUNSHIP_GREEN+++";
	fuelCapacity = 1000;
};
