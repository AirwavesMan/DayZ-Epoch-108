class DZE_Veh_HMMWV_MK19_Woodland: DZE_HMMWV_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_HMMWV_MK19";
	model = "\ca\Wheeled\HMMWVmk19";
	picture = "\Ca\wheeled\data\ico\HMMWVmk19_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hmwvmk19_CA.paa";

	DZE_MACRO_VEHICLE_CLEAR_CARGO
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	damageResistance = 0.00581;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			turretInfoType = "RscWeaponRangeZeroing";
			gunnerAction="HMMWV_Gunner02";
			discreteDistanceInitIndex = 4;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
			weapons[]=
			{
				"MK19BC"
			};
			magazines[]=
			{
				"48Rnd_40mm_MK19",
				"48Rnd_40mm_MK19",
				"48Rnd_40mm_MK19",
				"48Rnd_40mm_MK19"
			};
			soundServo[]=
			{
				"\Ca\sounds\Vehicles\Servos\turret-1",
				0.0099999998,
				1,
				10
			};
			class GunFire: WeaponCloudsMGun {
				interval=0.0099999998;
			};
		};
	};
	accuracy = 0.32;
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			weapon = "MK19BC";
		};
		class ReloadMagazine {
			weapon = "MK19BC";
		};
		class Revolving {
			weapon = "MK19BC";
		};
		class belt_rotation {
			source="reload";
			weapon = "MK19BC";
		};
	};
	class Damage {
		tex[]={};
		mat[]=
		{
			"ca\wheeled\hmmwv\data\hmmwv_details.rvmat",
			"Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat",
			"Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat",
			"ca\wheeled\hmmwv\data\hmmwv_body.rvmat",
			"Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat",
			"Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat",
			"ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat",
			"ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat",
			"ca\wheeled\data\hmmwv_clocks_destruct.rvmat",
			"ca\weapons\data\mk19.rvmat",
			"ca\weapons\data\mk19.rvmat",
			"ca\weapons\data\mk19_destruct.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat",
			"ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"
		};
	};
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_HMMWV_MK19_Woodland_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_MK19_Woodland_1: DZE_Veh_HMMWV_MK19_Woodland  {
	displayName = "$STR_VEH_NAME_HMMWV_MK19+";
	original = "DZE_Veh_HMMWV_MK19_Woodland";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_HMMWV_MK19_Woodland_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_HMMWV_MK19_Woodland_2: DZE_Veh_HMMWV_MK19_Woodland_1 {
	displayName = "$STR_VEH_NAME_HMMWV_MK19++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_HMMWV_MK19_Woodland_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_MK19_Woodland_3: DZE_Veh_HMMWV_MK19_Woodland_2 {
	displayName = "$STR_VEH_NAME_HMMWV_MK19+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_HMMWV_MK19_Woodland_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_HMMWV_MK19_Woodland_4: DZE_Veh_HMMWV_MK19_Woodland_3 {
	displayName = "$STR_VEH_NAME_HMMWV_MK19++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_MK19_Desert: DZE_Veh_HMMWV_MK19_Woodland {
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19";
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa"};

	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_in_BASE.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_HMMWV_MK19_Desert_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_MK19_Desert_1: DZE_Veh_HMMWV_MK19_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19+";
	original = "DZE_Veh_HMMWV_MK19_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_HMMWV_MK19_Desert_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_HMMWV_MK19_Desert_2: DZE_Veh_HMMWV_MK19_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_HMMWV_MK19_Desert_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_MK19_Desert_3: DZE_Veh_HMMWV_MK19_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_HMMWV_MK19_Desert_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_HMMWV_MK19_Desert_4: DZE_Veh_HMMWV_MK19_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_DES_MK19++++";
	fuelCapacity = 180; // base 100
};
