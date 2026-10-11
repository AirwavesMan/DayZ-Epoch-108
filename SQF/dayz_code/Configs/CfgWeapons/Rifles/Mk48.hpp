class Mk_48;
class DZE_Wep_Mk48_CCO : Mk_48 {
	displayName = "$STR_DZ_WPN_MK48_CCO_NAME";
	model = "z\addons\dayz_communityweapons\mk48\mk48_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_cco_camo_ca.paa";

	type = 1;

	magazines[] = {100Rnd_762x51_M240};

	distanceZoomMin = 300;
	distanceZoomMax = 300;

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Mk48'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mk48 : DZE_Wep_Mk48_CCO {
	displayName = "$STR_DZ_WPN_MK48_NAME";
	model = "z\addons\dayz_communityweapons\mk48\mk48.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_camo_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	//iron sight zeroing
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Mk48_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_Mk48_Holo";
	};

	class ItemActions {};
};

class DZE_Wep_Mk48_Holo : DZE_Wep_Mk48_CCO {
	displayName = "$STR_DZ_WPN_MK48_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\mk48\mk48_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_holo_camo_ca.paa";

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_Mk48'] call player_removeAttachment";
		};
	};
};

class Mk_48_DES_EP1;
class DZE_Wep_Mk48_DES_CCO: Mk_48_DES_EP1 {
	displayName = "$STR_DZ_WPN_MK48_CCO_NAME";
	weaponInfoType = "RscWeaponZeroing";
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	type = 1;
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	irDistance = 150;
};