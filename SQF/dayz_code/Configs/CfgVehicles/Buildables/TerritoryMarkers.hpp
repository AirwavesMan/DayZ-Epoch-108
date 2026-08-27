//Territory Markers (aka old Plotpole)
class DZE_TerritoryMarker_Base: DZE_Building_Base {
	vehicleClass = "DayZ Epoch 1071 Territory Markers";
	destrType = "DestructTree";
	armor = 2000;
	mapSize = 0.7;
	
	DZE_isTerritoryMarker = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 1;	

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {"ItemToolbox","ItemCrowbar","ItemShovel"};
	};	
};


class DZE_Plastic_Pole_EP1: DZE_TerritoryMarker_Base {
	scope = 2;
	model = "\ca\misc\sign_one_leg_h.p3d";
	icon = "\Ca\misc\data\icons\i_danger_CA.paa";	
	hiddenSelections[] = {"plane"};
	hiddenSelectionsTextures[] = {"\ca\signs_e\signm\data\sign_one_leg_h_no_entry_co.paa"};
	displayName = "$STR_EPOCH_PLAYER_246";
	
	DZE_offset[] = {0,1.5,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "plot_pole_kit";
		DZE_refundArray[] = {};
	};
};
