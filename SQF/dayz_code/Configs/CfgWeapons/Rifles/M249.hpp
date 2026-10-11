class M249;
class DZE_Wep_M249_CCO : M249 {
	displayName = "$STR_DZ_WPN_M249_CCO_NAME";
	model = "z\addons\dayz_communityweapons\m249\m249_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_cco_ca.paa";

	type = 1;

	magazines[] =
	{
		200Rnd_556x45_M249,
		200Rnd_556x45_L110A1,
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
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M249'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M249 : DZE_Wep_M249_CCO {
	displayName = "$STR_DZ_WPN_M249_NAME";
	model = "ca\weapons\m249.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	//iron sight zeroing
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M249_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_M249_Holo";
	};

	class ItemActions {};
};

class DZE_Wep_M249_Holo : DZE_Wep_M249_CCO {
	displayName = "$STR_DZ_WPN_M249_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\m249\m249_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_holo_ca.paa";

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M249'] call player_removeAttachment";
		};
	};
};

class M249_EP1;
class DZE_Wep_M249_EP1: M249_EP1 { //Iron sight with shorter stock (slightly different look from DZE_Wep_M249) can also fire MG36 mags
	type = 1;

	magazines[] =
	{
		200Rnd_556x45_M249,
		200Rnd_556x45_L110A1,
		100Rnd_556x45_M249,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
};

class M249_m145_EP1;
class DZE_Wep_M249_m145_EP1_DZE: M249_m145_EP1 {
	type = 1;

	magazines[] =
	{
		200Rnd_556x45_M249,
		200Rnd_556x45_L110A1,
		100Rnd_556x45_M249,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
};
