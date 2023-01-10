class CfgPatches
{
	class Survivalists_Sounds_NumberStations
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
	class Survivalists_Mods_NumberStations_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{80,0.5},
			{100,0.30000001},
			{150,0.2},
			{200,0}
		};
		volume=2;
	};
  //quarry location puzzle
	class Survivalists_Mods_NumberStation1_SoundShader: Survivalists_Mods_NumberStations_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\numberstations\data\numberstation-1.ogg",1}
		};
	};
  //warning message
  class Survivalists_Mods_NumberStation2_SoundShader: Survivalists_Mods_NumberStations_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\numberstations\data\uknuclearwarningg.ogg",1}
		};
	};
  //bunker message
  class Survivalists_Mods_NumberStation3_SoundShader: Survivalists_Mods_NumberStations_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\numberstations\data\numberstation-2.ogg",1}
		};
	};
  //word problem message
  class Survivalists_Mods_NumberStation4_SoundShader: Survivalists_Mods_NumberStations_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\numberstations\data\numberstation-3.ogg",1}
		};
	};
};
class CfgSoundSets
{
	class Survivalists_Mods_NumberStation1_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_NumberStation1_SoundShader"
		};
	};
  class Survivalists_Mods_NumberStation2_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_NumberStation2_SoundShader"
		};
	};
  class Survivalists_Mods_NumberStation3_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_NumberStation3_SoundShader"
		};
	};
  class Survivalists_Mods_NumberStation4_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_NumberStation4_SoundShader"
		};
	};
};
