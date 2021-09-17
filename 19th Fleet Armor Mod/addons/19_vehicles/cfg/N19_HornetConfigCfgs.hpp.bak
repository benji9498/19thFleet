class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class CargoTurret;
class cfgMagazines
{
	class OPTRE_12Rnd_C2GMLS_missiles;
	class OPTRE_2Rnd_Jackknife_missile;
	class OPTRE_16Rnd_Anvil1_missiles;
    class 3Rnd_HE_Grenade_shell;
    class N19_500Rnd_HE_Grenade_shell: 3Rnd_HE_Grenade_shell
    {
        displayName="500x 40mm HE Grenade Shell";
		displayNameShort="HE Grenades";
        hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14"
		};
        pylonWeapon="N19_MatGrp_GL88";
		count=500;
		initSpeed=400;
    };
	class OPAEX_6Rnd_C2GMLS_missiles: OPTRE_12Rnd_C2GMLS_missiles
	{
		displayName="6x C2GMLS";
		displayNameShort="Class-2 AA";
		descriptionShort="Class-2 Air-to-Air Self-Guided Missiles";
		hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14"
		};
		pylonWeapon="OPAEX_Pylon_AV14_AA";
		count=6;
	};
	class OPAEX_4Rnd_Jackknife_missile: OPTRE_2Rnd_Jackknife_missile
	{
		displayName="4x AGM-502 'Jack Knife' SALH-ATGM";
		displayNameShort="SALH-ATGM";
		descriptionShort="'Jack Knife' Laser Guided Anti-Tank Missile";
		hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14",
			"OPAEX_Hardpoint_D77-TC"
		};
		pylonWeapon="OPAEX_Pylon_AV14_AG";
		count=4;
	};
	class OPAEX_16Rnd_Anvil1_missiles: OPTRE_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL I' HE Rocket";
		displayNameShort="'Anvil I' HE Rockets";
		hardpoints[]=
		{
			"OPAEX_Hardpoint_AV14",
			"OPAEX_Hardpoint_D77-TC"
		};
		pylonWeapon="OPAEX_Pylon_AV14_AG_Rockets";
	};
    class OPAEX_32Rnd_Anvil1_missiles: OPAEX_16Rnd_Anvil1_missiles
	{
		displayName="32x 'ANVIL I' HE Rocket";
		displayNameShort="'Anvil I' HE Rockets";
		hardpoints[]=
		{
			"OPAEX_Hardpoint_D77-TC"
		};
		pylonWeapon="OPAEX_Pylon_AV14_AG_Rockets";
        count=32;
	};
	class OPAEX_16Rnd_AnvilSMK_W: OPAEX_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL SMK-W' Smoke Rocket";
		displayNameShort="'ANVIL SMK-W' Smoke Rockets";
		pylonWeapon="OPAEX_AnvilSMK_W";
		ammo="OPAEX_AnvilSMK_W_Shot";
	};
	class OPAEX_16Rnd_AnvilSMK_B: OPAEX_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL SMK-B' Smoke Rocket";
		displayNameShort="'ANVIL SMK-B' Smoke Rockets";
		pylonWeapon="OPAEX_AnvilSMK_B";
		ammo="OPAEX_AnvilSMK_B_Shot";
	};
	class OPAEX_16Rnd_AnvilSMK_R: OPAEX_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL SMK-R' Smoke Rocket";
		displayNameShort="'ANVIL SMK-R' Smoke Rockets";
		pylonWeapon="OPAEX_AnvilSMK_R";
		ammo="OPAEX_AnvilSMK_R_Shot";
	};
	class OPAEX_16Rnd_AnvilSMK_G: OPAEX_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL SMK-G' Smoke Rocket";
		displayNameShort="'ANVIL SMK-G' Smoke Rockets";
		pylonWeapon="OPAEX_AnvilSMK_G";
		ammo="OPAEX_AnvilSMK_G_Shot";
	};
	class OPAEX_16Rnd_AnvilSMK_O: OPAEX_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL SMK-O' Smoke Rocket";
		displayNameShort="'ANVIL SMK-O' Smoke Rockets";
		pylonWeapon="OPAEX_AnvilSMK_O";
		ammo="OPAEX_AnvilSMK_O_Shot";
	};
	class OPAEX_16Rnd_AnvilSMK_P: OPAEX_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL SMK-P' Smoke Rocket";
		displayNameShort="'ANVIL SMK-P' Smoke Rockets";
		pylonWeapon="OPAEX_AnvilSMK_P";
		ammo="OPAEX_AnvilSMK_P_Shot";
	};
	class OPAEX_16Rnd_AnvilSMK_Y: OPAEX_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL SMK-Y' Smoke Rocket";
		displayNameShort="'ANVIL SMK-Y' Smoke Rockets";
		pylonWeapon="OPAEX_AnvilSMK_Y";
		ammo="OPAEX_AnvilSMK_Y_Shot";
	};
};
class cfgAmmo
{
	class OPTRE_M_ANVIL_1_Rocket;
	class OPAEX_AnvilSMK_W_Shot: OPTRE_M_ANVIL_1_Rocket
	{
		displayName="White Smoke Rockets";
		hit=0;
		indirectHit=0;
		explosive=1;
		coefGravity=1;
		explosionEffects="OPAEX_ComplexSmokeRocketEffect_White";
	};
	class OPAEX_AnvilSMK_B_Shot: OPAEX_AnvilSMK_W_Shot
	{
		displayName="Blue Smoke Rockets";
		explosionEffects="OPAEX_ComplexSmokeRocketEffect_Blue";
	};
	class OPAEX_AnvilSMK_R_Shot: OPAEX_AnvilSMK_W_Shot
	{
		displayName="Red Smoke Rockets";
		explosionEffects="OPAEX_ComplexSmokeRocketEffect_Red";
	};
	class OPAEX_AnvilSMK_G_Shot: OPAEX_AnvilSMK_W_Shot
	{
		displayName="Green Smoke Rockets";
		explosionEffects="OPAEX_ComplexSmokeRocketEffect_Green";
	};
	class OPAEX_AnvilSMK_O_Shot: OPAEX_AnvilSMK_W_Shot
	{
		displayName="Orange Smoke Rockets";
		explosionEffects="OPAEX_ComplexSmokeRocketEffect_Orange";
	};
	class OPAEX_AnvilSMK_P_Shot: OPAEX_AnvilSMK_W_Shot
	{
		displayName="Purple Smoke Rockets";
		explosionEffects="OPAEX_ComplexSmokeRocketEffect_Purple";
	};
	class OPAEX_AnvilSMK_Y_Shot: OPAEX_AnvilSMK_W_Shot
	{
		displayName="Yellow Smoke Rockets";
		explosionEffects="OPAEX_ComplexSmokeRocketEffect_Yellow";
	};
};
class Extended_GetIn_EventHandlers
{
	class Air
	{
		class Air_GetIn
		{
			getin="[] execVM '\N19_Armor\data\vehicles\hornet\HUD\fn_G.sqf'";
		};
	};
	class Plane
	{
		class Plane_GetIn
		{
			getin="[] execVM '\N19_Armor\data\vehicles\hornet\HUD\fn_G.sqf'";
		};
	};
};
class OPAEX_ComplexSmokeRocketEffect_White
{
	class SmokeEffect
	{
		simulation="particles";
		type="OPAEXSmokeRocketWhite";
		lifetime=60;
		qualityLevel=-1;
		position[]={0,0,0};
		start=-1;
		enabled=1;
	};
};
class OPAEX_ComplexSmokeRocketEffect_Red: OPAEX_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPAEXSmokeRocketRed";
	};
};
class OPAEX_ComplexSmokeRocketEffect_Blue: OPAEX_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPAEXSmokeRocketBlue";
	};
};
class OPAEX_ComplexSmokeRocketEffect_Green: OPAEX_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPAEXSmokeRocketGreen";
	};
};
class OPAEX_ComplexSmokeRocketEffect_Orange: OPAEX_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPAEXSmokeRocketOrange";
	};
};
class OPAEX_ComplexSmokeRocketEffect_Purple: OPAEX_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPAEXSmokeRocketPurple";
	};
};
class OPAEX_ComplexSmokeRocketEffect_Yellow: OPAEX_ComplexSmokeRocketEffect_White
{
	class SmokeEffect: SmokeEffect
	{
		type="OPAEXSmokeRocketYellow";
	};
};
class cfgCloudlets
{
	class SmokeShellWhite;
	class OPAEXSmokeRocketWhite: SmokeShellWhite
	{
		size[]={3,10,7};
		circleRadius=2;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0}
		};
		colorCoef[]={1,1,1,1};
		weight=1.274;
		lifeTime=60;
		rubbing=0.1;
	};
	class OPAEXSmokeRocketRed: OPAEXSmokeRocketWhite
	{
		colorCoef[]={0.84380001,0.1383,0.1353,1};
	};
	class OPAEXSmokeRocketBlue: OPAEXSmokeRocketWhite
	{
		colorCoef[]={0.1183,0.1867,1,1};
	};
	class OPAEXSmokeRocketGreen: OPAEXSmokeRocketWhite
	{
		colorCoef[]={0.21250001,0.62580001,0.48910001,1};
	};
	class OPAEXSmokeRocketOrange: OPAEXSmokeRocketWhite
	{
		colorCoef[]={0.66970003,0.22750001,0.10053,1};
	};
	class OPAEXSmokeRocketPurple: OPAEXSmokeRocketWhite
	{
		colorCoef[]={0.4341,0.1388,0.41440001,1};
	};
	class OPAEXSmokeRocketYellow: OPAEXSmokeRocketWhite
	{
		colorCoef[]={0.98830003,0.86059999,0.071900003,1};
	};
};