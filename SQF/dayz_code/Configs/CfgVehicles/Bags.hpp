class ReammoBox_EP1;	// External class reference
class Bag_Base_EP1 : ReammoBox_EP1 {	
	scope = 0;
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	isbackpack = 1;
	mapsize = 2;
	reversed = true;
	vehicleClass = "Backpacks";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa"; 

	class DestructionEffects {};
};

class DZ_Patrol_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_PATROL;
	descriptionShort = $STR_BACKPACK_DESC_PATROL;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	transportMaxWeapons = 2;
	transportMaxMagazines = 10;
};

class DZ_Assault_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_ACU;
	descriptionShort = $STR_BACKPACK_DESC_ACU;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	transportMaxWeapons = 2;
	transportMaxMagazines = 12;
};

class DZ_Czech_Vest_Pouch: Bag_Base_EP1
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_VEST;
	descriptionShort = $STR_BACKPACK_DESC_VEST;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";	
	transportmaxmagazines = 12;
	transportmaxweapons = 2;
};

class DZ_ALICE_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_ALICE;
	descriptionShort = $STR_BACKPACK_DESC_ALICE;
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	transportMaxWeapons = 4;
	transportMaxMagazines = 20;
};

class DZ_TK_Assault_Pack_EP1 : Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_SURVACU;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU;
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	transportMaxWeapons = 4;
	transportMaxMagazines = 22;
};

class DZ_British_ACU : Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_BRITISH;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH;
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	transportMaxWeapons = 6;
	transportMaxMagazines = 30;
};

class DZ_CivilBackpack_EP1: Bag_Base_EP1    
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_CZECH;
	descriptionShort = $STR_BACKPACK_DESC_CZECH;
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};

class DZ_Backpack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_COYOTE;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE;
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
};

class DZ_LargeGunBag_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_EPOCH_PACK_LGB;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB;
	model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d"; 
	picture = "\ca\weapons_e\data\icons\staticX_CA.paa"; 
	transportMaxWeapons = 12;
	transportMaxMagazines = 60;
};
class DZ_GunBag_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_EPOCH_PACK_GB;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB;
	model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d"; 
	picture = "\ca\weapons_e\data\icons\staticY_CA.paa"; 
	transportMaxWeapons = 7;
	transportMaxMagazines = 35;
};
class DZ_CompactPack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_EPOCH_PACK_COMPACT; 
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT;
	picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa"; 
	model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d"; 
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
};
class DZ_TerminalPack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_EPOCH_PACK_TERMINAL; 
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL;
	picture = "\dayz_epoch_c\icons\backpacks\terminalpack.paa"; 
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV"; 
	transportMaxWeapons = 3;
	transportMaxMagazines = 15;
};


//new epoch 107 classes (DZE1 = standard, DZE2 = upgraded)
class Patrol_Pack_DZE1 : DZ_Patrol_Pack_EP1 
{
	displayName = $STR_BACKPACK_NAME_PATROL_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_PATROL_DZE1;
	transportMaxWeapons = 2;
};
class Patrol_Pack_DZE2 : Patrol_Pack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_PATROL_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_PATROL_DZE2;
	transportMaxWeapons = 3;
	transportMaxMagazines = 15;	
};
class GymBag_Camo_DZE1 : Bag_Base_EP1 
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_GYMBAG_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	transportMaxMagazines = 10;	
	transportMaxWeapons = 2;
};
class GymBag_Camo_DZE2 : Bag_Base_EP1 
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_GYMBAG_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	transportMaxWeapons = 3;
	transportMaxMagazines = 15;	
};
class GymBag_Green_DZE1 : GymBag_Camo_DZE1 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow"; 
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
};
class GymBag_Green_DZE2 : GymBag_Camo_DZE2 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow"; 
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
};
class Czech_Vest_Pouch_DZE1 : DZ_Czech_Vest_Pouch 
{
	displayName = $STR_BACKPACK_NAME_VEST_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_VEST_DZE1;
	transportMaxWeapons = 2;
};
class Czech_Vest_Pouch_DZE2 : Czech_Vest_Pouch_DZE1 
{
	displayname = $STR_BACKPACK_NAME_VEST_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_VEST_DZE2;
	transportMaxWeapons = 3;
	transportMaxMagazines = 17;	
};
class Assault_Pack_DZE1 : DZ_Assault_Pack_EP1 
{
	displayname = $STR_BACKPACK_NAME_ACU_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_ACU_DZE1;
	transportMaxWeapons = 3;
	transportMaxMagazines = 15;
};
class Assault_Pack_DZE2 : Assault_Pack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_ACU_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_ACU_DZE2;
	transportMaxWeapons = 4;
	transportMaxMagazines = 20;	
};
class TerminalPack_DZE1 : DZ_TerminalPack_EP1 
{
	displayname = $STR_EPOCH_PACK_TERMINAL_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL_DZE1;
	transportMaxWeapons = 3;
	transportMaxMagazines = 17;
};
class TerminalPack_DZE2 : TerminalPack_DZE1 
{
	displayname = $STR_EPOCH_PACK_TERMINAL_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL_DZE2;
	transportMaxWeapons = 4;
	transportMaxMagazines = 22;	
};
class TinyPack_DZE1 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_TINY_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_TINY_DZE1;
	picture = "\Ca\Weapons_ACR\Data\UI\picture_backpack_acr_rpg";
	model = "\Ca\Characters_ACR\backpack_acr_rpg";
	transportMaxWeapons = 3;
	transportMaxMagazines = 18;	
};
class TinyPack_DZE2 : TinyPack_DZE1 
{
	displayname = $STR_EPOCH_PACK_TINY_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_TINY_DZE2;
	transportMaxWeapons = 4;
	transportMaxMagazines = 24;	
};
class ALICE_Pack_DZE1 : DZ_ALICE_Pack_EP1 
{
	displayname = $STR_BACKPACK_NAME_ALICE_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_ALICE_DZE1;
	transportMaxWeapons = 4;
};
class ALICE_Pack_DZE2 : ALICE_Pack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_ALICE_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_ALICE_DZE2;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;	
};
class TK_Assault_Pack_DZE1 : DZ_TK_Assault_Pack_EP1 
{
	displayname = $STR_BACKPACK_NAME_SURVACU_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU_DZE1;
	transportMaxWeapons = 4;
};
class TK_Assault_Pack_DZE2 : TK_Assault_Pack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_SURVACU_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU_DZE2;
	transportMaxWeapons = 5;
	transportMaxMagazines = 27;	
};
class School_Bag_DZE1 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_SCHOOLBAG_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_SCHOOLBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	transportMaxMagazines = 24;	
	transportMaxWeapons = 4;
};
class School_Bag_DZE2 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_SCHOOLBAG_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_SCHOOLBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	transportMaxWeapons = 6;
	transportMaxMagazines = 30;	
};
class CompactPack_DZE1 : DZ_CompactPack_EP1 
{
	displayname = $STR_EPOCH_PACK_COMPACT_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT_DZE1;
	transportMaxWeapons = 5;
};
class CompactPack_DZE2 : CompactPack_DZE1 
{
	displayname = $STR_EPOCH_PACK_COMPACT_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT_DZE2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 30;	
};
class British_ACU_DZE1 : DZ_British_ACU 
{
	displayname = $STR_BACKPACK_NAME_BRITISH_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH_DZE1;
	transportMaxWeapons = 6;
};
class British_ACU_DZE2 : British_ACU_DZE1 
{
	displayname = $STR_BACKPACK_NAME_BRITISH_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH_DZE2;
	transportMaxWeapons = 7;
	transportMaxMagazines = 35;	
};
class GunBag_DZE1 : DZ_GunBag_EP1 
{
	displayname = $STR_EPOCH_PACK_GB_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB_DZE1;
	transportMaxWeapons = 7;
};
class GunBag_DZE2 : GunBag_DZE1 
{
	displayname = $STR_EPOCH_PACK_GB_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;	
};
class PartyPack_DZE1 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_PARTYPACK_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_PARTYPACK_DZE1;
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02"; 
	transportMaxMagazines = 36;	
	transportMaxWeapons = 7;
};
class PartyPack_DZE2 : Bag_Base_EP1 
{
	scope = 2;
	displayname = $STR_EPOCH_PACK_PARTYPACK_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_PARTYPACK_DZE2;
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02"; 
	transportMaxWeapons = 8;
	transportMaxMagazines = 42;	
};
class NightPack_DZE1 : Bag_Base_EP1 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO1_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO1_DZE1;
	model = "\ice_apo_resistance\Backpack1.p3d";
	picture = "\ice_apo_resistance\icons\backpack1_ca.paa";
	transportMaxWeapons = 7;
	transportMaxMagazines = 35;
};
class NightPack_DZE2 : NightPack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_APO1_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO1_DZE2;
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;	
};
class SurvivorPack_DZE1 : Bag_Base_EP1 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO2_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO2_DZE1;
	model = "\ice_apo_resistance\Backpack4.p3d";
	picture = "\ice_apo_resistance\icons\backpack4_ca.paa";
	transportMaxWeapons = 8;
	transportMaxMagazines = 40;
};
class SurvivorPack_DZE2 : SurvivorPack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_APO2_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO2_DZE2;
	transportMaxWeapons = 9;
	transportMaxMagazines = 45;	
};
class AirwavesPack_DZE1 : Bag_Base_EP1
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_AIRWAVES_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_AIRWAVES_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_wavesbag_01.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\airwavespack.paa";
	transportMaxWeapons = 7;
	transportMaxMagazines = 35;
};
class AirwavesPack_DZE2 : AirwavesPack_DZE1
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_AIRWAVES_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_AIRWAVES_DZE2;
	transportMaxWeapons = 9;
	transportMaxMagazines = 45;
};
class CzechBackpack_DZE1 : DZ_CivilBackpack_EP1 
{
	displayname = $STR_BACKPACK_NAME_CZECH_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DZE1;
	transportMaxWeapons = 9;
	transportMaxMagazines = 45;
};
class CzechBackpack_DZE2 : CzechBackpack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_CZECH_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DZE2;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;	
};
class CzechBackpack_Camping_DZE1 : CzechBackpack_DZE1 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
};
class CzechBackpack_Camping_DZE2 : CzechBackpack_DZE2 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01"; 
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
};
class CzechBackpack_OD_DZE1 : CzechBackpack_DZE1 		//new LEN mod Czech Pack variants
{
	scope = 2;
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
};
class CzechBackpack_OD_DZE2 : CzechBackpack_DZE2 
{
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
};
class CzechBackpack_DES_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
};
class CzechBackpack_DES_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
};
class CzechBackpack_3DES_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
};
class CzechBackpack_3DES_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
};
class CzechBackpack_WDL_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
};
class CzechBackpack_WDL_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
};
class CzechBackpack_MAR_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
};
class CzechBackpack_MAR_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
};
class CzechBackpack_DMAR_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
};
class CzechBackpack_DMAR_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
};
class CzechBackpack_UCP_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
};
class CzechBackpack_UCP_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
};
class CzechBackpack_6DES_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
};
class CzechBackpack_6DES_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
};
class CzechBackpack_TAK_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
};
class CzechBackpack_TAK_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
};
class CzechBackpack_NVG_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
};
class CzechBackpack_NVG_DZE2 : CzechBackpack_OD_DZE2
{
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
};
class CzechBackpack_BLK_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
};
class CzechBackpack_BLK_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
};
class CzechBackpack_DPM_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
};
class CzechBackpack_DPM_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
};
class CzechBackpack_FIN_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
};
class CzechBackpack_FIN_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
};
class CzechBackpack_MTC_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
};
class CzechBackpack_MTC_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
};
class CzechBackpack_NOR_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
};
class CzechBackpack_NOR_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
};
class CzechBackpack_WIN_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
};
class CzechBackpack_WIN_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
};
class CzechBackpack_ATC_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
};
class CzechBackpack_ATC_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
};
class CzechBackpack_MTL_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
};
class CzechBackpack_MTL_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
};
class CzechBackpack_FTN_DZE1 : CzechBackpack_OD_DZE1 		//new LEN mod Czech Pack variants
{
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
};
class CzechBackpack_FTN_DZE2 : CzechBackpack_OD_DZE2 
{
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
};
class WandererBackpack_DZE1 : Bag_Base_EP1 		//new ice apo resistance mod backpack
{
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO3_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO3_DZE1;
	model = "\ice_apo_resistance\Backpack3.p3d";
	picture = "\ice_apo_resistance\icons\backpack3_ca.paa";
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
};
class WandererBackpack_DZE2 : WandererBackpack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_APO3_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO3_DZE2;
	transportMaxWeapons = 11;
	transportMaxMagazines = 55;	
};
class LegendBackpack_DZE1 : Bag_Base_EP1 		//new ice apo resistance mod backpack
{		
	scope = 2;
	displayname = $STR_BACKPACK_NAME_APO4_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_APO4_DZE1;
	model = "\ice_apo_resistance\Backpack2.p3d";
	picture = "\ice_apo_resistance\icons\backpack2_ca.paa";
	transportMaxWeapons = 11;
	transportMaxMagazines = 55;
};
class LegendBackpack_DZE2 : LegendBackpack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_APO4_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_APO4_DZE2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 60;	
};
class CoyoteBackpack_DZE1 : DZ_Backpack_EP1 
{
	displayname = $STR_BACKPACK_NAME_COYOTE_DZE1;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DZE1;
	transportMaxWeapons = 12;
	transportMaxMagazines = 60;
};
class CoyoteBackpack_DZE2 : CoyoteBackpack_DZE1 
{
	displayname = $STR_BACKPACK_NAME_COYOTE_DZE2;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DZE2;
	transportMaxWeapons = 13;
	transportMaxMagazines = 65;	
};
class CoyoteBackpackDes_DZE1: CoyoteBackpack_DZE1		//new KSK mod coyote backpack variant
{
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
};
class CoyoteBackpackDes_DZE2 : CoyoteBackpack_DZE2 
{
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
};
class CoyoteBackpackWdl_DZE1: CoyoteBackpack_DZE1		//new KSK mod coyote backpack variant
{
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
};
class CoyoteBackpackWdl_DZE2 : CoyoteBackpack_DZE2 
{
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
};
class CoyoteBackpack_Camping_DZE1: CoyoteBackpack_DZE1
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02"; 
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
};
class CoyoteBackpack_Camping_DZE2 : CoyoteBackpack_DZE2 
{
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02"; 
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
};
class LargeGunBag_DZE1 : DZ_LargeGunBag_EP1 
{
	displayname = $STR_EPOCH_PACK_LGB_DZE1;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB_DZE1;	
	transportMaxWeapons = 13;
	transportMaxMagazines = 65;
};
class LargeGunBag_DZE2 : LargeGunBag_DZE1 
{
	displayname = $STR_EPOCH_PACK_LGB_DZE2;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB_DZE2;
	transportMaxWeapons = 14;
	transportMaxMagazines = 70;	
};
