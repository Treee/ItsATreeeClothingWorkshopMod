class CfgPatches
{
	class Survivalists_Mods_Sounds_Doors
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
	class SRP_Door_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{80,0.5},
			{100,0.30000001},
			{150,0.2},
			{200,0}
		};
		volume=1;
	};
	class SRP_Door_MetalOpen_SoundShader: SRP_Door_SoundShader_Base
	{
		samples[]=
		{
			{"\DZ\sounds\environment\buildings\doors\MetalTwinBig\doorMetalTwinBigOpen_1",1}
		};
	};
  class SRP_Door_MetalClose_SoundShader: SRP_Door_SoundShader_Base
	{
		samples[]=
		{
			{"\DZ\sounds\environment\buildings\doors\MetalTwinBig\doorMetalTwinBigClose_1",1}
		};
	};
};
class CfgSoundSets
{
	class SRP_Door_MetalOpen_SoundSet1
	{
		soundShaders[]=
		{
			"SRP_Door_MetalOpen_SoundShader"
		};
	};
  class SRP_Door_MetalClose_SoundSet1
	{
		soundShaders[]=
		{
			"SRP_Door_MetalClose_SoundShader"
		};
	};
};
