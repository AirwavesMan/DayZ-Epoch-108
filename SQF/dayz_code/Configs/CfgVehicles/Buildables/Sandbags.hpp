class DZE_SandBag_Base: DZE_DefenseObject_Base {
	mapSize = 2;
	armor = 2500;
	DZE_offset[] = {0,2.5,0};
	DZE_buildingSteps = 3;
};

class DZE_Sandbag: DZE_SandBag_Base {
	simulation = "house";
	scope = 2;
	model = "\ca\misc2\BagFenceLong.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
	displayName = $STR_BUILT_SANDBAG;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Sandbag";
		DZE_refundArray[] = {};
	};
};

class DZE_BagFenceRound: DZE_SandBag_Base {
	simulation = "house";
	scope = 2;
	model = "\ca\misc2\BagFenceRound.p3d";
	icon = "\Ca\misc3\data\Icons\icon_bagFenceRound_ca.paa";
	displayName = $STR_EQUIP_NAME_SANDBAGS_ROUND;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_BagFenceRound";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_HBarrier1: DZE_DefenseObject_Base {
	mapSize = 2;
	destrType = "DestructBuilding";
	simulation = "house";
	scope = 2;
	model = "\ca\misc2\HBarrier1.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier1_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	displayName = $STR_EQUIP_NAME_21_HBARRIER;
	//GhostPreview = "Land_HBarrier1Preview";
	armor = 7500;
	DZE_offset[] = {0,2,0};
	DZE_buildingSteps = 4;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_SandbagLarge";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Sandbag",3},{"DZE_Item_Kit_Wire",1},{"DZE_Item_Kit_TankTrap",1}}};
	};
};

class DZE_Land_HBarrier3: DZE_DefenseObject_Base {
	destrType = "DestructBuilding";
	simulation = "house";
	scope = 2;
	model = "\ca\misc2\HBarrier3.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier3_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 3.5;
	displayName = $STR_EQUIP_NAME_21_3XHBARRIER;
	//GhostPreview = "Land_HBarrier3ePreview";
	armor = 9000;
	DZE_offset[] = {0,2.5,0};
	DZE_buildingSteps = 8;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_SandbagExLarge";
		DZE_refundArray[] = {{{"DZE_Item_Kit_SandbagLarge",3}}};
	};
};

class DZE_Land_HBarrier5: DZE_DefenseObject_Base {
	destrType = "DestructBuilding";
	simulation = "house";
	scope = 2;
	model = "\ca\misc2\HBarrier5.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	displayName = $STR_EQUIP_NAME_21_5XHBARRIER;
	//GhostPreview = "Land_HBarrier5Preview";
	armor = 10000;
	DZE_offset[] = {0,4,0};
	DZE_buildingSteps = 8;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_SandbagExLarge5x";
		DZE_refundArray[] = {{{"DZE_Item_Kit_SandbagExLarge",1},{"DZE_Item_Kit_SandbagLarge",2}}};
	};
};

class DZE_Land_HBarrier5Curved: DZE_DefenseObject_Base {
	simulation = "house";
	scope = 2;
	model = "\ca\misc2\HBarrier5_round15.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	displayName = $STR_EQUIP_NAME_HBARRIER5CURVED;
	destrType = "DestructBuilding";
	armor = 10000;
	DZE_offset[] = {0,4,0};
	DZE_buildingSteps = 8;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_SandbagExLarge5xCurved";
		DZE_refundArray[] = {{{"DZE_Item_Kit_SandbagExLarge",1},{"DZE_Item_Kit_SandbagLarge",2}}};
	};
};

class DZE_Land_WarfareBarrier5x: DZE_DefenseObject_Base {
	simulation = "house";
	scope = 2;
	model = "\ca\misc3\WF\WF_hesco_5x.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	displayName = $STR_EQUIP_NAME_WBARRIER5;
	destrType = "DestructBuilding";
	armor = 10000;
	DZE_offset[] = {0,5,0};
	DZE_buildingSteps = 8;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WarfareBarrier5x";
		DZE_refundArray[] = {{{"DZE_Item_Kit_SandbagLarge",5}}};
	};
};

class DZE_Land_WarfareBarrier10x: DZE_DefenseObject_Base {
	simulation = "house";
	scope = 2;
	model = "\ca\misc3\WF\WF_hesco_10x.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	displayName = $STR_EQUIP_NAME_WBARRIER10;
	destrType = "DestructBuilding";
	armor = 15000;
	DZE_offset[] = {0,9,0};
	DZE_buildingSteps = 8;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WarfareBarrier10x";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WarfareBarrier5x",2}}};
	};
};

class DZE_Land_WarfareBarrier10xTall: DZE_DefenseObject_Base {
	simulation = "house";
	scope = 2;
	model = "\ca\misc3\WF\WF_hesco_big_10x.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	displayName = $STR_EQUIP_NAME_WBARRIER10TALL;
	destrType = "DestructBuilding";
	armor = 20000;
	DZE_offset[] = {0,9,0};
	DZE_buildingSteps = 8;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WarfareBarrier10xTall";
		DZE_refundArray[] = {{{"DZE_Item_Kit_WarfareBarrier10x",3}}};
	};
};

class DZE_SandNest: DZE_DefenseObject_Base {
	expansion = 1;
	simulation = "house";
	scope = 2;
	model = "\ca\Misc_E\fortified_nest_small_ep1";
	icon = "\Ca\misc3\data\Icons\icon_fortNestSmall_ca.paa";
	mapSize = 5;
	displayName = $STR_EQUIP_NAME_21_NEST;
	//GhostPreview = "Land_fortified_nest_smallPreview";
	nameSound = "obj_house";
	destrType = "DestructBuilding";
	armor = 7500;
	DZE_offset[] = {0,4.5,-0.1};
	DZE_buildingSteps = 5;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Sandbag_Nest";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Sandbag",4},{"PartWoodPlywood",2},{"PartWoodLumber",4}}};
	};
};

class DZE_SandNestLarge: DZE_DefenseObject_Base {
	simulation = "house";
	scope = 2;
	model = "\ca\misc3\fortified_nest_big.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortnestbig_ca.paa";
	mapSize = 6;
	displayName = $STR_EQUIP_NAME_LARGENEST;
	expansion = 1;
	nameSound = "obj_house";
	destrType = "DestructBuilding";
	armor = 12500;
	DZE_offset[] = {0,8,0};
	DZE_buildingSteps = 7;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Sandbag_Nest_Large";
		DZE_refundArray[] = {{{"DZE_Item_Kit_SandBagHeavyCorner",4},{"DZE_Item_Kit_Sandbag_Nest",4}}};
	};
};

class DZE_HeavyBagFence: DZE_SandBag_Base {
	scope = 2;
	model = "\ca\misc3\fort_bagfence_long.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortbagfencelong_ca.paa";
	mapSize = 3;
	displayName = $STR_EQUIP_NAME_HBF;
	// "Heavy Bag Fence"
	simulation = "house";
	destrType = "DestructBuilding";
	armor = 5000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_SandbagHeavy";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Sandbag",2},{"PartWoodPile",1}}};
	};
};

class DZE_HeavyBagFenceCorner: DZE_SandBag_Base {
	scope = 2;
	model = "\ca\misc3\fort_bagfence_corner.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortbagfencecorner_ca.paa";
	mapSize = 4;
	displayName = $STR_EQUIP_NAME_HBF_CORNER;
	// "Heavy Bag Fence (Corner)"
	simulation = "house";
	destrType = "DestructBuilding";
	armor = 6250;
	DZE_offset[] = {0,3,0};
	DZE_buildingSteps = 4;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_SandBagHeavyCorner";
		DZE_refundArray[] = {{{"DZE_Item_Kit_SandbagHeavy",2}}};
	};
};

class DZE_HeavyBagFenceRound: DZE_SandBag_Base {
	scope = 2;
	model = "\ca\misc3\fort_bagfence_round.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortbagfenceround_ca.paa";
	mapSize = 6;
	displayName = $STR_EQUIP_NAME_HBF_ROUND;
	// "Heavy Bag Fence (Round)"
	simulation = "house";
	destrType = "DestructBuilding";
	armor = 7500;
	DZE_offset[] = {0,4,0};
	DZE_buildingSteps = 5;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_SandbagHeavyRound";
		DZE_refundArray[] = {{{"DZE_Item_Kit_SandbagHeavy",3}}};
	};
};
