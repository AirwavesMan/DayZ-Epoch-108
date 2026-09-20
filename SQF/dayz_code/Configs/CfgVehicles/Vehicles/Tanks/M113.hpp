class M113Ambul_UN_EP1;
class DZE_Veh_M113_Ambulance_UN: M113Ambul_UN_EP1 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN";
	vehicleClass = "DZE Vehicles Tanks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 6;
	attendant = 0;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_M113_Ambulance_UN_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_Ambulance_UN_1: DZE_Veh_M113_Ambulance_UN {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN+";
	original = "DZE_Veh_M113_Ambulance_UN";
	maxSpeed = 90; // base 66
	turnCoef = 2.5;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M113_Ambulance_UN_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_Ambulance_UN_2: DZE_Veh_M113_Ambulance_UN_1 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN++";
	armor = 180; // base 105
	damageResistance = 0.064; // base 0.03249

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M113_Ambulance_UN_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_Ambulance_UN_3: DZE_Veh_M113_Ambulance_UN_2 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M113_Ambulance_UN_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M113_Ambulance_UN_4: DZE_Veh_M113_Ambulance_UN_3 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_UN++++";
	fuelCapacity = 1200; // base 700
};

class DZE_Veh_M113_Ambulance_TK: DZE_Veh_M113_Ambulance_UN {
	scope = 2;
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK";
	hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_M113_Ambulance_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_Ambulance_TK_1: DZE_Veh_M113_Ambulance_TK {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK+";
	original = "DZE_Veh_M113_Ambulance_TK";
	maxSpeed = 90; // base 66
	turnCoef = 2.5;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M113_Ambulance_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_Ambulance_TK_2: DZE_Veh_M113_Ambulance_TK_1 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK++";
	armor = 180; // base 105
	damageResistance = 0.064; // base 0.03249

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M113_Ambulance_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_Ambulance_TK_3: DZE_Veh_M113_Ambulance_TK_2 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M113_Ambulance_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M113_Ambulance_TK_4: DZE_Veh_M113_Ambulance_TK_3 {
	displayName = "$STR_VEH_NAME_M113_AMBULANCE_TK++++";
	fuelCapacity = 1200; // base 700
};

class M113_UN_EP1;
class DZE_Veh_M113_UN: M113_UN_EP1 {
	displayName = "$STR_VEH_NAME_M113_UN";
	vehicleClass = "DZE Vehicles Tanks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_M113_UN_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_UN_1: DZE_Veh_M113_UN {
	displayName = "$STR_VEH_NAME_M113_UN+";
	original = "DZE_Veh_M113_UN";
	maxSpeed = 90; // base 66
	turnCoef = 2.5;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M113_UN_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_UN_2: DZE_Veh_M113_UN_1 {
	displayName = "$STR_VEH_NAME_M113_UN++";
	armor = 180; // base 105
	damageResistance = 0.064; // base 0.03249

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M113_UN_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_UN_3: DZE_Veh_M113_UN_2 {
	displayName = "$STR_VEH_NAME_M113_UN+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M113_UN_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M113_UN_4: DZE_Veh_M113_UN_3 {
	displayName = "$STR_VEH_NAME_M113_UN++++";
	fuelCapacity = 1200; // base 700
};

class DZE_Veh_M113_TK: DZE_Veh_M113_UN {
	scope = 2;
	displayName = "$STR_VEH_NAME_M113_TK";
	hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_M113_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_TK_1: DZE_Veh_M113_TK {
	displayName = "$STR_VEH_NAME_M113_TK+";
	original = "DZE_Veh_M113_TK";
	maxSpeed = 90; // base 66
	turnCoef = 2.5;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_M113_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_TK_2: DZE_Veh_M113_TK_1 {
	displayName = "$STR_VEH_NAME_M113_TK++";
	armor = 180; // base 105
	damageResistance = 0.064; // base 0.03249

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_M113_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M113_TK_3: DZE_Veh_M113_TK_2 {
	displayName = "$STR_VEH_NAME_M113_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_M113_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_M113_TK_4: DZE_Veh_M113_TK_3 {
	displayName = "$STR_VEH_NAME_M113_TK++++";
	fuelCapacity = 1200; // base 700
};
