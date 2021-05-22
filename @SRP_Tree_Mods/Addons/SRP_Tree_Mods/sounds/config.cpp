class CfgPatches
{
	class SRP_Tree_Sounds
	{
		units[]={	};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]= { "DZ_Data"	};
	};
};
class CfgSoundShaders
{
	class SRP_Tree_Mods_SoundShader_Base
	{
		samples[]={};
		frequency=1;
    range=50;
		rangeCurve[]=
		{
			{0,1},
			{80,0.50000001},
			{100,0.30000001},
			{150,0.2},
			{200,0}
		};
		volume=2;
	};
	class SRP_Tree_Mods_Yawn1_SoundShader: SRP_Tree_Mods_SoundShader_Base
	{
		samples[]={
      {"SRP_Tree_Mods\sounds\yawns\male-yawn-1.ogg",1},
      {"SRP_Tree_Mods\sounds\yawns\male-yawn-2.ogg",1},
      {"SRP_Tree_Mods\sounds\yawns\male-yawn-3.ogg",1},
      {"SRP_Tree_Mods\sounds\yawns\male-yawn-4.ogg",1}
    };
	};
};
class CfgSoundSets
{
	class SRP_Tree_Mods_Yawn1_SoundSet1
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn1_SoundShader"};
	};
};
