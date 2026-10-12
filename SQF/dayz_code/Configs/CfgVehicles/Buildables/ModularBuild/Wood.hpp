class DZE_WoodRamp: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODRAMP";
	model = "\z\addons\dayz_epoch\models\Wood_Ramp.p3d";
	DZE_offset[] = {0,4,0};
	armor = 2000;
	//GhostPreview = "DZE_WoodRamp_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Wood_Ramp";
		DZE_refundArray[] = {{{"DZE_Item_Docu_WoodRamp",1},{"DZE_Item_Wood_Lumber",8}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodFloor";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodFloorHalf",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodFloorStairs";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodFloor",1},{"DZE_Item_Kit_WoodStairs",1}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodFloorHalf";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodFloorQuarter",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodFloorQuarter";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Plywood",3},{"DZE_Item_Wood_Lumber",3}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodFloor4x";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodFloor",4}}};
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
		DZE_refundKit = "DZE_Item_Kit_TriangleWoodFloor";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodFloorHalf",1},{"DZE_Item_Kit_WoodFloorQuarter",1}}};
	};
};

class DZE_WoodLargeWall: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWOODWALL";
	model = "\z\addons\dayz_epoch\models\large_wall.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2200;
	DZE_upgradeBuilding[] = {"DZE_WoodLargeWallWin",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"DZE_Item_Parts_Glass",1}}};
	//GhostPreview = "DZE_WoodLargeWall_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WoodWallLg";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodWall",1},{"DZE_Item_Wood_Plywood",1},{"DZE_Item_Wood_Lumber",1}}};
	};
};

class DZE_WoodLargeWallDoor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHDOORWAY";
	model = "\z\addons\dayz_epoch\models\large_wall_door.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2200;
	DZE_upgradeBuilding[] = {"DZE_Land_LargeWoodDoor",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"DZE_Item_Wood_Plywood",1},{"DZE_Item_Wood_Lumber",1}}};
	//GhostPreview = "DZE_WoodLargeWallDoor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WoodWallDoorLg";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodWall",1},{"DZE_Item_Wood_Plywood",1},{"DZE_Item_Wood_Lumber",1}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodWallWindowLg";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodWallLg",1},{"DZE_Item_Parts_Glass",1}}};
	};
};

class DZE_WoodSmallWall: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODWALL";
	model = "\z\addons\dayz_epoch\models\small_wall.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2000;
	DZE_upgradeBuilding[] = {"DZE_WoodSmallWallWin",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"DZE_Item_Parts_Glass",1}}};
	//GhostPreview = "DZE_WoodSmallWall_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WoodWall";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodWallThird",3}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodWallThird";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Plywood",3},{"DZE_Item_Wood_Lumber",3}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodWallWindow";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodWall",1},{"DZE_Item_Parts_Glass",1}}};
	};
};

class DZE_WoodSmallWallDoor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHDOORWAY";
	model = "\z\addons\dayz_epoch\models\small_wall_door.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	DZE_offset[] = {0,1.5,0};
	armor = 2000;
	DZE_upgradeBuilding[] = {"DZE_Land_WoodDoor",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"DZE_Item_Wood_Plywood",1},{"DZE_Item_Wood_Lumber",1}}};
	//GhostPreview = "DZE_WoodSmallWallDoor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WoodWallDoor";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodWallThird",3}}};
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
		DZE_refundKit = "DZE_Item_Kit_TriangleWoodWall";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodFloorHalf",1},{"DZE_Item_Kit_WoodFloorQuarter",1}}};
	};
};

class DZE_WoodGateFrame: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGATEFRAME";
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_frame.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	armor = 2800;
	DZE_upgradeBuilding[] = {"DZE_Land_WoodGate",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"DZE_Item_Wood_Plywood",8},{"DZE_Item_Wood_Lumber",2},{"DZE_Item_Metal_Nails",1}}};
	//GhostPreview = "DZE_WoodGate_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WoodGateFrame";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodWallThird",6}}};
	};
};

class DZE_WoodStairs: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSTAIRSWITHSUPPORTS";
	model = "\z\addons\dayz_epoch\models\wood_stairs.p3d";
	DZE_offset[] = {0,1.5,0};
	armor = 600;
	DZE_upgradeBuilding[] = {"DZE_WoodStairsRails",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"DZE_Item_Wood_Lumber",2}}};
	//GhostPreview = "DZE_WoodStairs_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WoodStairsSupport";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodStairs",1},{"DZE_Item_Wood_Lumber",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodStairsRails";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WoodStairsSupport",1},{"DZE_Item_Wood_Lumber",2}}};
	};
};

class DZE_WoodStairsSans: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSTAIRS";
	model = "\z\addons\dayz_epoch\models\wood_stairs_sans.p3d";
	DZE_offset[] = {0,1.5,0};
	armor = 500;
	DZE_upgradeBuilding[] = {"DZE_WoodStairs",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw"},{{"DZE_Item_Wood_Lumber",2}}};
	//GhostPreview = "DZE_WoodStairsSans_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WoodStairs";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Lumber",8},{"DZE_Item_Metal_Nails",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodLadder";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Lumber",8},{"DZE_Item_Metal_Nails",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodHandRail";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Lumber",3},{"DZE_Item_Metal_Nails",1}}};
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
		DZE_refundKit = "DZE_Item_Kit_WoodPillar";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Lumber",4},{"DZE_Item_Metal_Nails",1}}};
	};
};
