class CfgPatches
{
	class Survivalists_Sounds_ShortStories
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects"
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
			{"Survivalists_Sounds\sounds\cassettes\shortstories\data\The_Whitefingered_Hag_of_Treepwood.ogg",1}
		};
	};
  class SRPRadio_ShortStory_SkylarWolfe_HeavensGate_Shader1: SRPRadio_Cassette_ShortStory_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\cassettes\shortstories\data\Storyteller_Series_Heavens_Gate.ogg",1}
		};
	};
  class SRPRadio_ShortStory_SkylarWolfe_IbargiooftheGreatWesternWoods_Shader1: SRPRadio_Cassette_ShortStory_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\cassettes\shortstories\data\Storyteller_Series_Ibargio_of_the_Great_Western_Woods.ogg",1}
		};
	};
  class SRPRadio_ShortStory_EspenIndustries_MissleDynamics_Shader1: SRPRadio_Cassette_ShortStory_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\cassettes\shortstories\data\espen_missledynamics.ogg",1}
		};
	};
  class SRPRadio_ShortStory_EspenIndustries_TechJargon_Shader1: SRPRadio_Cassette_ShortStory_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\cassettes\shortstories\data\espen_techjargon.ogg",1}
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
  class SRPRadio_ShortStory_HeavensGate_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_ShortStory_SkylarWolfe_HeavensGate_Shader1"
		};
	};
  class SRPRadio_ShortStory_IbargiooftheGreatWesternWoods_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_ShortStory_SkylarWolfe_IbargiooftheGreatWesternWoods_Shader1"
		};
	};
  class SRPRadio_ShortStory_MissleDynamics_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_ShortStory_EspenIndustries_MissleDynamics_Shader1"
		};
	};
  class SRPRadio_ShortStory_TechJargon_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_ShortStory_EspenIndustries_TechJargon_Shader1"
		};
	};
};