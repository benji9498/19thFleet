#include "BIS_AddonInfo.hpp"
class DefaultEventhandlers;
class CfgPatches
{
	class sfp_wheelchair
	{
		units[]=
		{
		"sfp_wheelchair",
		"sfp_wheelchair_normal"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F"};
		magazines[]={};
		ammo[]={"sfp_wheel_gas"};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class DeadActions
	{
		sfp_wheelchair_driver="sfp_wheelchair_driver";
	};
	class ManActions
	{
		sfp_wheelchair_driver="sfp_wheelchair_driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class sfp_wheelchair_driver: Crew
		{
			file="\sfp_wheelchair\anims\sfp_wheelchair_driver.rtm";
			connectTo[]={};
			interpolateTo[]=
			{
				"sfp_wheelchair_driver_kia",
				1
			};
			speed=1e+010;
		};
		class sfp_wheelchair_driver_kia: DefaultDie
		{
			actions="DeadActions";
			file="\sfp_wheelchair\anims\sfp_wheelchair_driver_kia.rtm";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
	};
};
class cfgammo
{
	class B_762x51_Ball;
	class sfp_wheel_gas: B_762x51_Ball
	{
		hit=0;
		typicalSpeed=0.1;
		model="\A3\Weapons_f\empty";
		airFriction=-0.0001107;
		timeToLive=0.1;
		class HitEffects
		{
			Hit_Foliage_green="";
			Hit_Foliage_Dead="";
			Hit_Foliage_Green_big="";
			Hit_Foliage_Palm="";
			Hit_Foliage_Pine="";
			hitFoliage="";
			hitGlass="";
			hitGlassArmored="";
			hitWood="";
			hitMetal="";
			hitMetalPlate="";
			hitBuilding="";
			hitPlastic="";
			hitRubber="";
			hitConcrete="";
			hitMan="";
			hitGroundSoft="";
			hitGroundHard="";
			hitWater="";
		};
	};
};
class cfgmagazines
{
	class 2000Rnd_65x39_Belt;
	class sfp_wheel_horn: 2000Rnd_65x39_Belt
	{
		dlc="sfp";
		ammo="sfp_wheel_gas";
		displayName="Horn Gas";
		descriptionShort="Gas for Horns";
		tracersEvery=0;
		initSpeed=0.1;
		maxLeadSpeed=0.2;
		count=5000;
	};
};
class CfgWeapons
{
	class MGunCore;
	class sfp_wheel_hornblower: MGunCore
	{
		dlc="sfp";
		scope=1;
		displayName="Horn Blower";
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		magazines[]=
		{
			"sfp_wheel_horn"
		};
		canLock=0;
		shotFromTurret=0;
		modes[]={};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="";
				positionName="z_gunL_muzzle";
				directionName="z_gunL_chamber";
			};
			class SecondEffect
			{
				effectName="";
				positionName="z_gunR_muzzle";
				directionName="z_gunR_chamber";
			};
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="";
			};
			class effect2
			{
				positionName="machinegun_eject_2_pos";
				directionName="machinegun_eject_2_dir";
				effectName="";
			};
		};
		class Mode_SemiAuto
		{
			multiplier=1;
			burst=1;
			dispersion=0.00019999999;
			sound[]=
			{
				"",
				10,
				1
			};
			soundBegin[]=
			{
				"sound",
				1
			};
			soundBeginWater[]=
			{
				"sound",
				1
			};
			soundClosure[]=
			{
				"sound",
				1
			};
			soundEnd[]={};
			soundLoop[]={};
			soundContinuous=0;
			weaponSoundEffect="";
			reloadTime=0.1;
			ffCount=1;
			ffMagnitude=0.5;
			ffFrequency=11;
			flash="gunfire";
			flashSize=1;
			autoFire=0;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			minRange=30;
			minRangeProbab=0.25;
			midRange=300;
			midRangeProbab=0.57999998;
			maxRange=600;
			maxRangeProbab=0.039999999;
			artilleryDispersion=1;
			artilleryCharge=1;
			canShootInWater=0;
			displayName="Semi";
			textureType="semi";
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			aiDispersionCoefY=1.7;
			aiDispersionCoefX=1.4;
			soundBurst=0;
			requiredOpticType=-1;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class B_Quadbike_01_F;
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class sfp_wheelchair: B_Heli_Light_01_armed_F
	{
		dlc="sfp";
		author="Boonji";
		vehicleclass="sfp_vehclass_soft";
		crew="C_man_1";
		faction="CIV_F";
		driverAction="sfp_wheelchair_driver";
		armor=500;
		displayname="Warchair";
		picture="\sfp_wheelchair\ui\icon_wheelchair_ca.paa";
		icon="\sfp_wheelchair\ui\map_wheelchair_ca";
		scope=2;
		model="\sfp_wheelchair\sfp_wheelchair.p3d";
		class DestructionEffects
		{
		};
		side=3;
		driverLeftHandAnimName="wheel_1_3";
		driverRightHandAnimName="wheel_2_3";
		brakeDistance=50;
		hideWeaponsDriver=1;
		rightDustEffects[]={};
		leftDustEffects[]={};
		explosionEffect="";
		maxSpeed=50;
		wheelCircumference=1.5;
		soundGetIn[]=
		{
			"",
			1,
			1
		};
		soundGetOut[]=
		{
			"",
			1,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"",
			1,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"",
			1,
			1,
			200
		};
		class Sounds
		{
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.2818383,
					1,
					120
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.014125375,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"",
					0.017782794,
					1
				};
				frequency="1";
				volume="(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_1_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_2_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_1_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_2_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_1_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_2_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_1_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_2_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class Library
		{
			libTextDesc="A classic wheel chair for the old, disabled or wounded.";
		};
		class RenderTargets
		{
		};
		memoryPointGun[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunBeg[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunEnd[]=
		{
			"z_gunL_chamber",
			"z_gunR_chamber"
		};
		weapons[]={"Gatling_30mm_Plane_CAS_01_F"};
		magazines[]={"1000Rnd_Gatling_30mm_Plane_CAS_01_F"};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		class textureSources
		{
		};
		alphaTracks=0.1;
		textureTrackWheel=1;
		damperSize=0.2;
		damperForce=1;
		damperDamping=3;
		transportSoldier=0;
		typicalCargo[]={};
		memoryPointTrack1L="Stopa PPL";
		memoryPointTrack1R="Stopa PPP";
		memoryPointTrack2L="Stopa ZPL";
		memoryPointTrack2R="Stopa ZPP";
		memoryPointTrackBRL="";
		memoryPointTrackBRR="";
		memoryPointTrackFRL="";
		memoryPointTrackFRR="";
		memoryPointTrackFLL="Stopa PLL";
		memoryPointTrackFLR="Stopa PLP";
		memoryPointTrackBLL="Stopa ZLL";
		memoryPointTrackBLR="Stopa ZLP";
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.126";
				mass=30;
				MOI=2.8;
				dampingRate=0.1;
				maxBrakeTorque=500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				mMaxDroop=0.1;
				sprungMass=825;
				springStrength=51625;
				springDamperRate=8920;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=2;
			};
			class R3: LR
			{
				boneName="wheel_1_3";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=2;
			};
			class RF: LF
			{
				boneName="wheel_2_1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=3500;
			};
			class R4: RR
			{
				boneName="wheel_2_3";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=0.2;
			};
		};
		class AnimationSources
		{
			class Horn
			{
				source="reload";
				weapon="Gatling_30mm_Plane_CAS_01_F";
			};
			class wheelmk2_user
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
		};
	};
	class sfp_wheelchair_mark2: sfp_wheelchair
	{
		displayname="Wheelchair Mk 2";
		scope=1;
		author="Swedish Forces Pack (FW200)";
		weapons[]=
		{
			"Gatling_30mm_Plane_CAS_01_F"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		class AnimationSources
		{
			class Horn
			{
				source="reload";
				weapon="Gatling_30mm_Plane_CAS_01_F";
			};
			class wheelmk2_user
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
		};
		class RenderTargets
		{
			class rendertarget0
			{
				renderTarget="rendertarget0";
				class View01
				{
					pointPosition="R_pos";
					pointDirection="R_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
			class rendertarget1
			{
				renderTarget="rendertarget1";
				class View01
				{
					pointPosition="R_pos1";
					pointDirection="R_dir1";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
		};
	};

	class sfp_wheelchair_normal: B_Quadbike_01_F
	{
		dlc="sfp";
		author="Boonji";
		vehicleclass="sfp_vehclass_soft";
		crew="C_man_1";
		faction="CIV_F";
		driverAction="sfp_wheelchair_driver";
		armor=500;
		displayname="Wheelchair";
		picture="\sfp_wheelchair\ui\icon_wheelchair_ca.paa";
		icon="\sfp_wheelchair\ui\map_wheelchair_ca";
		scope=2;
		model="\sfp_wheelchair\sfp_wheelchair.p3d";
		class DestructionEffects
		{
		};
		side=3;
		driverLeftHandAnimName="wheel_1_3";
		driverRightHandAnimName="wheel_2_3";
		brakeDistance=50;
		hideWeaponsDriver=1;
		rightDustEffects[]={};
		leftDustEffects[]={};
		explosionEffect="";
		maxSpeed=8;
		wheelCircumference=1.5;
		soundGetIn[]=
		{
			"",
			1,
			1
		};
		soundGetOut[]=
		{
			"",
			1,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"",
			1,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"",
			1,
			1,
			200
		};
		class Sounds
		{
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.2818383,
					1,
					120
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"",
					0.1,
					1,
					120
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.014125375,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.017782794,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"",
					0.017782794,
					1
				};
				frequency="1";
				volume="(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_1_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_2_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_1_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_2_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_1_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_2_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_1_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_2_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class Library
		{
			libTextDesc="A classic wheel chair for the old, disabled or wounded.";
		};
		class RenderTargets
		{
		};
		memoryPointGun[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunBeg[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunEnd[]=
		{
			"z_gunL_chamber",
			"z_gunR_chamber"
		};
		weapons[]={""};
		magazines[]={""};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		class textureSources
		{
		};
		alphaTracks=0.1;
		textureTrackWheel=1;
		damperSize=0.2;
		damperForce=1;
		damperDamping=3;
		transportSoldier=0;
		typicalCargo[]={};
		memoryPointTrack1L="Stopa PPL";
		memoryPointTrack1R="Stopa PPP";
		memoryPointTrack2L="Stopa ZPL";
		memoryPointTrack2R="Stopa ZPP";
		memoryPointTrackBRL="";
		memoryPointTrackBRR="";
		memoryPointTrackFRL="";
		memoryPointTrackFRR="";
		memoryPointTrackFLL="Stopa PLL";
		memoryPointTrackFLR="Stopa PLP";
		memoryPointTrackBLL="Stopa ZLL";
		memoryPointTrackBLR="Stopa ZLP";
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.126";
				mass=30;
				MOI=2.8;
				dampingRate=0.1;
				maxBrakeTorque=500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				mMaxDroop=0.1;
				sprungMass=825;
				springStrength=51625;
				springDamperRate=8920;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=2;
			};
			class R3: LR
			{
				boneName="wheel_1_3";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=2;
			};
			class RF: LF
			{
				boneName="wheel_2_1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=3500;
			};
			class R4: RR
			{
				boneName="wheel_2_3";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=0.2;
			};
		};
		class AnimationSources
		{
			class Horn
			{
				source="reload";
				weapon="";
			};
			class wheelmk2_user
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
		};
	};
};


