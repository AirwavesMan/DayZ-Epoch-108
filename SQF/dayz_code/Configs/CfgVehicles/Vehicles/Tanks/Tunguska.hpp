class 2S6M_Tunguska;
class DZE_Veh_2S6M_Tunguska: 2S6M_Tunguska {
	scope = 2;
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_2S6M_Tunguska_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_2S6M_Tunguska_1: DZE_Veh_2S6M_Tunguska {
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA+";
	original = "DZE_Veh_2S6M_Tunguska";
	maxSpeed = 90; // base 65
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_2S6M_Tunguska_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_2S6M_Tunguska_2: DZE_Veh_2S6M_Tunguska_1 {
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA++";
	armor = 205; // base 160
	damageResistance = 0.05283; // base 0.02711

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_2S6M_Tunguska_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_2S6M_Tunguska_3: DZE_Veh_2S6M_Tunguska_2 {
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_2S6M_Tunguska_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_2S6M_Tunguska_4: DZE_Veh_2S6M_Tunguska_3 {
	displayName = "$STR_VEH_NAME_2S6M_TUNGUSKA++++";
	fuelCapacity = 857; // base 500
};
