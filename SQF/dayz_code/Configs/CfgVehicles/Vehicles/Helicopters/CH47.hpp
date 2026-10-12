class CH47_base_EP1: Helicopter {};
class CH_47F_EP1: CH47_base_EP1 {
	class Turrets: Turrets {
		class MainTurret;
		class RightDoorGun;
		class BackDoorGun;
	};
};
class DZE_Veh_CH47F_Green: CH_47F_EP1 {
	displayName = "$STR_VEH_NAME_CH47_GREEN";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	transportMaxWeapons = 40;
	transportMaxMagazines = 300;
	transportMaxBackpacks = 10;
	maxSpeed = 293;
	fuelCapacity = 4043;
	radartype = 0;
	supplyRadius = 1.3;
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};




	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			gunnerName = "$STR_POSITION_CREWCHIEF";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerAction = "CH47_Gunner_EP1";
			gunnerInAction = "CH47_Gunner_EP1";
			gunnerCompartments = "Compartment3";
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			minElev = -50;
			maxElev = 30;
			initElev = -30;
			minTurn = -3;
			maxTurn = 173;
			initTurn = 0;
			soundServo[] = {"",0.01,1};
			weapons[] = {"M134"};
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			commanding = -2;
			primaryGunner = 0;

			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
		};
		class RightDoorGun: RightDoorGun {
			gunnerCompartments = "Compartment3";
			body = "Turret2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			gunnerName = "$STR_POSITION_DOORGUNNER";
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			memoryPointGun = "machinegun_2";
			memoryPointGunnerOptics = "gunnerview_2";
			minElev = -60;
			maxElev = 30;
			initElev = -30;
			minTurn = -173;
			maxTurn = 3;
			initTurn = 0;
			proxyIndex = 2;
			commanding = -3;
			weapons[] = {"M134_2"};
			primaryGunner = 0;
		};
		class BackDoorGun: BackDoorGun {
			gunnerCompartments = "Compartment3";
			body = "Turret3";
			gun = "Gun_3";
			animationSourceBody = "Turret_3";
			animationSourceGun = "Gun_3";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_3";
			gunnerName = "$STR_POSITION_REARGUNNER";
			gunnerAction = "CH47_Gunner01_EP1";
			gunnerInAction = "CH47_Gunner01_EP1";
			turretInfoType = "RscWeaponZeroing";
			gunBeg = "muzzle_3";
			gunEnd = "chamber_3";
			memoryPointGun = "machinegun_3";
			memoryPointGunnerOptics = "gunnerview_3";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;
			minTurn = 130;
			maxTurn = 230;
			initTurn = 180;
			minElev = -50;
			maxElev = 50;
			initElev = 0;
			proxyIndex = 3;
			gunnerOpticsShowCursor = 0;
			commanding = -1;
			weapons[] = {"M240BC_veh"};
			primaryGunner = 1;

		};
	};

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_CH47F_Green_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_CH47F_Green_1: DZE_Veh_CH47F_Green {
	displayName = "$STR_VEH_NAME_CH47_GREEN+";
	original = "DZE_Veh_CH47F_Green";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_CH47F_Green_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_CH47F_Green_2: DZE_Veh_CH47F_Green_1 {
	displayName = "$STR_VEH_NAME_CH47_GREEN++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_CH47F_Green_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_CH47F_Green_3: DZE_Veh_CH47F_Green_2 {
	displayName = "$STR_VEH_NAME_CH47_GREEN+++";
	fuelCapacity = 8300;
};

class DZE_Veh_CH47F_Black: DZE_Veh_CH47F_Green {
	displayName = "$STR_VEH_NAME_CH47_BLACK";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F.p3d";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_CH47F_Black_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_CH47F_Black_1: DZE_Veh_CH47F_Black {
	displayName = "$STR_VEH_NAME_CH47_BLACK+";
	original = "DZE_Veh_CH47F_Black";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_CH47F_Black_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_CH47F_Black_2: DZE_Veh_CH47F_Black_1 {
	displayName = "$STR_VEH_NAME_CH47_BLACK++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_CH47F_Black_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_CH47F_Black_3: DZE_Veh_CH47F_Black_2 {
	displayName = "$STR_VEH_NAME_CH47_BLACK+++";
	fuelCapacity = 8300;
};

class DZE_Veh_CH47F_Grey: DZE_Veh_CH47F_Green {
	displayName = "$STR_VEH_NAME_CH47_GREY";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F2.p3d";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_CH47F_Grey_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_CH47F_Grey_1: DZE_Veh_CH47F_Grey {
	displayName = "$STR_VEH_NAME_CH47_GREY+";
	original = "DZE_Veh_CH47F_Grey";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_CH47F_Grey_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_CH47F_Grey_2: DZE_Veh_CH47F_Grey_1 {
	displayName = "$STR_VEH_NAME_CH47_GREY++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_CH47F_Grey_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_CH47F_Grey_3: DZE_Veh_CH47F_Grey_2 {
	displayName = "$STR_VEH_NAME_CH47_GREY+++";
	fuelCapacity = 8300;
};

class DZE_Veh_CH47F_Desert: DZE_Veh_CH47F_Green {
	displayName = "$STR_VEH_NAME_CH47_DESERT";
	model = "C1987_ch47\ca\air_e\CH47\CH_47F3.p3d";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_CH47F_Desert_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_CH47F_Desert_1: DZE_Veh_CH47F_Desert {
	displayName = "$STR_VEH_NAME_CH47_DESERT+";
	original = "DZE_Veh_CH47F_Desert";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_CH47F_Desert_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_CH47F_Desert_2: DZE_Veh_CH47F_Desert_1 {
	displayName = "$STR_VEH_NAME_CH47_DESERT++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 600;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_CH47F_Desert_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_CH47F_Desert_3: DZE_Veh_CH47F_Desert_2 {
	displayName = "$STR_VEH_NAME_CH47_DESERT+++";
	fuelCapacity = 8300;
};
