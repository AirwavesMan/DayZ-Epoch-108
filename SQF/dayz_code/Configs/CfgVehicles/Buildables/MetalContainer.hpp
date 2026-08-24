class DZE_MetalContainer_Base: DZE_Building_Base {
	destrType = "DestructBuilding";
	DZE_offset[] = {0,5,0};
};

class DZE_MetalContainer1A: DZE_MetalContainer_Base {
	scope = 2;
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1A.p3d"; // red
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1A;
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	DZE_buildingSteps = 3;
};

class DZE_MetalContainer1B: DZE_MetalContainer_Base {
	scope = 2;
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1B.p3d"; // green
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1B;
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	DZE_buildingSteps = 3;
};

class DZE_MetalContainer1G: DZE_MetalContainer_Base {
	scope = 2;
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1G.p3d"; // white
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1G;
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	DZE_buildingSteps = 3;
};

class DZE_MetalContainer2D: DZE_MetalContainer_Base {
	scope = 2;
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo2D.p3d"; // 2x red
	armor = 40000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_2D;
	maintainBuilding[] = {{"equip_metal_sheet",4}};
	DZE_buildingSteps = 5;
};
