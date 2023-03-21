class CfgPatches
{
	class Survivalists_Sounds_Ambience
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
	class Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=1000;
		rangeCurve[]=
		{
			{100,0.998},
			{250,0.75},
			{500,0.50},
			{750,0.45},
			{1000,0.3332}
		};
		volume=1.2;
	};
	class Survivalists_Mods_Ambience_Chanting1_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_21220.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting2_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_22371.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting3_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_25916.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting4_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_50087.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting5_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_103539.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting6_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_223377.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting7_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_349490.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting8_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_352764.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting9_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_543951.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting10_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_578142.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting11_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_591250.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting12_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_609180.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting13_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_610805.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting14_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_64602_64621.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting15_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_64602_64621_79647.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting16_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_141367_141366.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting17_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\chanting_395402.ogg",1}
		};
	};

  class Survivalists_Mods_Ambience_Tribal1_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\tribal_198491.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Tribal2_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\tribal_400605_400809_20780_195313.ogg",1}
		};
	};

  class Survivalists_Mods_Ambience_MonsterLowGrowl1_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl1.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl2_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl2.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl3_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl3.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl4_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl4.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl5_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl5.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl6_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl6.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl7_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl7.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl8_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl8.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl9_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl9.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl10_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl10.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl11_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl11.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl12_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl12.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl13_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl13.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl14_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl4.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl15_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl5.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl16_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowgrowl6.ogg",1}
		};
	};

  class Survivalists_Mods_Ambience_MonsterLowPounding1_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowpounding1.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowPounding2_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\lowpounding2.ogg",1}
		};
	};

  class Survivalists_Mods_Ambience_WarHorn1_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn1.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn2_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn2.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn3_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn3.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn4_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn4.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn5_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn5.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn6_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn6.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn7_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn7.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn8_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn8.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn9_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn9.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_WarHorn10_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\warhorn10.ogg",1}
		};
	};

  class Survivalists_Mods_Ambience_Aircraft_HelicopterFlyOver_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Sounds\sounds\ambience\data\helicopter_flyover.ogg",1}
		};
	};
  
};
class CfgSoundSets
{
	class Survivalists_Mods_Ambience_Chanting1_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting1_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting2_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting2_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting3_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting3_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting4_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting4_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting5_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting5_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting6_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting6_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting7_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting7_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting8_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting8_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting9_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting9_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting10_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting10_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting11_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting11_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting12_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting12_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting13_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting13_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting14_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting14_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting15_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting15_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting16_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting16_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting17_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting17_SoundShader"
		};
	};

  class Survivalists_Mods_Ambience_Tribal1_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Tribal1_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Tribal2_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Tribal2_SoundShader"
		};
	};

  class Survivalists_Mods_Ambience_MonsterLowGrowl1_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl1_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl2_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl2_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl3_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl3_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl4_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl4_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl5_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl5_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl6_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl6_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl7_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl7_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl8_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl8_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl9_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl9_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl10_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl10_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl11_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl11_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl12_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl12_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl13_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl13_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl14_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl14_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowl15_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowl15_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowGrowll6_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowGrowll6_SoundShader"
		};
	};

  class Survivalists_Mods_Ambience_MonsterLowPounding1_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowPounding1_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_MonsterLowPounding2_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_MonsterLowPounding2_SoundShader"
		};
	};

  class Survivalists_Mods_Ambience_WarHorn1_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn1_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn2_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn2_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn3_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn3_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn4_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn4_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn5_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn5_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn6_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn6_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn7_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn7_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn8_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn8_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn9_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn9_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_WarHorn10_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_WarHorn10_SoundShader"
		};
	};

  class Survivalists_Mods_Ambience_Aircraft_HelicopterFlyOver_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Aircraft_HelicopterFlyOver_SoundShader"
		};
	};
};
