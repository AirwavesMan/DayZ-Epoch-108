class Smallboat_1;
class DZE_Veh_Smallboat_1: Smallboat_1 {

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Smallboat_1_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_DN_SMALLBOATA";
	vehicleClass = "DZE Vehicles Boats";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxWeapons = 20;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 4;
	supplyRadius = 3;
};

class DZE_Veh_Smallboat_2: DZE_Veh_Smallboat_1 {

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Smallboat_2_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_DN_SMALLBOATB";
	model = "\CA\water2\small_boat\smallboat_2";
};

class DZE_Veh_Smallboat_1_1: DZE_Veh_Smallboat_1 {
	displayName = "$STR_DN_SMALLBOATA+";
	original = "DZE_Veh_Smallboat_1";
	armor = 20;
	damageResistance = 0.01764;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Smallboat_1_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Smallboat_1_2: DZE_Veh_Smallboat_1_1 {
	displayName = "$STR_DN_SMALLBOATA++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Smallboat_1_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Smallboat_1_3: DZE_Veh_Smallboat_1_2 {
	displayName = "$STR_DN_SMALLBOATA+++";
	fuelCapacity = 200;

	class Upgrades {};
};

class DZE_Veh_Smallboat_2_1: DZE_Veh_Smallboat_2 {
	displayName = "$STR_DN_SMALLBOATB+";
	original = "DZE_Veh_Smallboat_2";
	armor = 20;
	damageResistance = 0.01764;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Smallboat_2_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Smallboat_2_2: DZE_Veh_Smallboat_2_1 {
	displayName = "$STR_DN_SMALLBOATB++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Smallboat_2_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Smallboat_2_3: DZE_Veh_Smallboat_2_2 {
	displayName = "$STR_DN_SMALLBOATB+++";
	fuelCapacity = 200;

	class Upgrades {};
};
