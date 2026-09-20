class HMMWV_Terminal_EP1: HMMWV_Base {
	class HitPoints {
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
	};
};
class DZE_Veh_HMMWV_Terminal_Desert: HMMWV_Terminal_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_HMMWV_TERMINAL_DES";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	armor = 40;
	damageResistance = 0.00581;
	maxSpeed = 100;
	turnCoef = 2;
	terrainCoef = 2;
	fuelCapacity = 100;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_Terminal_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Terminal_Desert_1: DZE_Veh_HMMWV_Terminal_Desert {
	displayName = "$STR_VEH_NAME_HMMWV_TERMINAL_DES+";
	original = "DZE_Veh_HMMWV_Terminal_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_Terminal_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_Terminal_Desert_2: DZE_Veh_HMMWV_Terminal_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_TERMINAL_DES++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581

	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 1.5;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.5;
		};
		class HitGlass3: HitGlass3 {
			armor = 1.5;
		};
		class HitGlass4: HitGlass4 {
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel {
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.25;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_HMMWV_Terminal_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Terminal_Desert_3: DZE_Veh_HMMWV_Terminal_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_TERMINAL_DES+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_Terminal_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_Terminal_Desert_4: DZE_Veh_HMMWV_Terminal_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_TERMINAL_DES++++";
	fuelCapacity = 180; // base 100
};
