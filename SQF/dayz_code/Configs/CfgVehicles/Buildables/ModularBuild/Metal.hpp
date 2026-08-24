class DZE_MetalFloor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\metal_floor.p3d";
	armor = 3000;
	displayName = $STR_EPOCH_METALFLOOR;
	//GhostPreview = "DZE_MetalFloor_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class DZE_MetalFloor_Half: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_half.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_METALFLOORHALF;
	//GhostPreview = "DZE_MetalFloor_Half_Preview";
};

class DZE_MetalFloor_Quarter: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2.5,0};
	// {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_quarter.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_METALFLOORQUARTER;
	//GhostPreview = "DZE_MetalFloor_Quarter_Preview";
};

class DZE_MetalFloor4x: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,7,0};
	// {0,6,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2.p3d";
	armor = 6000;
	displayName = $STR_EPOCH_METALFLOOR4x;
	//GhostPreview = "DZE_MetalFloor4x_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2_wreck.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class DZE_DoorFrame: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	armor = 1200;
	model = "\z\addons\dayz_epoch\models\Steel_door_frame_single.p3d";
	displayName = $STR_EPOCH_DOORWAY;
	//GhostPreview = "DZE_DoorFrame_Preview";
	maintainBuilding[] = {{"PartGeneric",1}};
	upgradeBuilding[] = {"DZE_Door",{"ItemToolbox"},{{"ItemPole",1},{"ItemTankTrap",1}}};
};

class DZE_MetalPillar: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\cinder\pillar\metal_cornerpillar.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_METALPILLAR;
	maintainBuilding[] = {{"PartGeneric",1}};
	//GhostPreview = "DZE_MetalPillar_Preview";
};

class DZE_GlassFloor: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_GLASSFLOOR;
	maintainBuilding[] = {{"PartGlass",1}};
	//GhostPreview = "DZE_GlassFloor_Preview";
};

class DZE_GlassFloor_Half: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor_half.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_GLASSFLOORHALF;
	maintainBuilding[] = {{"PartGlass",1}};
	//GhostPreview = "DZE_GlassFloor_Half_Preview";
};

class DZE_GlassFloor_Quarter: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2.5,0};
	// {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor_quarter.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_GLASSFLOORQUARTER;
	maintainBuilding[] = {{"PartGlass",1}};
	//GhostPreview = "DZE_GlassFloor_Quarter_Preview";
};

class DZE_ElevatorStart: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\metal_floor.p3d";
	armor = 3000;
	displayName = $STR_EPOCH_ELEVATORSTART;
	//GhostPreview = "DZE_MetalFloor_Preview";
};

class DZE_ElevatorStop_Glass: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_ELEVATORSTOP_GLASS;
	//GhostPreview = "DZE_GlassFloor_Preview";
};
