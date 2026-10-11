class Ka52;
class DZE_Veh_Ka52: Ka52 {
	scope = 2;
	displayName = "$STR_VEH_NAME_KA52";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Ka52_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka52_1: DZE_Veh_Ka52 {
	displayName = "$STR_VEH_NAME_KA52+";
	original = "DZE_Veh_Ka52";
	armor = 130; // base 65
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Ka52_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka52_2: DZE_Veh_Ka52_1 {
	displayName = "$STR_VEH_NAME_KA52++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Ka52_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Ka52_3: DZE_Veh_Ka52_2 {
	displayName = "$STR_VEH_NAME_KA52+++";
	fuelCapacity = 2000; // base 1000
};

class Ka52Black;
class DZE_Veh_Ka52_Black: Ka52Black {
	scope = 2;
	displayName = "$STR_VEH_NAME_KA52_BLACK";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Ka52_Black_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka52_Black_1: DZE_Veh_Ka52_Black {
	displayName = "$STR_VEH_NAME_KA52_BLACK+";
	original = "DZE_Veh_Ka52_Black";
	armor = 130; // base 65
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Ka52_Black_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka52_Black_2: DZE_Veh_Ka52_Black_1 {
	displayName = "$STR_VEH_NAME_KA52_BLACK++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Ka52_Black_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Ka52_Black_3: DZE_Veh_Ka52_Black_2 {
	displayName = "$STR_VEH_NAME_KA52_BLACK+++";
	fuelCapacity = 2000; // base 1000
};
