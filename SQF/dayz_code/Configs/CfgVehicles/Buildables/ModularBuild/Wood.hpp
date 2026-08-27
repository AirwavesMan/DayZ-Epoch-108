class DZE_WoodRamp: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\Wood_Ramp.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WOODRAMP;
	//GhostPreview = "DZE_WoodRamp_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wood_ramp_kit";
		DZE_refundArray[] = {{{"ItemDocumentRamp",1},{"PartWoodLumber",8}}};
	};
};

class DZE_WoodFloor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\Wood_Floor.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_FLOORCEILING;
	//GhostPreview = "DZE_WoodFloor_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloor";
		DZE_refundArray[] = {{{"ItemWoodFloorHalf",2}}};
	};
};

class DZE_WoodFloorStairs: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_stairs.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_WOODFLOORSTAIRS;
	//GhostPreview = "DZE_Wood_Floor_Stairs_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloorStairs";
		DZE_refundArray[] = {{{"ItemWoodFloor",1},{"ItemWoodStairs",1}}};
	};
};

class DZE_WoodFloorHalf: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\half_floor.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_FLOORCEILINGHALF;
	DZE_buildingSteps = 2;
	//GhostPreview = "DZE_WoodFloorHalf_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloorHalf";
		DZE_refundArray[] = {{{"ItemWoodFloorQuarter",2}}};
	};
};

class DZE_WoodFloorQuarter: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2.5,0};
	model = "\z\addons\dayz_epoch\models\quarter_floor.p3d";
	armor = 500;
	displayName = $STR_EPOCH_FLOORCEILINGQUARTER;
	DZE_buildingSteps = 1;
	//GhostPreview = "DZE_WoodFloorQuarter_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloorQuarter";
		DZE_refundArray[] = {{{"PartWoodPlywood",3},{"PartWoodLumber",3}}};
	};
};

class DZE_WoodFloor4x: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,6,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2.p3d";
	armor = 4000;
	displayName = $STR_EPOCH_FLOORCEILING4x;
	//GhostPreview = "DZE_WoodFloor4x_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2_wreck.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodFloor4x";
		DZE_refundArray[] = {{{"ItemWoodFloor",4}}};
	};
};

class DZE_WoodTriangleFloor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_tri_floor.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_TRIANGLE_WOODFLOOR;
	//GhostPreview = "DZE_WoodTriangleFloor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemTriangleWoodFloor";
		DZE_refundArray[] = {{{"ItemWoodFloorHalf",1},{"ItemWoodFloorQuarter",1}}};
	};
};

class DZE_WoodLargeWall: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWOODWALL;
	upgradeBuilding[] = {"DZE_WoodLargeWallWin",{"ItemToolbox","Handsaw_DZE"},{{"PartGlass",1}}};
	//GhostPreview = "DZE_WoodLargeWall_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallLg";
		DZE_refundArray[] = {{{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	};
};

class DZE_WoodLargeWallDoor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall_door.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORWAY;
	upgradeBuilding[] = {"DZE_Land_LargeWoodDoor",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	//GhostPreview = "DZE_WoodLargeWallDoor_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallDoorLg";
		DZE_refundArray[] = {{{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	};
};

class DZE_WoodLargeWallWin: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall_win.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHWINDOW;
	//GhostPreview = "DZE_WoodLargeWallWin_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWindowLg";
		DZE_refundArray[] = {{{"ItemWoodWallLg",1},{"PartGlass",1}}};
	};
};

class DZE_WoodSmallWall: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WOODWALL;
	upgradeBuilding[] = {"DZE_WoodSmallWallWin",{"ItemToolbox","Handsaw_DZE"},{{"PartGlass",1}}};
	//GhostPreview = "DZE_WoodSmallWall_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWall";
		DZE_refundArray[] = {{{"ItemWoodWallThird",3}}};
	};
};

class DZE_WoodSmallWallThird: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\third_wall.p3d";
	armor = 600;
	displayName = $STR_EPOCH_WOODWALLTHIRDPART;
	DZE_buildingSteps = 1;
	//GhostPreview = "DZE_WoodSmallWallThird_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallThird";
		DZE_refundArray[] = {{{"PartWoodPlywood",3},{"PartWoodLumber",3}}};
	};
};

class DZE_WoodSmallWallWin: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall_win.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHWINDOW;
	//GhostPreview = "DZE_WoodSmallWallWin_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWindow";
		DZE_refundArray[] = {{{"ItemWoodWall",1},{"PartGlass",1}}};
	};
};

class DZE_WoodSmallWallDoor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall_door.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHDOORWAY;
	upgradeBuilding[] = {"DZE_Land_WoodDoor",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	//GhostPreview = "DZE_WoodSmallWallDoor_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallDoor";
		DZE_refundArray[] = {{{"ItemWoodWallThird",3}}};
	};
};

class DZE_WoodTriangleWall: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,3.5,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\apex_tri\apex_tri.p3d";
	armor = 1500;
	displayName = $STR_EPOCH_TRIANGLE_WOODWALL;
	//GhostPreview = "DZE_Wood_Triangle_Wall_Preview";

	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemTriangleWoodWall";
		DZE_refundArray[] = {{{"ItemWoodFloorHalf",1},{"ItemWoodFloorQuarter",1}}};
	};
};

class DZE_WoodGateFrame: DZE_Modular_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_frame.p3d";
	armor = 2800;
	displayName = $STR_EPOCH_WOODGATEFRAME;
	upgradeBuilding[] = {"DZE_Land_WoodGate",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}}};
	//GhostPreview = "DZE_WoodGate_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodGateFrame";
		DZE_refundArray[] = {{{"ItemWoodWallThird",6}}};
	};
};

class DZE_WoodStairs: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs.p3d";
	armor = 600;
	displayName = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS;
	upgradeBuilding[] = {"DZE_WoodStairsRails",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodLumber",2}}};
	//GhostPreview = "DZE_WoodStairs_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodStairsSupport";
		DZE_refundArray[] = {{{"ItemWoodStairs",1},{"PartWoodLumber",2}}};
	};
};

class DZE_WoodStairsRails: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs_rail.p3d";
	armor = 700;
	displayName = $STR_EPOCH_WOODSTAIRSRAILS;
	//GhostPreview = "DZE_WoodStairs_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodStairsRails";
		DZE_refundArray[] = {{{"ItemWoodStairsSupport",1},{"PartWoodLumber",2}}};
	};
};

class DZE_WoodStairsSans: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs_sans.p3d";
	armor = 500;
	displayName = $STR_EPOCH_WOODSTAIRS;
	upgradeBuilding[] = {"DZE_WoodStairs",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodLumber",2}}};
	//GhostPreview = "DZE_WoodStairsSans_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodStairs";
		DZE_refundArray[] = {{{"PartWoodLumber",8},{"equip_nails",2}}};
	};
};

class DZE_WoodLadder: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	DZE_allowRotation = 0;
	model = "\z\addons\dayz_epoch\models\wood_ladder.p3d";
	armor = 300;
	displayName = $STR_EPOCH_WOODLADDER;
	//GhostPreview = "DZE_WoodLadder_Preview";
	ladders[] = {{"start1","end1"}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodLadder";
		DZE_refundArray[] = {{{"PartWoodLumber",8},{"equip_nails",2}}};
	};
};

class DZE_WoodHandrail: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\railing\railing.p3d";
	armor = 300;
	displayName = $STR_EPOCH_WOODRAIL;
	//GhostPreview = "DZE_Wood_Handrail_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodHandRail";
		DZE_refundArray[] = {{{"PartWoodLumber",3},{"equip_nails",1}}};
	};
};

class DZE_WoodPillar: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\pillar\corner_pillar.p3d";
	armor = 700;
	displayName = $STR_EPOCH_WOODPILLAR;
	//GhostPreview = "DZE_Wood_Pillar_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodPillar";
		DZE_refundArray[] = {{{"PartWoodLumber",4},{"equip_nails",1}}};
	};
};
