class DZE_ModularDoor_Base: DZE_Modular_Base {
	vehicleClass = "DayZ Epoch 1071 Modular Door";
	DZE_doorOpenText = "$STR_DN_OUT_O_DOOR";
	DZE_doorCloseText = "$STR_DN_OUT_C_DOOR";
	DZE_doorLockText = "$STR_EPOCH_DOORS_LOCK";
	DZE_doorUnlockText = "$STR_EPOCH_DOORS_UNLOCK";
};

class DZE_Land_WoodDoor_Base: DZE_ModularDoor_Base {
	displayName = "Wood Door Base";
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";
	nameSound = "";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	/* path to the object */
	/* entry in Stringtable.xml */
	mapSize = 8;
	/* Size of the icon */
	/* Path to the picture shown in the editor. */
	accuracy = 1000;
	armor = 2500;
	/* "Lifepoints", if you like to call it that way.*/
	DZE_offset[] = {0,1.5,0};

};

class DZE_Land_WoodDoorLocked_Base: DZE_ModularDoor_Base {
	displayName = "Wood Door Base";
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";
	nameSound = "";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	mapSize = 8;
	accuracy = 1000;
	armor = 2500;
	DZE_offset[] = {0,1.5,0};

	DZE_lockable = 3;
};

class DZE_CinderWallDoor_Base: DZE_ModularDoor_Base {
	displayName = "Block Garage Door Base";
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";
	nameSound = "";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	mapSize = 8;
	accuracy = 1000;
	armor = 4000;
	DZE_offset[] = {0,1.5,0};

};

class DZE_CinderWallDoorLocked_Base: DZE_ModularDoor_Base {
	displayName = "Block Garage Door Base";
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";
	nameSound = "";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	mapSize = 8;
	accuracy = 1000;
	armor = 4000;
	DZE_offset[] = {0,1.5,0};
	DZE_lockable = 3;
};

class DZE_Land_WoodDoor: DZE_Land_WoodDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHDOOR";
	//GhostPreview = "DZE_WoodDoor_Preview";
	DZE_upgradeBuilding[] = {"DZE_Land_WoodDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWithDoor";
		DZE_refundArray[] = {{{"ItemWoodWallDoor",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	};
};

class DZE_Land_WoodDoorLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WALLWITHDOORLOCKED";
	model = "\z\addons\dayz_epoch\models\small_wall_door_locked_anim.p3d";
	//GhostPreview = "DZE_WoodDoor_Preview";
	downgradeBuilding[] = {"DZE_Land_WoodDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_hinge {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWithDoorLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_LargeWoodDoor: DZE_Land_WoodDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHDOOR";
	model = "\z\addons\dayz_epoch\models\large_wall_door_anim.p3d";
	//GhostPreview = "DZE_LargeWoodDoor_Preview";
	DZE_upgradeBuilding[] = {"DZE_Land_LargeWoodDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWithDoorLg";
		DZE_refundArray[] = {{{"ItemWoodWallDoorLg",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	};
};

class DZE_Land_LargeWoodDoorLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWALLWITHDOORLOCKED";
	model = "\z\addons\dayz_epoch\models\large_wall_door_locked_anim.p3d";
	//GhostPreview = "DZE_LargeWoodDoor_Preview";
	downgradeBuilding[] = {"DZE_Land_LargeWoodDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_hinge {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWithDoorLgLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_GarageWoodDoor: DZE_Land_WoodDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGARAGEDOOR";
	model = "\z\addons\dayz_epoch\models\Garage_door_anim.p3d";
	//GhostPreview = "DZE_GarageWoodDoor_Preview";
	DZE_upgradeBuilding[] = {"DZE_Land_GarageWoodDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallGarageDoor";
		DZE_refundArray[] = {{{"ItemWoodWallLg",1},{"PartWoodLumber",2}}};
	};
};

class DZE_Land_GarageWoodDoorLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGARAGEDOORLOCKED";
	model = "\z\addons\dayz_epoch\models\Garage_door_locked_anim.p3d";
	//GhostPreview = "DZE_GarageWoodDoor_Preview";
	downgradeBuilding[] = {"DZE_Land_GarageWoodDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_hinge {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallGarageDoorLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_WoodGate: DZE_Land_WoodDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGATE";
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage.p3d";
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_GATE";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_GATE";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCKGATE";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCKGATE";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	armor = 3200;
	//GhostPreview = "DZE_WoodGate_Preview";
	DZE_upgradeBuilding[] = {"DZE_Land_WoodGateLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodGate";
		DZE_refundArray[] = {{{"ItemWoodGateFrame",1},{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}}};
	};
};

class DZE_Land_WoodGateLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODGATELOCKED";
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_locked.p3d";
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_GATE";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_GATE";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCKGATE";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCKGATE";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	armor = 3200;
	//GhostPreview = "DZE_WoodGate_Preview";
	downgradeBuilding[] = {"DZE_Land_WoodGate",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodGateLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_WoodOpenTopGarageDoor: DZE_Land_WoodDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODOPENTOPGARAGEDOOR";
	model = "\z\addons\dayz_epoch_v\base_building\wood\garage_notop\wood_garage_notop.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	//GhostPreview = "DZE_Wood_GarageOpenTop_Preview";
	DZE_upgradeBuilding[] = {"DZE_Land_WoodOpenTopGarageLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class doorl {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodOpenTopGarageDoor";
		DZE_refundArray[] = {{{"ItemWoodWallLg",1},{"PartWoodLumber",2}}};
	};
};

class DZE_Land_WoodOpenTopGarageLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODOPENTOPGARAGEDOORLOCKED";
	model = "\z\addons\dayz_epoch_v\base_building\wood\garage_notop\locked_wood_garage_notop.p3d";
	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	//GhostPreview = "DZE_Wood_GarageOpenTop_Preview";
	downgradeBuilding[] = {"DZE_Land_WoodOpenTopGarageDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class doorl {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodOpenTopGarageDoorLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderWallDoorLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKGARAGEDOORLOCKED";
	model = "\z\addons\dayz_epoch\models\steel_garage_locked.p3d";
	//GhostPreview = "DZE_CinderWallDoorway_Preview";
	downgradeBuilding[] = {"DZE_CinderWallDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderWallDoor: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKGARAGEDOOR";
	//GhostPreview = "DZE_CinderWallDoorway_Preview";
	DZE_upgradeBuilding[] = {"DZE_CinderWallDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_kit";
		DZE_refundArray[] = {{{"cinder_garage_frame_kit",1},{"ItemTankTrap",3},{"ItemPole",3}}};
	};
};

class DZE_CinderWallDoorSmallLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOORLOCKED";
	model = "\z\addons\dayz_epoch\models\Steel_door_locked.p3d";
	//GhostPreview = "DZE_CinderWallSmallDoorway_Preview";
	downgradeBuilding[] = {"DZE_CinderWallDoorSmall",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderWallDoorSmall: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOOR";
	model = "\z\addons\dayz_epoch\models\Steel_door.p3d";
	//GhostPreview = "DZE_CinderWallSmallDoorway_Preview";
	DZE_upgradeBuilding[] = {"DZE_CinderWallDoorSmallLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_kit";
		DZE_refundArray[] = {{{"cinder_door_frame_kit",1},{"ItemTankTrap",1},{"ItemPole",1}}};
	};
};

class DZE_CinderGate: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERGATE";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_door.p3d";
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_GATE";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_GATE";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCKGATE";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCKGATE";
	armor = 4600;
	//GhostPreview = "DZE_CinderGate_Preview";
	DZE_upgradeBuilding[] = {"DZE_CinderGateLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_gate_kit";
		DZE_refundArray[] = {{{"cinder_gate_frame_kit",1},{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}}};
	};
};

class DZE_CinderGateLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERGATELOCKED";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_locked.p3d";
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_GATE";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_GATE";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCKGATE";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCKGATE";
	armor = 4600;
	//GhostPreview = "DZE_CinderGate_Preview";
	downgradeBuilding[] = {"DZE_CinderGate",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_gate_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderGarageOpenTop: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDEROPENTOPGARAGEDOOR";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\cindergarage_notop.p3d";
	//GhostPreview = "DZE_CinderGarageOpenTop_Preview";
	DZE_upgradeBuilding[] = {"DZE_CinderGarageOpenTopLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class doorl {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_top_open_kit";
		DZE_refundArray[] = {{{"cinder_garage_top_open_frame_kit",1},{"ItemTankTrap",3},{"ItemPole",3}}};
	};
};

class DZE_CinderGarageOpenTopLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDEROPENTOPGARAGEDOORLOCKED";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\locked_cindergarage_notop.p3d";
	//GhostPreview = "DZE_CinderGarageOpenTop_Preview";
	downgradeBuilding[] = {"DZE_CinderGarageOpenTop",{{"ItemComboLock",1}}};

	class AnimationSources {
		class doorl {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_top_open_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderDoorHatch: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOOR_HATCH";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_door_window\cinderdoor_hatch.p3d";
	//GhostPreview = "DZE_CinderDoorHatch_Preview";
	DZE_upgradeBuilding[] = {"DZE_CinderDoorHatchLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_hatch_kit";
		DZE_refundArray[] = {{{"CinderBlocks",4},{"MortarBucket",1},{"ItemTankTrap",2},{"ItemPole",1}}};
	};
};

class DZE_CinderDoorHatchLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOORLOCKED_HATCH";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_door_window\cinder_door_hatch_locked.p3d";
	//GhostPreview = "DZE_CinderDoorHatch_Preview";
	downgradeBuilding[] = {"DZE_CinderDoorHatch",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_hatch_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_Door: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_DOOR";
	model = "\z\addons\dayz_epoch\models\Steel_door_single.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	armor = 1200;
	//GhostPreview = "DZE_DoorFrame_Preview";
	DZE_upgradeBuilding[] = {"DZE_DoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};


	class RemoveObject: RemoveObject {
		DZE_refundKit = "door_kit";
		DZE_refundArray[] = {{{"door_frame_kit",1},{"ItemTankTrap",1},{"ItemPole",1}}};
	};
};

class DZE_DoorLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_DOORLOCKED";
	model = "\z\addons\dayz_epoch\models\Steel_door_locked_single.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	armor = 1200;
	//GhostPreview = "DZE_DoorFrame_Preview";
	downgradeBuilding[] = {"DZE_Door",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};


	class RemoveObject: RemoveObject {
		DZE_refundKit = "door_locked_kit";
		DZE_refundArray[] = {};
	};
};

/*
	Vanilla DayZ buildables are defined in \dayz_buildings\configs\
	Only included here to overwrite vanilla ItemPadlock with Epoch ItemComboLock
*/
class WoodenGate_Base;
class WoodenGate_1: WoodenGate_Base {
	class Upgrade {
		create = "WoodenGate_2";
		//to next stage
		requiredTools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		requiredParts[] = {"ItemLog","ItemComboLock"};
	};

	class Disassembly {
		requiredTools[] = {"DZE_Tool_Toolbox"};
	};
};
