class DZE_Veh_HMMWV_M240_Woodland: DZE_HMMWV_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED";
	model = "\ca\wheeled2\HMMWV\M1114_Armored\M1114_Armored.p3d";
	picture = "\Ca\wheeled\data\ico\HMMWVmk19_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hmwvmk19_CA.paa";
	accuracy = 0.32;

	DZE_MACRO_VEHICLE_CLEAR_CARGO
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	armor = 80;
	damageResistance = 0.03099;
	mapSize = 5;

	class AnimationSources: AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "M240_veh";
		};
		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "M240_veh";
		};
		class Revolving {
			source = "revolving";
			weapon = "M240_veh";
		};
	};
	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 1.2;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.2;
		};
		class HitGlass3: HitGlass3 {
			armor = 1.2;
		};
		class HitGlass4: HitGlass4 {
			armor = 1.2;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\weapons\data\m240.rvmat","ca\weapons\data\m240.rvmat","ca\weapons\data\m240_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat"};
	};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			gunnerAction = "HMMWV_Gunner04";
			weapons[] = {"M240_veh"};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
			soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
			castGunnerShadow = 1;
			class HitPoints: HitPoints {
				class HitTurret {
					name = "vez";
					visual = "vez";
					armor = 1;
					material = -1;
					passThrough = 0.3;
				};
			};
		};
	};
	class Library {
		libTextDesc = "$STR_LIB_HMMWV_Armored";
	};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_HMMWV_M240_Woodland_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_M240_Woodland_1: DZE_Veh_HMMWV_M240_Woodland  {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED+";
	original = "DZE_Veh_HMMWV_M240_Woodland";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_HMMWV_M240_Woodland_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_HMMWV_M240_Woodland_2: DZE_Veh_HMMWV_M240_Woodland_1 {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099

	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 1.8;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.8;
		};
		class HitGlass3: HitGlass3 {
			armor = 1.8;
		};
		class HitGlass4: HitGlass4 {
			armor = 1.8;
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_HMMWV_M240_Woodland_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_M240_Woodland_3: DZE_Veh_HMMWV_M240_Woodland_2 {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_HMMWV_M240_Woodland_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_HMMWV_M240_Woodland_4: DZE_Veh_HMMWV_M240_Woodland_3 {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_M240_Winter: DZE_Veh_HMMWV_M240_Woodland {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\hmmwv\hmmwv_body_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_parts_1_winter_ca.paa"};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_HMMWV_M240_Winter_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_M240_Winter_1: DZE_Veh_HMMWV_M240_Winter  {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER+";
	original = "DZE_Veh_HMMWV_M240_Winter";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_HMMWV_M240_Winter_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_HMMWV_M240_Winter_2: DZE_Veh_HMMWV_M240_Winter_1 {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099

	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 1.8;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.8;
		};
		class HitGlass3: HitGlass3 {
			armor = 1.8;
		};
		class HitGlass4: HitGlass4 {
			armor = 1.8;
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_HMMWV_M240_Winter_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_M240_Winter_3: DZE_Veh_HMMWV_M240_Winter_2 {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_HMMWV_M240_Winter_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_HMMWV_M240_Winter_4: DZE_Veh_HMMWV_M240_Winter_3 {
	displayName = "$STR_VEH_NAME_HMMWV_ARMORED_WINTER++++";
	fuelCapacity = 180; // base 100
};
