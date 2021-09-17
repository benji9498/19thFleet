class CfgPatches
{
	class 19th_Backpacks
	{
		units[]=
		{

			"19_ANPRC_521"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"OPTRE_Core"
		};
		author="19th Fleet";
	};
};
class cfgVehicles
{
	class ContainerSupply;
	class B_TacticalPack_blk;
	class B_Bergen_Base;
	class OPTRE_UNSC_Rucksack;

	class 19_ANPRC_521: OPTRE_UNSC_Rucksack
	{
		dlc="19th Fleet";
		author="19th Fleet";
		displayName="[19] AN/PRC-521";
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=150;
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"N19_armor\data\Backpacks\19_CommoPack_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
};