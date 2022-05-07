class CfgPatches
{
	class Survivalists_RadioElectronics_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects",
      "Survivalists_RadioElectronics"
		};
	};
};

class CfgSoundShaders
{
	class SRPRadioElectronics_Jammer_SoundShaderBase
	{
		samples[]={};
		frequency=1;
		volume=1;
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.60000002},
			{100,0.30000001},
			{200,0.2},
			{350,0.1}
		};
	};
	class SRPRadioElectronics_Jammer_1: SRPRadioElectronics_Jammer_SoundShaderBase
	{
		samples[]=
		{
			{"Survivalists_RadioElectronics\sounds\data\electronicjammer1_54041.ogg",1}
		};
	};
  class SRPRadioElectronics_Jammer_2: SRPRadioElectronics_Jammer_SoundShaderBase
	{
		samples[]=
		{
			{"Survivalists_RadioElectronics\sounds\data\electronicjammer2_78657.ogg",1}
		};
	};
  class SRPRadioElectronics_Jammer_3: SRPRadioElectronics_Jammer_SoundShaderBase
	{
		samples[]=
		{
			{"Survivalists_RadioElectronics\sounds\data\electronicjammer3_203512.ogg",1}
		};
	};
  class SRPRadioElectronics_Jammer_4: SRPRadioElectronics_Jammer_SoundShaderBase
	{
		samples[]=
		{
			{"Survivalists_RadioElectronics\sounds\data\electronicjammer4_126717.ogg",1}
		};
	};
  class SRPRadioElectronics_Jammer_5: SRPRadioElectronics_Jammer_SoundShaderBase
	{
		samples[]=
		{
			{"Survivalists_RadioElectronics\sounds\data\electronicjammer5_566588.ogg",1}
		};
	};
};

class CfgSoundSets
{
	class SRPRadioElectronics_SoundSet_Jammer_1
	{
		soundShaders[]=
		{
			"SRPRadioElectronics_Jammer_1"
		};
	};
  class SRPRadioElectronics_SoundSet_Jammer_2
	{
		soundShaders[]=
		{
			"SRPRadioElectronics_Jammer_2"
		};
	};
  class SRPRadioElectronics_SoundSet_Jammer_3
	{
		soundShaders[]=
		{
			"SRPRadioElectronics_Jammer_3"
		};
	};
  class SRPRadioElectronics_SoundSet_Jammer_4
	{
		soundShaders[]=
		{
			"SRPRadioElectronics_Jammer_4"
		};
	};
  class SRPRadioElectronics_SoundSet_Jammer_5
	{
		soundShaders[]=
		{
			"SRPRadioElectronics_Jammer_5"
		};
	};
};