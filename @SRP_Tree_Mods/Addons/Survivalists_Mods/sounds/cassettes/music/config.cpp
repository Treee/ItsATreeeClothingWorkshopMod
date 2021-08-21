class CfgPatches
{
	class Survivalists_Mods_Sounds_Music
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
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
	class SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=80;
		volume=1.2;
	};
	class SRPRadio_Snowblood_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\ERRASnowblood.ogg",1}
		};
	};
	class SRPRadio_Divisionary_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\ERRADivisionaryOfficial.ogg",1}
		};
	};
	class SRPRadio_HouseofGlass_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\ERRAHouseOfGlass.ogg",1}
		};
	};
	class SRPRadio_Trumpet_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\OldSchoolTrumpet.ogg",1}
		};
	};
	class SRPRadio_NothingPersonal_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\HardRockVocalsNothingPersonal.ogg",1}
		};
	};
	class SRPRadio_ClassicRock_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\ClassicRock.ogg",1}
		};
	};
	class SRPRadio_WayoutWest_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\TwinMusicom-WayOutWest.ogg",1}
		};
	};
	class SRPRadio_RockandRoll_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\PowerfulInstrumentalRockMusic.ogg",1}
		};
	};
	class SRPRadio_Broken_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\SweetAnarchyBroken.ogg",1}
		};
	};
	class SRPRadio_Bread_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Bread.ogg",1}
		};
	};

  class SRPRadio_SkylarWolfe_ThreeLittleBirds_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Three_Little_Birds_Sung_by_Skylar_Wolfe.ogg",1}
		};
	};
};

class CfgSoundSets
{
	class SRPRadio_Snowblood_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Snowblood_Shader1"
		};
	};
	class SRPRadio_Divisionary_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Divisionary_Shader1"
		};
	};
	class SRPRadio_HouseofGlass_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_HouseofGlass_Shader1"
		};
	};
	class SRPRadio_Trumpet_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Trumpet_Shader1"
		};
	};
	class SRPRadio_NothingPersonal_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_NothingPersonal_Shader1"
		};
	};
	class SRPRadio_ClassicRock_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_ClassicRock_Shader1"
		};
	};
	class SRPRadio_WayoutWest_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_WayoutWest_Shader1"
		};
	};
	class SRPRadio_RockandRoll_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_RockandRoll_Shader1"
		};
	};
	class SRPRadio_Broken_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Broken_Shader1"
		};
	};
	class SRPRadio_Bread_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Bread_Shader1"
		};
	};
  class SRPRadio_SkylarWolfe_ThreeLittleBirds_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_ThreeLittleBirds_Shader1"
		};
	};
};