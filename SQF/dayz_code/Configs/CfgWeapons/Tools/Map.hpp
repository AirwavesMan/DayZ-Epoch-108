class ItemMap;

class DZE_Tool_Map: ItemMap {
	model = "z\addons\dayz_communityassets\models\map.p3d";
};

class DZE_Tool_Map_Debug: ItemCore {
	scope = 2;	
	displayname = "Debug Map";
	descriptionshort = "Debug Map - Admin use only";
	picture = "\z\addons\dayz_communityassets\pictures\gear_picture_map_debug.paa";
	simulation = "ItemMap";
	
	class Library {
		libtextdesc = "Debug Map - Admin use only";
	};
};