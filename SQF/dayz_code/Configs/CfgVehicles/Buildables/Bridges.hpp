class DZE_Metal_Drawbridge: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALDRAWBRIDGE";
	model = "\z\addons\dayz_epoch_v\base_building\wood\draw_bridge\wood_draw_bridge.p3d";
	DZE_doorOpenText = "$STR_EPOCH_ACTION_RAISE_BRIDGE";
	DZE_doorCloseText = "$STR_EPOCH_ACTION_LOWER_BRIDGE";
	DZE_doorLockText = "$STR_EPOCH_ACTION_LOCK_BRIDGE";
	DZE_doorUnlockText = "$STR_EPOCH_ACTION_UNLOCK_BRIDGE";
	//GhostPreview = "DZE_Drawbridge_Preview";
	DZE_offset[] = {0,2.5,0};
	DZE_allowRotation = 0;
	DZE_upgradeBuilding[] = {"DZE_Metal_DrawbridgeLocked",{},{{"DZE_Item_Locks_ComboLock",1}}};

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
		DZE_refundKit = "DZE_Item_Kit_Metal_Drawbridge";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Metal_Floor",2},{"DZE_Item_Metal_Steel_Beam",6}}};
	};
};

class DZE_Metal_DrawbridgeLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALDRAWBRIDGELOCKED";
	model = "\z\addons\dayz_epoch_v\base_building\wood\draw_bridge\wood_draw_bridge_locked.p3d";
	DZE_doorOpenText = "$STR_EPOCH_ACTION_RAISE_BRIDGE";
	DZE_doorCloseText = "$STR_EPOCH_ACTION_LOWER_BRIDGE";
	DZE_doorLockText = "$STR_EPOCH_ACTION_LOCK_BRIDGE";
	DZE_doorUnlockText = "$STR_EPOCH_ACTION_UNLOCK_BRIDGE";
	//GhostPreview = "DZE_Drawbridge_Preview";
	DZE_offset[] = {0,2.5,0};
	DZE_allowRotation = 0;
	downgradeBuilding[] = {"DZE_Metal_Drawbridge",{{"DZE_Item_Locks_ComboLock",1}}};

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
		DZE_refundKit = "DZE_Item_Kit_Metal_Drawbridge_Kit_Locked";
		DZE_refundArray[] = {};
	};
};

class DZE_SimpleFootbridge: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SIMPLE_FOOTBRIDGE";
	model = "mbg_killhouses\m\MBG_Woodplanks.p3d";
	DZE_offset[] = {0,4,0.05};
	useModelCenter = 1;
	armor = 200;
	DZE_preventUnderground = 0;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Simple_Footbridge";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Plank",3}}};
	};
};

class DZE_WoodenFootbridge: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WOODEN_FOOTBRIDGE";
	model = "ca\misc_acr\scaffoldingsmall\misc_crossing0st.p3d";
	DZE_offset[] = {0,3.5,0};
	useModelCenter = 1;
	armor = 200;
	DZE_preventUnderground = 0;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Wooden_Footbridge";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Plank",3},{"DZE_Item_Wood_Lumber",2},{"DZE_Item_Metal_Nails",1}}};
	};
};
