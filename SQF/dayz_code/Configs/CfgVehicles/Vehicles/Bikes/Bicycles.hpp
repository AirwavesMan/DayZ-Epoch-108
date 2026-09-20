class Bicycle;
class Old_bike_base_EP1: Bicycle {
	class Reflectors {
		class Right {
			color[] = {0.9,0.8,0.8,1};
			ambient[] = {0.1,0.1,0.1,1};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			brightness = 0.4;
			size = 1;
		};
	};
};

class Old_bike_TK_CIV_EP1;
class DZE_Veh_OldBike: Old_bike_TK_CIV_EP1 {

	class Upgrades {
		ItemORP[] = {"DZE_Veh_OldBike_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartWheel",2},{"ItemScrews",2}}};
	};

	displayName = "$STR_VEH_NAME_BIKE_OLD";
	vehicleClass = "DZE Vehicles Bicycles";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = -1;
};

class MMT_Civ;
class DZE_Veh_MountainBike: MMT_Civ {

	class Upgrades {
		ItemORP[] = {"DZE_Veh_MountainBike_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartWheel",2},{"ItemScrews",2}}};
	};

	displayName = "$STR_VEH_NAME_BIKE_MOUNTAINBIKE";
	vehicleClass = "DZE Vehicles Bicycles";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = -1;
};

class DZE_Veh_OldBike_1: DZE_Veh_OldBike {
	displayName = "$STR_VEH_NAME_BIKE_OLD+";
	original = "DZE_Veh_OldBike";
	maxSpeed = 42;
	terrainCoef = 2.1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_OldBike_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_OldBike_2: DZE_Veh_OldBike_1 {
	displayName = "$STR_VEH_NAME_BIKE_OLD++";
	armor = 10;

	class Upgrades {};
};

class DZE_Veh_MountainBike_1: DZE_Veh_MountainBike {
	displayName = "$STR_VEH_NAME_BIKE_MOUNTAINBIKE+";
	original = "DZE_Veh_MountainBike";
	maxSpeed = 42;
	terrainCoef = 2.1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_MountainBike_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_MountainBike_2: DZE_Veh_MountainBike_1 {
	displayName = "$STR_VEH_NAME_BIKE_MOUNTAINBIKE++";
	armor = 10;

	class Upgrades {};
};
