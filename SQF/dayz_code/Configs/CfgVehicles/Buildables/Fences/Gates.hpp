class DZE_WoodGate: DZE_Modular_Base {
	scope = 2;
	destrType = "DestructTree";
	DZE_offset[] = {0,1.5,0};
	model = "\ca\structures\Wall\Gate_wood2_5";
	displayName = "Wood Panel";
	DZE_doorOpenText = "$STR_DN_OUT_O_DOOR";
	DZE_doorCloseText = "$STR_DN_OUT_C_DOOR";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCKGATE";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCKGATE";

	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 1;
			initPhase = 0;
		};
	};
};

class DZE_MetalGate: DZE_Building_Base {
	scope = 2;
	model = "\ca\structures\Wall\Wall_Gate_Ind1_L";
	armor = 400;
	destrType = "DestructTree";
	DZE_offset[] = {2,3,0};
	displayName = $STR_EPOCH_RUSTYGATE;
	DZE_doorOpenText = "$STR_DN_OUT_O_DOOR";
	DZE_doorCloseText = "$STR_DN_OUT_C_DOOR";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCKGATE";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCKGATE";
	actionBegin1 = "OpenDoors";
	actionEnd1 = "OpenDoors";

	class AnimationSources {
		class DoorL {
			source = "User";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "rusty_gate_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_WoodenGate_foundation: DZE_Modular_Base {
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_Foundation;
	model = "z\addons\dayz_buildings\models\gates\gate0_dzam.p3d";
	armor = 1000;
	mapSize = 8;
	DZE_offset[] = {0,4,0};
	DZE_upgradeBuilding[] = {"DZE_WoodenGate_1",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",1},{"ItemComboLock",1}}};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "woodfence_gate_foundation_kit";
		DZE_refundArray[] = {{{"ItemLog",6}}};
	};
};

class DZE_WoodenGate_1: DZE_Building_Base {
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1;
	model = "z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	DZE_offset[] = {0,4,0};
	armor = 2000;	
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_GATE";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_GATE";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCKGATE";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCKGATE";
	DZE_upgradeBuilding[] = {"DZE_WoodenGate_2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};

		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};


	DZE_lockable = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "woodfence_gate_1_kit";
		DZE_refundArray[] = {{{"woodfence_gate_foundation_kit",1},{"ItemPlank",8},{"equip_nails",1},{"ItemComboLock",1}}};
	};
};

class DZE_WoodenGate_2: DZE_WoodenGate_1 {
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_2;
	model = "z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	DZE_offset[] = {0,4,0};
	armor = 2500;
	DZE_upgradeBuilding[] = {"DZE_WoodenGate_3",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};

		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};

	
	DZE_lockable = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "woodfence_gate_2_kit";
		DZE_refundArray[] = {{{"woodfence_gate_1_kit",1},{"ItemPlank",10},{"equip_nails",1}}};
	};
};

class DZE_WoodenGate_3: DZE_WoodenGate_2 {
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_3;
	model = "z\addons\dayz_buildings\models\gates\gate3_dzam.p3d";
	armor = 3000;
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	DZE_offset[] = {0,4,0};
	DZE_upgradeBuilding[] = {"DZE_WoodenGate_4",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};

		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};

	
	DZE_lockable = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "woodfence_gate_3_kit";
		DZE_refundArray[] = {{{"woodfence_gate_2_kit",1},{"ItemPlank",10},{"equip_nails",1}}};
	};
};

class DZE_WoodenGate_4: DZE_WoodenGate_3 {
	armor = 3500;
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_4;
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	DZE_offset[] = {0,4,0};
	model = "z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};

		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};

	
	DZE_lockable = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "woodfence_gate_4_kit";
		DZE_refundArray[] = {{{"woodfence_gate_3_kit",1},{"ItemPlank",10},{"equip_nails",1}}};
	};
};
