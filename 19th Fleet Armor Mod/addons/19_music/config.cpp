// Make sure to have this inside a folder (within the addon) titled "addons". Make sure to have a meta.cpp in the same folder as the "addons" folder.
#include "BIS_AddonInfo.hpp"
// Gonna send you both a meta.cpp file for reference and a "BIS_AddonInfo.hpp", you can edit those files with notepad++.
#define _ARMA_


//Class config.cpp{
class CfgPatches
{
	class UNSC // The name of the addon within code
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMusicClasses
{
	class UNSC // The name of the music section within coding! 
	{
		displayName = "Halo Music Pack"; // What the tab of music is displayed as when in the music player.
	};
};

class CfgMusic
{
	class arrival // The class name, it's used to find the file in the game files
	{
		name = "Halo 4 - Arrival"; // The name of the theme when viewing it in game.
		sound[] = {"\addons\arrival.ogg",1,1}; // the name of the soundfile and it's location (for example, say the folder name is "memes" it would be: \memes\*soundfilename*.ogg)
	// to be clear, the sound file cannot be .mp3 or .mp4. It has to be a .ogg file. You can find several online converters and so on.
	theme = "Score"; // Not important.
		duration = "334"; // how long the sound file is. (counted in seconds)
		musicClass = "UNSC"; // Put this to the same as the class for the musicClass up above. (class SWBF2MUSIC)
	};
	class spear // The class name, it's used to find the file in the game files
	{
		name = "Halo Reach - Tip of the Spear"; // The name of the theme when viewing it in game.
		sound[] = {"\19_music\spear.ogg",1,1}; // the name of the soundfile and it's location (for example, say the folder name is "memes" it would be: \memes\*soundfilename*.ogg)
	// to be clear, the sound file cannot be .mp3 or .mp4. It has to be a .ogg file. You can find several online converters and so on.
	theme = "Score"; // Not important.
		duration = "363"; // how long the sound file is. (counted in seconds)
		musicClass = "UNSC"; // Put this to the same as the class for the musicClass up above. (class SWBF2MUSIC)
	};
	class epilogue 
	{
		name = "Halo 2 - Epilogue"; 
		sound[] = {"\19_music\epilogue.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "229"; 
		musicClass = "UNSC";
	};
	class ark
	{
		name = "Halo 3 - Behold a Pale Horse"; 
		sound[] = {"\19_music\ark.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "337"; 
		musicClass = "UNSC";
	};
	class action
	{
		name = "Halo Wars - Action Figure Hands"; 
		sound[] = {"\19_music\action.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "179"; 
		musicClass = "UNSC";
	};
	class facto
	{
		name = "Halo Wars - De Facto the Matter"; 
		sound[] = {"\19_music\facto.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "90"; 
		musicClass = "UNSC";
	};
	class insignificantia
	{
		name = "Halo Wars - Insignificantia"; 
		sound[] = {"\19_music\insignificantia.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "198"; 
		musicClass = "UNSC";
	};
	class grunts
	{
		name = "Halo Wars - Work Burns and Runaway Grunts"; 
		sound[] = {"\19_music\grunts.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "102"; 
		musicClass = "UNSC";
	};
	class alexandria
	{
		name = "Halo Reach - New Alexandria"; 
		sound[] = {"\19_music\alexandria.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "522"; 
		musicClass = "UNSC";
	};
	class remeber
	{
		name = "Halo Reach - We Remeber"; 
		sound[] = {"\19_music\remeber.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "122"; 
		musicClass = "UNSC";
	};
	class finish
	{
		name = "Halo 3 - Finish The Fight"; 
		sound[] = {"\19_music\finish.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "140"; 
		musicClass = "UNSC";
	};
	class effort
	{
		name = "Halo 3 - Final Effort"; 
		sound[] = {"\19_music\effort.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "189"; 
		musicClass = "UNSC";
	};
	class overture
	{
		name = "Halo Reach - Overture"; 
		sound[] = {"\19_music\overture.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "287"; 
		musicClass = "UNSC";
	};
	class wolf
	{
		name = "Halo Reach - Lone Wolf"; 
		sound[] = {"\19_music\wolf.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "247"; 
		musicClass = "UNSC";
	};
	class blue
	{
		name = "Halo 5 - Blue Team"; 
		sound[] = {"\19_music\blue.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "276"; 
		musicClass = "UNSC";
	};
	class trials
	{
		name = "Halo 5 - The Trials"; 
		sound[] = {"\19_music\trials.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "253"; 
		musicClass = "UNSC";
	};
	class john
	{
		name = "Halo 4 - 117"; 
		sound[] = {"\19_music\john.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "450"; 
		musicClass = "UNSC";
	};
	class mjolnir
	{
		name = "Halo 2 - Main Theme"; 
		sound[] = {"\19_music\Halo2Theme.ogg",1,1}; 
	
	theme = "Score"; 
		duration = "251"; 
		musicClass = "UNSC";
	};
};