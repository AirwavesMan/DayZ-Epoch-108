class DZE_StickFence: DZE_Building_Base {
	model = "\ca\Structures_E\Wall\Wall_L\Wall_FenW2_6_EP1";
	destrType = "DestructTree";
	armor = 200;
	scope = 2;
	DZE_offset[] = {0,4.5,0};
	displayName = $STR_EPOCH_STICKFENCE;
	removeoutput[] = {{"stick_fence_kit",1}};
};

class DZE_WoodenFence_1_foundation: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_ground.p3d";
	displayName = $STR_BLD_name_WoodenFence_1_foundation;
	armor = 1000;
	DZE_offset[] = {0,4,0};
	DZE_allowRotation = 0;
	upgradeBuilding[] = {"DZE_WoodenFence_1_frame",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};
};

class DZE_WoodenFence_1_frame: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_frame.p3d";
	displayName = $STR_BLD_name_WoodenFence_1_frame;
	armor = 1200;	
	upgradeBuilding[] = {"DZE_WoodenFence_quaterpanel",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};
};

class DZE_WoodenFence_quaterpanel: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage1.p3d";
	displayName = $STR_BLD_name_WoodenFence_quaterpanel;
	armor = 1400;	
	upgradeBuilding[] = {"DZE_WoodenFence_halfpanel",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};
};

class DZE_WoodenFence_halfpanel: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage2.p3d";
	displayName = $STR_BLD_name_WoodenFence_halfpanel;
	armor = 1600;	
	upgradeBuilding[] = {"DZE_WoodenFence_thirdpanel",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};
};

class DZE_WoodenFence_thirdpanel: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage3.p3d";
	displayName = $STR_BLD_name_WoodenFence_thirdpanel;
	armor = 1800;	
	upgradeBuilding[] = {"DZE_WoodenFence_1",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};
};

class DZE_WoodenFence_1: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1.p3d";
	displayName = $STR_BLD_name_WoodenFence_1;
	armor = 2000;	
	upgradeBuilding[] = {"DZE_WoodenFence_2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",2}}};
};

class DZE_WoodenFence_2: DZE_Fence_Base {
	scope = 2;
	armor = 2200;
	model = "z\addons\dayz_buildings\models\fence2.p3d";
	displayName = $STR_BLD_name_WoodenFence_2;	
	upgradeBuilding[] = {"DZE_WoodenFence_3",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",2}}};
};

class DZE_WoodenFence_3: DZE_Fence_Base {
	scope = 2;
	armor = 2400;
	model = "z\addons\dayz_buildings\models\fence3.p3d";
	displayName = $STR_BLD_name_WoodenFence_3;	
	upgradeBuilding[] = {"DZE_WoodenFence_4",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",2}}};
};

class DZE_WoodenFence_4: DZE_Fence_Base {
	scope = 2;
	armor = 2600;
	model = "z\addons\dayz_buildings\models\fence4.p3d";
	displayName = $STR_BLD_name_WoodenFence_4;	
	upgradeBuilding[] = {"DZE_WoodenFence_5",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemLog",5},{"equip_nails",2}}};
};

class DZE_WoodenFence_5: DZE_Fence_Base {
	scope = 2;
	armor = 2800;
	model = "z\addons\dayz_buildings\models\fence5.p3d";
	displayName = $STR_BLD_name_WoodenFence_5;	
	upgradeBuilding[] = {"DZE_WoodenFence_6",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",4},{"ItemPlank",2},{"equip_nails",2}}};
};

class DZE_WoodenFence_6: DZE_Fence_Base {
	scope = 2;
	armor = 3000;
	model = "z\addons\dayz_buildings\models\fence6.p3d";
	displayName = $STR_BLD_name_WoodenFence_6;	
	upgradeBuilding[] = {"DZE_WoodenFence_7",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemWoodLadder",1},{"equip_nails",1}}};
};

class DZE_WoodenFence_7: DZE_Fence_Base {
	scope = 2;
	armor = 3000;
	model = "z\addons\dayz_buildings\models\fence7.p3d";
	displayName = $STR_BLD_name_WoodenFence_7;	
	ladders[] = {{"ladderstart","ladderend"}};
	//GhostPreview = "DZE_WoodenFence_7_Preview";
	upgradeBuilding[] = {};
}; 
