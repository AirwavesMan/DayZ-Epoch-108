class RHIB;
class DZE_Veh_RHIB_M2: RHIB {

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_RHIB_M2_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_RHIB_M2";
	vehicleClass = "DZE Vehicles Boats";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	enableManualFire = 0;
	supplyRadius = 3;
};

class RHIB2Turret;
class DZE_Veh_RHIB_MK19: RHIB2Turret {

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_RHIB_MK19_1",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};

	displayName = "$STR_VEH_NAME_RHIB_MK19";
	vehicleClass = "DZE Vehicles Boats";
	enableManualFire = 0;
	supplyRadius = 3;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

};

class DZE_Veh_RHIB_M2_1: DZE_Veh_RHIB_M2 {
	displayName = "$STR_VEH_NAME_RHIB_M2+";
	original = "DZE_Veh_RHIB_M2";
	armor = 60;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_RHIB_M2_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_RHIB_M2_2: DZE_Veh_RHIB_M2_1 {
	displayName = "$STR_VEH_NAME_RHIB_M2++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_RHIB_M2_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_RHIB_M2_3: DZE_Veh_RHIB_M2_2 {
	displayName = "$STR_VEH_NAME_RHIB_M2+++";
	fuelCapacity = 200;

	class Upgrades {};
};

class DZE_Veh_RHIB_MK19_1: DZE_Veh_RHIB_MK19 {
	displayName = "$STR_VEH_NAME_RHIB_MK19+";
	original = "DZE_Veh_RHIB_MK19";
	armor = 60;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_RHIB_MK19_2",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_RHIB_MK19_2: DZE_Veh_RHIB_MK19_1 {
	displayName = "$STR_VEH_NAME_RHIB_MK19++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 4;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_RHIB_MK19_3",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_RHIB_MK19_3: DZE_Veh_RHIB_MK19_2 {
	displayName = "$STR_VEH_NAME_RHIB_MK19+++";
	fuelCapacity = 200;

	class Upgrades {};
};
