class DZE_Veh_Hummer: DZE_Veh_HMMWV_Woodland {
	displayName = "$STR_VEH_NAME_HUMMER";
	model = "\SRA_civilian\Wheeled\HMMWV\hmmwv";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"\sra_civilian\wheeled\hmmwv\hmmwv_body_co.paa","\sra_civilian\wheeled\hmmwv\hmmwv_hood_co.paa","\sra_civilian\wheeled\hmmwv\hmmwv_regular_co.paa"};

	class HitPoints: HitPoints {
		class HitBody {
			name = "karoserie";
			visual = "karoserie";
			armor = 2;
			material = -1;
			passThrough = 0;
		};
		class HitEngine: HitBody {
			name = "motor";
			visual = "motor";
		};
		class HitFuel: HitBody {
			name = "palivo";
			visual = "palivo";
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			name = "glass1";
			visual = "glass1";
			armor = 1;
			passThrough = 0;
		};
		class HitGlass2: HitGlass1 {
			name = "glass2";
			visual = "glass2";
		};
		class HitGlass3: HitGlass1 {
			name = "glass3";
			visual = "glass3";
		};
		class HitGlass4: HitGlass1 {
			name = "glass4";
			visual = "glass4";
		};
		class HitGlass5: HitGlass1 {
			name = "glass5";
			visual = "glass5";
		};
		class HitLFWheel {
			name = "levy predni tlumic";
			visual = "";
			armor = 0.35;
			material = -1;
			passThrough = 0.3;
		};
		class HitLBWheel: HitLFWheel {
			name = "levy zadni tlumic";
		};
		class HitRFWheel: HitLFWheel {
			name = "pravy predni tlumic";
		};
		class HitRBWheel: HitLFWheel {
			name = "pravy zadni tlumic";
		};
	};

	class Damage {
		tex[] = {};
		mat[] = {"sra_civilian\wheeled\hmmwv\hmmwv_body.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_body_damage.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_body_destruct.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_clocks.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_clocks.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_clocks_destruct.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_damage.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_destruct.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_in.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_in.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_glass_in_half_d.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_hood.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_hood_damage.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_hood_destruct.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_regular.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_regular_damage.rvmat","sra_civilian\wheeled\hmmwv\hmmwv_regular_destruct.rvmat"};
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Hummer_1",{"DZE_Tool_Toolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hummer_1: DZE_Veh_Hummer  {
	displayName = "$STR_VEH_NAME_HUMMER+";
	original = "DZE_Veh_Hummer";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Hummer_2",{"DZE_Tool_Toolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Hummer_2: DZE_Veh_Hummer_1 {
	displayName = "$STR_VEH_NAME_HUMMER++";
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
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 2;
		};
		class HitEngine: HitEngine {
			armor = 3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Hummer_3",{"DZE_Tool_Toolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hummer_3: DZE_Veh_Hummer_2 {
	displayName = "$STR_VEH_NAME_HUMMER+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Hummer_4",{"DZE_Tool_Toolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_Hummer_4: DZE_Veh_Hummer_3 {
	displayName = "$STR_VEH_NAME_HUMMER++++";
	fuelCapacity = 180; // base 100
};
