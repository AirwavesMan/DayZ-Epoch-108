class DZE_Veh_HMMWV_Ambulance_Woodland: DZE_HMMWV_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE";
	model = "\ca\wheeled2\HMMWV\M997A2_Ambulance\M997A2_Ambulance";
	vehicleClass = "Support";
	mapSize = 5;
	transportSoldier = 5;
	cargoAction[] = {"HMMWV_Cargo01","BMP2_Cargo04"};

	DZE_MACRO_VEHICLE_CLEAR_CARGO
	hasGunner = 0;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;

	class Turrets{};
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3_Half_D.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat"};
	};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	class Library {
		libTextDesc = "$STR_LIB_HMMWV_Ambulance";
	};
	attendant = 0;

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_HMMWV_Ambulance_Woodland_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_Ambulance_Woodland_1: DZE_Veh_HMMWV_Ambulance_Woodland  {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE+";
	original = "DZE_Veh_HMMWV_Ambulance_Woodland";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_HMMWV_Ambulance_Woodland_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_HMMWV_Ambulance_Woodland_2: DZE_Veh_HMMWV_Ambulance_Woodland_1 {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_HMMWV_Ambulance_Woodland_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_Ambulance_Woodland_3: DZE_Veh_HMMWV_Ambulance_Woodland_2 {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_HMMWV_Ambulance_Woodland_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_HMMWV_Ambulance_Woodland_4: DZE_Veh_HMMWV_Ambulance_Woodland_3 {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_Ambulance_Desert: DZE_Veh_HMMWV_Ambulance_Woodland {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	attendant = 0;

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_HMMWV_Ambulance_Desert_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_Ambulance_Desert_1: DZE_Veh_HMMWV_Ambulance_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES+";
	original = "DZE_Veh_HMMWV_Ambulance_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_HMMWV_Ambulance_Desert_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_HMMWV_Ambulance_Desert_2: DZE_Veh_HMMWV_Ambulance_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_HMMWV_Ambulance_Desert_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_Ambulance_Desert_3: DZE_Veh_HMMWV_Ambulance_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_HMMWV_Ambulance_Desert_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_HMMWV_Ambulance_Desert_4: DZE_Veh_HMMWV_Ambulance_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_AMBULANCE_DES++++";
	fuelCapacity = 180; // base 100
};
