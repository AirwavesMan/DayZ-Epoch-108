class USMC_WarfareBMGNest_M240;
// M240 Nest
class DZE_M240Nest : USMC_WarfareBMGNest_M240 {
	destrType = "DestructBuilding";
	armor = 450;
	scope = 2;
	DZE_offset[] = {0,4,-0.1};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	displayName = $STR_EPOCH_M240NEST;
	transportMaxMagazines = 25;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 1;
	DZE_buildingSteps = 10;
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	GhostPreview = "DZE_M240Nest";
	removeoutput[] = {{"m240_nest_kit",1}};
};
class M2StaticMG;
class DZE_M2_MG_Static : M2StaticMG {
	// M2 Machine Gun
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_M2_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"M2_MG_Static_kit",1}};
};
class M2HD_mini_TriPod;
class DZE_M2_TriPod_MG_Static : M2HD_mini_TriPod {
	// M2 Minitripod
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_M2_TriPod_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"M2_TriPod_MG_Static_kit",1}};
};
class DSHKM_Ins;
class DZE_DSHKM_MG_Static : DSHKM_Ins {
	// DShKM
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_DSHKM_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"DSHKM_MG_Static_kit",1}};
};
class DSHkM_Mini_TriPod;
class DZE_DSHKM_TriPod_MG_Static : DSHkM_Mini_TriPod {
	// DSHkM Minitripod
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0.2};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_DSHKM_TriPod_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"DSHKM_TriPod_MG_Static_kit",1}};
};
class KORD;
class DZE_KORD_Tripod_MG_Static : KORD {
	// KORD Minitripod
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0.5};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_KORD_Tripod_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"KORD_TriPod_MG_Static_kit",1}};
};
class KORD_high;
class DZE_KORD_MG_Static : KORD_high {
	// KORD
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_KORD_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"KORD_MG_Static_kit",1}};
};
class BAF_L2A1_ACOG_base;
class BAF_L2A1_Tripod_D : BAF_L2A1_ACOG_base {
	class assembleInfo;
};
class DZE_L2A1_MG_Static : BAF_L2A1_Tripod_D {
	// L111A1 Tripod
	side = 1;
	faction = "USMC";
	class assembleInfo : assembleInfo {
		dissasembleTo[] = {};
	};
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_L2A1_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"L2A1_MG_Static_kit",1}};
};
class BAF_L2A1_Minitripod_D : BAF_L2A1_ACOG_base {
	class assembleInfo;
};
class DZE_L2A1_Tripod_MG_Static : BAF_L2A1_Minitripod_D {
	// L111A1 Minitripod
	side = 1;
	faction = "USMC";
	class assembleInfo : assembleInfo {
		dissasembleTo[] = {};
	};
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_L2A1_Tripod_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"L2A1_Tripod_MG_Static_kit",1}};
};
class GMG_TriPod;
class BAF_GMG_Tripod_D : GMG_TriPod {
	class assembleInfo;
};
class DZE_GMG_Tripod_MG_Static : BAF_GMG_Tripod_D {
	// GMG Minitripod
	side = 1;
	faction = "USMC";
	class assembleInfo : assembleInfo {
		dissasembleTo[] = {};
	};
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_GMG_Tripod_MG_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"GMG_Tripod_GrenadeLauncher_Static_kit",1}};
};
class AGS_Ins;
class DZE_AGS30_GrenadeLauncher_Static : AGS_Ins {
	// AGS-30
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0.2};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_AGS30_GrenadeLauncher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"AGS30_GrenadeLauncher_Static_kit",1}};
};
class MK19_TriPod;
class DZE_MK19_TriPod_GrenadeLauncher_Static : MK19_TriPod {
	// MK19 Minitripod
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_MK19_TriPod_GrenadeLauncher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"MK19_TriPod_GrenadeLauncher_Static_kit",1}};
};
class BAF_GPMG_Minitripod_D : BAF_L2A1_ACOG_base {
	class assembleInfo;
};
class DZE_GPMG_TriPod_GrenadeLauncher_Static : BAF_GPMG_Minitripod_D {
	// GPMG Minitripod
	side = 1;
	faction = "USMC";
	class assembleInfo : assembleInfo {
		dissasembleTo[] = {};
	};
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_GPMG_TriPod_GrenadeLauncher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"GPMG_TriPod_MG_Static_kit",1}};
};
class M119;
class DZE_M119_Artillery_Static : M119 {
	// M119
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,5,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_M119_Artillery_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"M119_Artillery_Static_kit",1}};
};
class D30_Ins;
class DZE_D30_Artillery_Static : D30_Ins {
	// D-30
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,5,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_D30_Artillery_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"D30_Artillery_Static_kit",1}};
};
class SearchLight_INS;
class DZE_SearchLight_Static : SearchLight_INS {
	// Searchlight
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_SearchLight_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"SearchLight_Static_kit",1}};
};
class M252;
class DZE_M252_Mortar_Static : M252 {
	// M252 81mm Mortar
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_M252_Mortar_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"M252_Mortar_Static_kit",1}};
};
class 2b14_82mm;
class DZE_2b14_82mm_Mortar_Static : 2b14_82mm {
	// Podnos 2B14
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_2b14_82mm_Mortar_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"2b14_82mm_Mortar_Static_kit",1}};
};
class Metis;
class DZE_Metis_Launcher_Static : Metis {
	// Metis AT-13
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_Metis_Launcher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"Metis_Launcher_Static_kit",1}};
};
class SPG9_Gue;
class DZE_SPG9_Launcher_Static : SPG9_Gue {
	// SPG-9
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,-0.02};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_SPG9_Launcher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"SPG9_Launcher_Static_kit",1}};
};
class Stinger_Pod;
class DZE_Stinger_Tripod_Launcher_Static : Stinger_Pod {
	// AA Pod
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0.17};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_Stinger_Tripod_Launcher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"Stinger_Tripod_Launcher_Static_kit",1}};
};
class TOW_TriPod;
class DZE_TOW_Tripod_Launcher_Static : TOW_TriPod {
	// TOW Tripod
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_TOW_Tripod_Launcher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"TOW_Tripod_Launcher_Static_kit",1}};
};
class Stinger_Pod_base;
class Rbs70_ACR : Stinger_Pod_base {
	class AssembleInfo;
};
class DZE_Rbs70_Launcher_Static : Rbs70_ACR {
	// RBS-70
	side = 1;
	faction = "USMC";
	class AssembleInfo : AssembleInfo {
		dissasembleTo[] = {};
	};
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_Rbs70_Launcher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"Rbs70_Launcher_Static_kit",1}};
};
class Igla_AA_pod_East;
class DZE_Igla_AntiAir_Launcher_Static : Igla_AA_pod_East {
	// AA IGLA Pod
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_Igla_AntiAir_Launcher_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"Igla_AntiAir_Launcher_Static_kit",1}};
};
class ZU23_Ins;
class DZE_ZU23_AntiAir_Static : ZU23_Ins {
	// ZU-23
	side = 1;
	faction = "USMC";
	DZE_offset[] = {0,3,0};
	DZE_allowBuilding = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	DZE_saveToDatabase = 1;
	GhostPreview = "DZE_ZU23_AntiAir_Static";
	vehicleClass = "DayZ Epoch 1071 Static Weapons";
	removeoutput[] = {{"ZU23_AntiAir_Static_kit",1}};
};
