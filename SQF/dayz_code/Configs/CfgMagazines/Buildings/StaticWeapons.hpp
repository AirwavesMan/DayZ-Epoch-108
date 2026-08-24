class M2_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_M2_MG;
	descriptionShort = $STR_DN_M2_MG;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_M2_MG_Static";
		};
	};
};

class M2_TriPod_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_M2HD_MINITRIPOD;
	descriptionShort = $STR_DN_M2HD_MINITRIPOD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_M2_TriPod_MG_Static";
		};
	};
};

class DSHKM_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_DSHKM;
	descriptionShort = $STR_DN_DSHKM;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_DSHKM_MG_Static";
		};
	};
};

class DSHKM_TriPod_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_DSHKM_MINITRIPOD;
	descriptionShort = $STR_DN_DSHKM_MINITRIPOD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_DSHKM_TriPod_MG_Static";
		};
	};
};

class KORD_TriPod_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_KORD_LOW;
	descriptionShort = $STR_DN_KORD_LOW;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_KORD_Tripod_MG_Static";
		};
	};
};

class KORD_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_KORD;
	descriptionShort = $STR_DN_KORD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_KORD_MG_Static";
		};
	};
};

class L2A1_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BAF_BAF_L2A1_TRIPOD_D0;
	descriptionShort = $STR_BAF_BAF_L2A1_TRIPOD_D0;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_L2A1_MG_Static";
		};
	};
};

class L2A1_Tripod_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BAF_BAF_L2A1_MINITRIPOD_D0;
	descriptionShort = $STR_BAF_BAF_L2A1_MINITRIPOD_D0;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_L2A1_Tripod_MG_Static";
		};
	};
};

class GMG_Tripod_GrenadeLauncher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BAF_BAF_GMG_TRIPOD_D0;
	descriptionShort = $STR_BAF_BAF_GMG_TRIPOD_D0;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_GMG_Tripod_MG_Static";
		};
	};
};

class AGS30_GrenadeLauncher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_AGS30;
	descriptionShort = $STR_DN_AGS30;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_AGS30_GrenadeLauncher_Static";
		};
	};
};

class MK19_TriPod_GrenadeLauncher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_MK19_TRIPOD;
	descriptionShort = $STR_DN_MK19_TRIPOD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_MK19_TriPod_GrenadeLauncher_Static";
		};
	};
};

class GPMG_TriPod_MG_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BAF_BAF_GPMG_MINITRIPOD_D0;
	descriptionShort = $STR_BAF_BAF_GPMG_MINITRIPOD_D0;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_GPMG_TriPod_GrenadeLauncher_Static";
		};
	};
};

class M119_Artillery_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_M119;
	descriptionShort = $STR_DN_M119;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_M119_Artillery_Static";
		};
	};
};

class D30_Artillery_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_D30;
	descriptionShort = $STR_DN_D30;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_D30_Artillery_Static";
		};
	};
};

class SearchLight_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_SEARCHLIGHT;
	descriptionShort = $STR_DN_SEARCHLIGHT;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_SearchLight_Static";
		};
	};
};

class M252_Mortar_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_M252;
	descriptionShort = $STR_DN_M252;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_M252_Mortar_Static";
		};
	};
};

class 2b14_82mm_Mortar_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_2B14;
	descriptionShort = $STR_DN_2B14;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_2b14_82mm_Mortar_Static";
		};
	};
};

class Metis_Launcher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_AT13;
	descriptionShort = $STR_DN_AT13;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Metis_Launcher_Static";
		};
	};
};

class SPG9_Launcher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_SPG9;
	descriptionShort = $STR_DN_SPG9;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_SPG9_Launcher_Static";
		};
	};
};

class Stinger_Tripod_Launcher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_STINGER_POD;
	descriptionShort = $STR_DN_STINGER_POD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Stinger_Tripod_Launcher_Static";
		};
	};
};

class TOW_Tripod_Launcher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_TOW_TRIPOD;
	descriptionShort = $STR_DN_TOW_TRIPOD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_TOW_Tripod_Launcher_Static";
		};
	};
};

class Rbs70_Launcher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_ACR_DN_RBS70;
	descriptionShort = $STR_ACR_DN_RBS70;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Rbs70_Launcher_Static";
		};
	};
};

class Igla_AntiAir_Launcher_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_IGLA_AA_POD_EAST;
	descriptionShort = $STR_DN_IGLA_AA_POD_EAST;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Igla_AntiAir_Launcher_Static";
		};
	};
};

class ZU23_AntiAir_Static_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DN_ZU23;
	descriptionShort = $STR_DN_ZU23;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_ZU23_AntiAir_Static";
		};
	};
};
