class DZE_WoodRamp: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\Wood_Ramp.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WOODRAMP;
	//GhostPreview = "DZE_WoodRamp_Preview";
};

class DZE_WoodFloor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\Wood_Floor.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_FLOORCEILING;
	maintainBuilding[] = {{"PartWoodLumber",4}};
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
};

class DZE_WoodFloorStairs: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_stairs.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_WOODFLOORSTAIRS;
	maintainBuilding[] = {{"PartWoodLumber",4}};
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
};

class DZE_WoodFloorHalf: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\half_floor.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_FLOORCEILINGHALF;
	maintainBuilding[] = {{"PartWoodLumber",2}};
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
};

class DZE_WoodFloorQuarter: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2.5,0};
	model = "\z\addons\dayz_epoch\models\quarter_floor.p3d";
	armor = 500;
	displayName = $STR_EPOCH_FLOORCEILINGQUARTER;
	maintainBuilding[] = {{"PartWoodLumber",1}};
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
};

class DZE_WoodFloor4x: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,6,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2.p3d";
	armor = 4000;
	displayName = $STR_EPOCH_FLOORCEILING4x;
	maintainBuilding[] = {{"PartWoodLumber",4}};
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
};

class DZE_WoodTriangleFloor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_tri_floor.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_TRIANGLE_WOODFLOOR;
	maintainBuilding[] = {{"PartWoodLumber",2}};
	//GhostPreview = "DZE_WoodTriangleFloor_Preview";
};

class DZE_WoodLargeWall: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWOODWALL;
	upgradeBuilding[] = {"DZE_WoodLargeWallWin",{"ItemToolbox","Handsaw_DZE"},{{"PartGlass",1}}};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
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
};

class DZE_WoodLargeWallDoor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall_door.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORWAY;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
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
};

class DZE_WoodLargeWallWin: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall_win.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHWINDOW;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
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
};

class DZE_WoodSmallWall: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WOODWALL;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
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
};

class DZE_WoodSmallWallThird: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\third_wall.p3d";
	armor = 600;
	displayName = $STR_EPOCH_WOODWALLTHIRDPART;
	maintainBuilding[] = {{"PartWoodLumber",1}};
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
};

class DZE_WoodSmallWallWin: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall_win.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHWINDOW;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
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
};

class DZE_WoodSmallWallDoor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall_door.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHDOORWAY;
	upgradeBuilding[] = {"DZE_Land_WoodDoor",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
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
};

class DZE_WoodTriangleWall: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,3.5,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\apex_tri\apex_tri.p3d";
	armor = 1500;
	displayName = $STR_EPOCH_TRIANGLE_WOODWALL;
	//GhostPreview = "DZE_Wood_Triangle_Wall_Preview";
	maintainBuilding[] = {{"PartWoodLumber",1}};

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
};

class DZE_WoodGateFrame: DZE_Modular_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_frame.p3d";
	armor = 2800;
	displayName = $STR_EPOCH_WOODGATEFRAME;
	maintainBuilding[] = {{"PartWoodLumber",4}};
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
};

class DZE_WoodStairs: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs.p3d";
	armor = 600;
	displayName = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	upgradeBuilding[] = {"DZE_WoodStairsRails",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodLumber",2}}};
	//GhostPreview = "DZE_WoodStairs_Preview";
};

class DZE_WoodStairsRails: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs_rail.p3d";
	armor = 700;
	displayName = $STR_EPOCH_WOODSTAIRSRAILS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	//GhostPreview = "DZE_WoodStairs_Preview";
};

class DZE_WoodStairsSans: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs_sans.p3d";
	armor = 500;
	displayName = $STR_EPOCH_WOODSTAIRS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	upgradeBuilding[] = {"DZE_WoodStairs",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodLumber",2}}};
	//GhostPreview = "DZE_WoodStairsSans_Preview";
};

class DZE_WoodLadder: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	DZE_allowRotation = 0;
	model = "\z\addons\dayz_epoch\models\wood_ladder.p3d";
	armor = 300;
	displayName = $STR_EPOCH_WOODLADDER;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	//GhostPreview = "DZE_WoodLadder_Preview";
	ladders[] = {{"start1","end1"}};
};

class DZE_WoodHandrail: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\railing\railing.p3d";
	armor = 300;
	displayName = $STR_EPOCH_WOODRAIL;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	//GhostPreview = "DZE_Wood_Handrail_Preview";
};

class DZE_WoodPillar: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\pillar\corner_pillar.p3d";
	armor = 700;
	displayName = $STR_EPOCH_WOODPILLAR;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	//GhostPreview = "DZE_Wood_Pillar_Preview";
};
