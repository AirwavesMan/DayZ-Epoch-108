class DZE_Fence_corrugated: DZE_Building_Base {
	model = "\ca\structures\wall\Wall_Tin_4";
	armor = 600;
	scope = 2;
	DZE_offset[] = {0,3,-0.1};
	displayName = $STR_EPOCH_CORRUGATEDFENCE;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemCorrugated";
		DZE_refundArray[] = {};
	};
};

class DZE_MetalFence_1_foundation: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_foundation.p3d";
	displayName = $STR_BLD_name_MetalFence_1_foundation;
	DZE_offset[] = {0,4,0};
	DZE_allowRotation = 0;
	upgradeBuilding[] = {"DZE_MetalFence_1_frame",{"ItemToolbox","ItemSledge"},{{"ItemPlank",4},{"ItemRSJ",1}}};
	armor = 1000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_foundation_kit";
		DZE_refundArray[] = {{{"ItemStone",8},{"MortarBucket",1},{"ItemRSJ",1}}};
	};
};

class DZE_MetalFence_1_frame: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage1.p3d";
	displayName = $STR_BLD_name_MetalFence_1_frame;	
	upgradeBuilding[] = {"DZE_MetalFence_halfpanel",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	armor = 1500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_frame_kit";
		DZE_refundArray[] = {{{"ItemPlank",4},{"ItemRSJ",1}}};
	};
};

class DZE_MetalFence_halfpanel: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage2.p3d";
	displayName = $STR_BLD_name_MetalFence_halfpanel;	
	upgradeBuilding[] = {"DZE_MetalFence_thirdpanel",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	armor = 2000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_halfpanel_kit";
		DZE_refundArray[] = {{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	};
};

class DZE_MetalFence_thirdpanel: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage3.p3d";
	displayName = $STR_BLD_name_MetalFence_thirdpanel;	
	upgradeBuilding[] = {"DZE_MetalFence_1",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	armor = 2500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_thirdpanel_kit";
		DZE_refundArray[] = {{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	};
};

class DZE_MetalFence_1: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1.p3d";
	displayName = $STR_BLD_name_MetalFence_1;	
	upgradeBuilding[] = {"DZE_MetalFence_2",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",4},{"ItemScrews",1},{"ItemRSJ",2}}};
	armor = 3000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_1_kit";
		DZE_refundArray[] = {{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	};
};

class DZE_MetalFence_2: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence2.p3d";
	displayName = $STR_BLD_name_MetalFence_2;	
	upgradeBuilding[] = {"DZE_MetalFence_3",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",4},{"ItemScrews",1},{"ItemRSJ",2}}};
	armor = 3500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_2_kit";
		DZE_refundArray[] = {{{"ItemMetalSheet",4},{"ItemScrews",1},{"ItemRSJ",2}}};
	};
};

class DZE_MetalFence_3: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence3.p3d";
	displayName = $STR_BLD_name_MetalFence_3;	
	upgradeBuilding[] = {"DZE_MetalFence_4",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemRSJ",4}}};
	armor = 4000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_3_kit";
		DZE_refundArray[] = {{{"ItemMetalSheet",4},{"ItemScrews",1},{"ItemRSJ",2}}};
	};
};

class DZE_MetalFence_4: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence4.p3d";
	displayName = $STR_BLD_name_MetalFence_4;	
	upgradeBuilding[] = {"DZE_MetalFence_5",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemRSJ",2}}};
	armor = 4500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_4_kit";
		DZE_refundArray[] = {{{"ItemScrews",1},{"ItemRSJ",4}}};
	};
};

class DZE_MetalFence_5: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence5.p3d";
	displayName = $STR_BLD_name_MetalFence_5;	
	upgradeBuilding[] = {"DZE_MetalFence_6",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemPole",4},{"equip_metal_sheet",4}}};
	armor = 5000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_5_kit";
		DZE_refundArray[] = {{{"ItemScrews",1},{"ItemRSJ",2}}};
	};
};

class DZE_MetalFence_6: DZE_Fence_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence6.p3d";
	displayName = $STR_BLD_name_MetalFence_6;	
	upgradeBuilding[] = {"DZE_MetalFence_7",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemPole",6},{"PartGeneric",2}}};
	armor = 5500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_6_kit";
		DZE_refundArray[] = {{{"ItemScrews",1},{"ItemPole",4},{"equip_metal_sheet",4}}};
	};
};

class DZE_MetalFence_7: DZE_Fence_Base {
	scope = 2;
	armor = 5500;
	model = "z\addons\dayz_buildings\models\metal_fence7.p3d";
	displayName = $STR_BLD_name_MetalFence_7;		
	ladders[]={{"ladderstart","ladderend"}};
	//GhostPreview = "DZE_MetalFence_7_Preview";
	upgradeBuilding[] = {};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metalfence_7_kit";
		DZE_refundArray[] = {{{"ItemScrews",1},{"ItemPole",6},{"PartGeneric",2}}};
	};
}; 
