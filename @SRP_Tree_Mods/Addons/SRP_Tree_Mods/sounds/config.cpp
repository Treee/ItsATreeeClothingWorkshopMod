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
	class SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={};
		frequency=1;
    range=75;
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
	class SRP_Tree_Mods_Yawn_Male1_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={ {"SRP_Tree_Mods\sounds\yawns\male-yawn-1.ogg",1}};
	};
  class SRP_Tree_Mods_Yawn_Male2_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={{"SRP_Tree_Mods\sounds\yawns\male-yawn-2.ogg",1}};
	};
  class SRP_Tree_Mods_Yawn_Male3_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={{"SRP_Tree_Mods\sounds\yawns\male-yawn-3.ogg",1}};
	};
  class SRP_Tree_Mods_Yawn_Male4_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={{"SRP_Tree_Mods\sounds\yawns\male-yawn-4.ogg",1}};
	};
  class SRP_Tree_Mods_Yawn_Female1_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={{"SRP_Tree_Mods\sounds\yawns\female-yawn-1.ogg",1}};
	};
  class SRP_Tree_Mods_Yawn_Female2_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={{"SRP_Tree_Mods\sounds\yawns\female-yawn-2.ogg",1}};
	};
  class SRP_Tree_Mods_Yawn_Female3_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={{"SRP_Tree_Mods\sounds\yawns\female-yawn-3.ogg",1}};
	};
  class SRP_Tree_Mods_Yawn_Female4_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={{"SRP_Tree_Mods\sounds\yawns\female-yawn-4.ogg",1}};
	};
  class SRP_Tree_Mods_Yawn_Female5_SoundShader: SRP_Tree_Mods_Yawn_SoundShader_Base
	{
		samples[]={{"SRP_Tree_Mods\sounds\yawns\female-yawn-5.ogg",1}};
	};
};
class CfgSoundSets
{
	class SRP_Tree_Mods_Yawn_Male_SoundSet1
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Male1_SoundShader"};
	};
  class SRP_Tree_Mods_Yawn_Male_SoundSet2
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Male2_SoundShader"};
	};
  class SRP_Tree_Mods_Yawn_Male_SoundSet3
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Male3_SoundShader"};
	};
  class SRP_Tree_Mods_Yawn_Male_SoundSet4
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Male4_SoundShader"};
	};
  class SRP_Tree_Mods_Yawn_Female_SoundSet1
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Female1_SoundShader"};
	};
  class SRP_Tree_Mods_Yawn_Female_SoundSet2
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Female2_SoundShader"};
	};
  class SRP_Tree_Mods_Yawn_Female_SoundSet3
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Female3_SoundShader"};
	};
  class SRP_Tree_Mods_Yawn_Female_SoundSet4
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Female4_SoundShader"};
	};
  class SRP_Tree_Mods_Yawn_Female_SoundSet5
	{
    soundShaders[]={"SRP_Tree_Mods_Yawn_Female5_SoundShader"};
	};
};
