class CfgPatches
{
	class Survivalists_Mods_Sounds_Ambience
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
  class Survivalists_Mods_Ambience_Casino_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=100;
		rangeCurve[]=
		{
			{5,0.998},
			{25,0.75},
			{50,0.50},
			{75,0.45},
			{100,0.3332}
		};
		volume=1;
	};
	class Survivalists_Mods_Ambience_Chanting1_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_21220.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting2_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_22371.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting3_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_25916.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting4_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_50087.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting5_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_103539.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting6_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_223377.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting7_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_349490.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting8_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_352764.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting9_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_543951.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting10_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_578142.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting11_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_591250.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting12_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_609180.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting13_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_610805.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting14_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_64602_64621.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting15_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_64602_64621_79647.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting16_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_141367_141366.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting17_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_395402.ogg",1}
		};
	};

  class Survivalists_Mods_Ambience_Tribal1_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\tribal_198491.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Tribal2_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\tribal_400605_400809_20780_195313.ogg",1}
		};
	};


  class Survivalists_Mods_Ambience_Casino_SlotsPayout_SoundShader: Survivalists_Mods_Ambience_Casino_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\slots_payout.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsSpinning_SoundShader: Survivalists_Mods_Ambience_Casino_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\slots_spinning.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsWinningPayout_SoundShader: Survivalists_Mods_Ambience_Casino_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\slots_winning_payout.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsWinning_SoundShader: Survivalists_Mods_Ambience_Casino_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\slots_winning.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsResetting_SoundShader: Survivalists_Mods_Ambience_Casino_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\slots_resetting.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsFailing_SoundShader: Survivalists_Mods_Ambience_Casino_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\slots_failing.ogg",1}
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

  class Survivalists_Mods_Ambience_Casino_SlotsPayout_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Casino_SlotsPayout_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsSpinning_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Casino_SlotsSpinning_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsWinningPayout_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Casino_SlotsWinningPayout_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsWinning_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Casino_SlotsWinning_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsResetting_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Casino_SlotsResetting_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Casino_SlotsFailing_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Casino_SlotsFailing_SoundShader"
		};
	};
};
