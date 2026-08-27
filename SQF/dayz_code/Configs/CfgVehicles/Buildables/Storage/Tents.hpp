class DZE_Tent_Base: DZE_Storage_Base {
	destrType = DestructTent;
	model = "\z\addons\dayz_communityassets\models\tent_a.p3d";
	icon = "\Ca\buildings\Icons\i_Astan_CA.paa";	
	displayName = $STR_VEH_NAME_TENT;
	armor = 40;	
	vehicleClass = "DayZ Epoch 1071 Tents";
	
    DZE_bypassBase = 1;
	DZE_allowRotation = 0;

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundArray[] = {};
	};	
};

class DZE_TentStorage_Base: DZE_Tent_Base {	
	transportMaxMagazines = 70;
	transportMaxWeapons = 7;
	transportMaxBackpacks = 1;
	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemTent";		
	};
};

class DZE_TentStorage: DZE_TentStorage_Base {
	scope = 2;
	upgradeBuilding[] = {"DZE_TentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};
};

class DZE_TentStorage0: DZE_TentStorage {
	displayName = $STR_VEH_NAME_TENT1;
	armor = 50;	
	transportMaxMagazines = 85;
	transportMaxWeapons = 12;
	transportMaxBackpacks = 2;	
	upgradeBuilding[] = {"DZE_TentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};

class DZE_TentStorage1: DZE_TentStorage0 {
	displayName = $STR_VEH_NAME_TENT2;
	armor = 60;
	transportMaxMagazines = 100;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 3;	
	upgradeBuilding[] = {"DZE_TentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};

class DZE_TentStorage2: DZE_TentStorage1 {
	displayName = $STR_VEH_NAME_TENT3;
	armor = 70;
	transportMaxMagazines = 115;
	transportMaxWeapons = 18;
	transportMaxBackpacks = 4;	
	upgradeBuilding[] = {"DZE_TentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};

class DZE_TentStorage3: DZE_TentStorage2 {
	displayName = $STR_VEH_NAME_TENT4;
	armor = 80;
	transportMaxMagazines = 130;
	transportMaxWeapons = 21;
	transportMaxBackpacks = 5;	
	upgradeBuilding[] = {"DZE_TentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class DZE_TentStorage4: DZE_TentStorage3 {
	displayName = $STR_VEH_NAME_TENT5;
	armor = 90;
	transportMaxMagazines = 145;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 6;	
	upgradeBuilding[] = {};
};

class DZE_TentStorageWinter: DZE_TentStorage_Base {
	displayName = $STR_VEH_NAME_TENTWINTER;
	model = "\z\addons\dayz_epoch_v\base_building\storage\tents\dze_a_tent.p3d";
	upgradeBuilding[] = {"DZE_TentStorageWinter0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};
	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemTentWinter";
	};
};

class DZE_TentStorageWinter0: DZE_TentStorageWinter {
	displayName = $STR_VEH_NAME_TENTWINTER1;
	armor = 50;	
	transportMaxMagazines = 85;
	transportMaxWeapons = 12;
	transportMaxBackpacks = 2;	
	upgradeBuilding[] = {"DZE_TentStorageWinter1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};

class DZE_TentStorageWinter1: DZE_TentStorageWinter0 {
	displayName = $STR_VEH_NAME_TENTWINTER2;
	armor = 60;
	transportMaxMagazines = 100;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 3;	
	upgradeBuilding[] = {"DZE_TentStorageWinter2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};

class DZE_TentStorageWinter2: DZE_TentStorageWinter1 {
	displayName = $STR_VEH_NAME_TENTWINTER3;
	armor = 70;
	transportMaxMagazines = 115;
	transportMaxWeapons = 18;
	transportMaxBackpacks = 4;
	upgradeBuilding[] = {"DZE_TentStorageWinter3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};

class DZE_TentStorageWinter3: DZE_TentStorageWinter2 {
	displayName = $STR_VEH_NAME_TENTWINTER4;
	armor = 80;
	transportMaxMagazines = 130;
	transportMaxWeapons = 21;
	transportMaxBackpacks = 5;	
	upgradeBuilding[] = {"DZE_TentStorageWinter4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class DZE_TentStorageWinter4: DZE_TentStorageWinter3 {	
	displayName = $STR_VEH_NAME_TENTWINTER5;
	armor = 90;
	transportMaxMagazines = 145;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 6;	
	upgradeBuilding[] = {};
};

class DZE_DesertTentStorage: DZE_TentStorage_Base {
	scope = 2;
	model = "\dayz_epoch_b\models\astan.p3d";
	displayname = $STR_VEH_NAME_DESERT_TENT;
	upgradeBuilding[] = {"DZE_DesertTentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};
	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemDesertTent";
	};
};

class DZE_DesertTentStorage0: DZE_DesertTentStorage {
	displayname = $STR_VEH_NAME_DESERT_TENT1;
	armor = 50;	
	transportMaxMagazines = 85;
	transportMaxWeapons = 12;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_DesertTentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};

class DZE_DesertTentStorage1: DZE_DesertTentStorage0 {
	displayname = $STR_VEH_NAME_DESERT_TENT2;
	armor = 60;
	transportMaxMagazines = 100;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 3;
	upgradeBuilding[] = {"DZE_DesertTentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};

class DZE_DesertTentStorage2: DZE_DesertTentStorage1 {
	displayname = $STR_VEH_NAME_DESERT_TENT3;
	armor = 70;
	transportMaxMagazines = 115;
	transportMaxWeapons = 18;
	transportMaxBackpacks = 4;
	upgradeBuilding[] = {"DZE_DesertTentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};

class DZE_DesertTentStorage3: DZE_DesertTentStorage2 {
	displayname = $STR_VEH_NAME_DESERT_TENT4;
	armor = 80;
	transportMaxMagazines = 130;
	transportMaxWeapons = 21;
	transportMaxBackpacks = 5;	
	upgradeBuilding[] = {"DZE_DesertTentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class DZE_DesertTentStorage4: DZE_DesertTentStorage3 {
	displayname = $STR_VEH_NAME_DESERT_TENT5;
	armor = 90;
	transportMaxMagazines = 145;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 6;	
	upgradeBuilding[] = {};
};

class DZE_DomeTentStorage_base: DZE_Tent_Base {	
	displayname = $STR_VEH_NAME_DOME_TENT;
	model = "\z\addons\dayz_communityassets\models\tent_dome.p3d";	
	armor = 50;
	transportMaxMagazines = 90;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 2;	
	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemDomeTent";
	};	
};

class DZE_DomeTentStorage: DZE_Tent_Base {
	scope = 2;
	upgradeBuilding[] = {"DZE_DomeTentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};
};

class DZE_DomeTentStorage0: DZE_DomeTentStorage {
	armor = 60;
	displayname = $STR_VEH_NAME_DOME_TENT1;
	transportMaxMagazines = 110;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;	
	upgradeBuilding[] = {"DZE_DomeTentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};

class DZE_DomeTentStorage1: DZE_DomeTentStorage0 {
	armor = 70;
	displayname = $STR_VEH_NAME_DOME_TENT2;
	transportMaxMagazines = 130;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 10;
	upgradeBuilding[] = {"DZE_DomeTentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};

class DZE_DomeTentStorage2: DZE_DomeTentStorage1 {	
	armor = 80;
	displayname = $STR_VEH_NAME_DOME_TENT3;
	transportMaxMagazines = 160;
	transportMaxWeapons = 35;
	transportMaxBackpacks = 15;
	upgradeBuilding[] = {"DZE_DomeTentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};

class DZE_DomeTentStorage3: DZE_DomeTentStorage2 {
	armor = 90;
	displayname = $STR_VEH_NAME_DOME_TENT4;
	transportMaxMagazines = 190;
	transportMaxWeapons = 45;
	transportMaxBackpacks = 20;
	upgradeBuilding[] = {"DZE_DomeTentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class DZE_DomeTentStorage4: DZE_DomeTentStorage3 {
	armor = 100;
	displayname = $STR_VEH_NAME_DOME_TENT5;
	transportMaxMagazines = 220;
	transportMaxWeapons = 55;
	transportMaxBackpacks = 25;
	upgradeBuilding[] = {};
};

class DZE_WinterDomeTentStorage: DZE_DomeTentStorage_base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\tents\dze_dome_tent.p3d";	
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT;
	transportMaxMagazines = 75;
	upgradeBuilding[] = {"DZE_WinterDomeTentStorage0",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWinterDomeTent";
	};
};

class DZE_WinterDomeTentStorage0: DZE_WinterDomeTentStorage {
	armor = 60;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT1;
	transportMaxMagazines = 110;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;	
	upgradeBuilding[] = {"DZE_WinterDomeTentStorage1",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",1},{"equip_tent_poles",1}}};
};

class DZE_WinterDomeTentStorage1: DZE_WinterDomeTentStorage0 {
	armor = 70;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT2;
	transportMaxMagazines = 130;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 10;
	upgradeBuilding[] = {"DZE_WinterDomeTentStorage2",{"ItemToolbox","ItemKnife"},{{"equip_string",1},{"ItemCanvas",2},{"equip_tent_poles",2}}};
};

class DZE_WinterDomeTentStorage2: DZE_WinterDomeTentStorage1 {
	armor = 80;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT3;
	transportMaxMagazines = 160;
	transportMaxWeapons = 35;
	transportMaxBackpacks = 15;
	upgradeBuilding[] = {"DZE_WinterDomeTentStorage3",{"ItemToolbox","ItemKnife"},{{"equip_string",2},{"ItemBurlap",1},{"equip_tent_poles",1}}};
};

class DZE_WinterDomeTentStorage3: DZE_WinterDomeTentStorage2 {
	armor = 90;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT4;
	transportMaxMagazines = 190;
	transportMaxWeapons = 45;
	transportMaxBackpacks = 20;
	upgradeBuilding[] = {"DZE_WinterDomeTentStorage4",{"ItemToolbox","ItemKnife"},{{"equip_rope",2},{"ItemBurlap",2},{"equip_tent_poles",4}}};
};

class DZE_WinterDomeTentStorage4: DZE_WinterDomeTentStorage3 {	
	armor = 100;
	displayname = $STR_VEH_NAME_WINTER_DOME_TENT5;
	transportMaxMagazines = 220;
	transportMaxWeapons = 55;
	transportMaxBackpacks = 25;
	upgradeBuilding[] = {};
};
