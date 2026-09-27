class ReammoBox_EP1;	//External class reference
class Bag_Base_EP1 : ReammoBox_EP1 {
	scope = 0;
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	isbackpack = 1;
	mapsize = 2;
	reversed = true;
	vehicleClass = "Dayz Epoch 1071 Backpacks";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	class DestructionEffects {};
};
class DZE_Bag_Base : Bag_Base_EP1 {
	scope = 0;
};
//new epoch 107 classes (DZE1 = standard, DZE2 = upgraded)
class DZE_Bag_Patrol_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	transportMaxMagazines = 30;
	displayName = $STR_BACKPACK_NAME_PATROL_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_PATROL_DZE1;
	transportMaxWeapons = 5;
};
class DZE_Bag_Patrol_2 : DZE_Bag_Patrol_1
{
	displayname = $STR_BACKPACK_NAME_PATROL_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_PATROL_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Gym_Camo_1 : DZE_Bag_Base
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_GYMBAG_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
};
class DZE_Bag_Gym_Camo_2 : DZE_Bag_Base
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_GYMBAG_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Gym_Green_1 : DZE_Bag_Gym_Camo_1
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
};
class DZE_Bag_Gym_Green_2 : DZE_Bag_Gym_Camo_2
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
};
class DZE_Bag_CzechPouch_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	transportmaxmagazines = 30;
	displayName = $STR_BACKPACK_NAME_VEST_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_VEST_DZE1;
	transportMaxWeapons = 5;
};
class DZE_Bag_CzechPouch_2 : DZE_Bag_CzechPouch_1
{
	displayname = $STR_BACKPACK_NAME_VEST_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_VEST_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Assault_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	displayname = $STR_BACKPACK_NAME_ACU_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_ACU_DZE1;
	transportMaxWeapons = 5;
	transportMaxMagazines = 30;
};
class DZE_Bag_Assault_2 : DZE_Bag_Assault_1
{
	displayname = $STR_BACKPACK_NAME_ACU_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_ACU_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Terminal_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\dayz_epoch_c\icons\backpacks\terminalpack.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV";
	displayname = $STR_EPOCH_PACK_TERMINAL_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL_DZE1;
	transportMaxWeapons = 5;
	transportMaxMagazines = 30;
};
class DZE_Bag_Terminal_2 : DZE_Bag_Terminal_1
{
	displayname = $STR_EPOCH_PACK_TERMINAL_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Tiny_1 : DZE_Bag_Base
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_TINY_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_TINY_DZE1;
	picture = "\Ca\Weapons_ACR\Data\UI\picture_backpack_acr_rpg";
	model = "\Ca\Characters_ACR\backpack_acr_rpg";
	transportMaxWeapons = 5;
	transportMaxMagazines = 30;
};
class DZE_Bag_Tiny_2 : DZE_Bag_Tiny_1
{
	displayname = $STR_EPOCH_PACK_TINY_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_TINY_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_ALICE_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	transportMaxMagazines = 50;
	displayname = $STR_BACKPACK_NAME_ALICE_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_ALICE_DZE1;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_2 : DZE_Bag_ALICE_1
{
	displayname = $STR_BACKPACK_NAME_ALICE_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_ALICE_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_TK_Assault_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	transportMaxMagazines = 40;
	displayname = $STR_BACKPACK_NAME_SURVACU_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU_DZE1;
	transportMaxWeapons = 8;
};
class DZE_Bag_TK_Assault_2 : DZE_Bag_TK_Assault_1
{
	displayname = $STR_BACKPACK_NAME_SURVACU_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU_DZE2;
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_School_1 : DZE_Bag_Base
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_SCHOOLBAG_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_SCHOOLBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_School_2 : DZE_Bag_Base
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_SCHOOLBAG_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_SCHOOLBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Compact_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d";
	transportMaxMagazines = 40;
	displayname = $STR_EPOCH_PACK_COMPACT_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT_DZE1;
	transportMaxWeapons = 8;
};
class DZE_Bag_Compact_2 : DZE_Bag_Compact_1
{
	displayname = $STR_EPOCH_PACK_COMPACT_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT_DZE2;
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_British_ACU_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	transportMaxMagazines = 40;
	displayname = $STR_BACKPACK_NAME_BRITISH_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH_DZE1;
	transportMaxWeapons = 8;
};
class DZE_Bag_British_ACU_2 : DZE_Bag_British_ACU_1
{
	displayname = $STR_BACKPACK_NAME_BRITISH_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH_DZE2;
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Gunbag_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\staticY_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d";
	transportMaxMagazines = 40;
	displayname = $STR_EPOCH_PACK_GB_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB_DZE1;
	transportMaxWeapons = 8;
};
class DZE_Bag_Gunbag_2 : DZE_Bag_Gunbag_1
{
	displayname = $STR_EPOCH_PACK_GB_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB_DZE2;
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Party_1 : DZE_Bag_Base
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_PARTYPACK_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_PARTYPACK_DZE1;
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_Party_2 : DZE_Bag_Base
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_PARTYPACK_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_PARTYPACK_DZE2;
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Night_1 : DZE_Bag_Base 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO1_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO1_DZE1;
	model = "\ice_apo_resistance\Backpack1.p3d";
	picture = "\ice_apo_resistance\icons\backpack1_ca.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Night_2 : DZE_Bag_Night_1
{
	displayname = $STR_BACKPACK_NAME_APO1_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO1_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Survivor_1 : DZE_Bag_Base 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO2_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO2_DZE1;
	model = "\ice_apo_resistance\Backpack4.p3d";
	picture = "\ice_apo_resistance\icons\backpack4_ca.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Survivor_2 : DZE_Bag_Survivor_1
{
	displayname = $STR_BACKPACK_NAME_APO2_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO2_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_1 : DZE_Bag_Base
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_AIRWAVES_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_AIRWAVES_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_wavesbag_01.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\airwavespack.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Airwaves_2 : DZE_Bag_Airwaves_1
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_AIRWAVES_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_AIRWAVES_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Czech_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	displayname = $STR_BACKPACK_NAME_CZECH_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DZE1;
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Czech_2 : DZE_Bag_Czech_1
{
	displayname = $STR_BACKPACK_NAME_CZECH_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Czech_Camping_1 : DZE_Bag_Czech_1
{
	displayName = $STR_BACKPACK_NAME_CZECH_CAMPING_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_CAMPING_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01";
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
};
class DZE_Bag_Czech_Camping_2 : DZE_Bag_Czech_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_CAMPING_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_CAMPING_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01";
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
};
class DZE_Bag_Czech_OD_1 : DZE_Bag_Czech_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_OD_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_OD_DZE1;
	scope = 2;
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
};
class DZE_Bag_Czech_OD_2 : DZE_Bag_Czech_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_OD_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_OD_DZE2;
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
};
class DZE_Bag_Czech_DES_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_DES_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DES_DZE1;
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
};
class DZE_Bag_Czech_DES_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_DES_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DES_DZE2;
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
};
class DZE_Bag_Czech_3DES_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_3DES_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_3DES_DZE1;
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
};
class DZE_Bag_Czech_3DES_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_3DES_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_3DES_DZE2;
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
};
class DZE_Bag_Czech_WDL_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_WDL_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_WDL_DZE1;
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
};
class DZE_Bag_Czech_WDL_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_WDL_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_WDL_DZE2;
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
};
class DZE_Bag_Czech_MAR_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_MAR_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MAR_DZE1;
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
};
class DZE_Bag_Czech_MAR_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_MAR_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MAR_DZE2;
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
};
class DZE_Bag_Czech_DMAR_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_DMAR_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DMAR_DZE1;
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
};
class DZE_Bag_Czech_DMAR_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_DMAR_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DMAR_DZE2;
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
};
class DZE_Bag_Czech_UCP_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_UCP_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_UCP_DZE1;
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
};
class DZE_Bag_Czech_UCP_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_UCP_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_UCP_DZE2;
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
};
class DZE_Bag_Czech_6DES_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_6DES_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_6DES_DZE1;
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
};
class DZE_Bag_Czech_6DES_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_6DES_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_6DES_DZE2;
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
};
class DZE_Bag_Czech_TAK_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_TAK_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_TAK_DZE1;
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
};
class DZE_Bag_Czech_TAK_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_TAK_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_TAK_DZE2;
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
};
class DZE_Bag_Czech_NVG_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_NVG_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_NVG_DZE1;
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
};
class DZE_Bag_Czech_NVG_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_NVG_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_NVG_DZE2;
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
};
class DZE_Bag_Czech_BLK_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_BLK_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_BLK_DZE1;
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
};
class DZE_Bag_Czech_BLK_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_BLK_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_BLK_DZE2;
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
};
class DZE_Bag_Czech_DPM_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_DPM_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DPM_DZE1;
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
};
class DZE_Bag_Czech_DPM_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_DPM_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DPM_DZE2;
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
};
class DZE_Bag_Czech_FIN_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_FIN_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_FIN_DZE1;
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
};
class DZE_Bag_Czech_FIN_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_FIN_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_FIN_DZE2;
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
};
class DZE_Bag_Czech_MTC_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_MTC_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MTC_DZE1;
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
};
class DZE_Bag_Czech_MTC_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_MTC_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MTC_DZE2;
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
};
class DZE_Bag_Czech_NOR_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_NOR_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_NOR_DZE1;
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
};
class DZE_Bag_Czech_NOR_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_NOR_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_NOR_DZE2;
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
};
class DZE_Bag_Czech_WIN_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_WIN_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_WIN_DZE1;
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
};
class DZE_Bag_Czech_WIN_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_WIN_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_WIN_DZE2;
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
};
class DZE_Bag_Czech_ATC_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_ATC_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_ATC_DZE1;
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
};
class DZE_Bag_Czech_ATC_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_ATC_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_ATC_DZE2;
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
};
class DZE_Bag_Czech_MTL_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_MTL_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MTL_DZE1;
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
};
class DZE_Bag_Czech_MTL_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_MTL_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MTL_DZE2;
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
};
class DZE_Bag_Czech_FTN_1 : DZE_Bag_Czech_OD_1 		//new LEN mod Czech Pack variants
{
	displayName = $STR_BACKPACK_NAME_CZECH_FTN_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_FTN_DZE1;
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
};
class DZE_Bag_Czech_FTN_2 : DZE_Bag_Czech_OD_2
{
	displayName = $STR_BACKPACK_NAME_CZECH_FTN_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_FTN_DZE2;
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
};
class DZE_Bag_Wanderer_1 : DZE_Bag_Base 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO3_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO3_DZE1;
	model = "\ice_apo_resistance\Backpack3.p3d";
	picture = "\ice_apo_resistance\icons\backpack3_ca.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Wanderer_2 : DZE_Bag_Wanderer_1
{
	displayname = $STR_BACKPACK_NAME_APO3_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO3_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Legend_1 : DZE_Bag_Base 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO4_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO4_DZE1;
	model = "\ice_apo_resistance\Backpack2.p3d";
	picture = "\ice_apo_resistance\icons\backpack2_ca.paa";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Legend_2 : DZE_Bag_Legend_1
{
	displayname = $STR_BACKPACK_NAME_APO4_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO4_DZE2;
	transportMaxWeapons = 16;
	transportMaxMagazines = 80;
};
class DZE_Bag_Coyote_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	displayname = $STR_BACKPACK_NAME_COYOTE_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DZE1;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Coyote_2 : DZE_Bag_Coyote_1
{
	displayname = $STR_BACKPACK_NAME_COYOTE_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DZE2;
	transportMaxWeapons = 16;
	transportMaxMagazines = 80;
};
class DZE_Bag_Coyote_Des_1: DZE_Bag_Coyote_1		//new KSK mod coyote backpack variant
{
	displayName = $STR_BACKPACK_NAME_COYOTE_DES_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DES_DZE1;
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
};
class DZE_Bag_Coyote_Des_2 : DZE_Bag_Coyote_2
{
	displayName = $STR_BACKPACK_NAME_COYOTE_DES_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DES_DZE2;
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
};
class DZE_Bag_Coyote_Wdl_1: DZE_Bag_Coyote_1		//new KSK mod coyote backpack variant
{
	displayName = $STR_BACKPACK_NAME_COYOTE_WDL_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_WDL_DZE1;
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
};
class DZE_Bag_Coyote_Wdl_2 : DZE_Bag_Coyote_2
{
	displayName = $STR_BACKPACK_NAME_COYOTE_WDL_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_WDL_DZE2;
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
};
class DZE_Bag_Coyote_Camping_1: DZE_Bag_Coyote_1
{
	displayName = $STR_BACKPACK_NAME_COYOTE_CAMPING_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_CAMPING_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02";
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
};
class DZE_Bag_Coyote_Camping_2 : DZE_Bag_Coyote_2
{
	displayName = $STR_BACKPACK_NAME_COYOTE_CAMPING_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_CAMPING_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02";
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
};
class DZE_Bag_Gunbag_L_1 : DZE_Bag_Base
{
	scope = 2;
	picture = "\ca\weapons_e\data\icons\staticX_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d";
	displayname = $STR_EPOCH_PACK_LGB_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB_DZE1;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Gunbag_L_2 : DZE_Bag_Gunbag_L_1
{
	displayname = $STR_EPOCH_PACK_LGB_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB_DZE2;
	transportMaxWeapons = 16;
	transportMaxMagazines = 80;
};

// DayZ Epoch 108 backpack classes; models and textures remain in dayz_epoch_108_backpacks.
//new epoch 108 classes (DZE1 = standard, DZE2 = upgraded)
class DZE_Bag_Army_XL1_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo1_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo1_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo1.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo1_2 : DZE_Bag_Army_XL1_Camo1_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo1_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo1_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo2_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo2_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo2.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo2_2 : DZE_Bag_Army_XL1_Camo2_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo2_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo2_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo3_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo3_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo3.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo3_2 : DZE_Bag_Army_XL1_Camo3_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo3_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo3_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo4_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo4_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo4.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo4_2 : DZE_Bag_Army_XL1_Camo4_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo4_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo4_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo5_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo5_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo5.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo5_2 : DZE_Bag_Army_XL1_Camo5_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo5_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo5_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo6_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo6_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo6.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo6_2 : DZE_Bag_Army_XL1_Camo6_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Camo6_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo6_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Olive_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Olive_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Olive.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Olive_2 : DZE_Bag_Army_XL1_Olive_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Olive_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Olive_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Brown_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Brown.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Brown_2 : DZE_Bag_Army_XL1_Brown_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Brown_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Tan_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Tan.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Tan_2 : DZE_Bag_Army_XL1_Tan_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Tan_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Black_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Black.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Black_2 : DZE_Bag_Army_XL1_Black_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Black_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_White_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_White_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_White.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_White_2 : DZE_Bag_Army_XL1_White_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge1_White_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_White_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_L_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_2 : DZE_Bag_Army_L_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_White_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_White_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_White.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_White_2 : DZE_Bag_Army_L_White_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_White_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_White_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Olive_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Olive_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Olive.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Olive_2 : DZE_Bag_Army_L_Olive_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Olive_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Olive_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Brown_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Brown.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Brown_2 : DZE_Bag_Army_L_Brown_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Brown_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Tan_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Tan.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Tan_2 : DZE_Bag_Army_L_Tan_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Tan_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Black_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Black.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Black_2 : DZE_Bag_Army_L_Black_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Black_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo1_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo1_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo1.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo1_2 : DZE_Bag_Army_L_Camo1_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo1_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo1_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo2_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo2_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo2.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo2_2 : DZE_Bag_Army_L_Camo2_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo2_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo2_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo3_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo3_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo3.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo3_2 : DZE_Bag_Army_L_Camo3_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo3_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo3_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo4_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo4_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo4.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo4_2 : DZE_Bag_Army_L_Camo4_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo4_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo4_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo5_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo5_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo5.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo5_2 : DZE_Bag_Army_L_Camo5_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo5_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo5_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo6_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo6_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo6.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo6_2 : DZE_Bag_Army_L_Camo6_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Large_Camo6_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo6_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_M1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Medium_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M1_2 : DZE_Bag_Army_M1_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Medium_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_M2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Medium2_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium2_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium2.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M2_2 : DZE_Bag_Army_M2_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Medium2_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium2_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_M3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Medium3_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium3_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium3_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium3.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M3_2 : DZE_Bag_Army_M3_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Medium3_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium3_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_M4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Medium4_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium4_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium4_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium4.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M4_2 : DZE_Bag_Army_M4_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Medium4_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium4_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_M5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Medium5_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium5_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium5_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium5.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M5_2 : DZE_Bag_Army_M5_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Medium5_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium5_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_S1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Small_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Small_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_small_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Small.p3d";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_S1_2 : DZE_Bag_Army_S1_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Small_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Small_DZE2;
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_Army_S2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_Small2_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Small2_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_small2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Small2.p3d";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_S2_2 : DZE_Bag_Army_S2_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_Small2_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Small2_DZE2;
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_Canvas_L_Green_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Canvas_Bag_Large_Green1_DZE1;
	descriptionShort = $STR_DZ_DESC_Canvas_Bag_Large_Green1_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\canvas_backpack_large_green_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Canvas_Bag_Large_Green1.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Canvas_L_Green_2 : DZE_Bag_Canvas_L_Green_1 {
	displayName = $STR_DZ_NAME_Canvas_Bag_Large_Green1_DZE2;
	descriptionShort = $STR_DZ_DESC_Canvas_Bag_Large_Green1_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Canvas_M_Green_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Canvas_Bag_Medium_Green1_DZE1;
	descriptionShort = $STR_DZ_DESC_Canvas_Bag_Medium_Green1_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\canvas_backpack_medium_green_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Canvas_Bag_Medium_Green1.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Canvas_M_Green_2 : DZE_Bag_Canvas_M_Green_1 {
	displayName = $STR_DZ_NAME_Canvas_Bag_Medium_Green1_DZE2;
	descriptionShort = $STR_DZ_DESC_Canvas_Bag_Medium_Green1_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Olive_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_olive_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Olive_2 : DZE_Bag_Gunbag_Olive_1 {
	displayName = $STR_DZ_NAME_Gunbag_Olive_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Olive_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_White_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_white_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_White_2 : DZE_Bag_Gunbag_White_1 {
	displayName = $STR_DZ_NAME_Gunbag_White_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_White_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_tan_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Tan_2 : DZE_Bag_Gunbag_Tan_1 {
	displayName = $STR_DZ_NAME_Gunbag_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Tan_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_brown_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Brown_2 : DZE_Bag_Gunbag_Brown_1 {
	displayName = $STR_DZ_NAME_Gunbag_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Brown_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_black_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Black_2 : DZE_Bag_Gunbag_Black_1 {
	displayName = $STR_DZ_NAME_Gunbag_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Black_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Camo1_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo1_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo1_2 : DZE_Bag_Gunbag_Camo1_1 {
	displayName = $STR_DZ_NAME_Gunbag_Camo1_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo1_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Camo2_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo2_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo2_2 : DZE_Bag_Gunbag_Camo2_1 {
	displayName = $STR_DZ_NAME_Gunbag_Camo2_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo2_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Camo3_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo3_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo3_2 : DZE_Bag_Gunbag_Camo3_1 {
	displayName = $STR_DZ_NAME_Gunbag_Camo3_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo3_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Camo4_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo4_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo4_2 : DZE_Bag_Gunbag_Camo4_1 {
	displayName = $STR_DZ_NAME_Gunbag_Camo4_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo4_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Camo5_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo5_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo5_2 : DZE_Bag_Gunbag_Camo5_1 {
	displayName = $STR_DZ_NAME_Gunbag_Camo5_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo5_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_Camo6_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo6_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo6_2 : DZE_Bag_Gunbag_Camo6_1 {
	displayName = $STR_DZ_NAME_Gunbag_Camo6_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo6_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Olive_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_olive_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Olive_2 : DZE_Bag_Gunbag_L_Olive_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Olive_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Olive_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_White_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_white_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_White_2 : DZE_Bag_Gunbag_L_White_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_White_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_White_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_tan_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Tan_2 : DZE_Bag_Gunbag_L_Tan_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Tan_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_brown_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Brown_2 : DZE_Bag_Gunbag_L_Brown_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Brown_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_black_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Black_2 : DZE_Bag_Gunbag_L_Black_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Black_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo1_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo1_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo1_2 : DZE_Bag_Gunbag_L_Camo1_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo1_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo1_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo2_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo2_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo2_2 : DZE_Bag_Gunbag_L_Camo2_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo2_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo2_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo3_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo3_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo3_2 : DZE_Bag_Gunbag_L_Camo3_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo3_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo3_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo4_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo4_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo4_2 : DZE_Bag_Gunbag_L_Camo4_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo4_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo4_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo5_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo5_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo5_2 : DZE_Bag_Gunbag_L_Camo5_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo5_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo5_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo6_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo6_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo6_2 : DZE_Bag_Gunbag_L_Camo6_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_Camo6_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo6_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo1_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo1_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo1_2 : DZE_Bag_Gunbag_HexCamo1_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo1_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo1_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo1_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo1_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo1_2 : DZE_Bag_Gunbag_L_HexCamo1_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo1_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo1_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo2_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo2_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo2_2 : DZE_Bag_Gunbag_HexCamo2_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo2_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo2_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo2_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo2_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo2_2 : DZE_Bag_Gunbag_L_HexCamo2_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo2_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo2_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo3_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo3_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo3_2 : DZE_Bag_Gunbag_HexCamo3_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo3_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo3_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo3_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo3_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo3_2 : DZE_Bag_Gunbag_L_HexCamo3_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo3_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo3_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo4_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo4_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo4_2 : DZE_Bag_Gunbag_HexCamo4_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo4_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo4_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo4_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo4_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo4_2 : DZE_Bag_Gunbag_L_HexCamo4_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo4_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo4_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo5_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo5_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo5_2 : DZE_Bag_Gunbag_HexCamo5_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo5_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo5_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo5_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo5_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo5_2 : DZE_Bag_Gunbag_L_HexCamo5_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo5_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo5_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo6_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo6_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo6_2 : DZE_Bag_Gunbag_HexCamo6_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo6_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo6_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo6_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo6_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo6_2 : DZE_Bag_Gunbag_L_HexCamo6_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo6_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo6_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo7_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo7_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo7_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo7_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo7_2 : DZE_Bag_Gunbag_HexCamo7_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo7_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo7_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo7_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo7_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo7_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo7_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo7_2 : DZE_Bag_Gunbag_L_HexCamo7_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo7_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo7_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo8_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo8_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo8_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo8.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo8_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo8_2 : DZE_Bag_Gunbag_HexCamo8_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo8_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo8_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo8_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo8_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo8_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo8.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo8_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo8_2 : DZE_Bag_Gunbag_L_HexCamo8_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo8_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo8_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo9_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo9_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo9_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo9.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo9_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo9_2 : DZE_Bag_Gunbag_HexCamo9_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo9_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo9_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo9_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo9_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo9_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo9.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo9_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo9_2 : DZE_Bag_Gunbag_L_HexCamo9_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo9_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo9_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo10_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo10_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo10_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo10.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo10_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo10_2 : DZE_Bag_Gunbag_HexCamo10_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo10_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo10_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo10_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo10_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo10_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo10.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo10_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo10_2 : DZE_Bag_Gunbag_L_HexCamo10_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo10_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo10_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo11_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo11_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo11_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo11.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo11_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo11_2 : DZE_Bag_Gunbag_HexCamo11_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo11_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo11_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo11_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo11_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo11_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo11.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo11_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo11_2 : DZE_Bag_Gunbag_L_HexCamo11_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo11_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo11_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo12_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Gunbag_HexCamo12_DZE1;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo12_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo12.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo12_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo12_2 : DZE_Bag_Gunbag_HexCamo12_1 {
	displayName = $STR_DZ_NAME_Gunbag_HexCamo12_DZE2;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo12_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo12_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo12_DZE1;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo12_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo12.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo12_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo12_2 : DZE_Bag_Gunbag_L_HexCamo12_1 {
	displayName = $STR_DZ_NAME_Large_Gunbag_HexCamo12_DZE2;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo12_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Patrol_CamoGreen1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Patrol_Pack_CamoGreen1_DZE1;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_CamoGreen1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_CamoGreen1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrol_pack_camogreen_ui.paa";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Patrol_CamoGreen1_2 : DZE_Bag_Patrol_CamoGreen1_1 {
	displayName = $STR_DZ_NAME_Patrol_Pack_CamoGreen1_DZE2;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_CamoGreen1_DZE2;
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_Patrol_CamoGreen1_Enh_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Patrol_Pack_CamoGreen1_Enhanced_DZE1;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_CamoGreen1_Enhanced_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_CamoGreen1_Enhanced.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrolpack_enhanced_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Patrol_CamoGreen1_Enh_2 : DZE_Bag_Patrol_CamoGreen1_Enh_1 {
	displayName = $STR_DZ_NAME_Patrol_Pack_CamoGreen1_Enhanced_DZE2;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_CamoGreen1_Enhanced_DZE2;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Patrol_Green1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Patrol_Pack_Green1_DZE1;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_Green1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_Green1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrol_pack_green_ui.paa";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Patrol_Green1_2 : DZE_Bag_Patrol_Green1_1 {
	displayName = $STR_DZ_NAME_Patrol_Pack_Green1_DZE2;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_Green1_DZE2;
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_TLR_L_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Tan_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Tan.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_TLR_L_Tan_2 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Tan_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo1_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo1_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo1.p3d";
};
class DZE_Bag_TLR_L_Camo1_2 : DZE_Bag_TLR_L_Camo1_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo1_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo1_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_White_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_White_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_White.p3d";
};
class DZE_Bag_TLR_L_White_2 : DZE_Bag_TLR_L_White_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_White_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_White_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Green_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Green_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Green_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Green.p3d";
};
class DZE_Bag_TLR_L_Green_2 : DZE_Bag_TLR_L_Green_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Green_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Green_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Black_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Black.p3d";
};
class DZE_Bag_TLR_L_Black_2 : DZE_Bag_TLR_L_Black_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Black_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Brown_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Brown.p3d";
};
class DZE_Bag_TLR_L_Brown_2 : DZE_Bag_TLR_L_Brown_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Brown_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo2_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo2_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo2.p3d";
};
class DZE_Bag_TLR_L_Camo2_2 : DZE_Bag_TLR_L_Camo2_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo2_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo2_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo3_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo3_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo3.p3d";
};
class DZE_Bag_TLR_L_Camo3_2 : DZE_Bag_TLR_L_Camo3_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo3_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo3_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo4_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo4_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo4.p3d";
};
class DZE_Bag_TLR_L_Camo4_2 : DZE_Bag_TLR_L_Camo4_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo4_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo4_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo5_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo5_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo5.p3d";
};
class DZE_Bag_TLR_L_Camo5_2 : DZE_Bag_TLR_L_Camo5_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo5_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo5_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo6_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo6_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo6.p3d";
};
class DZE_Bag_TLR_L_Camo6_2 : DZE_Bag_TLR_L_Camo6_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo6_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo6_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo7_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo7_DZE1;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo7_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo7.p3d";
};
class DZE_Bag_TLR_L_Camo7_2 : DZE_Bag_TLR_L_Camo7_1 {
	displayName = $STR_DZ_NAME_TLR_Backpack_Large_Camo7_DZE2;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo7_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_LV_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_LV_Backpack_DZE1;
	descriptionShort = $STR_DZ_DESC_LV_Backpack_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\lv_backpack_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_LV_Backpack.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_LV_2 : DZE_Bag_LV_1 {
	displayName = $STR_DZ_NAME_LV_Backpack_DZE2;
	descriptionShort = $STR_DZ_DESC_LV_Backpack_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Hunting_Backpack_Olive_DZE1;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Olive_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_olive_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Olive.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_Olive_2 : DZE_Bag_Hunting_Olive_1 {
	displayName = $STR_DZ_NAME_Hunting_Backpack_Olive_DZE2;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Olive_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Hunting_Backpack_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Brown_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_brown_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Brown.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_Brown_2 : DZE_Bag_Hunting_Brown_1 {
	displayName = $STR_DZ_NAME_Hunting_Backpack_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Brown_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Hunting_Backpack_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Black_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_black_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Black.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_Black_2 : DZE_Bag_Hunting_Black_1 {
	displayName = $STR_DZ_NAME_Hunting_Backpack_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Black_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Hunting_Backpack_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Tan_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_tan_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Tan.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_Tan_2 : DZE_Bag_Hunting_Tan_1 {
	displayName = $STR_DZ_NAME_Hunting_Backpack_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Tan_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Hunting_Backpack_White_DZE1;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_White_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_white_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_White.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_White_2 : DZE_Bag_Hunting_White_1 {
	displayName = $STR_DZ_NAME_Hunting_Backpack_White_DZE2;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_White_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
//smd backpacks
class DZE_Bag_Czech_Atacs_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CzechBackpack_Atacs_DZE1;
	descriptionShort = $STR_DZ_DESC_CzechBackpack_Atacs_DZE1;
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	picture = "\dayz_epoch_108_backpacks\data\dze_czechbackpack_atacs1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CzechBackpack_Atacs1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Czech_Atacs_2 : DZE_Bag_Czech_Atacs_1 {
	displayname = $STR_DZ_NAME_CzechBackpack_Atacs_DZE2;
	descriptionShort = $STR_DZ_DESC_CzechBackpack_Atacs_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Coyote_Atacs_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_Atacs_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_Atacs_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_atacs1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_Atacs1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_Atacs_2 : DZE_Bag_Coyote_Atacs_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_Atacs_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_Atacs_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_BlueGrey_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_BlueGrey_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_BlueGrey_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_bluegrey1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_BlueGrey1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_BlueGrey_2 : DZE_Bag_Coyote_BlueGrey_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_BlueGrey_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_BlueGrey_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_BlueGreyLogo_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_BlueGreyLogo_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_BlueGreyLogo_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_bluegreylogo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_BlueGreyLogo1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_BlueGreyLogo_2 : DZE_Bag_Coyote_BlueGreyLogo_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_BlueGreyLogo_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_BlueGreyLogo_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_PurpleBlack_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_PurpleBlack_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlack_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purpleblack1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlack1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_PurpleBlack_2 : DZE_Bag_Coyote_PurpleBlack_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_PurpleBlack_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlack_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_PurpleBlackLogo_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_PurpleBlackLogo_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlackLogo_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purpleblacklogo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlackLogo1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_PurpleBlackLogo_2 : DZE_Bag_Coyote_PurpleBlackLogo_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_PurpleBlackLogo_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlackLogo_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_PurpleBlueGrey_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_PurpleBlueGrey_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlueGrey_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purplebluegrey1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlueGrey1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_PurpleBlueGrey_2 : DZE_Bag_Coyote_PurpleBlueGrey_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_PurpleBlueGrey_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlueGrey_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_RedGrey_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_RedGrey_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGrey_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgrey1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGrey1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_RedGrey_2 : DZE_Bag_Coyote_RedGrey_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_RedGrey_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGrey_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_RedGreyLogo_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_RedGreyLogo_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGreyLogo_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgreylogo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGreyLogo1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_RedGreyLogo_2 : DZE_Bag_Coyote_RedGreyLogo_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_RedGreyLogo_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGreyLogo_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_RedGrey2_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_RedGrey2_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGrey2_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgrey21_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGrey21.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_RedGrey2_2 : DZE_Bag_Coyote_RedGrey2_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_RedGrey2_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGrey2_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_RedGreyLogo2_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_RedGreyLogo2_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGreyLogo2_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgreylogo21_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGreyLogo21.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_RedGreyLogo2_2 : DZE_Bag_Coyote_RedGreyLogo2_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_RedGreyLogo2_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGreyLogo2_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_TealGrey_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_TealGrey_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_TealGrey_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_tealgrey1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_TealGrey1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_TealGrey_2 : DZE_Bag_Coyote_TealGrey_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_TealGrey_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_TealGrey_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_TealGreyLogo_1 : DZE_Bag_Base {
	scope = 2;
	displayname = $STR_DZ_NAME_CoyoteBackpack_TealGreyLogo_DZE1;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_TealGreyLogo_DZE1;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_tealgreylogo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_TealGreyLogo1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_TealGreyLogo_2 : DZE_Bag_Coyote_TealGreyLogo_1 {
	displayname = $STR_DZ_NAME_CoyoteBackpack_TealGreyLogo_DZE2;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_TealGreyLogo_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Airwaves_Camo1_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo1_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo1_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo1.p3d";
};
class DZE_Bag_Airwaves_Camo1_2 : DZE_Bag_Airwaves_Camo1_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo1_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo1_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo2_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo2_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo2_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo2.p3d";
};
class DZE_Bag_Airwaves_Camo2_2 : DZE_Bag_Airwaves_Camo2_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo2_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo2_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo3_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo3_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo3_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo3_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo3.p3d";
};
class DZE_Bag_Airwaves_Camo3_2 : DZE_Bag_Airwaves_Camo3_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo3_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo3_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo4_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo4_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo4_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo4_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo4.p3d";
};
class DZE_Bag_Airwaves_Camo4_2 : DZE_Bag_Airwaves_Camo4_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo4_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo4_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo5_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo5_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo5_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo5_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo5.p3d";
};
class DZE_Bag_Airwaves_Camo5_2 : DZE_Bag_Airwaves_Camo5_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo5_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo5_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo6_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo6_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo6_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo6_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo6.p3d";
};
class DZE_Bag_Airwaves_Camo6_2 : DZE_Bag_Airwaves_Camo6_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Camo6_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo6_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Olive_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Olive_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Olive_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_olive_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Olive.p3d";
};
class DZE_Bag_Airwaves_Olive_2 : DZE_Bag_Airwaves_Olive_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Olive_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Olive_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Brown_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Brown_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_brown_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Brown.p3d";
};
class DZE_Bag_Airwaves_Brown_2 : DZE_Bag_Airwaves_Brown_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Brown_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Tan_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Tan_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_tan_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Tan.p3d";
};
class DZE_Bag_Airwaves_Tan_2 : DZE_Bag_Airwaves_Tan_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Tan_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Black_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Black_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_black_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Black.p3d";
};
class DZE_Bag_Airwaves_Black_2 : DZE_Bag_Airwaves_Black_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Black_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_White_1 : DZE_Bag_Airwaves_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_White_DZE1;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_White_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_white_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_White.p3d";
};
class DZE_Bag_Airwaves_White_2 : DZE_Bag_Airwaves_White_1
{
	displayName = $STR_DZ_NAME_AirwavesPack_White_DZE2;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_White_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Army_XL2_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Olive_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Olive_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Olive.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Olive_2 : DZE_Bag_Army_XL2_Olive_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Olive_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Olive_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_White_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_White_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_white_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_White.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_White_2 : DZE_Bag_Army_XL2_White_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_White_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_White_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Tan_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_tan_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Tan.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Tan_2 : DZE_Bag_Army_XL2_Tan_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Tan_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Brown_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_brown_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Brown.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Brown_2 : DZE_Bag_Army_XL2_Brown_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Brown_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Black_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_black_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Black.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Black_2 : DZE_Bag_Army_XL2_Black_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Black_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo1_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo1_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo1.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo1_2 : DZE_Bag_Army_XL2_Camo1_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo1_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo1_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo2_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo2_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo2.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo2_2 : DZE_Bag_Army_XL2_Camo2_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo2_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo2_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo3_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo3_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo3_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo3.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo3_2 : DZE_Bag_Army_XL2_Camo3_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo3_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo3_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo4_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo4_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo4_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo4.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo4_2 : DZE_Bag_Army_XL2_Camo4_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo4_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo4_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo5_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo5_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo5_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo5.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo5_2 : DZE_Bag_Army_XL2_Camo5_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo5_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo5_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo6_DZE1;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo6_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo6_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo6.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo6_2 : DZE_Bag_Army_XL2_Camo6_1 {
	displayName = $STR_DZ_NAME_Army_Backpack_XLarge2_Camo6_DZE2;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo6_DZE2;
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_ALICE_Base : DZE_Bag_Base {
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	transportMaxMagazines = 10;
	transportMaxWeapons = 2;
	scope = 0;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_ALICE_Black_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Black_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Black_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_black_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Black.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Black_2 : DZE_Bag_ALICE_Black_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Black_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Black_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Brown_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Brown_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Brown_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_brown_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Brown.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Brown_2 : DZE_Bag_ALICE_Brown_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Brown_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Brown_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Olive_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Olive_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Olive_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_olive_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Olive.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Olive_2 : DZE_Bag_ALICE_Olive_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Olive_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Olive_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Tan_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Tan_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Tan_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_tan_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Tan.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Tan_2 : DZE_Bag_ALICE_Tan_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Tan_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Tan_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_White_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_White_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_White_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_white_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_White.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_White_2 : DZE_Bag_ALICE_White_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_White_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_White_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo1_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo1_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo1_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo1.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo1_2 : DZE_Bag_ALICE_Camo1_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo1_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo1_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo2_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo2_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo2_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo2.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo2_2 : DZE_Bag_ALICE_Camo2_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo2_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo2_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo3_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo3_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo3_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo3_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo3.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo3_2 : DZE_Bag_ALICE_Camo3_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo3_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo3_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo4_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo4_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo4_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo4_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo4.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo4_2 : DZE_Bag_ALICE_Camo4_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo4_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo4_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo5_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo5_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo5_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo5_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo5.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo5_2 : DZE_Bag_ALICE_Camo5_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo5_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo5_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo6_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo6_DZE1;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo6_DZE1;
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo6_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo6.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo6_2 : DZE_Bag_ALICE_Camo6_1 {
	displayName = $STR_DZ_NAME_Alice_Backpack_Camo6_DZE2;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo6_DZE2;
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
