class DZE_Fence_corrugated: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CORRUGATEDFENCE";
	model = "\ca\structures\wall\Wall_Tin_4";
	armor = 600;
	DZE_offset[] = {0,3,-0.1};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Corrugated";
		DZE_refundArray[] = {};
	};
};

class DZE_MetalFence_1_foundation: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_1_foundation";
	model = "z\addons\dayz_buildings\models\metal_fence1_foundation.p3d";
	DZE_offset[] = {0,4,0};
	DZE_allowRotation = 0;
	DZE_upgradeBuilding[] = {"DZE_MetalFence_1_frame",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Wood_Plank",4},{"DZE_Item_Metal_Steel_Beam",1}}};
	armor = 1000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_Foundation";
		DZE_refundArray[] = {{{"DZE_Item_Conc_Stone",8},{"DZE_Item_Conc_MortarBucket",1},{"DZE_Item_Metal_Steel_Beam",1}}};
	};
};

class DZE_MetalFence_1_frame: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_1_frame";
	model = "z\addons\dayz_buildings\models\metal_fence1_stage1.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_halfpanel",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Corrugated_Sheet",3},{"DZE_Item_Metal_Screws",1}}};
	armor = 1500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_Frame";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Plank",4},{"DZE_Item_Metal_Steel_Beam",1}}};
	};
};

class DZE_MetalFence_halfpanel: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_halfpanel";
	model = "z\addons\dayz_buildings\models\metal_fence1_stage2.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_thirdpanel",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Corrugated_Sheet",3},{"DZE_Item_Metal_Screws",1}}};
	armor = 2000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_Halfpanel";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Corrugated_Sheet",3},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_MetalFence_thirdpanel: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_thirdpanel";
	model = "z\addons\dayz_buildings\models\metal_fence1_stage3.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_1",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Corrugated_Sheet",3},{"DZE_Item_Metal_Screws",1}}};
	armor = 2500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_Thirdpanel";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Corrugated_Sheet",3},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_MetalFence_1: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_1";
	model = "z\addons\dayz_buildings\models\metal_fence1.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_2",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Corrugated_Sheet",4},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Steel_Beam",2}}};
	armor = 3000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_1";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Corrugated_Sheet",3},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_MetalFence_2: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_2";
	model = "z\addons\dayz_buildings\models\metal_fence2.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_3",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Corrugated_Sheet",4},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Steel_Beam",2}}};
	armor = 3500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_2";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Corrugated_Sheet",4},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Steel_Beam",2}}};
	};
};

class DZE_MetalFence_3: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_3";
	model = "z\addons\dayz_buildings\models\metal_fence3.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_4",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Steel_Beam",4}}};
	armor = 4000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_3";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Corrugated_Sheet",4},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Steel_Beam",2}}};
	};
};

class DZE_MetalFence_4: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_4";
	model = "z\addons\dayz_buildings\models\metal_fence4.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_5",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Steel_Beam",2}}};
	armor = 4500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_4";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Steel_Beam",4}}};
	};
};

class DZE_MetalFence_5: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_5";
	model = "z\addons\dayz_buildings\models\metal_fence5.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_6",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Pole",4},{"DZE_Item_Metal_Sheet",4}}};
	armor = 5000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_5";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Steel_Beam",2}}};
	};
};

class DZE_MetalFence_6: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_6";
	model = "z\addons\dayz_buildings\models\metal_fence6.p3d";
	DZE_upgradeBuilding[] = {"DZE_MetalFence_7",{"DZE_Tool_Toolbox","DZE_Tool_Sledge"},{{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Pole",6},{"DZE_Item_Metal_Parts",2}}};
	armor = 5500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_6";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Pole",4},{"DZE_Item_Metal_Sheet",4}}};
	};
};

class DZE_MetalFence_7: DZE_Fence_Base {
	scope = 2;
	displayName = "$STR_BLD_name_MetalFence_7";
	model = "z\addons\dayz_buildings\models\metal_fence7.p3d";
	armor = 5500;
	ladders[]={{"ladderstart","ladderend"}};
	//GhostPreview = "DZE_MetalFence_7_Preview";
	DZE_upgradeBuilding[] = {};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metalfence_7";
		DZE_refundArray[] = {{{"DZE_Item_Metal_Screws",1},{"DZE_Item_Metal_Pole",6},{"DZE_Item_Metal_Parts",2}}};
	};
};
