class BAF_L110A1_Aim;
class DZE_Wep_L110A1_CCO : BAF_L110A1_Aim {
	displayName = "$STR_DZ_WPN_L110A1_CCO_NAME";
	model = "z\addons\dayz_communityweapons\l110a1\l110a1_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\l110a1\data\w_l110a1_cco_ca.paa";
	irDistance = 0;
	type = 1;
	magazines[] =
	{
		200Rnd_556x45_L110A1,
		200Rnd_556x45_M249,
		100Rnd_556x45_M249,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_L110A1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L110A1_Holo : DZE_Wep_L110A1_CCO {
	displayName = "$STR_DZ_WPN_L110A1_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\l110a1\l110a1_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\l110a1\data\w_l110a1_holo_ca.paa";

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_L110A1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L110A1 : DZE_Wep_L110A1_CCO {
	displayName = "$STR_DZ_WPN_L110A1_NAME";
	model = "z\addons\dayz_communityweapons\l110a1\l110a1.p3d";
	picture = "\z\addons\dayz_communityweapons\l110a1\data\w_l110a1_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	//iron sight zeroing
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		Attachment_CCO = DZE_Wep_L110A1_CCO;
		Attachment_Holo = DZE_Wep_L110A1_Holo;
	};

	class ItemActions {};
};

class DZE_Wep_BAF_L110A1_Aim_DZE: BAF_L110A1_Aim { //Slightly different scope from DZE_Wep_L110A1_CCO, otherwise identical
	type = 1;
	magazines[] =
	{
		200Rnd_556x45_L110A1,
		200Rnd_556x45_M249,
		100Rnd_556x45_M249,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
};