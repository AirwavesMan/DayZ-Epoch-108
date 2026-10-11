// female changes
class CivilianW: CAManBase
{
	scope = 0;
	displayName = $STR_CHAR_1;
	rarityUrban = -1;
	faction = "CIV";
	genericNames = "EnglishWomen";
	portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	side = 1;
	weapons[] = {"Throw","Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = false; //fn_selfaction handles hide bodies
	identityTypes[] = {"Language_W_EN_EP1","Woman"};
	backpack = "";
	canCarryBackPack = 1;
	attendant = 0;
	engineer = 0;
	canDeactivateMines = 0;
	sensitivity = 10;
	sensitivityEar = 1;
	armor = 2.5;

	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.4;
		};
		class HitBody: HitBody
		{
			armor = 0.8;
			passThrough = 1;
		};
	};

	class TalkTopics
	{
		core = "Core_E";
		core_en = "Core_Full_E";
	};

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_woman"};
			speechPlural[] = {"veh_women"};
		};
		class EN: Default{};
		class CZ
		{
			speechSingular[] = {"veh_woman_CZ"};
			speechPlural[] = {"veh_women_CZ"};
		};
		class CZ_Akuzativ
		{
			speechSingular[] = {"veh_woman_CZ4P"};
			speechPlural[] = {"veh_women_CZ4P"};
		};
		class RU
		{
			speechSingular[] = {"veh_woman_RU"};
			speechPlural[] = {"veh_women_RU"};
		};
	};

	TextPlural = "Women";
	TextSingular = "Woman";
	nameSound = "veh_woman";
	languages[] = {"EN"};

	class HitDamage
	{
		class Group0
		{
			hitSounds[] = {{{"ca\sounds\Characters\Noises\Damage\banz-hit-01",0.177828,1,120 },0.2 },{{"ca\sounds\Characters\Noises\Damage\banz-hit-02",0.177828,1,120 },0.2 },{{"ca\sounds\Characters\Noises\Damage\banz-hit-03",0.177828,1,120 },0.2 },{{"ca\sounds\Characters\Noises\Damage\banz-hit-04",0.177828,1,120 },0.1 },{{"ca\sounds\Characters\Noises\Damage\banz-hit-05",0.177828,1,120 },0.1 },{{"ca\sounds\Characters\Noises\Damage\banz-hit-06",0.177828,1,120 },0.1 },{{"ca\sounds\Characters\Noises\Damage\banz-hit-07",0.177828,1,120 },0.1 }};
			damageSounds[] = {{"body",{"ca\sounds\Characters\Noises\Damage\banz-damage-g1-01",0.0562341,1,120,0.25,5,6,10 } },{"body",{"ca\sounds\Characters\Noises\Damage\banz-damage-g1-02",0.0562341,1,120,0.25,5,7.5,10 } },{"body",{"ca\sounds\Characters\Noises\Damage\banz-damage-g1-03",0.0562341,1,120,0.25,5,6,10 } },{"body",{"ca\sounds\Characters\Noises\Damage\banz-damage-g1-04",0.0562341,1,120,0.25,5,7.5,10 } },{"hands",{"ca\sounds\Characters\Noises\Damage\banz-damage-g1-07-arm",0.0562341,1,120,0.5,0,2.5,5 } },{"hands",{"ca\sounds\Characters\Noises\Damage\banz-damage-g1-08-arm",0.0562341,1,120,0.5,0,2.5,5 } },{"legs",{"ca\sounds\Characters\Noises\Damage\banz-damage-g1-05-leg",0.0562341,1,120,0.5,0,1,2 } },{"legs",{"ca\sounds\Characters\Noises\Damage\banz-damage-g1-06-leg",0.0562341,1,120,0.5,0,1,2 } }};
		};
	};
	class SoundBreath
	{
		breath0[] = {{{{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-01",0.0562341,1,8 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-02",0.0562341,1,8 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-03",0.0562341,1,8 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-04",0.125893,1,8 },0.25 } },{{{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-01",0.0562341,1,15 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-02",0.0562341,1,15 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-03",0.0562341,1,15 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-04",0.125893,1,15 },0.25 } },{{{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-01",0.1,1,20 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-02",0.1,1,20 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-03",0.1,1,20 },0.25 },{{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-04",0.1,1,20 },0.25 } }};};
	class SoundGear
	{
		primary[] = {{"walk",{"",0.00177828,1,10}},{"run",{"",0.00316228,1,15}},{"sprint",{"",0.00562341,1,20 } }};
		secondary[] = {{"walk",{"",0.00177828,1,10}},{"run",{"",0.00316228,1,10}},{"sprint",{"",0.00562341,1,10 } }};
	};
	class SoundEquipment
	{
		soldier[] = {{"walk",{"",0.00177828,1,13}},{"run",{"",0.00316228,1,20}},{"sprint",{"",0.00398107,1,25 } }};
		civilian[] = {{"walk",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01",0.177828,1,8}},{"walk",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02",0.177828,1,8}},{"walk",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03",0.177828,1,8}},{"walk",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04",0.177828,1,8}},{"walk",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05",0.177828,1,8}},{"walk",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06",0.177828,1,8}},{"walk",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07",0.177828,1,8}},{"walk",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08",0.177828,1,8}},{"run",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01",0.1,1,15}},{"run",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02",0.1,1,15}},{"run",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03",0.1,1,15}},{"run",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04",0.1,1,15}},{"run",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05",0.1,1,15}},{"run",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06",0.1,1,15}},{"run",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07",0.1,1,15}},{"run",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08",0.1,1,15}},{"sprint",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01",0.0562341,1,20}},{"sprint",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02",0.0562341,1,20}},{"sprint",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03",0.0562341,1,20}},{"sprint",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04",0.0562341,1,20}},{"sprint",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05",0.0562341,1,20}},{"sprint",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06",0.0562341,1,20}},{"sprint",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07",0.0562341,1,20}},{"sprint",{"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08",0.0562341,1,20}}};
	};

	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters_e\civil\hladik\data\european-man_02.rvmat","Ca\characters_E\Civil\Hladik\Data\w1_european-man_02.rvmat","Ca\characters_E\Civil\Hladik\Data\w2_european-man_02.rvmat"};
	};

	class Eventhandlers
	{
		//local = "_z = _this select 0; if (!isServer && {!isNull _z} && {!(side _z in [west,east,civilian])}) exitWith { PVDZ_sec_atp = ['wrong side', player]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; };";
	};
};

class SoldierLightW_Base_DZ : CivilianW {
	camouflage = 1.0;
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};
};

class SoldierHeavyW_Base_DZ : CivilianW {
	camouflage = 1.0;
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.8;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};
};

class DZE_Man_SurvivorW2: CivilianW {
	scope = 2;
	model = "\dayz\characters\annie_original";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\baker_co.paa"};
};
class DZE_Man_SurvivorW3: DZE_Man_SurvivorW2 {
	hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\european_woman_01_co.paa"};
};
class DZE_Man_SurvivorWpink: DZE_Man_SurvivorW2 {
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\GirlyGirl.paa"};
};
class DZE_Man_SurvivorWcombat: DZE_Man_SurvivorW2 {
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\CombatGirl.paa"};

	camouflage = 1.0;
	class HitPoints: HitPoints {
		class HitHead: HitHead {
			armor = 0.5;
		};
		class HitBody: HitBody {
			armor = 1;
			passThrough = 0.8;
		};
	};
};
class DZE_Man_SurvivorWwinter: DZE_Man_SurvivorWcombat {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\female\WinterCombat.paa"};
};
class DZE_Man_SurvivorWdesert: DZE_Man_SurvivorW2 {
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\DesertGirl.paa"};
};
class DZE_Man_SurvivorWurban: DZE_Man_SurvivorW2 {
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\UrbanGirl.paa"};
};
class DZE_Man_BanditW1: SoldierLightW_Base_DZ {
	scope = 2;
	displayName = "$STR_CHAR_2";
	model = "\dayz\characters\woman_bandit";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\baker_co.paa"};
};
class DZE_Man_BanditW2: DZE_Man_BanditW1 {
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\european_woman_01_co.paa"};
};
class DZE_Man_Tamika: SoldierLightW_Base_DZ {
	scope = 2;
	displayName = "$STR_EPOCH_SKINS_SOLDIER";
	model = "\nst\ns_fraction\ns\ns_tamika.p3d";
};
class DZE_Man_CamoWinter1W: SoldierLightW_Base_DZ {
	scope = 2;
	displayName = "$STR_EPOCH_SKINS_THERMOSUITFEMALE";
    model = "\nst\ns_dayz\characters\cw\camowinter_dzn.p3d";
	faceType = "HeadMask1Black";
    camouflage = 1.4;

	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\rus\data\soldier_specnaz_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_partizan_w2.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w2.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w2.rvmat","ca\characters2\rus\data\soldier_speccom.RVmat","ca\characters2\rus\data\soldier_speccom_w1.RVmat","ca\characters2\rus\data\soldier_speccom_w2.RVmat"};
	};
};
class DZE_Man_CamoWinter2W: DZE_Man_CamoWinter1W {
    model = "\nst\ns_dayz\characters\cw\camowinterw_dzn.p3d";
};
class DZE_Man_OperatorW: SoldierLightW_Base_DZ {
	scope = 2;
	displayName = "$STR_EPOCH_SKINS_SOLDIER";
	model = "z\addons\dayz_epoch_u\clothes\dze_f_Miles";
};
class DZE_Man_GunnerW: DZE_Man_OperatorW {
	model = "z\addons\dayz_epoch_u\clothes\dze_f_Rodriguez";
};
class DZE_Man_DoctorW: CivilianW {
	scope = 2;
	displayName = "$STR_EPOCH_SKINS_DOCTOR";
	model = "z\addons\dayz_epoch_u\clothes\dze_F_doctor";
};
class DZE_Man_WorkerW: CivilianW {
	scope = 2;
	displayName = "$STR_EPOCH_SKINS_WORKER";
	model = "z\addons\dayz_epoch_u\clothes\dze_F_overall";
};
class DZE_Man_PolicemanW: SoldierLightW_Base_DZ {
	scope = 2;
	displayName = "$STR_DZE_EQUIP_POLICE_OFFICER";
	model = "z\addons\dayz_epoch_u\clothes\dze_F_policeman";
};
class DZE_Man_PriestW: CivilianW {
	scope = 2;
	displayName = "$STR_EPOCH_SKINS_PRIEST";
	model = "z\addons\dayz_epoch_u\clothes\dze_F_priest";
};
class DZE_Man_HookerW1: CivilianW {
	scope = 2;
	displayName = "$STR_DZE_SKIN_HOOKER_NAME";
	model = "z\addons\dayz_epoch_u\clothes\dze_f_hooker";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch_u\clothes\data\hooker1_co.paa"};
};
class DZE_Man_HookerW2: DZE_Man_HookerW1 {
	displayName = "$STR_DZE_SKIN_HOOKER_NAME";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch_u\clothes\data\hooker2_co.paa"};
};
class DZE_Man_HookerW3: DZE_Man_HookerW1 {
	displayName = "$STR_DZE_SKIN_HOOKER_NAME";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch_u\clothes\data\hooker3_co.paa"};
};
class DZE_Man_HookerW4: DZE_Man_HookerW1 {
	displayName = "$STR_DZE_SKIN_HOOKER_NAME";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch_u\clothes\data\hooker4_co.paa"};
};
class DZE_Man_HookerW5: DZE_Man_HookerW1 {
	displayName = "$STR_DZE_SKIN_HOOKER_NAME";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch_u\clothes\data\hooker5_co.paa"};
};
class DZE_Man_SniperW: CivilianW {
	scope = 2;
	displayName = "$STR_DZE_SKIN_GHILLIE_WDL_NAME";
	model = "z\addons\dayz_epoch_u\clothes\dze_f_Ghillie_full";
	portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
	camouflage = 0.5;
};
class DZE_Man_SniperBanditW: DZE_Man_SniperW {
	model = "z\addons\dayz_epoch_u\clothes\dze_f_Ghillie_top";
};
class DZE_Man_CZ_Soldier_Sniper_ACRW : DZE_Man_SniperW {
	model = "\Ca\Characters_ACR\Ghillie_Overall";
};
class DZE_Man_SniperWinterW: DZE_Man_SniperW {
	displayName = "$STR_DZE_SKIN_GHILLIE_SNOW_NAME";
	model = "\ca\characters_e\Ghillie\Ghillie_Overall";

	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\nst\ns_dayz\characters\gw\data\ghillie_overall1w_co.paa"};
};
class DZE_Man_Sniper1W: DZE_Man_SniperW {
	displayName = "$STR_DZE_SKIN_GHILLIE_WDL_NAME";
	model = "\ca\characters_e\Ghillie\Ghillie_Overall";
	portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
	camouflage = 0.5;
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\Ghillie_Overall2_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_TK_Soldier_Sniper_EP1W: DZE_Man_SniperWinterW {
	displayName = "$STR_DZE_SKIN_GHILLIE_DES_NAME";
	model = "\ca\characters_E\Ghillie\Ghillie_Top";
	portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters\data\us_hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\Ghillie_Top_desert_co.paa"};
};
class DZE_Man_CZ_Soldier_Sniper_EP1W: DZE_Man_SniperWinterW {
	displayName = "$STR_DZE_SKIN_GHILLIE_DES_NAME";
	model = "\ca\characters_E\Ghillie\Ghillie_Overall";
	hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\ghillie_overall1_desert_co.paa"};
};
class DZE_Man_GhillieFull_Desert01W: DZE_Man_SniperWinterW {
	displayName = "$STR_DZE_SKIN_GHILLIE_DES_NAME";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Desert02W: DZE_Man_GhillieFull_Desert01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Desert03W: DZE_Man_GhillieFull_Desert01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Desert04W: DZE_Man_GhillieFull_Desert01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Desert05W: DZE_Man_GhillieFull_Desert01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert05.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Desert06W: DZE_Man_GhillieFull_Desert01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert06.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Desert07W: DZE_Man_GhillieFull_Desert01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert07.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Desert08W: DZE_Man_GhillieFull_Desert01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert08.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Snow01W: DZE_Man_SniperWinterW {
	displayName = "$STR_DZE_SKIN_GHILLIE_SNOW_NAME";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Snow02W: DZE_Man_GhillieFull_Snow01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Snow03W: DZE_Man_GhillieFull_Snow01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Snow04W: DZE_Man_GhillieFull_Snow01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Snow05W: DZE_Man_GhillieFull_Snow01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow05.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Urban01W: DZE_Man_SniperWinterW {
	displayName = "$STR_DZE_SKIN_GHILLIE_URB_NAME";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\urban\Skin_GhillieFull_Urban01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood01W: DZE_Man_SniperWinterW {
	displayName = "$STR_DZE_SKIN_GHILLIE_WDL_NAME";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood02W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood03W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood04W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood05W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood05.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood06W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood06.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood07W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood07.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood08W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood08.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood09W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood09.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood10W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood10.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood11W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood11.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood12W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood12.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood13W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood13.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood14W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood14.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood15W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood15.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_GhillieFull_Wood16W: DZE_Man_GhillieFull_Wood01W {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood16.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class DZE_Man_Nac_SoldierW: SoldierHeavyW_Base_DZ {
	scope = 2;
    displayName = "$STR_EPOCH_SKINS_NACSOLDIER";
    model = "\nst\ns_fraction\nac\nac_soldier_1";
};
class DZE_Man_Gsc_Military_Helmet_WdlW : SoldierHeavyW_Base_DZ {
	scope = 2;
	displayName = "$STR_DZE_SKIN_STALKER_WDL_MIL_MASK_NAME";
	model = "\gsc_stalker\gsc_military_helmet_wdl.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\military.rvmat", "gsc_stalker\military_wound1.rvmat", "gsc_stalker\military_wound2.rvmat"};
	};
};
class DZE_Man_Gsc_Military_Helmet_GreyW : DZE_Man_Gsc_Military_Helmet_WdlW {
	displayName = "$STR_DZE_SKIN_STALKER_URB_MIL_MASK_NAME";
	model = "\gsc_stalker\gsc_military_helmet_grey.p3d";
};
class DZE_Man_Gsc_Scientist1W : CivilianW {
	scope = 2;
	displayName = "$STR_DZE_SKIN_STALKER_SCIENTIST1_MASK_NAME";
	model = "\gsc_stalker\gsc_eco_suit.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\scien.rvmat", "gsc_stalker\scien_wound1.rvmat", "gsc_stalker\scien_wound2.rvmat"};
	};
};
class DZE_Man_Gsc_Scientist2W : DZE_Man_Gsc_Scientist1W {

	displayName = "$STR_DZE_SKIN_STALKER_SCIENTIST2_MASK_NAME";
	model = "\gsc_stalker\gsc_eco_suit2.p3d";
};
class DZE_Man_Gsc_Eco_Stalker_Mask_NeutralW : SoldierLightW_Base_DZ {
	scope = 2;
	displayName = "$STR_DZE_SKIN_STALKER_LONER_MASK_NAME";
	model = "\gsc_stalker\gsc_eco_stalker_mask.p3d";

	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class DZE_Man_Gsc_Eco_Stalker_Mask_FredW : DZE_Man_Gsc_Eco_Stalker_Mask_NeutralW {
	displayName = "$STR_DZE_SKIN_STALKER_FREEDOM_MASK_NAME";
	model = "\gsc_stalker\gsc_eco_stalker_mask_fred.p3d";
};
class DZE_Man_Gsc_Eco_Stalker_Mask_DutyW : DZE_Man_Gsc_Eco_Stalker_Mask_NeutralW {
	displayName = "$STR_DZE_SKIN_STALKER_DUTY_MASK_NAME";
	model = "\gsc_stalker\gsc_eco_stalker_mask_duty.p3d";
};
class DZE_Man_Gsc_Eco_Stalker_Mask_CamoW : DZE_Man_Gsc_Eco_Stalker_Mask_NeutralW {
	displayName = "$STR_DZE_SKIN_STALKER_MONOLITH_MASK_NAME";
	model = "\gsc_stalker\gsc_eco_stalker_mask_camo.p3d";
};