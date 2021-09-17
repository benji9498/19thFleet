#include "BIS_AddonInfo.hpp"
class cfgPatches
{
    class optre_hud_patch
    {
		units[] = {};
		weapons[] = {};
        requiredVersion = 0.1;
		version = 0.2;
		requiredAddons[] = {
			"OPTRE_Core",
			"OPTRE_FunctionsLibrary",
			"OPTRE_UNSC_Units_Army"
			};
		author = "Hobnob & A2";
		fileName = "optre_hud_patch.pbo";
    };
};
class cfgFunctions
{
	class OPTRE
	{
		class HUDMonitors
		{
			file = "optre_hud_patch\Functions\HUDMonitors";
			class HudLoad_MarrineEyeDisplay1{};
			class HudLoad_MarrineGlass1{};
			class HudLoad_ODST1{};
		};
		class HUDCore
		{
			class ToggleVisor{file = "optre_hud_patch\Functions\CoreHUD\FN_ToggleVisor.sqf";};
		};
	};
};
class cfgWeapons
{
	class ItemInfo;
	class OPTRE_UNSC_VX16_Helmet_base;
	class OPTRE_UNSC_VX16_Helmet: OPTRE_UNSC_VX16_Helmet_base
	{
		scope = 2;
		scopeArsenal = 2;
		optreVarietys[] = {"Helmet","HelmetV","_broken"};
	};
	class OPTRE_UNSC_VX16_HelmetV: OPTRE_UNSC_VX16_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
	}
	class OPTRE_UNSC_VX16_Helmet_Mask: OPTRE_UNSC_VX16_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		optreVarietys[] = {"Helmet_Mask","Helmet_MaskV","_broken"};
		hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		};
	};
	class OPTRE_UNSC_VX16_Helmet_MaskV: OPTRE_UNSC_VX16_Helmet_Mask
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		};
	};
	class OPTRE_UNSC_VX16_Helmet_MaskS: OPTRE_UNSC_VX16_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		optreVarietys[] = {"Helmet_MaskS","Helmet_MaskSV","_broken"};
		hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		};
	};
	class OPTRE_UNSC_VX16_Helmet_MaskSV: OPTRE_UNSC_VX16_Helmet_Mask
	{
		scope = 1;
		scopeArsenal = 1;
		optreVarietys[] = {"Helmet_MaskS","Helmet_MaskSV","_broken"};
		hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		};
	};
	//disable hud for noVisor (NV) helmets
	class OPTRE_UNSC_VX16_HelmetNV: OPTRE_UNSC_VX16_Helmet
	{
		optreHUDStyle = "";
	}
	//special exception for uwu
	class OPTRE_UNSC_VX16_Helmet_Mask_uwu: OPTRE_UNSC_VX16_Helmet_Mask
	{
		scope = 2;
		scopeArsenal = 2;
		hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_lbxbjj_CO.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_lbxbjj_CO.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
	};
	class OPTRE_UNSC_VX16_Helmet_MaskV_uwu: OPTRE_UNSC_VX16_Helmet_MaskV
	{
		dlc = "OPTRE";
		displayName = "VX-16 Air Crew Helmet [UwU]";
		author = "Article 2 Studios";
		scope = 1;
		scopeArsenal = 1;
		hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_lbxbjj_CO.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_lbxbjj_CO.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
	};
	//overrides for helmets with incorrect inheritence
	class OPTRE_UNSC_VX16_Helmet_MaskS_wht: OPTRE_UNSC_VX16_Helmet_Mask
	{
		optreVarietys[] = {"Helmet_MaskS","Helmet_MaskSV","_broken"};
	};
	class OPTRE_UNSC_VX16_Helmet_MaskSV_wht: OPTRE_UNSC_VX16_Helmet_MaskV
	{
		optreVarietys[] = {"Helmet_MaskS","Helmet_MaskSV","_broken"};
	};
	class OPTRE_UNSC_VX16_Helmet_MaskS_wht_med: OPTRE_UNSC_VX16_Helmet_Mask
	{
		optreVarietys[] = {"Helmet_MaskS","Helmet_MaskSV","_broken"};
	};
	class OPTRE_UNSC_VX16_Helmet_MaskSV_wht_med: OPTRE_UNSC_VX16_Helmet_MaskV
	{
		optreVarietys[] = {"Helmet_MaskS","Helmet_MaskSV","_broken"};
	};
};