class Tractor;
class DZE_Veh_Tractor: Tractor {
	vehicleClass = "DZE Vehicles Cars";
	displayname = "$STR_VEH_NAME_TRACTOR";
	class Upgrades {
		ItemORP[] = {"DZE_Veh_Tractor_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitFuel;
	class HitEngine;

	class Reflectors {
		class Left {
			color[] = {0.9,0.8,0.8,1.0};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			brightness = 0.5;
			angle = 90;
		};
		class Right: Left {
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
		};
	};
};

class tractorOld;
class DZE_Veh_OldTractor: tractorOld {
	vehicleClass = "DZE Vehicles Cars";
	displayname = "$STR_VEH_NAME_TRACTOR_OLD";
	class Upgrades {
		ItemORP[] = {"DZE_Veh_OldTractor_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class Reflectors {
		class Left {
			color[] = {0.9,0.8,0.8,1.0};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			brightness = 0.5;
			angle = 90;
		};
	};
};

class DZE_Veh_Tractor_Armored: DZE_Veh_Tractor {
	displayname = "$STR_VEH_NAME_TRACTOR_ARMORED";
	class Upgrades {
		ItemORP[] = {"DZE_Veh_Tractor_Armored_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
	model = "\z\addons\dayz_epoch_v\vehicles\tractor\dze_tractor";
	picture = "\dayz_epoch_c\icons\vehicles\ArmoredTractor.paa";
	armor = 120;
	maxSpeed = 75;
	terrainCoef = 0.5;
	transportMaxWeapons = 20;
	transportMaxMagazines = 80;
    transportMaxBackpacks = 10;

	class HitPoints: HitPoints {
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 2;
		};
	};

	hiddenselections[] = {"camo1","camo2"};
	hiddenselectionstextures[]=
	{
		"\z\addons\dayz_epoch_v\vehicles\tractor\data\tractor_2_rusty_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\tractor\data\rustymetal_01_co.paa"
	};
	class damage {
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\tractor\data\rustymetal_01.rvmat",
			"z\addons\dayz_epoch_v\vehicles\tractor\data\rustymetal_01_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\tractor\data\rustymetal_01_destruct.rvmat",

			"ca\wheeled\data\traktor_2.rvmat",
			"ca\wheeled\data\traktor_2.rvmat",
			"ca\wheeled\data\traktor_2_destruct.rvmat",

			"ca\wheeled\data\traktor_2_skla.rvmat",
			"ca\wheeled\data\traktor_2_skla.rvmat",
			"ca\wheeled\data\traktor_2_skla_destruct.rvmat"

		};
	};
	class nvgmarkers {};
};

// Performance 1
class DZE_Veh_Tractor_1: DZE_Veh_Tractor {
	displayname = "$STR_VEH_NAME_TRACTOR+";
	original = "DZE_Veh_Tractor";
	maxSpeed = 48;
	terrainCoef = 0.7;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Tractor_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Tractor_2: DZE_Veh_Tractor_1 {
	displayname = "$STR_VEH_NAME_TRACTOR++";
	armor = 50;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Tractor_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Tractor_3: DZE_Veh_Tractor_2 {
	displayname = "$STR_VEH_NAME_TRACTOR+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Tractor_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Tractor_4: DZE_Veh_Tractor_3 {
	displayname = "$STR_VEH_NAME_TRACTOR++++";
	fuelCapacity = 210;
};

// Performance 1
class DZE_Veh_OldTractor_1: DZE_Veh_OldTractor {
	displayname = "$STR_VEH_NAME_TRACTOR_OLD+";
	original = "DZE_Veh_OldTractor";
	maxSpeed = 48;
	terrainCoef = 0.7;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_OldTractor_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_OldTractor_2: DZE_Veh_OldTractor_1 {
	displayname = "$STR_VEH_NAME_TRACTOR_OLD++";
	armor = 50;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_OldTractor_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_OldTractor_3: DZE_Veh_OldTractor_2 {
	displayname = "$STR_VEH_NAME_TRACTOR_OLD+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_OldTractor_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_OldTractor_4: DZE_Veh_OldTractor_3 {
	displayname = "$STR_VEH_NAME_TRACTOR_OLD++++";
	fuelCapacity = 210;
};

// Performance 1
class DZE_Veh_Tractor_Armored_1: DZE_Veh_Tractor_Armored {
	displayname = "$STR_VEH_NAME_TRACTOR_ARMORED+";
	original = "DZE_Veh_Tractor_Armored";
	maxSpeed = 90;
	terrainCoef = 0.35;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Tractor_Armored_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Tractor_Armored_2: DZE_Veh_Tractor_Armored_1 {
	displayname = "$STR_VEH_NAME_TRACTOR_ARMORED++";
	armor = 240;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Tractor_Armored_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Tractor_Armored_3: DZE_Veh_Tractor_Armored_2 {
	displayname = "$STR_VEH_NAME_TRACTOR_ARMORED+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 160;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Tractor_Armored_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Tractor_Armored_4: DZE_Veh_Tractor_Armored_3 {
	displayname = "$STR_VEH_NAME_TRACTOR_ARMORED++++";
	fuelCapacity = 210;
};
