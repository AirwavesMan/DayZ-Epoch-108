class DZE_StickFence: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EPOCH_STICKFENCE";
	model = "\ca\Structures_E\Wall\Wall_L\Wall_FenW2_6_EP1";
	destrType = "DestructTree";
	armor = 200;
	DZE_offset[] = {0,4.5,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Stick_Fence";
		DZE_refundArray[] = {};
	};
};

class DZE_WoodenFence_1_foundation: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_1_foundation";
	model = "z\addons\dayz_buildings\models\fence1_ground.p3d";
	armor = 1000;
	DZE_offset[] = {0,4,0};
	DZE_allowRotation = 0;
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_1_frame",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",4},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_Foundation";
		DZE_refundArray[] = {{{"ItemStone",8},{"MortarBucket",1},{"ItemPlank",1}}};
	};
};

class DZE_WoodenFence_1_frame: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_1_frame";
	model = "z\addons\dayz_buildings\models\fence1_frame.p3d";
	armor = 1200;	
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_quaterpanel",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",4},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_Frame";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_Foundation",1},{"ItemPlank",4},{"equip_nails",1}}};
	};
};

class DZE_WoodenFence_quaterpanel: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_quaterpanel";
	model = "z\addons\dayz_buildings\models\fence1_stage1.p3d";
	armor = 1400;	
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_halfpanel",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",4},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_Quaterpanel";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_Frame",1},{"ItemPlank",4},{"equip_nails",1}}};
	};
};

class DZE_WoodenFence_halfpanel: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_halfpanel";
	model = "z\addons\dayz_buildings\models\fence1_stage2.p3d";
	armor = 1600;	
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_thirdpanel",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",4},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_Halfpanel";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_Quaterpanel",1},{"ItemPlank",4},{"equip_nails",1}}};
	};
};

class DZE_WoodenFence_thirdpanel: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_thirdpanel";
	model = "z\addons\dayz_buildings\models\fence1_stage3.p3d";
	armor = 1800;	
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_1",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",4},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_Thirdpanel";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_Halfpanel",1},{"ItemPlank",4},{"equip_nails",1}}};
	};
};

class DZE_WoodenFence_1: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_1";
	model = "z\addons\dayz_buildings\models\fence1.p3d";
	armor = 2000;	
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_2",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",8},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_1";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_Thirdpanel",1},{"ItemPlank",4},{"equip_nails",1}}};
	};
};

class DZE_WoodenFence_2: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_2";
	model = "z\addons\dayz_buildings\models\fence2.p3d";
	armor = 2200;
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_3",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",8},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_2";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_1",1},{"ItemPlank",8},{"equip_nails",2}}};
	};
};

class DZE_WoodenFence_3: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_3";
	model = "z\addons\dayz_buildings\models\fence3.p3d";
	armor = 2400;
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_4",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",8},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_3";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_2",1},{"ItemPlank",8},{"equip_nails",2}}};
	};
};

class DZE_WoodenFence_4: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_4";
	model = "z\addons\dayz_buildings\models\fence4.p3d";
	armor = 2600;
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_5",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemLog",5},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_4";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_3",1},{"ItemPlank",8},{"equip_nails",2}}};
	};
};

class DZE_WoodenFence_5: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_5";
	model = "z\addons\dayz_buildings\models\fence5.p3d";
	armor = 2800;
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_6",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"PartWoodPlywood",4},{"ItemPlank",2},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_5";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_4",1},{"ItemLog",5},{"equip_nails",2}}};
	};
};

class DZE_WoodenFence_6: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_6";
	model = "z\addons\dayz_buildings\models\fence6.p3d";
	armor = 3000;
	DZE_upgradeBuilding[] = {"DZE_WoodenFence_7",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"DZE_Item_Kit_WoodLadder",1},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_6";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_5",1},{"PartWoodPlywood",4},{"ItemPlank",2},{"equip_nails",2}}};
	};
};

class DZE_WoodenFence_7: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_WoodenFence_7";
	model = "z\addons\dayz_buildings\models\fence7.p3d";
	armor = 3000;
	ladders[] = {{"ladderstart","ladderend"}};
	//GhostPreview = "DZE_WoodenFence_7_Preview";
	DZE_upgradeBuilding[] = {};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Woodfence_7";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Woodfence_6",1},{"DZE_Item_Kit_WoodLadder",1},{"equip_nails",1}}};
	};
}; 
