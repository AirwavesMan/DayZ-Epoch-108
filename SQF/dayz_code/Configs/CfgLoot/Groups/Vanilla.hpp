// Grouping Vanilla Mod specific items together because they have limited use in Epoch and should be called sporadically.
// DayZ Mod base building is not enabled in Epoch so there is no reason to spawn many of these items.
// skigoggles posted a list of unused (junk) items here: https://helpthedeadreturn.wordpress.com/2015/12/08/items-of-dubious-value-junk/

VanillaSurvival[] =
{
//	{Loot_MAGAZINE,		1,		DZE_Item_Plastic_PVC_Box},  // Unused
//	{Loot_MAGAZINE,		1,		DZE_Item_Docu_BookBible}, // Novelty church item - added directly to church loot
	{Loot_MAGAZINE,		1,		DZE_Item_Tex_Rope}, //Used for upgrade tents
	{Loot_MAGAZINE,		1,		DZE_Item_Tex_Rag}, // Used to craft bandages
	{Loot_MAGAZINE,		1,		DZE_Item_Tex_String}, // Used in multiple crafting recipes
	{Loot_MAGAZINE,		1,		DZE_Item_Plastic_Duct_Tape}, // Repair broken stuff - craft a sling
	{Loot_MAGAZINE,		1,		DZE_Item_Medi_Herb_Box}, // Combine with DZE_Item_Waterbottle to make Herbal Tea
	{Loot_MAGAZINE,		1,		DZE_Item_Metal_Nails}, // Combine with baseball bat, upgrade storage buildings
	{Loot_MAGAZINE,		1,		DZE_Item_Plastic_Hose} // Need this to siphon gas with fuel container - very useful
};

VanillaConstruction[] =
{
//	{Loot_MAGAZINE,		2,		DZE_Item_Metal_1Inch_Pipe}, // Unused
//	{Loot_MAGAZINE,		2,		DZE_Item_Metal_2Inch_Pipe}, // Unused
//	{Loot_VEHICLE,		2,		WeaponHolder_ItemPickaxeBroken},
//	{Loot_MAGAZINE,		5,		DZE_Item_Conc_Stone}, // Epoch(Dayz Mod) fences, does not need to be spawned, can be harvested with pickaxes
//	{Loot_WEAPON,		1,		ItemDIY_wood}, // Vanilla base building
//	{Loot_WEAPON,		1,		ItemDIY_Gate} // Vanilla base building
//	{Loot_MAGAZINE,		9,		DZE_Item_Metal_Sheet_Rusted}, // Unused
	{Loot_MAGAZINE,		1,		DZE_Item_Elec_Scrapelectronics}, // Vehicle upgrade
	{Loot_MAGAZINE,		1,		DZE_Item_Elec_Floppywire}, // Vehicle upgrade
	{Loot_VEHICLE,		4,		WeaponHolder_ItemPickaxe}, // Get DZE_Item_Conc_Stone from rocks on the map for fence foundations.
	{Loot_MAGAZINE,		9,		DZE_Item_Metal_Corrugated_Sheet}, //Used for upgrade storage buildings and metal fences, vehicle upgrade
	{Loot_MAGAZINE,		9,		DZE_Item_Metal_Sheet}, //Used for upgrade storage buildings
	{Loot_MAGAZINE,		4,		DZE_Item_Metal_Screws}, //Used for upgrade storage buildings, vehicle upgrade
	{Loot_MAGAZINE,		1,		DZE_Item_Plastic_Hose}, // Need this to siphon gas with fuel container - very useful
	{Loot_MAGAZINE,		1,		DZE_Item_Tool_Lever}, // Repair broken handles if DZE_toolBreaking is enabled
	{Loot_MAGAZINE,		1,		DZE_Item_Wood_Plank}, // Used for upgrade storage buildings, craft a sling
	{Loot_MAGAZINE,		1,		DZE_Item_Metal_Nails}, // Combine with baseball bat, upgrade storage buildings
	{Loot_MAGAZINE,		1,		DZE_Item_Conc_Brick} // Used to sharpen tools if DZE_knifeDulling enabled
};
