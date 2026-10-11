class DZE_MetalFloor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOOR";
	model = "\z\addons\dayz_epoch\models\metal_floor.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Metal_Floor";
	DZE_offset[] = {0,4,0};
	armor = 3000;
	//GhostPreview = "DZE_MetalFloor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metal_floor_kit";
		DZE_refundArray[] = {{{"metal_floor_half_kit",2}}};
	};
};

class DZE_MetalFloor_Half: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOORHALF";
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_half.p3d";
	DZE_offset[] = {0,4,0};
	armor = 2000;
	//GhostPreview = "DZE_MetalFloor_Half_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metal_floor_half_kit";
		DZE_refundArray[] = {{{"metal_floor_quarter_kit",2}}};
	};
};

class DZE_MetalFloor_Quarter: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOORQUARTER";
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_quarter.p3d";
	DZE_offset[] = {0,2.5,0};
	// {0,4,0};
	armor = 1000;
	//GhostPreview = "DZE_MetalFloor_Quarter_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metal_floor_quarter_kit";
		DZE_refundArray[] = {{{"ItemPole",4},{"equip_metal_sheet",4}}};
	};
};

class DZE_MetalFloor4x: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOOR4x";
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2.p3d";
	DZE_destroyedRuin = "DZE_Land_Metal_Floor_2x2_Wreck";
	DZE_offset[] = {0,7,0};
	// {0,6,0};
	armor = 6000;
	//GhostPreview = "DZE_MetalFloor4x_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metal_floor4x_kit";
		DZE_refundArray[] = {{{"metal_floor_kit",4}}};
	};
};

class DZE_DoorFrame: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_DOORWAY";
	model = "\z\addons\dayz_epoch\models\Steel_door_frame_single.p3d";
	DZE_offset[] = {0,1.5,0};
	armor = 1200;
	//GhostPreview = "DZE_DoorFrame_Preview";
	DZE_upgradeBuilding[] = {"DZE_Door",{"DZE_Tool_Toolbox"},{{"ItemPole",1},{"ItemTankTrap",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "door_frame_kit";
		DZE_refundArray[] = {{{"ItemPole",4},{"ItemTankTrap",4},{"PartGeneric",2}}};
	};
};

class DZE_MetalPillar: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALPILLAR";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\pillar\metal_cornerpillar.p3d";
	DZE_offset[] = {0,2,0};
	armor = 3400;
	//GhostPreview = "DZE_MetalPillar_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metal_pillar_kit";
		DZE_refundArray[] = {{{"ItemPole",1},{"equip_metal_sheet",2}}};
	};
};

class DZE_GlassFloor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_GLASSFLOOR";
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor.p3d";
	DZE_offset[] = {0,4,0};
	armor = 2000;
	//GhostPreview = "DZE_GlassFloor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "glass_floor_kit";
		DZE_refundArray[] = {{{"glass_floor_half_kit",2}}};
	};
};

class DZE_GlassFloor_Half: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_GLASSFLOORHALF";
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor_half.p3d";
	DZE_offset[] = {0,4,0};
	armor = 2000;
	//GhostPreview = "DZE_GlassFloor_Half_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "glass_floor_half_kit";
		DZE_refundArray[] = {{{"glass_floor_quarter_kit",2}}};
	};
};

class DZE_GlassFloor_Quarter: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_GLASSFLOORQUARTER";
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor_quarter.p3d";
	DZE_offset[] = {0,2.5,0};
	// {0,4,0};
	armor = 2000;
	//GhostPreview = "DZE_GlassFloor_Quarter_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "glass_floor_quarter_kit";
		DZE_refundArray[] = {{{"ItemPole",8},{"PartGlass",4}}};
	};
};

class DZE_ElevatorStart: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_ELEVATORSTART";
	model = "\z\addons\dayz_epoch\models\metal_floor.p3d";
	DZE_offset[] = {0,4,0};
	armor = 3000;
	//GhostPreview = "DZE_MetalFloor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "elevatorstart_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_ElevatorStop_Glass: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_ELEVATORSTOP_GLASS";
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor.p3d";
	DZE_offset[] = {0,4,0};
	armor = 2000;
	//GhostPreview = "DZE_GlassFloor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "elevatorstop_glass_kit";
		DZE_refundArray[] = {};
	};
};
