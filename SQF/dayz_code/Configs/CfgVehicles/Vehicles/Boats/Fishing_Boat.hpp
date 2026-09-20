class Fishing_Boat;
class DZE_Veh_FishingBoat: Fishing_Boat {

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_FishingBoat_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_FISHING_BOAT";
	vehicleClass = "DZE Vehicles Boats";
	armor = 10;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 8;
	damageResistance = 0.00318;
	supplyRadius = 3;
};

class DZE_Veh_FishingBoat_1: DZE_Veh_FishingBoat {
	displayName = "$STR_VEH_NAME_FISHING_BOAT+";
	original = "DZE_Veh_FishingBoat";
	armor = 20;
	damageResistance = 0.00636;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_FishingBoat_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_FishingBoat_2: DZE_Veh_FishingBoat_1 {
	displayName = "$STR_VEH_NAME_FISHING_BOAT++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 800;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_FishingBoat_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_FishingBoat_3: DZE_Veh_FishingBoat_2 {
	displayName = "$STR_VEH_NAME_FISHING_BOAT+++";
	fuelCapacity = 200;

	class Upgrades {};
};
