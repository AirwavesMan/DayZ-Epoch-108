class PBX;
class DZE_Veh_PBX: PBX {

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_PBX_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_PBX";
	vehicleClass = "DZE Vehicles Boats";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 5;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 1;
	fuelCapacity = 20;
	supplyRadius = 2;
};

class Zodiac;
class DZE_Veh_CRRC: Zodiac {

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_CRRC_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_CRRC";
	vehicleClass = "DZE Vehicles Boats";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 5;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 1;
	fuelCapacity = 20;
	supplyRadius = 2;
};

class DZE_Veh_PBX_1: DZE_Veh_PBX {
	displayName = "$STR_VEH_NAME_PBX+";
	original = "DZE_Veh_PBX";
	armor = 40;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_PBX_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_PBX_2: DZE_Veh_PBX_1 {
	displayName = "$STR_VEH_NAME_PBX++";
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_PBX_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_PBX_3: DZE_Veh_PBX_2 {
	displayName = "$STR_VEH_NAME_PBX+++";
	fuelCapacity = 40;

	class Upgrades {};
};

class DZE_Veh_CRRC_1: DZE_Veh_CRRC {
	displayName = "$STR_VEH_NAME_CRRC+";
	original = "DZE_Veh_CRRC";
	armor = 40;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_CRRC_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_CRRC_2: DZE_Veh_CRRC_1 {
	displayName = "$STR_VEH_NAME_CRRC++";
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_CRRC_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_CRRC_3: DZE_Veh_CRRC_2 {
	displayName = "$STR_VEH_NAME_CRRC+++";
	fuelCapacity = 40;

	class Upgrades {};
};
