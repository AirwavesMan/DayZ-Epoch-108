// Technical destruction models for modular buildables.
// Keep each class name aligned with its wreck P3D model.
// Modular destruction wrecks
class DZE_ModularWreck_Base: DZE_Building_Base {
	vehicleClass = "DayZ Epoch 1071 Modular Wrecks";
	DZE_buildingSteps = 3;
	
	class RemoveObject {
		DZE_refundKit = "";
		DZE_refundArray[] = {};
	};	
};

class DZE_Land_Wood_Wreck_Frame: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
	displayName = $STR_WOOD_WALL_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",3}
			},
			{
				 {"PartWoodPlywood",2}
				,{"PartWoodLumber",3}
			},
			{
				 {"PartWoodPlywood",3}
				,{"PartWoodLumber",3}
			}			
		};
	};
};

class DZE_Land_Wood_Wreck_Third: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
	displayName = $STR_WOOD_WALL_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",3}
			},
			{
				 {"PartWoodPlywood",2}
				,{"PartWoodLumber",3}
			},
			{
				 {"PartWoodPlywood",3}
				,{"PartWoodLumber",3}
			}			
		};
	};
};

class DZE_Land_Wood_Wreck_Half: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",1}
			},
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",2}
			},
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",3}
			}			
		};
	};
};

class DZE_Land_Wood_Wreck_Floor: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",1}
			},
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",2}
			},
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",3}
			}			
		};
	};
};

class DZE_Land_Wood_Wreck_Quarter: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",1}
			},
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",2}
			},
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",2}
			}			
		};
	};
};

class DZE_Land_Wreck_Cinder: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
	displayName = $STR_CINDER_WALL_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				{"CinderBlocks",1}
			},
			{
				{"CinderBlocks",2}
			},
			{
				{"CinderBlocks",3}
			}			
		};
	};	
};

class DZE_Land_Wreck_Metal_Floor: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";
	displayName = $STR_METAL_FLOOR_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"equip_metal_sheet",1}
				,{"ItemPole",1}
			},
			{
				 {"equip_metal_sheet",2}
				,{"ItemPole",2}
			},
			{
				 {"equip_metal_sheet",3}
				,{"ItemPole",3}
			}			
		};
	};	
};

class DZE_Land_Metal_Floor_2x2_Wreck: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2_wreck.p3d";
	displayName = $STR_METAL_FLOOR_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"equip_metal_sheet",1}
				,{"ItemPole",1}
			},
			{
				 {"equip_metal_sheet",2}
				,{"ItemPole",2}
			},
			{
				 {"equip_metal_sheet",3}
				,{"ItemPole",3}
			}			
		};
	};	
};

class DZE_Land_Wood_Floor_2x2_Wreck: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2_wreck.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	
	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",1}
			},
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",2}
			},
			{
				 {"PartWoodPlywood",1}
				,{"PartWoodLumber",2}
			}			
		};
	};
};
