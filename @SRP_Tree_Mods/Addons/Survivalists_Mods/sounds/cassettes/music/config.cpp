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
  class SRPRadio_SkylarWolfe_Hallelujah_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Hallelujah_Cover_By_Sky.ogg",1}
		};
	};
  class SRPRadio_SkylarWolfe_BoulevardofBrokenDreams_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Boulevard_Of_Broken_DreamsSung_by_Skylar_Wolfe.ogg",1}
		};
	};
  class SRPRadio_SkylarWolfe_ClashofTheworld_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Clash_of_The_World_Sung_by_Skylar_Wolfe.ogg",1}
		};
	};
  class SRPRadio_SkylarWolfe_Creep_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Creep_Sung_by_Skylar_Wolfe.ogg",1}
		};
	};
  class SRPRadio_SkylarWolfe_FixYou_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Fix_You_Sung_By_Skylar_Wolfe_.ogg",1}
		};
	};
  class SRPRadio_SkylarWolfe_RingOfFire_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Ring_Of_Fire_Sung_by_Skylar_Wolfe.ogg",1}
		};
	};
  class SRPRadio_SkylarWolfe_Wonderwall_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Wonderwall_Sung_By_Skylar_Wolfe.ogg",1}
		};
	};
  class SRPRadio_SkylarWolfe_SaySomething_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Say_Something_Sung_by_Skylar_Wolfe.ogg",1}
		};
	};
  class SRPRadio_Pinkerton_TheShadow_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Vocal_Test_-_The_Shadow.ogg",1}
		};
	};
  class SRPRadio_Gague_Forever_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\Forever.ogg",1}
		};
	};
  class SRPRadio_Gague_DontLeaveMe_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\dont_leave_me.ogg",1}
		};
	};
  class SRPRadio_Gague_MySide_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\My_side.ogg",1}
		};
	};
  class SRPRadio_Gague_Anger_Shader1: SRPRadio_Cassette_Music_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\cassettes\music\data\anger.ogg",1}
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
  class SRPRadio_SkylarWolfe_BoulevardofBrokenDreams_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_BoulevardofBrokenDreams_Shader1"
		};
	};
  class SRPRadio_SkylarWolfe_ClashofTheworld_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_ClashofTheworld_Shader1"
		};
	};
  class SRPRadio_SkylarWolfe_Creep_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_Creep_Shader1"
		};
	};
  class SRPRadio_SkylarWolfe_FixYou_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_FixYou_Shader1"
		};
	};
  class SRPRadio_SkylarWolfe_Hallelujah_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_Hallelujah_Shader1"
		};
	};
  class SRPRadio_SkylarWolfe_RingOfFire_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_RingOfFire_Shader1"
		};
	};
  class SRPRadio_SkylarWolfe_WonderWall_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_Wonderwall_Shader1"
		};
	};
  class SRPRadio_SkylarWolfe_SaySomething_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_SkylarWolfe_SaySomething_Shader1"
		};
	};
  class SRPRadio_Pinkerton_TheShadow_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Pinkerton_TheShadow_Shader1"
		};
	};
  class SRPRadio_Gague_Forever_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Gague_Forever_Shader1"
		};
	};
  class SRPRadio_Gague_DontLeaveMe_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Gague_DontLeaveMe_Shader1"
		};
	};
  class SRPRadio_Gague_MySide_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Gague_MySide_Shader1"
		};
	};
  class SRPRadio_Gague_Anger_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_Gague_Anger_Shader1"
		};
	};
};