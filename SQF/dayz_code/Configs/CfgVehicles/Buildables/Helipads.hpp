class DZE_Helipad_Base: DZE_Building_Base {
	model = "\ca\misc\heli_h_civil";
	scope = 0;
	mapSize = 2;
	displayName = $STR_EPOCH_HELIPAD_CIVIL;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,4,0};
};

class DZE_Helipad_Civil: DZE_Helipad_Base {
	scope = 2;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Helipad_Civil";
		DZE_refundArray[] = {};
	};
};

class DZE_Helipad_Rescue: DZE_Helipad_Base {
	model = "\ca\misc\Heli_H_rescue";
	scope = 2;
	displayName = $STR_EPOCH_HELIPAD_RESCUE;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Helipad_Rescue";
		DZE_refundArray[] = {};
	};
};

class DZE_Helipad_Army: DZE_Helipad_Base {
	model = "\CA\misc\Heli_H_army.p3d";
	scope = 2;
	displayName = $STR_EPOCH_HELIPAD_ARMY;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Helipad_Army";
		DZE_refundArray[] = {};
	};
};

class DZE_Helipad_Cross: DZE_Helipad_Base {
	model = "\CA\misc\Heli_H_cross.p3d";
	scope = 2;
	displayName = $STR_EPOCH_HELIPAD_CROSS;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Helipad_Cross";
		DZE_refundArray[] = {};
	};
};

class DZE_Helipad_ParkBorder: DZE_Helipad_Base {
	model = "\ca\misc2\Sr_border";
	scope = 2;
	displayName = $STR_EPOCH_HELIPAD_PARKBORDER;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Helipad_Parkborder";
		DZE_refundArray[] = {};
	};
};
