	class 19th_Jotunn_Scruffy: H_HelmetB
	{
		author="19th Mod Team";
		scope=2;
		displayName="[19] Armored (Scruffy)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"N19_Armor\data\Armored\V_CH252_WDL_C_scruffy_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			hiddenSelections[]=
			{
				"Camo"
			};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};