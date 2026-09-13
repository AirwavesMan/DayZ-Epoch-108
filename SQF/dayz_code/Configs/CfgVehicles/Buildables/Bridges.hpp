class DZE_Metal_Drawbridge: DZE_CinderWallDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\draw_bridge\wood_draw_bridge.p3d";
	displayName = $STR_EPOCH_METALDRAWBRIDGE;
	DZE_doorOpenText = "$STR_EPOCH_ACTION_RAISE_BRIDGE";
	DZE_doorCloseText = "$STR_EPOCH_ACTION_LOWER_BRIDGE";
	DZE_doorLockText = "$STR_EPOCH_ACTION_LOCK_BRIDGE";
	DZE_doorUnlockText = "$STR_EPOCH_ACTION_UNLOCK_BRIDGE";
	//GhostPreview = "DZE_Drawbridge_Preview";
	DZE_offset[] = {0,2.5,0};
	DZE_allowRotation = 0;
	DZE_upgradeBuilding[] = {"DZE_Metal_DrawbridgeLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_inner {
			source = "user";
			animPeriod = 4;
			initPhase = 1;
		};

		class Open_outer {
			source = "user";
			animPeriod = 4;
			initPhase = 1;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "metal_drawbridge_kit";
		DZE_refundArray[] = {{{"metal_floor_kit",2},{"ItemRSJ",6}}};
	};
};

class DZE_Metal_DrawbridgeLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\draw_bridge\wood_draw_bridge_locked.p3d";
	displayName = $STR_EPOCH_METALDRAWBRIDGELOCKED;
	DZE_doorOpenText = "$STR_EPOCH_ACTION_RAISE_BRIDGE";
	DZE_doorCloseText = "$STR_EPOCH_ACTION_LOWER_BRIDGE";
	DZE_doorLockText = "$STR_EPOCH_ACTION_LOCK_BRIDGE";
	DZE_doorUnlockText = "$STR_EPOCH_ACTION_UNLOCK_BRIDGE";
	//GhostPreview = "DZE_Drawbridge_Preview";
	DZE_offset[] = {0,2.5,0};
	DZE_allowRotation = 0;
	downgradeBuilding[] = {"DZE_Metal_Drawbridge",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_inner {
			source = "user";
			animPeriod = 4;
			initPhase = 1;
		};

		class Open_outer {
			source = "user";
			animPeriod = 4;
			initPhase = 1;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "metal_drawbridge_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_SimpleFootbridge: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0.05};
	useModelCenter = 1;
	model = "mbg_killhouses\m\MBG_Woodplanks.p3d";
	armor = 200;
	DZE_preventUnderground = 0;
	displayName = $STR_EQUIP_NAME_SIMPLE_FOOTBRIDGE;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "simple_footbridge_kit";
		DZE_refundArray[] = {{{"ItemPlank",3}}};
	};
};

class DZE_WoodenFootbridge: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,3.5,0};
	useModelCenter = 1;
	model = "ca\misc_acr\scaffoldingsmall\misc_crossing0st.p3d";
	armor = 200;
	DZE_preventUnderground = 0;
	displayName = $STR_EQUIP_NAME_WOODEN_FOOTBRIDGE;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wooden_footbridge_kit";
		DZE_refundArray[] = {{{"ItemPlank",3},{"PartWoodLumber",2},{"equip_nails",1}}};
	};
};
