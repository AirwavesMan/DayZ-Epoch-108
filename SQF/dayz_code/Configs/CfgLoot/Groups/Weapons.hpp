// Weapons are organized in matching groups US,RU,CZ,EU, and Residential.
// Pistols also spawn in small groups so they are given smaller weights here.

weaponsRU[] =
{
	// Pistols
	{Loot_WEAPON,		2,		DZE_Wep_Tokarew_TT33},
	{Loot_WEAPON,		2,		DZE_Wep_Makarov},
	{Loot_WEAPON,		1,		DZE_Wep_Makarov_SD},
	{Loot_WEAPON,		2,		DZE_Wep_APS},
	{Loot_WEAPON,		1,		DZE_Wep_APS_SD},
	{Loot_WEAPON,		2,		DZE_Wep_P99_Silver},
	{Loot_WEAPON,		1,		DZE_Wep_P99_Silver_SD},
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		DZE_Wep_Saiga12K},
	{Loot_WEAPON,		5,		DZE_Wep_Mosin_PU},
	
	// Sniper Rifles
	{Loot_WEAPON,		4,		DZE_Wep_SVU_PSO1},
	{Loot_WEAPON,		1,		DZE_Wep_SVD_Gold},
	{Loot_WEAPON,		4,		DZE_Wep_SVD},
	{Loot_WEAPON,		1,		DZE_Wep_VSS_Vintorez},
	{Loot_WEAPON,		4,		DZE_Wep_Groza9_Sniper},
	{Loot_WEAPON,		1,		DZE_Wep_Groza9_Sniper_SD},
	{Loot_WEAPON,		4,		DZE_Wep_Groza1_Sniper},
	{Loot_WEAPON,		1,		DZE_Wep_Groza1_Sniper_SD},
	{Loot_WEAPON,		1,		DZE_Wep_KSVK}, // High value weapon, low spawn chance.
	{Loot_WEAPON,		1,		DZE_Wep_Anzio_20}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		DZE_Wep_Bizon},
	{Loot_WEAPON,		7,		DZE_Wep_Bizon_SD},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		DZE_Wep_AKS74U},
	{Loot_WEAPON,		1,		DZE_Wep_AKS_Gold},
	{Loot_WEAPON,		1,		DZE_Wep_AKS_Silver},
	{Loot_WEAPON,		6,		DZE_Wep_AKM},
	{Loot_WEAPON,		6,		DZE_Wep_AK107}, // Attachment support added to AK-107 in 1.0.7
	{Loot_WEAPON,		6,		DZE_Wep_AK74},
	{Loot_WEAPON,		6,		DZE_Wep_AN94},
	{Loot_WEAPON,		6,		DZE_Wep_RK95},
	{Loot_WEAPON,		6,		DZE_Wep_Groza9},
	{Loot_WEAPON,		6,		DZE_Wep_Groza1},
	{Loot_WEAPON,		6,		DZE_Wep_VAL},
	{Loot_WEAPON,		6,		DZE_Wep_SCAR_H_AK},
	
	// Machine Guns
	{Loot_WEAPON,		3,		DZE_Wep_RPK74},
	{Loot_WEAPON,		2,		DZE_Wep_PKP},
	{Loot_WEAPON,		3,		DZE_Wep_RPK},
	{Loot_WEAPON,		3,		DZE_Wep_PKM}
};

weaponsUS[] =
{
	// Pistols
	{Loot_WEAPON,		1,		DZE_Wep_MK22},
	{Loot_WEAPON,		1,		DZE_Wep_MK22_SD},
	{Loot_WEAPON,		1,		DZE_Wep_MK22_2},
	{Loot_WEAPON,		1,		DZE_Wep_MK22_2_SD},
	{Loot_WEAPON,		2,		DZE_Wep_M9},
	{Loot_WEAPON,		1,		DZE_Wep_M9_SD},
	{Loot_WEAPON,		2,		DZE_Wep_M9_Camo},
	{Loot_WEAPON,		1,		DZE_Wep_M9_Camo_SD},
	{Loot_WEAPON,		2,		DZE_Wep_P99_Green},
	{Loot_WEAPON,		1,		DZE_Wep_P99_Green_SD},
	{Loot_WEAPON,		2,		DZE_Wep_Kimber_M1911},
	{Loot_WEAPON,		1,		DZE_Wep_Kimber_M1911_SD},
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		DZE_Wep_Remington870},
	{Loot_WEAPON,		5,		DZE_Wep_AA12},
	
	// Sniper Rifles
	{Loot_WEAPON,		5,		DZE_Wep_M4SPR_NoNVG},
	{Loot_WEAPON,		4,		DZE_Wep_M40A3},
	{Loot_WEAPON,		4,		DZE_Wep_M24_DES},
	{Loot_WEAPON,		4,		DZE_Wep_M24},
	{Loot_WEAPON,		3,		DZE_Wep_DMR},
	{Loot_WEAPON,		3,		DZE_Wep_MK14_Sniper},
	{Loot_WEAPON,		3,		DZE_Wep_M21A5},
	{Loot_WEAPON,		1,		DZE_Wep_M107}, // High value weapon, low spawn chance.
	{Loot_WEAPON,		1,		DZE_Wep_MSR}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		3,		DZE_Wep_PDW},
	{Loot_WEAPON,		3,		DZE_Wep_PDW_SD},
	{Loot_WEAPON,		3,		DZE_Wep_Kriss},
	{Loot_WEAPON,		3,		DZE_Wep_Kriss_SD},
	{Loot_WEAPON,		3,		DZE_Wep_Mac10},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		DZE_Wep_M14},
	{Loot_WEAPON,		6,		DZE_Wep_MK14},
	{Loot_WEAPON,		6,		DZE_Wep_Masada},
	{Loot_WEAPON,		6,		DZE_Wep_Masada_BL},
	{Loot_WEAPON,		6,		DZE_Wep_CTAR21},
	{Loot_WEAPON,		6,		DZE_Wep_KAC_PDW},
	{Loot_WEAPON,		6,		DZE_Wep_M16A2},
	{Loot_WEAPON,		6,		DZE_Wep_M16A4_ACOG},
	{Loot_WEAPON,		6,		DZE_Wep_M4A1},
	{Loot_WEAPON,		6,		DZE_Wep_M4A1_Camo_CCO},
	{Loot_WEAPON,		6,		DZE_Wep_M4A1_Camo_Holo_GL},
	{Loot_WEAPON,		6,		DZE_Wep_M4A3_DES_CCO},
	{Loot_WEAPON,		6,		DZE_Wep_PDR},
	{Loot_WEAPON,		6,		DZE_Wep_ACR_WDL},
	{Loot_WEAPON,		6,		DZE_Wep_ACR_BL},
	
	// Machine Guns
	{Loot_WEAPON,		3,		DZE_Wep_M60A4},
	{Loot_WEAPON,		3,		DZE_Wep_Mk43},
	{Loot_WEAPON,		3,		DZE_Wep_MK43_M145},
	{Loot_WEAPON,		5,		DZE_Wep_M249_M145},
	{Loot_WEAPON,		3,		DZE_Wep_M240_M145},
	{Loot_WEAPON,		3,		DZE_Wep_M240},
	{Loot_WEAPON,		5,		DZE_Wep_M249_SAW},
	{Loot_WEAPON,		5,		DZE_Wep_M249}
};

weaponsEU[] =
{
	// Pistols
	{Loot_WEAPON,		2,		DZE_Wep_M93R},
	{Loot_WEAPON,		2,		DZE_Wep_G18},
	{Loot_WEAPON,		2,		DZE_Wep_P226},
	{Loot_WEAPON,		2,		DZE_Wep_P226_Silver},
	{Loot_WEAPON,		2,		DZE_Wep_PPK},
	{Loot_WEAPON,		2,		DZE_Wep_P38},
	{Loot_WEAPON,		2,		DZE_Wep_G17},
	{Loot_WEAPON,		1,		DZE_Wep_G17_SD},
	{Loot_WEAPON,		2,		DZE_Wep_P99_Black},
	{Loot_WEAPON,		1,		DZE_Wep_P99_Black_SD},
	{Loot_WEAPON,		2,		DZE_Wep_USP},
	{Loot_WEAPON,		1,		DZE_Wep_USP_SD},
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		DZE_Wep_LeeEnfield},
	{Loot_WEAPON,		5,		DZE_Wep_M1014},
	
	// Sniper Rifles
	{Loot_WEAPON,		1,		DZE_Wep_L115A3}, // Tan Lapua
	{Loot_WEAPON,		1,		DZE_Wep_L115A3_2}, // Green Lapua
	{Loot_WEAPON,		2,		DZE_Wep_MK17_Sniper_SD},
	{Loot_WEAPON,		2,		DZE_Wep_MK17_Sniper},
	{Loot_WEAPON,		2,		DZE_Wep_HK417_Sniper_SD},
	{Loot_WEAPON,		2,		DZE_Wep_HK417_Sniper},
	{Loot_WEAPON,		1,		DZE_Wep_RSASS},
	{Loot_WEAPON,		4,		DZE_Wep_FNFAL},
	{Loot_WEAPON,		3,		DZE_Wep_FN_FAL_ANPVS4_NVSwitch}, //DZE_Wep_FNFAL_ANPVS4 is NV only _DZE is toggleable with attachment support
	{Loot_WEAPON,		4,		DZE_Wep_G3},
	{Loot_WEAPON,		1,		DZE_Wep_AS50}, // High value weapon, low spawn chance.
	{Loot_WEAPON,		1,		DZE_Wep_Barrett_MRAD_Sniper}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		DZE_Wep_MP5},
	{Loot_WEAPON,		7,		DZE_Wep_MP5_SD},
	{Loot_WEAPON,		7,		DZE_Wep_MP7},
	{Loot_WEAPON,		7,		DZE_Wep_MP7_SD},
	{Loot_WEAPON,		7,		DZE_Wep_TMP},
	{Loot_WEAPON,		7,		DZE_Wep_TMP_SD},
	{Loot_WEAPON,		7,		DZE_Wep_UMP},
	{Loot_WEAPON,		7,		DZE_Wep_UMP_SD},
	{Loot_WEAPON,		7,		DZE_Wep_P90},
	{Loot_WEAPON,		7,		DZE_Wep_P90_SD},
	{Loot_WEAPON,		7,		DZE_Wep_Sten_MK},
	{Loot_WEAPON,		7,		DZE_Wep_MAT49},
	
	// Assault Rifles
	{Loot_WEAPON,		5,		DZE_Wep_G36A_Camo},
	{Loot_WEAPON,		5,		DZE_Wep_G36C},
	{Loot_WEAPON,		5,		DZE_Wep_G36C_Camo},
	{Loot_WEAPON,		5,		DZE_Wep_G36K_Camo},
	{Loot_WEAPON,		5,		DZE_Wep_G36C_Camo_Holo_SD},
	{Loot_WEAPON,		5,		DZE_Wep_XM8_Compact},
	{Loot_WEAPON,		5,		DZE_Wep_XM8_Sharpsh},
	{Loot_WEAPON,		5,		DZE_Wep_XM8_SD},
	{Loot_WEAPON,		5,		DZE_Wep_XM8},
	{Loot_WEAPON,		5,		DZE_Wep_XM8_GL},
	{Loot_WEAPON,		5,		DZE_Wep_L85A2},
	{Loot_WEAPON,		5,		DZE_Wep_HK53A3},
	{Loot_WEAPON,		5,		DZE_Wep_Famas},
	{Loot_WEAPON,		5,		DZE_Wep_HK416},
	{Loot_WEAPON,		5,		DZE_Wep_HK416C},
	{Loot_WEAPON,		5,		DZE_Wep_HK417},
	{Loot_WEAPON,		5,		DZE_Wep_HK417C},
	{Loot_WEAPON,		5,		DZE_Wep_MK16},
	{Loot_WEAPON,		5,		DZE_Wep_MK16_CCO_SD},
	{Loot_WEAPON,		5,		DZE_Wep_MK16_Holo_SD},
	{Loot_WEAPON,		5,		DZE_Wep_MK16_ACOG_SD},
	{Loot_WEAPON,		3,		DZE_Wep_MK17},
	{Loot_WEAPON,		3,		DZE_Wep_MK17_CCO_SD},
	{Loot_WEAPON,		3,		DZE_Wep_MK17_Holo_SD},
	{Loot_WEAPON,		3,		DZE_Wep_MK17_ACOG_SD},
	{Loot_WEAPON,		3,		DZE_Wep_SteyrAug_A3_Green},
	{Loot_WEAPON,		3,		DZE_Wep_SteyrAug_A3_ACOG_Green},
	{Loot_WEAPON,		3,		DZE_Wep_SteyrAug_A3_Holo_Green},
	
	// Machine Guns
	{Loot_WEAPON,		6,		DZE_Wep_XM8_SAW},
	{Loot_WEAPON,		4,		DZE_Wep_L110A1},
	{Loot_WEAPON,		4,		DZE_Wep_MG36_Camo},
	{Loot_WEAPON,		4,		DZE_Wep_MG36},
	{Loot_WEAPON,		3,		DZE_Wep_Mk48},
	{Loot_WEAPON,		3,		DZE_Wep_Mk48_DES_CCO},
	{Loot_WEAPON,		5,		DZE_Wep_L86A2_LSW}
};

weaponsCZ[] = 
{
	// Pistols
	{Loot_WEAPON,		2,		DZE_Wep_BrowningHP},
	{Loot_WEAPON,		2,		DZE_Wep_CZ75P},
	{Loot_WEAPON,		2,		DZE_Wep_CZ75D},
	{Loot_WEAPON,		2,		DZE_Wep_CZ75SP},
	{Loot_WEAPON,		1,		DZE_Wep_CZ75SP_SD},
	{Loot_WEAPON,		5,		DZE_Wep_Sa61},
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		DZE_Wep_USAS12},
	
	// Sniper Rifles
	{Loot_WEAPON,		3,		DZE_Wep_CZ750},
	{Loot_WEAPON,		3,		DZE_Wep_M110_NV}, // Technically a US rifle, but the CZ group does not have a DMR type rifle.
	{Loot_WEAPON,		1,		DZE_Wep_XM2010}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		DZE_Wep_Scorpion_Evo3},
	{Loot_WEAPON,		7,		DZE_Wep_Scorpion_Evo3_CCO},
	{Loot_WEAPON,		5,		DZE_Wep_Scorpion_Evo3_CCO_SD},
	{Loot_WEAPON,		7,		DZE_Wep_M31},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		DZE_Wep_SA58},
	{Loot_WEAPON,		6,		DZE_Wep_Sa58V_Camo_CCO},
	{Loot_WEAPON,		6,		DZE_Wep_Sa58V_Camo_ACOG},
	{Loot_WEAPON,		6,		DZE_Wep_SA58_RIS},
	{Loot_WEAPON,		6,		DZE_Wep_CZ805_A1},
	{Loot_WEAPON,		6,		DZE_Wep_CZ805_A1_GL},
	{Loot_WEAPON,		6,		DZE_Wep_CZ805_A2},
	{Loot_WEAPON,		6,		DZE_Wep_CZ805_A2_SD},
	{Loot_WEAPON,		3,		DZE_Wep_CZ805_B_GL}, // 7.62x51, uses SCAR mags.
	
	// Machine Gun
	{Loot_WEAPON,		6,		DZE_Wep_UK59}
	
	
};

pistols[] = { // Residential spawns
	{Loot_WEAPON,		9,		DZE_Wep_Makarov},
	{Loot_WEAPON,		7,		DZE_Wep_M1911},
	{Loot_WEAPON,		7,		DZE_Wep_M1911_2},
	{Loot_WEAPON,		1,		DZE_Wep_DesertEagle},
	{Loot_WEAPON,		5,		DZE_Wep_Colt_Revolver},
	{Loot_WEAPON,		5,		DZE_Wep_Revolver},
	{Loot_WEAPON,		1,		DZE_Wep_Revolver_Gold},
	{Loot_WEAPON,		2,		DZE_Wep_Colt_Anaconda},
	{Loot_WEAPON,		1,		DZE_Wep_Colt_Anaconda_Gold},
	{Loot_WEAPON,		2,		DZE_Wep_Colt_Bull},
	{Loot_WEAPON,		1,		DZE_Wep_Colt_Python}
};


shotgunsingleshot[] = { // Residential Spawns
	{Loot_WEAPON,		2,		DZE_Wep_Winchester1866},
	{Loot_WEAPON,		2,		DZE_Wep_Remington870},
	{Loot_WEAPON,		2,		DZE_Wep_LeeEnfield},
	{Loot_WEAPON,		3,		DZE_Wep_MR43},
	{Loot_WEAPON,		3,		DZE_Wep_Crossbow},
	{Loot_WEAPON,		3,		DZE_Wep_RedRyder},
	{Loot_WEAPON,		1,		DZE_Wep_CZ550},
	{Loot_WEAPON,		1,		DZE_Wep_Mosin}
};

Chainsaws[] = {
	{Loot_WEAPON,		1,		DZE_Tool_ChainSaw},
	{Loot_WEAPON,		1,		DZE_Tool_ChainSawB},
	{Loot_WEAPON,		1,		DZE_Tool_ChainSawG},
	{Loot_WEAPON,		1,		DZE_Tool_ChainSawP},
	{Loot_WEAPON,		1,		DZE_Tool_ChainSawR}
};
