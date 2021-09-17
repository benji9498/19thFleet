
class 19_ODST_Helmet_Crooks: OPTRE_UNSC_CH252D_Helmet
    {
        dlc="19th Armour Pack";
        scope=2;
        scopeArsenal=2;
        displayName="[19] S3 [Crooks]";
        author="19th Mod Team";
        picture="\OPTRE_UNSC_Units\Army\icons\recon_helmet.paa";
        model="\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "N19_Armor\data\S3\n19_helmet_recon_crooks_co.paa",
            "N19_Armor\data\S3\Crooks_Visor_co.paa"
        };
        optreVarietys[]=
        {
            "_dp",
            "",
            "_broken"
        };
        optreHUDStyle="ODST_1";
        class ItemInfo: HeadgearItem
        {
            uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
            mass=40;
            modelSides[]={6};
            passThrough=0.1;
            hiddenSelections[]=
            {
                "camo",
                "camo2"
            };
            hiddenSelectionsTextures[]=
            {
            "N19_Armor\data\S3\n19_helmet_recon_crooks_co.paa",
            "N19_Armor\data\S3\Crooks_Visor_co.paa",
            };
            ace_hearing_protection=1.1;
            ace_hearing_lowerVolume=0.30000001;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=25;
                    passThrough=0.1;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=25;
                    passThrough=0.1;
                };
                class Neck
                {
                    hitpointName="HitNeck";
                    armor=20;
                    passThrough=0.1;
                };
            };
        };
    };
    class 19_ODST_Helmet_Crooks_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        dlc="19th Armour Pack";
        scope=1;
        scopeArsenal=1;
        displayName="[19] S3 [Zach/Clear]";
        author="19th Mod Team";
        picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
        model="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "N19_Armor\data\S3\n19_helmet_recon_crooks_co.paa",
            "N19_Armor\data\ODST\V_CH252D_CLR_V_CA.paa",
        };
        optreVarietys[]=
        {
            "_dp",
            "",
            "_broken"
        };
        optreHUDStyle="ODST_1";
        class ItemInfo: HeadgearItem
        {
            uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
            mass=40;
            modelSides[]={6};
            passThrough=0.1;
            hiddenSelections[]=
            {
                "camo",
                "camo2"
            };
            hiddenSelectionsTextures[]=
            {
            "N19_Armor\data\S3\n19_helmet_recon_crooks_co.paa",
            "N19_Armor\data\ODST\V_CH252D_CLR_V_CA.paa",
            };
            ace_hearing_protection=1.1;
            ace_hearing_lowerVolume=0.1;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=25;
                    passThrough=0.1;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=25;
                    passThrough=0.1;
                };
                class Neck
                {
                    hitpointName="HitNeck";
                    armor=20;
                    passThrough=0.1;
                };
            };
        };
    };