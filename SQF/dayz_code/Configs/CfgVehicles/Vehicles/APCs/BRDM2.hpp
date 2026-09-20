class BRDM2_HQ_TK_GUE_EP1;
class DZE_Veh_BRDM2_HQ: BRDM2_HQ_TK_GUE_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_BRDM2_HQ";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;

	armor = 85;
	damageResistance = 0.032;
	fuelCapacity = 220;
	supplyRadius = 1.4;
	crewVulnerable = 1;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_HQ_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_HQ_1: DZE_Veh_BRDM2_HQ {
	displayName = "$STR_VEH_NAME_BRDM2_HQ+";
	original = "DZE_Veh_BRDM2_HQ";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_HQ_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_HQ_2: DZE_Veh_BRDM2_HQ_1 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_HQ_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_HQ_3: DZE_Veh_BRDM2_HQ_2 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_HQ_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_HQ_4: DZE_Veh_BRDM2_HQ_3 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BRDM2_HQ_Rust: DZE_Veh_BRDM2_HQ {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\brdm\brdm2_01_wrecked_co.paa","\dayz_epoch_c\skins\brdm\brdm2_02_wrecked_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_HQ_Rust_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_HQ_Rust_1: DZE_Veh_BRDM2_HQ_Rust {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_RUST+";
	original = "DZE_Veh_BRDM2_HQ_Rust";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_HQ_Rust_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_HQ_Rust_2: DZE_Veh_BRDM2_HQ_Rust_1 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_RUST++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_HQ_Rust_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_HQ_Rust_3: DZE_Veh_BRDM2_HQ_Rust_2 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_RUST+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_HQ_Rust_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_HQ_Rust_4: DZE_Veh_BRDM2_HQ_Rust_3 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_RUST++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BRDM2_HQ_Winter: DZE_Veh_BRDM2_HQ {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\brdm\brdm2_01_winter2.paa","\dayz_epoch_c\skins\brdm\brdm2_02_winter2.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_HQ_Winter_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_HQ_Winter_1: DZE_Veh_BRDM2_HQ_Winter {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_WINTER+";
	original = "DZE_Veh_BRDM2_HQ_Winter";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_HQ_Winter_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_HQ_Winter_2: DZE_Veh_BRDM2_HQ_Winter_1 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_WINTER++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_HQ_Winter_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_HQ_Winter_3: DZE_Veh_BRDM2_HQ_Winter_2 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_WINTER+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_HQ_Winter_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_HQ_Winter_4: DZE_Veh_BRDM2_HQ_Winter_3 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_WINTER++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BRDM2_HQ_CDF: DZE_Veh_BRDM2_HQ {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_CDF";
	hiddenSelectionsTextures[]=	{
		"\ca\wheeled\data\brdm2_01_camo_co.paa",
		"\ca\wheeled\data\brdm2_02_camo_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_HQ_CDF_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_HQ_CDF_1: DZE_Veh_BRDM2_HQ_CDF {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_CDF+";
	original = "DZE_Veh_BRDM2_HQ_CDF";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_HQ_CDF_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_HQ_CDF_2: DZE_Veh_BRDM2_HQ_CDF_1 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_CDF++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_HQ_CDF_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_HQ_CDF_3: DZE_Veh_BRDM2_HQ_CDF_2 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_HQ_CDF_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_HQ_CDF_4: DZE_Veh_BRDM2_HQ_CDF_3 {
	displayName = "$STR_VEH_NAME_BRDM2_HQ_CDF++++";
	fuelCapacity = 180; // base 100
};

class BRDM2_TK_EP1;
class DZE_Veh_BRDM2: BRDM2_TK_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_BRDM2_TK";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;

	armor = 85;
	damageResistance = 0.032;
	fuelCapacity = 220;
	supplyRadius = 1.4;
	crewVulnerable = 1;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_1: DZE_Veh_BRDM2 {
	displayName = "$STR_VEH_NAME_BRDM2_TK+";
	original = "DZE_Veh_BRDM2";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_2: DZE_Veh_BRDM2_1 {
	displayName = "$STR_VEH_NAME_BRDM2_TK++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_3: DZE_Veh_BRDM2_2 {
	displayName = "$STR_VEH_NAME_BRDM2_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_4: DZE_Veh_BRDM2_3 {
	displayName = "$STR_VEH_NAME_BRDM2_TK++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BRDM2_GUE: DZE_Veh_BRDM2 {
	displayName = "$STR_VEH_NAME_BRDM2_GUE";
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\BDRM2_KHK_01_CO.paa"};
	hiddenSelections[] = {"Camo1"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_GUE_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_GUE_1: DZE_Veh_BRDM2_GUE {
	displayName = "$STR_VEH_NAME_BRDM2_GUE+";
	original = "DZE_Veh_BRDM2_GUE";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_GUE_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_GUE_2: DZE_Veh_BRDM2_GUE_1 {
	displayName = "$STR_VEH_NAME_BRDM2_GUE++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_GUE_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_GUE_3: DZE_Veh_BRDM2_GUE_2 {
	displayName = "$STR_VEH_NAME_BRDM2_GUE+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_GUE_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_GUE_4: DZE_Veh_BRDM2_GUE_3 {
	displayName = "$STR_VEH_NAME_BRDM2_GUE++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BRDM2_Desert: DZE_Veh_BRDM2 {
	displayName = "$STR_VEH_NAME_BRDM2_DES";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_DES_CO.paa","\CA\Wheeled_ACR\Data\BDRM2_02_ACR_DES_CO.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_Desert_1: DZE_Veh_BRDM2_Desert {
	displayName = "$STR_VEH_NAME_BRDM2_DES+";
	original = "DZE_Veh_BRDM2_Desert";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_Desert_2: DZE_Veh_BRDM2_Desert_1 {
	displayName = "$STR_VEH_NAME_BRDM2_DES++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_Desert_3: DZE_Veh_BRDM2_Desert_2 {
	displayName = "$STR_VEH_NAME_BRDM2_DES+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_Desert_4: DZE_Veh_BRDM2_Desert_3 {
	displayName = "$STR_VEH_NAME_BRDM2_DES++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BRDM2_CDF: DZE_Veh_BRDM2 {
	displayName = "$STR_VEH_NAME_BRDM2_CDF";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\brdm2_01_camo_co.paa","\ca\wheeled\data\brdm2_02_camo_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_CDF_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_CDF_1: DZE_Veh_BRDM2_CDF {
	displayName = "$STR_VEH_NAME_BRDM2_CDF+";
	original = "DZE_Veh_BRDM2_CDF";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_CDF_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_CDF_2: DZE_Veh_BRDM2_CDF_1 {
	displayName = "$STR_VEH_NAME_BRDM2_CDF++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_CDF_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_CDF_3: DZE_Veh_BRDM2_CDF_2 {
	displayName = "$STR_VEH_NAME_BRDM2_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_CDF_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_CDF_4: DZE_Veh_BRDM2_CDF_3 {
	displayName = "$STR_VEH_NAME_BRDM2_CDF++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BRDM2_Rust: DZE_Veh_BRDM2 {
	displayName = "$STR_VEH_NAME_BRDM2_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\brdm\brdm2_01_wrecked_co.paa","\dayz_epoch_c\skins\brdm\brdm2_02_wrecked_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_Rust_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_Rust_1: DZE_Veh_BRDM2_Rust {
	displayName = "$STR_VEH_NAME_BRDM2_RUST+";
	original = "DZE_Veh_BRDM2_Rust";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_Rust_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_Rust_2: DZE_Veh_BRDM2_Rust_1 {
	displayName = "$STR_VEH_NAME_BRDM2_RUST++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_Rust_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_Rust_3: DZE_Veh_BRDM2_Rust_2 {
	displayName = "$STR_VEH_NAME_BRDM2_RUST+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_Rust_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_Rust_4: DZE_Veh_BRDM2_Rust_3 {
	displayName = "$STR_VEH_NAME_BRDM2_RUST++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BRDM2_Winter: DZE_Veh_BRDM2 {
	displayName = "$STR_VEH_NAME_BRDM2_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\brdm\brdm2_01_winter1.paa","\dayz_epoch_c\skins\brdm\brdm2_02_winter1.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_Winter_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_Winter_1: DZE_Veh_BRDM2_Winter {
	displayName = "$STR_VEH_NAME_BRDM2_WINTER+";
	original = "DZE_Veh_BRDM2_Winter";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_Winter_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_Winter_2: DZE_Veh_BRDM2_Winter_1 {
	displayName = "$STR_VEH_NAME_BRDM2_WINTER++";
	armor = 170; // base 120
	damageResistance = 0.048; // base 0.02409

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_Winter_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_Winter_3: DZE_Veh_BRDM2_Winter_2 {
	displayName = "$STR_VEH_NAME_BRDM2_WINTER+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_Winter_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_Winter_4: DZE_Veh_BRDM2_Winter_3 {
	displayName = "$STR_VEH_NAME_BRDM2_WINTER++++";
	fuelCapacity = 180; // base 100
};

class BRDM2_INS;
class DZE_Veh_BRDM2_INS: BRDM2_INS {
	scope = 2;

	displayName = "$STR_VEH_NAME_BRDM2_INS";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;

	armor = 85;
	damageResistance = 0.032;
	fuelCapacity = 220;
	supplyRadius = 1.4;
	crewVulnerable = 1;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_INS_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_INS_1: DZE_Veh_BRDM2_INS {
	displayName = "$STR_VEH_NAME_BRDM2_INS+";
	original = "DZE_Veh_BRDM2_INS";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_INS_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_INS_2: DZE_Veh_BRDM2_INS_1 {
	displayName = "$STR_VEH_NAME_BRDM2_INS++";
	armor = 170; // base 85
	damageResistance = 0.048; // base 0.032

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_INS_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_INS_3: DZE_Veh_BRDM2_INS_2 {
	displayName = "$STR_VEH_NAME_BRDM2_INS+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_INS_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_INS_4: DZE_Veh_BRDM2_INS_3 {
	displayName = "$STR_VEH_NAME_BRDM2_INS++++";
	fuelCapacity = 396; // base 220
};

class BRDM2_ATGM_CDF;
class DZE_Veh_BRDM2_ATGM_CDF: BRDM2_ATGM_CDF {
	scope = 2;

	displayName = "$STR_VEH_NAME_BRDM2_ATGM_CDF";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;

	armor = 85;
	damageResistance = 0.032;
	fuelCapacity = 220;
	supplyRadius = 1.4;
	crewVulnerable = 1;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_ATGM_CDF_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_ATGM_CDF_1: DZE_Veh_BRDM2_ATGM_CDF {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_CDF+";
	original = "DZE_Veh_BRDM2_ATGM_CDF";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_ATGM_CDF_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_ATGM_CDF_2: DZE_Veh_BRDM2_ATGM_CDF_1 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_CDF++";
	armor = 170; // base 85
	damageResistance = 0.048; // base 0.032

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_ATGM_CDF_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_ATGM_CDF_3: DZE_Veh_BRDM2_ATGM_CDF_2 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_ATGM_CDF_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_ATGM_CDF_4: DZE_Veh_BRDM2_ATGM_CDF_3 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_CDF++++";
	fuelCapacity = 396; // base 220
};

class BRDM2_ATGM_INS;
class DZE_Veh_BRDM2_ATGM_INS: BRDM2_ATGM_INS {
	scope = 2;

	displayName = "$STR_VEH_NAME_BRDM2_ATGM_INS";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;

	armor = 85;
	damageResistance = 0.032;
	fuelCapacity = 220;
	supplyRadius = 1.4;
	crewVulnerable = 1;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_ATGM_INS_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_ATGM_INS_1: DZE_Veh_BRDM2_ATGM_INS {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_INS+";
	original = "DZE_Veh_BRDM2_ATGM_INS";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_ATGM_INS_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_ATGM_INS_2: DZE_Veh_BRDM2_ATGM_INS_1 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_INS++";
	armor = 170; // base 85
	damageResistance = 0.048; // base 0.032

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_ATGM_INS_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_ATGM_INS_3: DZE_Veh_BRDM2_ATGM_INS_2 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_INS+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_ATGM_INS_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_ATGM_INS_4: DZE_Veh_BRDM2_ATGM_INS_3 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_INS++++";
	fuelCapacity = 396; // base 220
};

class BRDM2_ATGM_TK_EP1;
class DZE_Veh_BRDM2_ATGM_TK: BRDM2_ATGM_TK_EP1 {
	scope = 2;

	displayName = "$STR_VEH_NAME_BRDM2_ATGM_TK";
	vehicleClass = "DZE Vehicles APCs";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;

	armor = 85;
	damageResistance = 0.032;
	fuelCapacity = 220;
	supplyRadius = 1.4;
	crewVulnerable = 1;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_BRDM2_ATGM_TK_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_ATGM_TK_1: DZE_Veh_BRDM2_ATGM_TK {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_TK+";
	original = "DZE_Veh_BRDM2_ATGM_TK";
	maxSpeed = 115; //base 100
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_BRDM2_ATGM_TK_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_BRDM2_ATGM_TK_2: DZE_Veh_BRDM2_ATGM_TK_1 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_TK++";
	armor = 170; // base 85
	damageResistance = 0.048; // base 0.032

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_BRDM2_ATGM_TK_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_BRDM2_ATGM_TK_3: DZE_Veh_BRDM2_ATGM_TK_2 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_BRDM2_ATGM_TK_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_BRDM2_ATGM_TK_4: DZE_Veh_BRDM2_ATGM_TK_3 {
	displayName = "$STR_VEH_NAME_BRDM2_ATGM_TK++++";
	fuelCapacity = 396; // base 220
};
