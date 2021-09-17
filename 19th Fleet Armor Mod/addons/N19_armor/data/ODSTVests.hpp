class 19_ODST_Chad: VES_M52D_Rifleman
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		dlc="19th Armour Pack";
		author="19th Mod Team";
		displayName="[19] ODST [Chadzilla]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
			"camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
        //  "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
        //  "APO_AR",
            "APO_BR",
        //  "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"N19_Armor\data\ODST\n19_armor_legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"N19_Armor\data\ODST\n19_armor_vest_odst_chad.paa"
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
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
        //  "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
        //  "APO_AR",
            "APO_BR",
        //  "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"N19_Armor\data\ODST\n19_armor_vest_odst_chad.paa"
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

class 19_ODST_Polon: VES_M52D_Rifleman
    {
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        dlc="19th Armour Pack";
        author="19th Mod Team";
        displayName="[19] ODST [Polon]";
        model="\OPTRE_UNSC_Units\Army\armor.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
        //  "AS_ODSTCQBLeft",
        //  "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
        //  "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
        //  "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "N19_Armor\data\ODST\n19_armor_legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst_polon.paa"
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
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
        //  "AS_ODSTCQBLeft",
        //  "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
        //  "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
        //  "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
            };
            hiddenSelectionsTextures[]=
            {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst_polon.paa"
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

class 19_ODST_Gibby: VES_M52D_Rifleman
    {
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        dlc="19th Armour Pack";
        author="19th Mod Team";
        displayName="[19] ODST [Gibby]";
        model="\OPTRE_UNSC_Units\Army\armor.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
        //  "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
            "APO_AR",
        //  "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "N19_Armor\data\ODST\n19_armor_legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst_gibby.paa"
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
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
        //    "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
            "APO_AR",
        //  "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
            };
            hiddenSelectionsTextures[]=
            {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst_gibby.paa"
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

class 19_ODST_clover: VES_M52D_Rifleman
    {
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        dlc="19th Armour Pack";
        author="19th Mod Team";
        displayName="[19] ODST [Clover]";
        model="\OPTRE_UNSC_Units\Army\armor.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
        //  "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
            "APO_AR",
        //  "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "N19_Armor\data\ODST\odst_legs.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst_clover.paa"
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
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
        //    "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
            "APO_AR",
        //  "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
            };
            hiddenSelectionsTextures[]=
            {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "N19_Armor\data\ODST\odst_legs.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst_clover.paa"
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

class 19_ODST_Medic: VES_M52D_Rifleman
    {
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        dlc="19th Armour Pack";
        author="19th Mod Team";
        displayName="[19] ODST (Medic)";
        model="\OPTRE_UNSC_Units\Army\armor.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
        //  "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
            "APO_AR",
        //  "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "N19_Armor\data\ODST\n19_armor_legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst_medic.paa"
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
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
        //    "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
            "APO_AR",
        //  "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
            };
            hiddenSelectionsTextures[]=
            {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst_medic.paa"
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

 class 19_ODST_Fenrir: VES_M52D_Rifleman
    {
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        dlc="19th Armour Pack";
        author="19th Mod Team";
        displayName="[19] ODST";
        model="\OPTRE_UNSC_Units\Army\armor.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
        //  "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
            "APO_AR",
        //  "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "N19_Armor\data\ODST\n19_armor_legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst.paa"
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
            "A_Ghillie",
        //  "A_KneesLeft",
        //  "A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
        //  "A_ODST",
        //  "A_ShinArmorLeft",
        //  "A_ShinArmorRight",
        //  "A_TacPad",
        //  "A_ThighArmorLeft",
        //  "A_ThighArmorRight",
        //  "AS_BaseLeft",
        //  "AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
        //    "AS_ODSTLeft",
        //  "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
        //  "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
        //  "AP_Frag",
            "AP_Smoke",
            "APO_Sniper",
            "APO_AR",
        //  "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "CustomKit_Scorch"
            };
            hiddenSelectionsTextures[]=
            {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "N19_Armor\data\ODST\n19_armor_legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "N19_Armor\data\ODST\n19_armor_vest_odst.paa"
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