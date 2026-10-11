class DZE_MetalContainer_Base: DZE_Building_Base {
	destrType = "DestructBuilding";
	DZE_offset[] = {0,5,0};
};

class DZE_MetalContainer1A: DZE_MetalContainer_Base {
	scope = 2;
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1A.p3d"; // red
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1A;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metal_Container_1a";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Metal_Floor_Quarter",2},{"DZE_Item_Kit_Metal_Floor_Half",4},{"DZE_Item_Kit_TankTrap",2}}};
	};
};

class DZE_MetalContainer1B: DZE_MetalContainer_Base {
	scope = 2;
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1B.p3d"; // green
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1B;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metal_Container_1b";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Metal_Floor_Quarter",2},{"DZE_Item_Kit_Metal_Floor_Half",4},{"DZE_Item_Kit_TankTrap",2}}};
	};
};

class DZE_MetalContainer1G: DZE_MetalContainer_Base {
	scope = 2;
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1G.p3d"; // white
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1G;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metal_Container_1g";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Metal_Floor_Quarter",2},{"DZE_Item_Kit_Metal_Floor_Half",4},{"DZE_Item_Kit_TankTrap",2}}};
	};
};

class DZE_MetalContainer2D: DZE_MetalContainer_Base {
	scope = 2;
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo2D.p3d"; // 2x red
	armor = 40000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_2D;
	DZE_buildingSteps = 5;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metal_Container_2d";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Metal_Container_1a",2}}};
	};
};
