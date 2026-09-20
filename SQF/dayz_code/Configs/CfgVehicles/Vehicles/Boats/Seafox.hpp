class SeaFox;
class DZE_Veh_SeaFox: SeaFox {

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SeaFox_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_DN_SEAFOX";
	vehicleClass = "DZE Vehicles Boats";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 200;
	transportMaxMagazines = 2000;
	transportMaxBackpacks = 40;
	supplyRadius = 3;
};

class DZE_Veh_SeaFox_1: DZE_Veh_SeaFox {
	displayName = "$STR_DN_SEAFOX+";
	original = "DZE_Veh_SeaFox";
	armor = 20;
	damageResistance = 0.00636;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SeaFox_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SeaFox_2: DZE_Veh_SeaFox_1 {
	displayName = "$STR_DN_SEAFOX++";
	transportMaxWeapons = 400;
	transportMaxMagazines = 4000;
	transportMaxBackpacks = 80;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SeaFox_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SeaFox_3: DZE_Veh_SeaFox_2 {
	displayName = "$STR_DN_SEAFOX+++";
	fuelCapacity = 200;

	class Upgrades {};
};
