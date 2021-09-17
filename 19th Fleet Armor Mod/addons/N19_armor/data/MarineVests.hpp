class 19_M52A_Armor_Woodland: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine Standard (Woodland)";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_pvt_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_pvt_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_M52A_Armor_Urban: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine Standard (Urban)";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_pvt_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_pvt_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};


class 19_M52A_Armor_Kelly_W: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Woodland) [Kelly]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_kelly_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_kelly_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_M52A_Armor_Kelly_U: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Urban) [Kelly]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_kelly_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_kelly_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};


class 19_M52A_Armor_Kane_W: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Woodland) [Kane]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_kane_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_kane_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_M52A_Armor_Kane_U: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Urban) [Kane]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_kane_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_kane_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};


class 19_M52A_Armor_McNasty_W: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Woodland) [McNasty]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_mcnasty_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_mcnasty_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_M52A_Armor_McNasty: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Urban) [McNasty]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_mcnasty_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_mcnasty_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};


class 19_M52A_Armor_Pen_W: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Woodland) [Pen]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_pen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_pen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_M52A_Armor_Pen_U: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Urban) [Pen]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_pen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_pen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
class 19_M52A_Armor_Corpsman_WDL: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Corpsman (Woodland)";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_corpsman_w_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_corpsman_w_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
class 19_M52A_Armor_Corpsman_URB: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Corpsman (Urban)";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_corpsman_u_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_corpsman_u_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

	class 19_marine_light_w: 19_M52A_Armor_Woodland
	{
		author="19th Mod Team";
		displayName="[19] Marine Light (Woodland)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_marine_medium_w: 19_M52A_Armor_Woodland
	{
		displayName="[19] Marine Medium (Woodland)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
	
	class 19_marine_heavy_w: 19_M52A_Armor_Woodland
	{
		displayName="[19] Marine Heavy (Woodland)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
			
		};
	};

	class 19_marine_light_u: 19_M52A_Armor_Urban
	{
		author="19th Mod Team";
		displayName="[19] Marine Light (Urban)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_marine_medium_u: 19_M52A_Armor_Urban
	{
		displayName="[19] Marine Medium (Urban)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
	
	class 19_marine_heavy_u: 19_M52A_Armor_Urban
	{
		displayName="[19] Marine Heavy (Urban)";
		
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

	class 19_M52A_Armor_Zazen_W: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Woodland) [Zazen]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_zazen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_zazen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_M52A_Armor_Zazen_U: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Urban) [Zazen]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_zazen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_zazen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_M52A_Armor_Swaney_W: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Woodland) [Swaney]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			//	"AS_SmallRight",
			//	"AP_AR",
				"AP_BR",
			//	"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
			//	"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
			//	"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_swaney_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			//	"AS_SmallRight",
			//	"AP_AR",
				"AP_BR",
			//	"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
			//	"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
			//	"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_zazen_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_M52A_Armor_Swaney_U: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Urban) [Swaney]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			//	"AS_SmallRight",
			//	"AP_AR",
				"AP_BR",
			//	"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
			//	"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
			//	"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_swaney_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			//	"AS_SmallRight",
			//	"AP_AR",
				"AP_BR",
			//	"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
			//	"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
			//	"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_swaney_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

	class 19_Corpsman_light_w: 19_M52A_Armor_Corpsman_WDL
	{
		author="19th Mod Team";
		displayName="[19] Corpsman Light (Woodland)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_Corpsman_medium_w: 19_M52A_Armor_Corpsman_WDL
	{
		displayName="[19] Corpsman Medium (Woodland)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
	
	class 19_Corpsman_heavy_w: 19_M52A_Armor_Corpsman_WDL
	{
		displayName="[19] Corpsman Heavy (Woodland)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
			
		};
	};

	class 19_Corpsman_light_u: 19_M52A_Armor_Corpsman_URB
	{
		author="19th Mod Team";
		displayName="[19] Corpsman Light (Urban)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};

class 19_Corpsman_medium_u: 19_M52A_Armor_Corpsman_URB
	{
		displayName="[19] Corpsman Medium (Urban)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
	
	class 19_Corpsman_heavy_u: 19_M52A_Armor_Corpsman_URB
	{
		displayName="[19] Corpsman Heavy (Urban)";
		
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			mass=80;
			containerClass="Supply300";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
class 19_M52A_Armor_split_W: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Woodland) [Split Jaw]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_split_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_split_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
			//	"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_Pack",
			//	"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
			//	"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
			//	"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_w_split_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_w_split_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
class 19_M52A_Armor_split_u: OPTRE_UNSC_M52A_Armor1_WDL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] Marine (Urban) [Split Jaw]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_split_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_split_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Base",
			//	"A_ChestArmor",
				"A_Ghillie",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
			//	"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_Pack",
			//	"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
			//	"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
			//	"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch",
			};
			hiddenSelectionsTextures[]=
			{
			"N19_Armor\data\Vests\n19_armor_base_co.paa",
			"N19_Armor\data\Vests\n19_armor_vest_marine_u_split_co.paa",
			"N19_Armor\data\Vests\n19_armor_legs_marine_u_split_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};