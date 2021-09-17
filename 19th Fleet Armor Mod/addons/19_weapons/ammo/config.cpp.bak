class CfgPatches
{
	class OPTRE_Weapons_Ammo
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"A3_Weapons_F"
		};
		author="Article 2 Studios";
		magazines[]=
		{
		};
		ammo[]=
		{
			"OPTRE_B_145x114_APFSDS"	
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
	class ShotgunBase;
	class BulletBase;
	class ShotDeployBase;
	class B_762x51_Ball;
	class B_9x21_Ball;
	class B_127x99_Ball;
	class B_20mm;
	class B_30mm_HE;
	class B_30mm_MP;
	class B_35mm_AA;
	class B_35mm_AA_Tracer_Red;
	class B_40mm_GPR;
	class B_40mm_APFSDS;
	class B_40mm_APFSDS_Tracer_Green;
	class B_coil_20g_spike;
	class GrenadeHand;
	class SmokeShell;
	class B_IRStrobe;
	class R_PG32V_F;
	class R_TBG32V_F;
	class R_230mm_HE;
	class M_Scalpel_AT;
	class M_Air_AA;
	class M_Zephyr;
	class M_PG_AT;
	class M_AT;
	class M_Titan_AT;
	class M_Titan_AA;
	class M_NLAW_AT_F;
	class Sh_105mm_HEAT_MP;
	class Sh_105mm_APFSDS_T_Green;
	class Sh_105mm_HEAT_MP_T_Green;
	class Sh_120mm_HE;
	class Sh_120mm_HE_Tracer_Yellow;
	class Sh_120mm_APFSDS;
	class Sh_155mm_AMOS;
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class Bo_Mk82;
	class Bo_GBU12_LGB;
	class Cluster_155mm_AMOS;
	class Mine_155mm_AMOS_Range;
	class F_20mm_White;
	class B_12Gauge_Pellets;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Slug_NoCartridge;
	class B_12Gauge_Slug;
	class 19_B_145x114_APFSDS: B_127x99_Ball
{
		hit=80;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_127";
		visibleFire=5;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		visibleFireTime=3;
		cost=15;
		airLock=1;
		caliber=3.5999999;
		typicalSpeed=820;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.5;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00085999997;
		class CamShakeExplode
		{
			power="(20^0.5)";
			duration="((round (20^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((20^0.5)*3)";
		};
		class CamShakeHit
		{
			power=20;
			duration="((round (20^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
};
class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class 150Rnd_762x51_Box;
	class 30Rnd_45ACP_Mag_SMG_01;
	class 30Rnd_120mm_APFSDS_shells;
	class 30Rnd_120mm_HE_shells;
	class 40Rnd_105mm_APFSDS_T_Green;
	class 20Rnd_105mm_HEAT_MP_T_Green;
	class 5Rnd_GAT_missiles;
	class 4Rnd_GAA_missiles;
	class 12Rnd_missiles;
	class 12Rnd_PG_missiles;
	class 4Rnd_Missile_AGM_01_F;
	class 2Rnd_LG_Scalpel;
	class 2Rnd_Bomb_03_F;
	class 2Rnd_GBU12_LGB;
	class HandGrenade;
	class SmokeShell;
	class RPG32_HE_F;
	class RPG32_F;
	class NLAW_F;
	class Titan_AA;
	class Titan_AT;
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;
	class OPTRE_4Rnd_145x114_APFSDS_Mag;

	class 19_4Rnd_145x114_APFSDS_Mag: OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Sniper\SRS99C_Mag.p3d";
		displayname="[19] 4Rnd 14.5x114mm APFSDS Magazine";
		displaynameshort="APFSDS";
		ammo="19_B_145x114_APFSDS";
		count=4;
		initspeed=5000;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="4 Round Magazine<br>14.5x114mm<br>Armor Piercing Fin-Stabilized Disposable Shell";
		mass=15;
		tracersEvery=1;
		lastRoundsTracer=4;
	};
};
