class CfgPatches
{
	class N19_Weapons
	{
		units[]=
		{
		};
		weapons[]=
		{
			
            "N19_SRS99D",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_UNSC_Units"
		};
	};
};
class CfgFactionClasses
{
	class N19_cat
	{
		displayName="19th Fleet";
	};
};
class CfgEditorSubcategories
{
	class N19_subcat
	{
		displayName="19th fleet-Weapons";
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgVehicles
{
};
class CfgWeapons
{

    class OPTRE_SRS99D;
    class OPTRE_M7;
	class N19_OPTRE_SRS99D: OPTRE_SRS99D
	{
		dlc="OPTRE";
		author="19th Fleet";
		scope=2;
		scopeArsenal=2;
		model="\OPTRE_Weapons\Sniper\SRS99D.p3d";
		displayName="[19th] SRS99D-S2 Sniper Rifle";
		descriptionShort="UNSC Sniper Rifle";
		picture="\OPTRE_weapons\sniper\icons\sniper.paa";
		magazines[]=
		{
			"19_4Rnd_145x114_APFSDS_Mag"
		};
		magazineWell[]={};
		maxZeroing=2000;
		discreteDistance[]={1};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Sniper\data\anim\srs99D_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\Sniper\data\anim\srs99D_Spartan_handpos.rtm"
		};
		reloadAction="GestureReloadLRR";
		hasBipod=1;
		reloadMagazineSound[]=
		{
			"\OPTRE_Weapons\Sniper\data\anim\srs99c_reload.wss",
			1,
			1,
			10
		};
		recoil="recoil_gm6";
		baseWeapon="N19_OPTRE_SRS99D:";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\Sniper\SNIPER.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_Snipor";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_Snipor";
		Eye="OPTRE_ODST_EYE_AmmoCount_Snipor";
		HUD_BulletInARows=4;
		HUD_TotalPosibleBullet=4;
	};
/*class OPTRE_M7_19: OPTRE_M7
	{
		dlc="OPTRE";
		author="19th Fleet";
		scope=2;
		scopeArsenal=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\smg\data\anim\m7_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\smg\data\anim\smg_handanim_Spartan.rtm"
		};
		reloadAction="OPTRE_GestureReloadM7";
		model="\OPTRE_Weapons\SMG\SMG.p3d";
		displayName="Mayhem SMG";
		descriptionShort="UNSC M7 SMG";
		picture="\OPTRE_weapons\smg\icons\smg.paa";
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"12Rnd_125mm_HE",
			"1000Rnd_65x39_Belt",
			"magazine_Missiles_Cruise_01_Cluster_x18",
			"magazine_ShipCannon_120mm_HE_cluster_shells_x2",
			"2Rnd_155mm_Mo_Cluster",
			"12Rnd_230mm_rockets_cluster"
		};
		magazineWell[]={};
		recoil="recoil_pdw";
		baseWeapon="OPTRE_M7_19";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye="OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows=3;
		HUD_TotalPosibleBullet=60;
	};*/
};

class cfgMods
{
	author="Boonji";
	timepacked="1587575546";
};
