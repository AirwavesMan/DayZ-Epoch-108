class SeaFox;
class DZE_Veh_SeaFox: SeaFox {
	displayName = "$STR_DN_SEAFOX";
	vehicleClass = "DZE Vehicles Boats";

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_SeaFox_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	transportMaxWeapons = 200;
	transportMaxMagazines = 2000;
	transportMaxBackpacks = 40;
	supplyRadius = 3;

};

class DZE_Veh_SeaFox_1: DZE_Veh_SeaFox {
	displayName = "$STR_DN_SEAFOX+";
	original = "DZE_Veh_SeaFox";
	armor = 20;
	damageResistance = 0.00636;

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_SeaFox_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_SeaFox_2: DZE_Veh_SeaFox_1 {
	displayName = "$STR_DN_SEAFOX++";
	transportMaxWeapons = 400;
	transportMaxMagazines = 4000;
	transportMaxBackpacks = 80;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_SeaFox_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_SeaFox_3: DZE_Veh_SeaFox_2 {
	displayName = "$STR_DN_SEAFOX+++";
	fuelCapacity = 200;

	class Upgrades {};
};
