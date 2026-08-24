// Technical destruction models for modular buildables.
// Keep each class name aligned with its wreck P3D model.
// Modular destruction wrecks
class DZE_ModularWreck_Base: DZE_Building_Base {
	vehicleClass = "DayZ Epoch 1071 Modular Wrecks";
};

class DZE_Land_Wood_Wreck_Frame: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
	displayName = $STR_WOOD_WALL_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class DZE_Land_Wood_Wreck_Third: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
	displayName = $STR_WOOD_WALL_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class DZE_Land_Wood_Wreck_Half: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class DZE_Land_Wood_Wreck_Floor: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class DZE_Land_Wood_Wreck_Quarter: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class DZE_Land_Wreck_Cinder: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
	displayName = $STR_CINDER_WALL_WRECK;
	removeoutput[] = {{"CinderBlocks",{0,1}}};
};

class DZE_Land_Wreck_Metal_Floor: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";
	displayName = $STR_METAL_FLOOR_WRECK;
	removeoutput[] = {{"ItemPole",{0,2}},{"equip_metal_sheet",{0,2}}};
};

class DZE_Land_Metal_Floor_2x2_Wreck: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2_wreck.p3d";
	displayName = $STR_METAL_FLOOR_WRECK;
	removeoutput[] = {{"ItemPole",{0,4}},{"equip_metal_sheet",{0,4}}};
};

class DZE_Land_Wood_Floor_2x2_Wreck: DZE_ModularWreck_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2_wreck.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,4}},{"PartWoodLumber",{0,4}}};
};
