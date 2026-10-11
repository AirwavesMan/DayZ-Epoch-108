class DZE_WoodRamp: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODRAMP";
	model = "\z\addons\dayz_epoch\models\Wood_Ramp.p3d";
	DZE_offset[] = {0,4,0};
	armor = 2000;
	//GhostPreview = "DZE_WoodRamp_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wood_ramp_kit";
		DZE_refundArray[] = {{{"ItemDocumentRamp",1},{"PartWoodLumber",8}}};
	};
};

class DZE_WoodFloor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_FLOORCEILING";
	model = "\z\addons\dayz_epoch\models\Wood_Floor.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Floor";
	DZE_offset[] = {0,4,0};
	armor = 2000;
	//GhostPreview = "DZE_WoodFloor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloor";
		DZE_refundArray[] = {{{"ItemWoodFloorHalf",2}}};
	};
};

class DZE_WoodFloorStairs: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODFLOORSTAIRS";
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_stairs.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Floor";
	DZE_offset[] = {0,4,0};
	armor = 1000;
	//GhostPreview = "DZE_Wood_Floor_Stairs_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloorStairs";
		DZE_refundArray[] = {{{"ItemWoodFloor",1},{"ItemWoodStairs",1}}};
	};
};

class DZE_WoodFloorHalf: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_FLOORCEILINGHALF";
	model = "\z\addons\dayz_epoch\models\half_floor.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Half";
	DZE_offset[] = {0,4,0};
	armor = 1000;
	DZE_buildingSteps = 2;
	//GhostPreview = "DZE_WoodFloorHalf_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloorHalf";
		DZE_refundArray[] = {{{"ItemWoodFloorQuarter",2}}};
	};
};

class DZE_WoodFloorQuarter: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_FLOORCEILINGQUARTER";
	model = "\z\addons\dayz_epoch\models\quarter_floor.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Quarter";
	DZE_offset[] = {0,2.5,0};
	armor = 500;
	DZE_buildingSteps = 1;
	//GhostPreview = "DZE_WoodFloorQuarter_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloorQuarter";
		DZE_refundArray[] = {{{"PartWoodPlywood",3},{"PartWoodLumber",3}}};
	};
};

class DZE_WoodFloor4x: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_FLOORCEILING4x";
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Floor_2x2_Wreck";
	DZE_offset[] = {0,6,0};
	armor = 4000;
	//GhostPreview = "DZE_WoodFloor4x_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloor4x";
		DZE_refundArray[] = {{{"ItemWoodFloor",4}}};
	};
};

class DZE_WoodTriangleFloor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_TRIANGLE_WOODFLOOR";
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_tri_floor.p3d";
	DZE_offset[] = {0,4,0};
	armor = 1000;
	//GhostPreview = "DZE_WoodTriangleFloor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemTriangleWoodFloor";
		DZE_refundArray[] = {{{"ItemWoodFloorHalf",1},{"ItemWoodFloorQuarter",1}}};
	};
};

class DZE_WoodLargeWall: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWOODWALL";
	model = "\z\addons\dayz_epoch\models\large_wall.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2200;
	DZE_upgradeBuilding[] = {"DZE_WoodLargeWallWin",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"PartGlass",1}}};
	//GhostPreview = "DZE_WoodLargeWall_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallLg";
		DZE_refundArray[] = {{{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	};
};

class DZE_WoodLargeWallDoor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHDOORWAY";
	model = "\z\addons\dayz_epoch\models\large_wall_door.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2200;
	DZE_upgradeBuilding[] = {"DZE_Land_LargeWoodDoor",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	//GhostPreview = "DZE_WoodLargeWallDoor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallDoorLg";
		DZE_refundArray[] = {{{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	};
};

class DZE_WoodLargeWallWin: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHWINDOW";
	model = "\z\addons\dayz_epoch\models\large_wall_win.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2200;
	//GhostPreview = "DZE_WoodLargeWallWin_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWindowLg";
		DZE_refundArray[] = {{{"ItemWoodWallLg",1},{"PartGlass",1}}};
	};
};

class DZE_WoodSmallWall: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODWALL";
	model = "\z\addons\dayz_epoch\models\small_wall.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2000;
	DZE_upgradeBuilding[] = {"DZE_WoodSmallWallWin",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"PartGlass",1}}};
	//GhostPreview = "DZE_WoodSmallWall_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWall";
		DZE_refundArray[] = {{{"ItemWoodWallThird",3}}};
	};
};

class DZE_WoodSmallWallThird: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODWALLTHIRDPART";
	model = "\z\addons\dayz_epoch\models\third_wall.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	DZE_offset[] = {0,1.5,0};
	armor = 600;
	DZE_buildingSteps = 1;
	//GhostPreview = "DZE_WoodSmallWallThird_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallThird";
		DZE_refundArray[] = {{{"PartWoodPlywood",3},{"PartWoodLumber",3}}};
	};
};

class DZE_WoodSmallWallWin: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHWINDOW";
	model = "\z\addons\dayz_epoch\models\small_wall_win.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2000;
	//GhostPreview = "DZE_WoodSmallWallWin_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWindow";
		DZE_refundArray[] = {{{"ItemWoodWall",1},{"PartGlass",1}}};
	};
};

class DZE_WoodSmallWallDoor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHDOORWAY";
	model = "\z\addons\dayz_epoch\models\small_wall_door.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2000;
	DZE_upgradeBuilding[] = {"DZE_Land_WoodDoor",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	//GhostPreview = "DZE_WoodSmallWallDoor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallDoor";
		DZE_refundArray[] = {{{"ItemWoodWallThird",3}}};
	};
};

class DZE_WoodTriangleWall: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_TRIANGLE_WOODWALL";
	model = "\z\addons\dayz_epoch_v\base_building\wood\apex_tri\apex_tri.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	DZE_offset[] = {0,3.5,0};
	armor = 1500;
	//GhostPreview = "DZE_Wood_Triangle_Wall_Preview";

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemTriangleWoodWall";
		DZE_refundArray[] = {{{"ItemWoodFloorHalf",1},{"ItemWoodFloorQuarter",1}}};
	};
};

class DZE_WoodGateFrame: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGATEFRAME";
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_frame.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	armor = 2800;
	DZE_upgradeBuilding[] = {"DZE_Land_WoodGate",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}}};
	//GhostPreview = "DZE_WoodGate_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodGateFrame";
		DZE_refundArray[] = {{{"ItemWoodWallThird",6}}};
	};
};

class DZE_WoodStairs: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSTAIRSWITHSUPPORTS";
	model = "\z\addons\dayz_epoch\models\wood_stairs.p3d";
	DZE_offset[] = {0,1.5,0};
	armor = 600;
	DZE_upgradeBuilding[] = {"DZE_WoodStairsRails",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"PartWoodLumber",2}}};
	//GhostPreview = "DZE_WoodStairs_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodStairsSupport";
		DZE_refundArray[] = {{{"ItemWoodStairs",1},{"PartWoodLumber",2}}};
	};
};

class DZE_WoodStairsRails: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSTAIRSRAILS";
	model = "\z\addons\dayz_epoch\models\wood_stairs_rail.p3d";
	DZE_offset[] = {0,1.5,0};
	armor = 700;
	//GhostPreview = "DZE_WoodStairs_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodStairsRails";
		DZE_refundArray[] = {{{"ItemWoodStairsSupport",1},{"PartWoodLumber",2}}};
	};
};

class DZE_WoodStairsSans: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSTAIRS";
	model = "\z\addons\dayz_epoch\models\wood_stairs_sans.p3d";
	DZE_offset[] = {0,1.5,0};
	armor = 500;
	DZE_upgradeBuilding[] = {"DZE_WoodStairs",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"PartWoodLumber",2}}};
	//GhostPreview = "DZE_WoodStairsSans_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodStairs";
		DZE_refundArray[] = {{{"PartWoodLumber",8},{"equip_nails",2}}};
	};
};

class DZE_WoodLadder: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODLADDER";
	model = "\z\addons\dayz_epoch\models\wood_ladder.p3d";
	DZE_offset[] = {0,1.5,0};
	DZE_allowRotation = 0;
	armor = 300;
	//GhostPreview = "DZE_WoodLadder_Preview";
	ladders[] = {{"start1","end1"}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodLadder";
		DZE_refundArray[] = {{{"PartWoodLumber",8},{"equip_nails",2}}};
	};
};

class DZE_WoodHandrail: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODRAIL";
	model = "\z\addons\dayz_epoch_v\base_building\wood\railing\railing.p3d";
	DZE_offset[] = {0,2,0};
	armor = 300;
	//GhostPreview = "DZE_Wood_Handrail_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodHandRail";
		DZE_refundArray[] = {{{"PartWoodLumber",3},{"equip_nails",1}}};
	};
};

class DZE_WoodPillar: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODPILLAR";
	model = "\z\addons\dayz_epoch_v\base_building\wood\pillar\corner_pillar.p3d";
	DZE_offset[] = {0,2,0};
	armor = 700;
	//GhostPreview = "DZE_Wood_Pillar_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodPillar";
		DZE_refundArray[] = {{{"PartWoodLumber",4},{"equip_nails",1}}};
	};
};
