// This file was created to group tools into different categories
// Melee weapons hatchet, machete, crowbar, and baseball bat added directly to building loot.

// This list contains small tools that can spawn anywhere
ToolsSurvival[] =
{
	{Loot_TOOL,		1,		DZE_Tool_Knife},
	{Loot_TOOL,		1,		DZE_Tool_Map},
	{Loot_TOOL,		1,		DZE_Tool_Watch},
	{Loot_TOOL,		1,		DZE_Tool_Compass},
	{Loot_TOOL,		1,		DZE_Tool_Matchbox},
	{Loot_TOOL,		1,		DZE_Tool_Flashlight},
	{Loot_TOOL,		1,		DZE_Tool_Binocular}
};

// This list contains large tools that should not be called in small groups
ToolsBuilding[] =
{
	{Loot_TOOL,		1,		DZE_Tool_Sledge}, // Sledge hammer should be a bit more rare than everything else.
	{Loot_MAGAZINE,	2,		ItemSledgeHandle},
	{Loot_MAGAZINE,	2,		ItemSledgeHead},
	{Loot_TOOL,		3,		DZE_Tool_KeyKit},
	{Loot_TOOL,		6,		DZE_Tool_Toolbox},
	{Loot_TOOL,		4,		DZE_Tool_Handsaw},
	{Loot_TOOL,		4,		DZE_Tool_Hammer},
	{Loot_TOOL,		4,		DZE_Tool_Shovel}
};

// Small tools that can spawn anywhere
ToolsMilitary[] =
{
	{Loot_TOOL,		1,		DZE_Tool_Knife},
	{Loot_TOOL,		1,		DZE_Tool_GPS},
	{Loot_TOOL,		1,		DZE_Tool_Compass},
	{Loot_TOOL,		1,		DZE_Tool_FlashlightRed},
	{Loot_TOOL,		1,		DZE_Tool_Binocular},
	{Loot_TOOL,		1,		DZE_Tool_NVGoggles},
	{Loot_TOOL,		1,		DZE_Tool_BinocularVector},
	{Loot_TOOL,		1,		DZE_Tool_Etool} //Equal to DZE_Tool_Shovel just the military version
};