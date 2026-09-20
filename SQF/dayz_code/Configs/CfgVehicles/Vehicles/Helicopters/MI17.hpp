class Mi17_base: Helicopter  {
	class Turrets: Turrets {

		class MainTurret: MainTurret {
			class ViewOptics;
			class Turrets: Turrets {};
		};
		class BackTurret: MainTurret {
			class Turrets: Turrets {};
		};
	};
};

class DZE_Veh_Mi17: Mi17_base	 {
	displayName = "$STR_VEH_NAME_MI17";
	vehicleClass = "DZE Vehicles Helicopters";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	hiddenSelections[] = {};
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	radartype = 0;

	class Turrets: Turrets  {
		class MainTurret: MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};
		class BackTurret: BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_1: DZE_Veh_Mi17 {
	displayName = "$STR_VEH_NAME_MI17+";
	original = "DZE_Veh_Mi17";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_2: DZE_Veh_Mi17_1 {
	displayName = "$STR_VEH_NAME_MI17++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_3: DZE_Veh_Mi17_2 {
	displayName = "$STR_VEH_NAME_MI17+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_TK: Mi17_base  {
	displayName = "$STR_VEH_NAME_MI17_TK";
	vehicleClass = "DZE Vehicles Helicopters";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	hiddenSelectionsTextures[] = {"\ca\air_E\Data\mi17_body_IND_CO.paa", "\ca\air_E\Data\mi17_det_IND_CO.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};
	radartype = 0;

	class Turrets: Turrets  {
		class MainTurret: MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};
		class BackTurret: BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_TK_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_TK_1: DZE_Veh_Mi17_TK {
	displayName = "$STR_VEH_NAME_MI17_TK+";
	original = "DZE_Veh_Mi17_TK";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_TK_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_TK_2: DZE_Veh_Mi17_TK_1 {
	displayName = "$STR_VEH_NAME_MI17_TK++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_TK_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_TK_3: DZE_Veh_Mi17_TK_2 {
	displayName = "$STR_VEH_NAME_MI17_TK+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_UN: Mi17_base  {
	displayName = "$STR_VEH_NAME_MI17_UN";
	vehicleClass = "DZE Vehicles Helicopters";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	hiddenSelectionsTextures[] = {"\CA\air_E\data\mi17_body_UN_CO.paa", "\CA\air_E\data\mi17_det_UN_CO.paa", "\ca\air_E\Data\mi17_decals2_UN_CA.paa", "\ca\air_E\Data\mi17_decals_UN_CA.paa"};
	radartype = 0;

	class Turrets: Turrets  {
		class MainTurret: MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};
		class BackTurret: BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_UN_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_UN_1: DZE_Veh_Mi17_UN {
	displayName = "$STR_VEH_NAME_MI17_UN+";
	original = "DZE_Veh_Mi17_UN";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_UN_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_UN_2: DZE_Veh_Mi17_UN_1 {
	displayName = "$STR_VEH_NAME_MI17_UN++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_UN_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_UN_3: DZE_Veh_Mi17_UN_2 {
	displayName = "$STR_VEH_NAME_MI17_UN+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_CDF: Mi17_base {
	displayName = "$STR_VEH_NAME_MI17_CDF";
	vehicleClass = "DZE Vehicles Helicopters";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	hiddenSelectionsTextures[] = {"\CA\air\data\mi8_body_g_CDF_CO.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
	radartype = 0;

	class Turrets: Turrets  {
		class MainTurret: MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};
		class BackTurret: BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_CDF_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_CDF_1: DZE_Veh_Mi17_CDF {
	displayName = "$STR_VEH_NAME_MI17_CDF+";
	original = "DZE_Veh_Mi17_CDF";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_CDF_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_CDF_2: DZE_Veh_Mi17_CDF_1 {
	displayName = "$STR_VEH_NAME_MI17_CDF++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_CDF_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_CDF_3: DZE_Veh_Mi17_CDF_2 {
	displayName = "$STR_VEH_NAME_MI17_CDF+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi171Sh: Mi17_base {
	displayName = "$STR_VEH_NAME_MI17_SH";
	vehicleClass = "DZE Vehicles Helicopters";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {"\CA\air_E\data\mi17_body_ACR_CO.paa", "\CA\air_E\data\mi17_det_ACR_CO.paa", "\ca\air_E\Data\mi17_decals2_ACR_CA.paa", "\ca\air\data\mi8_decals_ca.paa"};
	model = "\CorePatch\CorePatch_Mi8\models\Mi_171";
	picture = "\ca\air\data\ico\mi17_HIP_CA.paa";
	Icon = "\ca\air\data\map_ico\icomap_mi17_CA.paa";
	mapSize = 25;
	accuracy = 1000;	// accuracy needed to recognize type of this target
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	LockDetectionSystem = 0;
	IncommingMisslieDetectionSystem = 0;
	gunnerUsesPilotView = true;
	radartype = 0;

	// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
	threat[] = {1, 0.6, 0.3};

	enableSweep = false;

	class Turrets: Turrets {
		class LeftTurret: MainTurret {
			proxyIndex = 2;
			commanding = -1;
			primaryGunner = 0;
			gunnerName = "$STR_POSITION_DOORGUNNER";
			maxElev = 30;
			initElev = 11;
			minTurn = 20;
			maxTurn = 155;
			initTurn = 80;
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};

		class BackTurret: BackTurret {
			gunnerName = "$STR_POSITION_REARGUNNER";
			primaryGunner = 1;
			commanding = -3;
			proxyIndex = 3;
			gunnerAction = "Mi171_Gunner_EP1";
			gunnerInAction = "Mi171_Gunner_EP1";
			minTurn = 130;
			maxTurn = 230;
			initTurn = 180;
			minElev = -34;
			maxElev = 10;
			initElev = 0;
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";
		};

		class RightTurret: MainTurret {
			proxyIndex = 1;
			gunnerName = "$STR_POSITION_CREWCHIEF";
			body = "Turret_3";
			gun = "Gun_3";
			animationSourceBody = "Turret_3";
			animationSourceGun = "Gun_3";
			minElev = -49;
			maxElev = 30;
			initElev = 11;
			minTurn = -155;
			maxTurn = -30;
			initTurn = -70;
			weapons[] = {PKT_3};
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_3";	// endpoint of the gun
			gunEnd = "chamber_3";	// chamber of the gun
			gunnerAction = "Mi8_Gunner";
			gunnerInAction = "Mi8_Gunner";
			memoryPointGun = "muzzle_3";
			memoryPointGunnerOptics = "gunnerview3";
			selectionFireAnim = "zasleh3";
			primaryGunner = 0;
			commanding = -1;
			magazines[] = {"100Rnd_762x54_PK"};

			gunnerCompartments = "compartment3";

			// endpoint of the gun
			// chamber of the gun
		};
	};

	class AnimationSources: AnimationSources {
		class HUDaction {
			source = "user";
			animPeriod = 2;
			initPhase = 0;
		};

		class HUDaction_Hide: HUDaction {};

		class ReloadAnim_3 {
			source = "reload";
			weapon = PKT_3;
		};

		class ReloadMagazine_3 {
			source = "reloadmagazine";
			weapon = PKT_3;
		};

		class Revolving_3 {
			source = "revolving";
			weapon = PKT_3;
		};

		class HIDE_weapon_holders {
			source = "user";
			animPeriod = 1e-007;
			initPhase = 1;
		};

		class HIDE_front_armor: HIDE_weapon_holders {
			initPhase = 1;
		};

		class HIDE_exhaust: HIDE_weapon_holders {
			initPhase = 1;
		};
	};

	class UserActions {
		class HUDoff {
			displayName = "$STR_AM_HUDON";
			displayNameDefault = "$STR_AM_HUDON";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=0)";
			statement = "this animate [""HUDAction"",0];this animate [""HUDaction_Hide"",0]";
		};
		class HUDon {
			displayName = "$STR_AM_HUDOFF";
			displayNameDefault = "$STR_AM_HUDOFF";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=1)";
			statement = "this animate [""HUDAction"",1];this animate [""HUDaction_Hide"",1]";
		};
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi171Sh_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi171Sh_1: DZE_Veh_Mi171Sh {
	displayName = "$STR_VEH_NAME_MI17_SH+";
	original = "DZE_Veh_Mi171Sh";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi171Sh_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi171Sh_2: DZE_Veh_Mi171Sh_1 {
	displayName = "$STR_VEH_NAME_MI17_SH++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi171Sh_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi171Sh_3: DZE_Veh_Mi171Sh_2 {
	displayName = "$STR_VEH_NAME_MI17_SH+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_Desert: DZE_Veh_Mi17 {
	displayName = "$STR_VEH_NAME_MI17_DESERT";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body5_co.paa","\dayz_epoch_c\skins\mi17\mi17_det2_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_Desert_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Desert_1: DZE_Veh_Mi17_Desert {
	displayName = "$STR_VEH_NAME_MI17_DESERT+";
	original = "DZE_Veh_Mi17_Desert";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_Desert_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Desert_2: DZE_Veh_Mi17_Desert_1 {
	displayName = "$STR_VEH_NAME_MI17_DESERT++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_Desert_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_Desert_3: DZE_Veh_Mi17_Desert_2 {
	displayName = "$STR_VEH_NAME_MI17_DESERT+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_Green: DZE_Veh_Mi17 {
	displayName = "$STR_VEH_NAME_MI17_GREEN";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body2_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_Green_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Green_1: DZE_Veh_Mi17_Green {
	displayName = "$STR_VEH_NAME_MI17_GREEN+";
	original = "DZE_Veh_Mi17_Green";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_Green_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Green_2: DZE_Veh_Mi17_Green_1 {
	displayName = "$STR_VEH_NAME_MI17_GREEN++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_Green_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_Green_3: DZE_Veh_Mi17_Green_2 {
	displayName = "$STR_VEH_NAME_MI17_GREEN+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_Blue: DZE_Veh_Mi17 {
	displayName = "$STR_VEH_NAME_MI17_BLUE";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body3_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_Blue_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Blue_1: DZE_Veh_Mi17_Blue {
	displayName = "$STR_VEH_NAME_MI17_BLUE+";
	original = "DZE_Veh_Mi17_Blue";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_Blue_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Blue_2: DZE_Veh_Mi17_Blue_1 {
	displayName = "$STR_VEH_NAME_MI17_BLUE++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_Blue_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_Blue_3: DZE_Veh_Mi17_Blue_2 {
	displayName = "$STR_VEH_NAME_MI17_BLUE+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_Black: DZE_Veh_Mi17 {
	displayName = "$STR_VEH_NAME_MI17_BLACK";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body4_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_Black_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Black_1: DZE_Veh_Mi17_Black {
	displayName = "$STR_VEH_NAME_MI17_BLACK+";
	original = "DZE_Veh_Mi17_Black";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_Black_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Black_2: DZE_Veh_Mi17_Black_1 {
	displayName = "$STR_VEH_NAME_MI17_BLACK++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_Black_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_Black_3: DZE_Veh_Mi17_Black_2 {
	displayName = "$STR_VEH_NAME_MI17_BLACK+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_Rusty: DZE_Veh_Mi17_CDF {
	displayName = "$STR_VEH_NAME_MI17_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi8_body_crash_co.paa","ca\air\data\mi8_det_g_co.paa","ca\air\data\clear_empty.paa","ca\air\data\mi8_decals_ca.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_Rusty_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Rusty_1: DZE_Veh_Mi17_Rusty {
	displayName = "$STR_VEH_NAME_MI17_RUST+";
	original = "DZE_Veh_Mi17_Rusty";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_Rusty_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Rusty_2: DZE_Veh_Mi17_Rusty_1 {
	displayName = "$STR_VEH_NAME_MI17_RUST++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_Rusty_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_Rusty_3: DZE_Veh_Mi17_Rusty_2 {
	displayName = "$STR_VEH_NAME_MI17_RUST+++";
	fuelCapacity = 4000;
};

class DZE_Veh_Mi17_Winter: DZE_Veh_Mi17_TK {
	displayName = "$STR_VEH_NAME_MI17_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body_winter.paa", "\dayz_epoch_c\skins\mi17\mi17_det_winter.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_Winter_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Winter_1: DZE_Veh_Mi17_Winter {
	displayName = "$STR_VEH_NAME_MI17_WINTER+";
	original = "DZE_Veh_Mi17_Winter";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_Winter_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Winter_2: DZE_Veh_Mi17_Winter_1 {
	displayName = "$STR_VEH_NAME_MI17_WINTER++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_Winter_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_Winter_3: DZE_Veh_Mi17_Winter_2 {
	displayName = "$STR_VEH_NAME_MI17_WINTER+++";
	fuelCapacity = 4000;
};

//Unarmed
class Mi17_Civilian;
class DZE_Veh_Mi17_Civilian: Mi17_Civilian {
	displayName = "$STR_VEH_NAME_MI17_CIVIL";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	radartype = 0;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_Civilian_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Civilian_1: DZE_Veh_Mi17_Civilian {
	displayName = "$STR_VEH_NAME_MI17_CIVIL+";
	original = "DZE_Veh_Mi17_Civilian";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_Civilian_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_Civilian_2: DZE_Veh_Mi17_Civilian_1 {
	displayName = "$STR_VEH_NAME_MI17_CIVIL++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_Civilian_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_Civilian_3: DZE_Veh_Mi17_Civilian_2 {
	displayName = "$STR_VEH_NAME_MI17_CIVIL+++";
	fuelCapacity = 4000;
};

class Mi17_medevac_CDF;
class DZE_Veh_Mi17_MedEvac_CDF: Mi17_medevac_CDF {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_CDF";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	attendant = 0;
	radartype = 0;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_MedEvac_CDF_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_MedEvac_CDF_1: DZE_Veh_Mi17_MedEvac_CDF {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_CDF+";
	original = "DZE_Veh_Mi17_MedEvac_CDF";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_MedEvac_CDF_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_MedEvac_CDF_2: DZE_Veh_Mi17_MedEvac_CDF_1 {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_CDF++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_MedEvac_CDF_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_MedEvac_CDF_3: DZE_Veh_Mi17_MedEvac_CDF_2 {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_CDF+++";
	fuelCapacity = 4000;
};

class Mi17_medevac_Ins;
class DZE_Veh_Mi17_MedEvac_INS: Mi17_medevac_Ins {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_INS";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	attendant = 0;
	radartype = 0;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_MedEvac_INS_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_MedEvac_INS_1: DZE_Veh_Mi17_MedEvac_INS {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_INS+";
	original = "DZE_Veh_Mi17_MedEvac_INS";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_MedEvac_INS_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_MedEvac_INS_2: DZE_Veh_Mi17_MedEvac_INS_1 {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_INS++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_MedEvac_INS_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_MedEvac_INS_3: DZE_Veh_Mi17_MedEvac_INS_2 {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_INS+++";
	fuelCapacity = 4000;
};

class Mi17_medevac_RU;
class DZE_Veh_Mi17_MedEvac_RU: Mi17_medevac_RU {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_RU";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 8;
	fuelCapacity = 1870;
	attendant = 0;
	radartype = 0;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi17_MedEvac_RU_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_MedEvac_RU_1: DZE_Veh_Mi17_MedEvac_RU {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_RU+";
	original = "DZE_Veh_Mi17_MedEvac_RU";
	armor = 60;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi17_MedEvac_RU_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi17_MedEvac_RU_2: DZE_Veh_Mi17_MedEvac_RU_1 {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_RU++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi17_MedEvac_RU_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi17_MedEvac_RU_3: DZE_Veh_Mi17_MedEvac_RU_2 {
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_RU+++";
	fuelCapacity = 4000;
};

class Mi17_rockets_RU;
class DZE_Veh_Mi8MTV3_RU: Mi17_rockets_RU {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI8MTV3_RU";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi8MTV3_RU_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi8MTV3_RU_1: DZE_Veh_Mi8MTV3_RU {
	displayName = "$STR_VEH_NAME_MI8MTV3_RU+";
	original = "DZE_Veh_Mi8MTV3_RU";
	armor = 64; // base 32
	damageResistance = 0.00344; // base 0.00172

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi8MTV3_RU_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi8MTV3_RU_2: DZE_Veh_Mi8MTV3_RU_1 {
	displayName = "$STR_VEH_NAME_MI8MTV3_RU++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi8MTV3_RU_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi8MTV3_RU_3: DZE_Veh_Mi8MTV3_RU_2 {
	displayName = "$STR_VEH_NAME_MI8MTV3_RU+++";
	fuelCapacity = 2000; // base 1000
};

class Mi171Sh_rockets_CZ_EP1;
class DZE_Veh_Mi171Sh_Rockets: Mi171Sh_rockets_CZ_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_MI171SH_ROCKETS";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mi171Sh_Rockets_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi171Sh_Rockets_1: DZE_Veh_Mi171Sh_Rockets {
	displayName = "$STR_VEH_NAME_MI171SH_ROCKETS+";
	original = "DZE_Veh_Mi171Sh_Rockets";
	armor = 64; // base 32
	damageResistance = 0.00344; // base 0.00172

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mi171Sh_Rockets_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mi171Sh_Rockets_2: DZE_Veh_Mi171Sh_Rockets_1 {
	displayName = "$STR_VEH_NAME_MI171SH_ROCKETS++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mi171Sh_Rockets_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mi171Sh_Rockets_3: DZE_Veh_Mi171Sh_Rockets_2 {
	displayName = "$STR_VEH_NAME_MI171SH_ROCKETS+++";
	fuelCapacity = 2000; // base 1000
};
