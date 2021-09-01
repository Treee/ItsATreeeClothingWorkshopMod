class CfgPatches
{
	class Survivalists_Mods_Sounds_ShortStories
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects",
      "Survivalists_Mods"
		};
	};
};

class CfgSoundShaders
{
  class SRPRadio_Cassette_ShortStory_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=80;
		volume=1.2;
	};
	class SRPRadio_ShortStory_SkylarWolfe_WhiteFingerHag_Shader1: SRPRadio_Cassette_ShortStory_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\shortstories\data\The_Whitefingered_Hag_of_Treepwood.ogg",1}
		};
	};
};

class CfgSoundSets
{
	class SRPRadio_ShortStory_WhiteFingerHag_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_ShortStory_SkylarWolfe_WhiteFingerHag_Shader1"
		};
	};
};