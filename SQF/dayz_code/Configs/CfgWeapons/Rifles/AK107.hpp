class AK_107_kobra;
class DZE_Wep_AK107_Kobra : AK_107_kobra {
	displayName = "$STR_DZ_WPN_AK107_KOBRA_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {
		DZE_Item_Att_GP25 = "DZE_Wep_AK107_GL_Kobra";
	};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['DZE_Item_Att_Kobra',_id,'DZE_Wep_AK107'] call player_removeAttachment";
		};
	};
};

class AK_107_CP;
class DZE_Wep_AK107 : AK_107_CP {
	displayName = "$STR_DZ_WPN_AK107_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {
		DZE_Item_Att_Kobra = "DZE_Wep_AK107_Kobra";
		DZE_Item_Att_PSO1 = "DZE_Wep_AK107_PSO";
		DZE_Item_Att_GP25 = "DZE_Wep_AK107_GL";
	};

	class ItemActions {};
};

class AK_107_GL_CP;
class DZE_Wep_AK107_GL : AK_107_GL_CP {
	displayName = "$STR_DZ_WPN_AK107_GL_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {
		DZE_Item_Att_Kobra = "DZE_Wep_AK107_GL_Kobra";
		DZE_Item_Att_PSO1 = "DZE_Wep_AK107_GL_PSO";
	};
	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK107'] call player_removeAttachment";
		};
	};
};

class AK_107_pso;
class DZE_Wep_AK107_PSO : AK_107_pso {
	displayName = "$STR_DZ_WPN_AK107_PSO1_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {
		DZE_Item_Att_GP25 = "DZE_Wep_AK107_GL_PSO";
	};
	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['DZE_Item_Att_PSO1',_id,'DZE_Wep_AK107'] call player_removeAttachment";
		};
	};
};

class AK_107_GL_pso;
class DZE_Wep_AK107_GL_PSO : AK_107_GL_pso {
	displayName = "$STR_DZ_WPN_AK107_GL_PSO1_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {};
	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['DZE_Item_Att_PSO1',_id,'DZE_Wep_AK107_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK107_PSO'] call player_removeAttachment";
		};
	};
};

class AK_107_GL_kobra;
class DZE_Wep_AK107_GL_Kobra : AK_107_GL_kobra {
	displayName = "$STR_DZ_WPN_AK107_GL_KOBRA_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {};
	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['DZE_Item_Att_Kobra',_id,'DZE_Wep_AK107_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK107_Kobra'] call player_removeAttachment";
		};
	};
};