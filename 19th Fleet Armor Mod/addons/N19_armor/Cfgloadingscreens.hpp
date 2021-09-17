class RscPicture{}; //part of the background
class RscStandardDisplay{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{}; 

class RscTitles //part of the background
{
	class SplashNoise //part of the background
		{
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "";
			};
		};
	class brokenhud : SplashNoise	//part of the background
		{
			duration=100000000
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "";
			};
		};
};	
class RscDisplayMain: RscStandardDisplay //this class changes the insignia on the top
{
	class Controls //this class changes the insignia on the top
	{
	    delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture //this class changes the insignia on the top
		{
			text = "\N19_armor\data\LoadingScreens\19.paa";
			
		};
	};
	enableDisplay = 0;
	delete Spotlight;
	class RscActiveText ;
    class RscActivePicture : RscActiveText
    {
        style = 48;
        color[] = {
                1, 1, 1, 0.500000
        };
        colorActive[] = {
                1, 1, 1, 1
        };
    };
	
	class controlsBackground {
        class LoadingPic : RscPicture {
            idc=1;
            x = SafeZoneX;
            y = SafeZoneY;
            h = SafeZoneH;
            w = SafeZoneW;
            text = "\N19_armor\data\loadingscreens\1.jpg";
        };
    };
};

class RscDisplayLoading {
	class Variants {
		class LoadingOne {
			idd = 250;
			class controls {
				class LoadingPic : RscPicture {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\N19_armor\data\loadingscreens\2.jpg";
				};
			};
		};

		class Loading_West1 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\N19_armor\data\loadingscreens\3.jpg";
				};
			};
		};

		class Loading_West2 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\N19_armor\data\loadingscreens\4.jpg";
				};
			};
		};

		class Loading_East1 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\N19_armor\data\loadingscreens\7.jpg";
				};
			};
		};
		class Loading_East2 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\N19_armor\data\loadingscreens\8.jpg";
				};
			};
		};
	};
};

class RscDisplayLoadMission : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\N19_armor\data\loadingscreens\2.jpg";
		};
	};
};

class RscDisplayStart : RscStandardDisplay {
	class controls {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\N19_armor\data\loadingscreens\9.jpg";
		};
	};
};

class RscDisplayMPPlayers;
	class RscDisplayClientWait : RscDisplayMPPlayers {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\N19_armor\data\loadingscreens\10.jpg";
		};
	};

class RscDisplayClient : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\N19_armor\data\loadingscreens\2.jpg";
		};
	};
};