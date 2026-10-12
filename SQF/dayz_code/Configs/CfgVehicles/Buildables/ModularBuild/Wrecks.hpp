// Technical destruction models for modular buildables.
// Keep each class name aligned with its wreck P3D model.
// Modular destruction wrecks
class DZE_ModularWreck_Base: DZE_Modular_Base {
	vehicleClass = "DayZ Epoch 1071 Modular Wrecks";
	DZE_buildingSteps = 3;

	class RemoveObject {
		DZE_refundKit = "";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_Wood_Wreck_Frame: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_WOOD_WALL_WRECK";
	model = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",3}
			},
			{
				 {"DZE_Item_Wood_Plywood",2}
				,{"DZE_Item_Wood_Lumber",3}
			},
			{
				 {"DZE_Item_Wood_Plywood",3}
				,{"DZE_Item_Wood_Lumber",3}
			}
		};
	};
};

class DZE_Land_Wood_Wreck_Third: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_WOOD_WALL_WRECK";
	model = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",3}
			},
			{
				 {"DZE_Item_Wood_Plywood",2}
				,{"DZE_Item_Wood_Lumber",3}
			},
			{
				 {"DZE_Item_Wood_Plywood",3}
				,{"DZE_Item_Wood_Lumber",3}
			}
		};
	};
};

class DZE_Land_Wood_Wreck_Half: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_WOOD_FLOOR_WRECK";
	model = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",1}
			},
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",2}
			},
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",3}
			}
		};
	};
};

class DZE_Land_Wood_Wreck_Floor: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_WOOD_FLOOR_WRECK";
	model = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",1}
			},
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",2}
			},
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",3}
			}
		};
	};
};

class DZE_Land_Wood_Wreck_Quarter: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_WOOD_FLOOR_WRECK";
	model = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",1}
			},
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",2}
			},
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",2}
			}
		};
	};
};

class DZE_Land_Wreck_Cinder: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_CINDER_WALL_WRECK";
	model = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				{"DZE_Item_Conc_CinderBlocks",1}
			},
			{
				{"DZE_Item_Conc_CinderBlocks",2}
			},
			{
				{"DZE_Item_Conc_CinderBlocks",3}
			}
		};
	};
};

class DZE_Land_Wreck_Metal_Floor: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_METAL_FLOOR_WRECK";
	model = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"DZE_Item_Metal_Sheet",1}
				,{"DZE_Item_Metal_Pole",1}
			},
			{
				 {"DZE_Item_Metal_Sheet",2}
				,{"DZE_Item_Metal_Pole",2}
			},
			{
				 {"DZE_Item_Metal_Sheet",3}
				,{"DZE_Item_Metal_Pole",3}
			}
		};
	};
};

class DZE_Land_Metal_Floor_2x2_Wreck: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_METAL_FLOOR_WRECK";
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2_wreck.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"DZE_Item_Metal_Sheet",1}
				,{"DZE_Item_Metal_Pole",1}
			},
			{
				 {"DZE_Item_Metal_Sheet",2}
				,{"DZE_Item_Metal_Pole",2}
			},
			{
				 {"DZE_Item_Metal_Sheet",3}
				,{"DZE_Item_Metal_Pole",3}
			}
		};
	};
};

class DZE_Land_Wood_Floor_2x2_Wreck: DZE_ModularWreck_Base {
	scope = 2;
	displayName = "$STR_WOOD_FLOOR_WRECK";
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2_wreck.p3d";

	class RemoveObject: RemoveObject {
		DZE_refundArray[] = {
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",1}
			},
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",2}
			},
			{
				 {"DZE_Item_Wood_Plywood",1}
				,{"DZE_Item_Wood_Lumber",2}
			}
		};
	};
};
