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
class DZE_Bag_Patrol_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	transportMaxMagazines = 30;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_PATROL_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PATROL_1";
	transportMaxWeapons = 5;
};
class DZE_Bag_Patrol_2 : DZE_Bag_Patrol_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_PATROL_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PATROL_2";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Gym_Camo_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GYMBAG_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GYMBAG_1";
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
};
class DZE_Bag_Gym_Camo_2 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GYMBAG_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GYMBAG_2";
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Gym_Green_1 : DZE_Bag_Gym_Camo_1 {
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
};
class DZE_Bag_Gym_Green_2 : DZE_Bag_Gym_Camo_2 {
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
};
class DZE_Bag_CzechPouch_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	transportmaxmagazines = 30;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_VEST_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_VEST_1";
	transportMaxWeapons = 5;
};
class DZE_Bag_CzechPouch_2 : DZE_Bag_CzechPouch_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_VEST_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_VEST_2";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Assault_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_ACU_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ACU_1";
	transportMaxWeapons = 5;
	transportMaxMagazines = 30;
};
class DZE_Bag_Assault_2 : DZE_Bag_Assault_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_ACU_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ACU_2";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Terminal_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\dayz_epoch_c\icons\backpacks\terminalpack.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV";
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_TERMINAL_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TERMINAL_1";
	transportMaxWeapons = 5;
	transportMaxMagazines = 30;
};
class DZE_Bag_Terminal_2 : DZE_Bag_Terminal_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_TERMINAL_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TERMINAL_2";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_Tiny_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_TINY_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TINY_1";
	picture = "\Ca\Weapons_ACR\Data\UI\picture_backpack_acr_rpg";
	model = "\Ca\Characters_ACR\backpack_acr_rpg";
	transportMaxWeapons = 5;
	transportMaxMagazines = 30;
};
class DZE_Bag_Tiny_2 : DZE_Bag_Tiny_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_TINY_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TINY_2";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class DZE_Bag_ALICE_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	transportMaxMagazines = 50;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_1";
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_2 : DZE_Bag_ALICE_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_TK_Assault_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	transportMaxMagazines = 40;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_SURVACU_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_SURVACU_1";
	transportMaxWeapons = 8;
};
class DZE_Bag_TK_Assault_2 : DZE_Bag_TK_Assault_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_SURVACU_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_SURVACU_2";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_School_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_SCHOOLBAG_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_SCHOOLBAG_1";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_School_2 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_SCHOOLBAG_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_SCHOOLBAG_2";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Compact_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d";
	transportMaxMagazines = 40;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COMPACT_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COMPACT_1";
	transportMaxWeapons = 8;
};
class DZE_Bag_Compact_2 : DZE_Bag_Compact_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COMPACT_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COMPACT_2";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_British_ACU_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	transportMaxMagazines = 40;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_BRITISH_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_BRITISH_1";
	transportMaxWeapons = 8;
};
class DZE_Bag_British_ACU_2 : DZE_Bag_British_ACU_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_BRITISH_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_BRITISH_2";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Gunbag_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\staticY_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d";
	transportMaxMagazines = 40;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_GB_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GB_1";
	transportMaxWeapons = 8;
};
class DZE_Bag_Gunbag_2 : DZE_Bag_Gunbag_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_GB_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GB_2";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Party_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_PARTYPACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PARTYPACK_1";
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_Party_2 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_PARTYPACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PARTYPACK_2";
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Night_1 : DZE_Bag_Base { //new ice apo resistance mod backpack
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_APO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_APO1_1";
	model = "\ice_apo_resistance\Backpack1.p3d";
	picture = "\ice_apo_resistance\icons\backpack1_ca.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Night_2 : DZE_Bag_Night_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_APO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_APO1_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Survivor_1 : DZE_Bag_Base { //new ice apo resistance mod backpack
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_APO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_APO2_1";
	model = "\ice_apo_resistance\Backpack4.p3d";
	picture = "\ice_apo_resistance\icons\backpack4_ca.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Survivor_2 : DZE_Bag_Survivor_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_APO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_APO2_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_1";
	model = "\z\addons\dayz_epoch_u\clothes\dze_wavesbag_01.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\airwavespack.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Airwaves_2 : DZE_Bag_Airwaves_1 {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Czech_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_1";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Czech_2 : DZE_Bag_Czech_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Czech_Camping_1 : DZE_Bag_Czech_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_CAMPING_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_CAMPING_1";
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01";
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
};
class DZE_Bag_Czech_Camping_2 : DZE_Bag_Czech_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_CAMPING_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_CAMPING_2";
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01";
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
};
class DZE_Bag_Czech_OD_1 : DZE_Bag_Czech_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_OD_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_OD_1";
	scope = 2;
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
};
class DZE_Bag_Czech_OD_2 : DZE_Bag_Czech_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_OD_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_OD_2";
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
};
class DZE_Bag_Czech_DES_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_DES_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_DES_1";
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
};
class DZE_Bag_Czech_DES_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_DES_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_DES_2";
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
};
class DZE_Bag_Czech_3DES_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_3DES_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_3DES_1";
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
};
class DZE_Bag_Czech_3DES_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_3DES_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_3DES_2";
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
};
class DZE_Bag_Czech_WDL_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_WDL_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_WDL_1";
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
};
class DZE_Bag_Czech_WDL_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_WDL_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_WDL_2";
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
};
class DZE_Bag_Czech_MAR_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_MAR_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_MAR_1";
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
};
class DZE_Bag_Czech_MAR_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_MAR_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_MAR_2";
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
};
class DZE_Bag_Czech_DMAR_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_DMAR_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_DMAR_1";
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
};
class DZE_Bag_Czech_DMAR_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_DMAR_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_DMAR_2";
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
};
class DZE_Bag_Czech_UCP_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_UCP_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_UCP_1";
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
};
class DZE_Bag_Czech_UCP_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_UCP_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_UCP_2";
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
};
class DZE_Bag_Czech_6DES_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_6DES_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_6DES_1";
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
};
class DZE_Bag_Czech_6DES_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_6DES_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_6DES_2";
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
};
class DZE_Bag_Czech_TAK_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_TAK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_TAK_1";
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
};
class DZE_Bag_Czech_TAK_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_TAK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_TAK_2";
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
};
class DZE_Bag_Czech_NVG_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_NVG_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_NVG_1";
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
};
class DZE_Bag_Czech_NVG_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_NVG_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_NVG_2";
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
};
class DZE_Bag_Czech_BLK_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_BLK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_BLK_1";
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
};
class DZE_Bag_Czech_BLK_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_BLK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_BLK_2";
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
};
class DZE_Bag_Czech_DPM_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_DPM_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_DPM_1";
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
};
class DZE_Bag_Czech_DPM_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_DPM_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_DPM_2";
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
};
class DZE_Bag_Czech_FIN_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_FIN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_FIN_1";
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
};
class DZE_Bag_Czech_FIN_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_FIN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_FIN_2";
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
};
class DZE_Bag_Czech_MTC_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_MTC_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_MTC_1";
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
};
class DZE_Bag_Czech_MTC_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_MTC_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_MTC_2";
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
};
class DZE_Bag_Czech_NOR_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_NOR_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_NOR_1";
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
};
class DZE_Bag_Czech_NOR_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_NOR_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_NOR_2";
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
};
class DZE_Bag_Czech_WIN_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_WIN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_WIN_1";
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
};
class DZE_Bag_Czech_WIN_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_WIN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_WIN_2";
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
};
class DZE_Bag_Czech_ATC_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_ATC_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_ATC_1";
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
};
class DZE_Bag_Czech_ATC_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_ATC_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_ATC_2";
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
};
class DZE_Bag_Czech_MTL_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_MTL_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_MTL_1";
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
};
class DZE_Bag_Czech_MTL_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_MTL_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_MTL_2";
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
};
class DZE_Bag_Czech_FTN_1 : DZE_Bag_Czech_OD_1 { //new LEN mod Czech Pack variants
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_FTN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_FTN_1";
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
};
class DZE_Bag_Czech_FTN_2 : DZE_Bag_Czech_OD_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_FTN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_FTN_2";
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
};
class DZE_Bag_Wanderer_1 : DZE_Bag_Base { //new ice apo resistance mod backpack
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_APO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_APO3_1";
	model = "\ice_apo_resistance\Backpack3.p3d";
	picture = "\ice_apo_resistance\icons\backpack3_ca.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 50;
};
class DZE_Bag_Wanderer_2 : DZE_Bag_Wanderer_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_APO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_APO3_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Legend_1 : DZE_Bag_Base { //new ice apo resistance mod backpack
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_APO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_APO4_1";
	model = "\ice_apo_resistance\Backpack2.p3d";
	picture = "\ice_apo_resistance\icons\backpack2_ca.paa";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Legend_2 : DZE_Bag_Legend_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_APO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_APO4_2";
	transportMaxWeapons = 16;
	transportMaxMagazines = 80;
};
class DZE_Bag_Coyote_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_1";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Coyote_2 : DZE_Bag_Coyote_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_2";
	transportMaxWeapons = 16;
	transportMaxMagazines = 80;
};
class DZE_Bag_Coyote_Des_1: DZE_Bag_Coyote_1 { //new KSK mod coyote backpack variant
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_DES_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_DES_1";
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
};
class DZE_Bag_Coyote_Des_2 : DZE_Bag_Coyote_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_DES_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_DES_2";
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
};
class DZE_Bag_Coyote_Wdl_1: DZE_Bag_Coyote_1 { //new KSK mod coyote backpack variant
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_WDL_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_WDL_1";
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
};
class DZE_Bag_Coyote_Wdl_2 : DZE_Bag_Coyote_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_WDL_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_WDL_2";
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
};
class DZE_Bag_Coyote_Camping_1: DZE_Bag_Coyote_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_CAMPING_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_CAMPING_1";
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02";
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
};
class DZE_Bag_Coyote_Camping_2 : DZE_Bag_Coyote_2 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_CAMPING_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_CAMPING_2";
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02";
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
};
class DZE_Bag_Gunbag_L_1 : DZE_Bag_Base {
	scope = 2;
	picture = "\ca\weapons_e\data\icons\staticX_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d";
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_LGB_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LGB_1";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Gunbag_L_2 : DZE_Bag_Gunbag_L_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_LGB_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LGB_2";
	transportMaxWeapons = 16;
	transportMaxMagazines = 80;
};

// DayZ Epoch 108 backpack classes; models and textures remain in dayz_epoch_108_backpacks.
//new epoch 108 classes (DZE1 = standard, DZE2 = upgraded)
class DZE_Bag_Army_XL1_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO1_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo1.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo1_2 : DZE_Bag_Army_XL1_Camo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO1_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO2_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo2.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo2_2 : DZE_Bag_Army_XL1_Camo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO2_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO3_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo3.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo3_2 : DZE_Bag_Army_XL1_Camo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO3_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO4_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo4.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo4_2 : DZE_Bag_Army_XL1_Camo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO4_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO5_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo5.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo5_2 : DZE_Bag_Army_XL1_Camo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO5_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO6_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo6.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Camo6_2 : DZE_Bag_Army_XL1_Camo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_CAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_CAMO6_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_OLIVE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_OLIVE_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Olive.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Olive_2 : DZE_Bag_Army_XL1_Olive_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_OLIVE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_OLIVE_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_BROWN_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Brown.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Brown_2 : DZE_Bag_Army_XL1_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_BROWN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_TAN_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Tan.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Tan_2 : DZE_Bag_Army_XL1_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_TAN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_BLACK_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Black.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_Black_2 : DZE_Bag_Army_XL1_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_BLACK_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL1_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_WHITE_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_White.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL1_White_2 : DZE_Bag_Army_XL1_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE1_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE1_WHITE_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_L_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_2 : DZE_Bag_Army_L_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_WHITE_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_White.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_White_2 : DZE_Bag_Army_L_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_WHITE_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_OLIVE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_OLIVE_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Olive.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Olive_2 : DZE_Bag_Army_L_Olive_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_OLIVE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_OLIVE_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_BROWN_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Brown.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Brown_2 : DZE_Bag_Army_L_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_BROWN_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_TAN_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Tan.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Tan_2 : DZE_Bag_Army_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_TAN_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_BLACK_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Black.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Black_2 : DZE_Bag_Army_L_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_BLACK_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO1_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo1.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo1_2 : DZE_Bag_Army_L_Camo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO1_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO2_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo2.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo2_2 : DZE_Bag_Army_L_Camo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO2_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO3_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo3.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo3_2 : DZE_Bag_Army_L_Camo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO3_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO4_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo4.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo4_2 : DZE_Bag_Army_L_Camo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO4_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO5_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo5.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo5_2 : DZE_Bag_Army_L_Camo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO5_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_L_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO6_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo6.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_L_Camo6_2 : DZE_Bag_Army_L_Camo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_LARGE_CAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_LARGE_CAMO6_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Army_M1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M1_2 : DZE_Bag_Army_M1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_M2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM2_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium2.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M2_2 : DZE_Bag_Army_M2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM2_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_M3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM3_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium3_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium3.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M3_2 : DZE_Bag_Army_M3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM3_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_M4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM4_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium4_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium4.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M4_2 : DZE_Bag_Army_M4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM4_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_M5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM5_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium5_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium5.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_M5_2 : DZE_Bag_Army_M5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_MEDIUM5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_MEDIUM5_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Army_S1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_SMALL_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_SMALL_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_small_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Small.p3d";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_S1_2 : DZE_Bag_Army_S1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_SMALL_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_SMALL_2";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_Army_S2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_SMALL2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_SMALL2_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_small2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Small2.p3d";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_S2_2 : DZE_Bag_Army_S2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_SMALL2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_SMALL2_2";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_Canvas_L_Green_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CANVAS_BAG_LARGE_GREEN1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CANVAS_BAG_LARGE_GREEN1_1";
	picture = "\dayz_epoch_108_backpacks\data\canvas_backpack_large_green_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Canvas_Bag_Large_Green1.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Canvas_L_Green_2 : DZE_Bag_Canvas_L_Green_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CANVAS_BAG_LARGE_GREEN1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CANVAS_BAG_LARGE_GREEN1_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Canvas_M_Green_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CANVAS_BAG_MEDIUM_GREEN1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CANVAS_BAG_MEDIUM_GREEN1_1";
	picture = "\dayz_epoch_108_backpacks\data\canvas_backpack_medium_green_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Canvas_Bag_Medium_Green1.p3d";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Canvas_M_Green_2 : DZE_Bag_Canvas_M_Green_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_CANVAS_BAG_MEDIUM_GREEN1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CANVAS_BAG_MEDIUM_GREEN1_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_OLIVE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_OLIVE_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_olive_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Olive_2 : DZE_Bag_Gunbag_Olive_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_OLIVE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_OLIVE_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_WHITE_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_white_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_White_2 : DZE_Bag_Gunbag_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_WHITE_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_TAN_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_tan_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Tan_2 : DZE_Bag_Gunbag_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_TAN_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_BROWN_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_brown_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Brown_2 : DZE_Bag_Gunbag_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_BROWN_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_BLACK_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_black_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Black_2 : DZE_Bag_Gunbag_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_BLACK_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO1_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo1_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo1_2 : DZE_Bag_Gunbag_Camo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO1_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO2_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo2_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo2_2 : DZE_Bag_Gunbag_Camo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO2_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO3_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo3_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo3_2 : DZE_Bag_Gunbag_Camo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO3_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO4_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo4_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo4_2 : DZE_Bag_Gunbag_Camo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO4_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO5_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo5_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo5_2 : DZE_Bag_Gunbag_Camo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO5_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO6_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo6_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_Camo6_2 : DZE_Bag_Gunbag_Camo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_CAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_CAMO6_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_OLIVE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_OLIVE_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_olive_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Olive_2 : DZE_Bag_Gunbag_L_Olive_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_OLIVE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_OLIVE_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_WHITE_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_white_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_White_2 : DZE_Bag_Gunbag_L_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_WHITE_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_TAN_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_tan_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Tan_2 : DZE_Bag_Gunbag_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_TAN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_BROWN_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_brown_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Brown_2 : DZE_Bag_Gunbag_L_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_BROWN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_BLACK_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_black_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Black_2 : DZE_Bag_Gunbag_L_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_BLACK_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO1_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo1_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo1_2 : DZE_Bag_Gunbag_L_Camo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO1_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO2_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo2_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo2_2 : DZE_Bag_Gunbag_L_Camo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO2_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO3_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo3_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo3_2 : DZE_Bag_Gunbag_L_Camo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO3_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO4_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo4_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo4_2 : DZE_Bag_Gunbag_L_Camo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO4_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO5_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo5_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo5_2 : DZE_Bag_Gunbag_L_Camo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO5_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_L_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO6_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo6_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_Camo6_2 : DZE_Bag_Gunbag_L_Camo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_CAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_CAMO6_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO1_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo1_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo1_2 : DZE_Bag_Gunbag_HexCamo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO1_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO1_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo1_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo1_2 : DZE_Bag_Gunbag_L_HexCamo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO1_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO2_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo2_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo2_2 : DZE_Bag_Gunbag_HexCamo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO2_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO2_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo2_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo2_2 : DZE_Bag_Gunbag_L_HexCamo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO2_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO3_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo3_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo3_2 : DZE_Bag_Gunbag_HexCamo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO3_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO3_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo3_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo3_2 : DZE_Bag_Gunbag_L_HexCamo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO3_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO4_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo4_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo4_2 : DZE_Bag_Gunbag_HexCamo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO4_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO4_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo4_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo4_2 : DZE_Bag_Gunbag_L_HexCamo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO4_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO5_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo5_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo5_2 : DZE_Bag_Gunbag_HexCamo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO5_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO5_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo5_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo5_2 : DZE_Bag_Gunbag_L_HexCamo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO5_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO6_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo6_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo6_2 : DZE_Bag_Gunbag_HexCamo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO6_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO6_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo6_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo6_2 : DZE_Bag_Gunbag_L_HexCamo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO6_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo7_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO7_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO7_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo7_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo7_2 : DZE_Bag_Gunbag_HexCamo7_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO7_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO7_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo7_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO7_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO7_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo7_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo7_2 : DZE_Bag_Gunbag_L_HexCamo7_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO7_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO7_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo8_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO8_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO8_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo8.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo8_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo8_2 : DZE_Bag_Gunbag_HexCamo8_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO8_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO8_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo8_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO8_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO8_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo8.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo8_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo8_2 : DZE_Bag_Gunbag_L_HexCamo8_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO8_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO8_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo9_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO9_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO9_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo9.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo9_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo9_2 : DZE_Bag_Gunbag_HexCamo9_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO9_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO9_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo9_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO9_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO9_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo9.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo9_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo9_2 : DZE_Bag_Gunbag_L_HexCamo9_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO9_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO9_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo10_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO10_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO10_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo10.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo10_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo10_2 : DZE_Bag_Gunbag_HexCamo10_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO10_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO10_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo10_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO10_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO10_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo10.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo10_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo10_2 : DZE_Bag_Gunbag_L_HexCamo10_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO10_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO10_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo11_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO11_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO11_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo11.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo11_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo11_2 : DZE_Bag_Gunbag_HexCamo11_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO11_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO11_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo11_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO11_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO11_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo11.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo11_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo11_2 : DZE_Bag_Gunbag_L_HexCamo11_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO11_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO11_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Gunbag_HexCamo12_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO12_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO12_1";
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo12.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo12_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_HexCamo12_2 : DZE_Bag_Gunbag_HexCamo12_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_GUNBAG_HEXCAMO12_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_GUNBAG_HEXCAMO12_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Gunbag_L_HexCamo12_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO12_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO12_1";
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo12.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo12_ui.paa";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Gunbag_L_HexCamo12_2 : DZE_Bag_Gunbag_L_HexCamo12_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LARGE_GUNBAG_HEXCAMO12_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LARGE_GUNBAG_HEXCAMO12_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Patrol_CamoGreen1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_PATROL_CAMOGREEN1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PATROL_CAMOGREEN1_1";
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_CamoGreen1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrol_pack_camogreen_ui.paa";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Patrol_CamoGreen1_2 : DZE_Bag_Patrol_CamoGreen1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_PATROL_CAMOGREEN1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PATROL_CAMOGREEN1_2";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_Patrol_CamoGreen1_Enh_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_PATROL_CAMOGREEN1_ENHANCED_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PATROL_CAMOGREEN1_ENHANCED_1";
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_CamoGreen1_Enhanced.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrolpack_enhanced_ui.paa";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Patrol_CamoGreen1_Enh_2 : DZE_Bag_Patrol_CamoGreen1_Enh_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_PATROL_CAMOGREEN1_ENHANCED_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PATROL_CAMOGREEN1_ENHANCED_2";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_Patrol_Green1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_PATROL_GREEN1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PATROL_GREEN1_1";
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_Green1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrol_pack_green_ui.paa";
	transportMaxMagazines = 30;
	transportMaxWeapons = 5;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Patrol_Green1_2 : DZE_Bag_Patrol_Green1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_PATROL_GREEN1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_PATROL_GREEN1_2";
	transportMaxMagazines = 40;
	transportMaxWeapons = 8;
};
class DZE_Bag_TLR_L_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_TAN_1";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Tan.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_TLR_L_Tan_2 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_TAN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo1_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO1_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo1.p3d";
};
class DZE_Bag_TLR_L_Camo1_2 : DZE_Bag_TLR_L_Camo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO1_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_White_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_WHITE_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_White.p3d";
};
class DZE_Bag_TLR_L_White_2 : DZE_Bag_TLR_L_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_WHITE_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Green_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_GREEN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_GREEN_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Green.p3d";
};
class DZE_Bag_TLR_L_Green_2 : DZE_Bag_TLR_L_Green_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_GREEN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_GREEN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Black_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_BLACK_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Black.p3d";
};
class DZE_Bag_TLR_L_Black_2 : DZE_Bag_TLR_L_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_BLACK_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Brown_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_BROWN_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Brown.p3d";
};
class DZE_Bag_TLR_L_Brown_2 : DZE_Bag_TLR_L_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_BROWN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo2_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO2_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo2.p3d";
};
class DZE_Bag_TLR_L_Camo2_2 : DZE_Bag_TLR_L_Camo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO2_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo3_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO3_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo3.p3d";
};
class DZE_Bag_TLR_L_Camo3_2 : DZE_Bag_TLR_L_Camo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO3_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo4_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO4_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo4.p3d";
};
class DZE_Bag_TLR_L_Camo4_2 : DZE_Bag_TLR_L_Camo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO4_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo5_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO5_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo5.p3d";
};
class DZE_Bag_TLR_L_Camo5_2 : DZE_Bag_TLR_L_Camo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO5_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo6_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO6_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo6.p3d";
};
class DZE_Bag_TLR_L_Camo6_2 : DZE_Bag_TLR_L_Camo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO6_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_TLR_L_Camo7_1 : DZE_Bag_TLR_L_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO7_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO7_1";
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo7.p3d";
};
class DZE_Bag_TLR_L_Camo7_2 : DZE_Bag_TLR_L_Camo7_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_TLR_LARGE_CAMO7_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_TLR_LARGE_CAMO7_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_LV_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LV_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LV_1";
	picture = "\dayz_epoch_108_backpacks\data\lv_backpack_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_LV_Backpack.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_LV_2 : DZE_Bag_LV_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_LV_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_LV_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_OLIVE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_OLIVE_1";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_olive_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Olive.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_Olive_2 : DZE_Bag_Hunting_Olive_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_OLIVE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_OLIVE_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_BROWN_1";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_brown_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Brown.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_Brown_2 : DZE_Bag_Hunting_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_BROWN_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_BLACK_1";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_black_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Black.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_Black_2 : DZE_Bag_Hunting_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_BLACK_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_TAN_1";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_tan_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Tan.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_Tan_2 : DZE_Bag_Hunting_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_TAN_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Hunting_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_WHITE_1";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_white_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_White.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Hunting_White_2 : DZE_Bag_Hunting_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_HUNTING_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_HUNTING_WHITE_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
//smd backpacks
class DZE_Bag_Czech_Atacs_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_ATACS_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_ATACS_1";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
	picture = "\dayz_epoch_108_backpacks\data\dze_czechbackpack_atacs1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CzechBackpack_Atacs1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Czech_Atacs_2 : DZE_Bag_Czech_Atacs_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_CZECH_ATACS_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_CZECH_ATACS_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_Coyote_Atacs_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_ATACS_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_ATACS_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_atacs1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_Atacs1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_Atacs_2 : DZE_Bag_Coyote_Atacs_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_ATACS_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_ATACS_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_BlueGrey_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_BLUEGREY_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_BLUEGREY_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_bluegrey1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_BlueGrey1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_BlueGrey_2 : DZE_Bag_Coyote_BlueGrey_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_BLUEGREY_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_BLUEGREY_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_BlueGreyLogo_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_BLUEGREYLOGO_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_BLUEGREYLOGO_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_bluegreylogo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_BlueGreyLogo1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_BlueGreyLogo_2 : DZE_Bag_Coyote_BlueGreyLogo_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_BLUEGREYLOGO_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_BLUEGREYLOGO_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_PurpleBlack_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_PURPLEBLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_PURPLEBLACK_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purpleblack1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlack1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_PurpleBlack_2 : DZE_Bag_Coyote_PurpleBlack_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_PURPLEBLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_PURPLEBLACK_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_PurpleBlackLogo_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_PURPLEBLACKLOGO_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_PURPLEBLACKLOGO_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purpleblacklogo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlackLogo1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_PurpleBlackLogo_2 : DZE_Bag_Coyote_PurpleBlackLogo_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_PURPLEBLACKLOGO_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_PURPLEBLACKLOGO_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_PurpleBlueGrey_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_PURPLEBLUEGREY_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_PURPLEBLUEGREY_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purplebluegrey1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlueGrey1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_PurpleBlueGrey_2 : DZE_Bag_Coyote_PurpleBlueGrey_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_PURPLEBLUEGREY_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_PURPLEBLUEGREY_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_RedGrey_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_REDGREY_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_REDGREY_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgrey1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGrey1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_RedGrey_2 : DZE_Bag_Coyote_RedGrey_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_REDGREY_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_REDGREY_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_RedGreyLogo_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_REDGREYLOGO_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_REDGREYLOGO_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgreylogo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGreyLogo1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_RedGreyLogo_2 : DZE_Bag_Coyote_RedGreyLogo_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_REDGREYLOGO_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_REDGREYLOGO_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_RedGrey2_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_REDGREY2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_REDGREY2_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgrey21_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGrey21.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_RedGrey2_2 : DZE_Bag_Coyote_RedGrey2_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_REDGREY2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_REDGREY2_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_RedGreyLogo2_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_REDGREYLOGO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_REDGREYLOGO2_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgreylogo21_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGreyLogo21.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_RedGreyLogo2_2 : DZE_Bag_Coyote_RedGreyLogo2_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_REDGREYLOGO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_REDGREYLOGO2_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_TealGrey_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_TEALGREY_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_TEALGREY_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_tealgrey1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_TealGrey1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_TealGrey_2 : DZE_Bag_Coyote_TealGrey_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_TEALGREY_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_TEALGREY_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Coyote_TealGreyLogo_1 : DZE_Bag_Base {
	scope = 2;
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_TEALGREYLOGO_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_TEALGREYLOGO_1";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_tealgreylogo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_TealGreyLogo1.p3d";
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Coyote_TealGreyLogo_2 : DZE_Bag_Coyote_TealGreyLogo_1 {
	displayname = "$STR_DZE_VEHICLE_BAG_NAME_COYOTE_TEALGREYLOGO_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_COYOTE_TEALGREYLOGO_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Airwaves_Camo1_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO1_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo1.p3d";
};
class DZE_Bag_Airwaves_Camo1_2 : DZE_Bag_Airwaves_Camo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO1_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo2_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO2_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo2.p3d";
};
class DZE_Bag_Airwaves_Camo2_2 : DZE_Bag_Airwaves_Camo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO2_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo3_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO3_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo3_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo3.p3d";
};
class DZE_Bag_Airwaves_Camo3_2 : DZE_Bag_Airwaves_Camo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO3_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo4_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO4_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo4_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo4.p3d";
};
class DZE_Bag_Airwaves_Camo4_2 : DZE_Bag_Airwaves_Camo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO4_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo5_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO5_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo5_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo5.p3d";
};
class DZE_Bag_Airwaves_Camo5_2 : DZE_Bag_Airwaves_Camo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO5_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Camo6_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO6_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo6_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo6.p3d";
};
class DZE_Bag_Airwaves_Camo6_2 : DZE_Bag_Airwaves_Camo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_CAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_CAMO6_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Olive_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_OLIVE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_OLIVE_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_olive_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Olive.p3d";
};
class DZE_Bag_Airwaves_Olive_2 : DZE_Bag_Airwaves_Olive_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_OLIVE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_OLIVE_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Brown_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_BROWN_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_brown_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Brown.p3d";
};
class DZE_Bag_Airwaves_Brown_2 : DZE_Bag_Airwaves_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_BROWN_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Tan_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_TAN_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_tan_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Tan.p3d";
};
class DZE_Bag_Airwaves_Tan_2 : DZE_Bag_Airwaves_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_TAN_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_Black_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_BLACK_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_black_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Black.p3d";
};
class DZE_Bag_Airwaves_Black_2 : DZE_Bag_Airwaves_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_BLACK_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Airwaves_White_1 : DZE_Bag_Airwaves_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_WHITE_1";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_white_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_White.p3d";
};
class DZE_Bag_Airwaves_White_2 : DZE_Bag_Airwaves_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_AIRWAVES_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_AIRWAVES_WHITE_2";
	transportMaxWeapons = 14;
	transportMaxMagazines = 65;
};
class DZE_Bag_Army_XL2_Olive_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_OLIVE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_OLIVE_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Olive.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Olive_2 : DZE_Bag_Army_XL2_Olive_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_OLIVE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_OLIVE_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_White_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_WHITE_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_white_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_White.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_White_2 : DZE_Bag_Army_XL2_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_WHITE_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Tan_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_TAN_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_tan_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Tan.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Tan_2 : DZE_Bag_Army_XL2_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_TAN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Brown_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_BROWN_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_brown_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Brown.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Brown_2 : DZE_Bag_Army_XL2_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_BROWN_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Black_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_BLACK_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_black_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Black.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Black_2 : DZE_Bag_Army_XL2_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_BLACK_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo1_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO1_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo1.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo1_2 : DZE_Bag_Army_XL2_Camo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO1_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo2_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO2_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo2.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo2_2 : DZE_Bag_Army_XL2_Camo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO2_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo3_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO3_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo3_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo3.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo3_2 : DZE_Bag_Army_XL2_Camo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO3_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo4_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO4_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo4_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo4.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo4_2 : DZE_Bag_Army_XL2_Camo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO4_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo5_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO5_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo5_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo5.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo5_2 : DZE_Bag_Army_XL2_Camo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO5_2";
	transportMaxMagazines = 80;
	transportMaxWeapons = 16;
};
class DZE_Bag_Army_XL2_Camo6_1 : DZE_Bag_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO6_1";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo6_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo6.p3d";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
	vehicleClass = "DayZ Epoch 108 Backpacks";
};
class DZE_Bag_Army_XL2_Camo6_2 : DZE_Bag_Army_XL2_Camo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ARMY_XLARGE2_CAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ARMY_XLARGE2_CAMO6_2";
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
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_BLACK_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_BLACK_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_black_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Black.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Black_2 : DZE_Bag_ALICE_Black_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_BLACK_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_BLACK_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Brown_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_BROWN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_BROWN_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_brown_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Brown.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Brown_2 : DZE_Bag_ALICE_Brown_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_BROWN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_BROWN_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Olive_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_OLIVE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_OLIVE_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_olive_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Olive.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Olive_2 : DZE_Bag_ALICE_Olive_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_OLIVE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_OLIVE_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Tan_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_TAN_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_TAN_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_tan_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Tan.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Tan_2 : DZE_Bag_ALICE_Tan_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_TAN_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_TAN_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_White_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_WHITE_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_WHITE_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_white_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_White.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_White_2 : DZE_Bag_ALICE_White_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_WHITE_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_WHITE_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo1_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO1_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO1_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo1_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo1.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo1_2 : DZE_Bag_ALICE_Camo1_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO1_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO1_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo2_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO2_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO2_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo2_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo2.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo2_2 : DZE_Bag_ALICE_Camo2_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO2_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO2_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo3_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO3_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO3_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo3_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo3.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo3_2 : DZE_Bag_ALICE_Camo3_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO3_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO3_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo4_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO4_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO4_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo4_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo4.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo4_2 : DZE_Bag_ALICE_Camo4_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO4_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO4_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo5_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO5_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO5_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo5_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo5.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo5_2 : DZE_Bag_ALICE_Camo5_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO5_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO5_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
class DZE_Bag_ALICE_Camo6_1 : DZE_Bag_ALICE_Base {
	scope = 2;
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO6_1";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO6_1";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo6_ui.paa";
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo6.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 11;
};
class DZE_Bag_ALICE_Camo6_2 : DZE_Bag_ALICE_Camo6_1 {
	displayName = "$STR_DZE_VEHICLE_BAG_NAME_ALICE_CAMO6_2";
	descriptionShort = "$STR_DZE_VEHICLE_BAG_DESC_ALICE_CAMO6_2";
	transportMaxMagazines = 65;
	transportMaxWeapons = 14;
};
