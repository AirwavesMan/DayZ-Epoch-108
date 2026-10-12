class DZE_Veh_HMMWV_M2_Woodland: DZE_HMMWV_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_HMMWV_M2";

	DZE_MACRO_VEHICLE_CLEAR_CARGO
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	damageResistance = 0.00581;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	accuracy = 0.32;
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "M2";
		};
		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "M2";
		};
		class Revolving {
			source = "revolving";
			weapon = "M2";
		};
	};
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_HMMWV_M2_Woodland_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_M2_Woodland_1: DZE_Veh_HMMWV_M2_Woodland  {
	displayName = "$STR_VEH_NAME_HMMWV_M2+";
	original = "DZE_Veh_HMMWV_M2_Woodland";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_HMMWV_M2_Woodland_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_HMMWV_M2_Woodland_2: DZE_Veh_HMMWV_M2_Woodland_1 {
	displayName = "$STR_VEH_NAME_HMMWV_M2++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_HMMWV_M2_Woodland_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_M2_Woodland_3: DZE_Veh_HMMWV_M2_Woodland_2 {
	displayName = "$STR_VEH_NAME_HMMWV_M2+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_HMMWV_M2_Woodland_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_HMMWV_M2_Woodland_4: DZE_Veh_HMMWV_M2_Woodland_3 {
	displayName = "$STR_VEH_NAME_HMMWV_M2++++";
	fuelCapacity = 180; // base 100
};
