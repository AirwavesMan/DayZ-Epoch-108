class Fishing_Boat;
class DZE_Veh_FishingBoat: Fishing_Boat {
	displayName = "$STR_VEH_NAME_FISHING_BOAT";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_FishingBoat_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
	armor = 10;


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 8;
	damageResistance = 0.00318;
	supplyRadius = 3;

};

class DZE_Veh_FishingBoat_1: DZE_Veh_FishingBoat {
	displayName = "$STR_VEH_NAME_FISHING_BOAT+";
	original = "DZE_Veh_FishingBoat";
	armor = 20;
	damageResistance = 0.00636;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_FishingBoat_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_FishingBoat_2: DZE_Veh_FishingBoat_1 {
	displayName = "$STR_VEH_NAME_FISHING_BOAT++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 800;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_FishingBoat_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_FishingBoat_3: DZE_Veh_FishingBoat_2 {
	displayName = "$STR_VEH_NAME_FISHING_BOAT+++";
	fuelCapacity = 200;

	class Upgrades {};
};
