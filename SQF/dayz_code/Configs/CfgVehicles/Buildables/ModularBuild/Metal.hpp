class DZE_MetalFloor: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALFLOOR";
	model = "\z\addons\dayz_epoch\models\metal_floor.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Metal_Floor";
	DZE_offset[] = {0,4,0};
	armor = 3000;
	//GhostPreview = "DZE_MetalFloor_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metal_Floor";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Metal_Floor_Half",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_Metal_Floor_Half";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Metal_Floor_Quarter",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_Metal_Floor_Quarter";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Pole",4},{"DZE_Item_Metal_Sheet",4}}};
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
		DZE_refundKit = "DZE_Item_Kit_Metal_Floor4x";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Metal_Floor",4}}};
	};
};

class DZE_DoorFrame: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_DOORWAY";
	model = "\z\addons\dayz_epoch\models\Steel_door_frame_single.p3d";
	DZE_offset[] = {0,1.5,0};
	armor = 1200;
	//GhostPreview = "DZE_DoorFrame_Preview";
	DZE_upgradeBuilding[] = {"DZE_Door",{"DZE_Tool_Toolbox"},{{"DZE_Item_Metal_Pole",1},{"DZE_Item_Kit_TankTrap",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Door_Frame";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Pole",4},{"DZE_Item_Kit_TankTrap",4},{"DZE_Item_Metal_Parts",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_Metal_Pillar";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Sheet",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_Glass_Floor";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Glass_Floor_Half",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_Glass_Floor_Half";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Glass_Floor_Quarter",2}}};
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
		DZE_refundKit = "DZE_Item_Kit_Glass_Floor_Quarter";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Pole",8},{"DZE_Item_Parts_Glass",4}}};
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
		DZE_refundKit = "DZE_Item_Kit_Elevatorstart";
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
		DZE_refundKit = "DZE_Item_Kit_Elevatorstop_Glass";
		DZE_refundArray[] = {};
	};
};
