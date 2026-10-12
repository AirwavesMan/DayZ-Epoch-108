class Smallboat_1;
class DZE_Veh_Smallboat_1: Smallboat_1 {
	displayName = "$STR_DN_SMALLBOATA";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Smallboat_1_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	transportMaxWeapons = 20;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 4;
	supplyRadius = 3;

};

class DZE_Veh_Smallboat_2: DZE_Veh_Smallboat_1 {
	displayName = "$STR_DN_SMALLBOATB";
	model = "\CA\water2\small_boat\smallboat_2";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Smallboat_2_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};

};

class DZE_Veh_Smallboat_1_1: DZE_Veh_Smallboat_1 {
	displayName = "$STR_DN_SMALLBOATA+";
	original = "DZE_Veh_Smallboat_1";
	armor = 20;
	damageResistance = 0.01764;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Smallboat_1_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Smallboat_1_2: DZE_Veh_Smallboat_1_1 {
	displayName = "$STR_DN_SMALLBOATA++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Smallboat_1_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Smallboat_2_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Smallboat_2_2: DZE_Veh_Smallboat_2_1 {
	displayName = "$STR_DN_SMALLBOATB++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Smallboat_2_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_Smallboat_2_3: DZE_Veh_Smallboat_2_2 {
	displayName = "$STR_DN_SMALLBOATB+++";
	fuelCapacity = 200;

	class Upgrades {};
};
