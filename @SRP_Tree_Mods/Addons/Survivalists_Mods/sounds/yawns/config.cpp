class CfgPatches
{
	class Survivalists_Mods_Sounds_Yawns
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
	class Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=75;
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
	class Survivalists_Mods_Yawn_Male1_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\male-yawn-1.ogg",1}
		};
	};
	class Survivalists_Mods_Yawn_Male2_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\male-yawn-2.ogg",1}
		};
	};
	class Survivalists_Mods_Yawn_Male3_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\male-yawn-3.ogg",1}
		};
	};
	class Survivalists_Mods_Yawn_Male4_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\male-yawn-4.ogg",1}
		};
	};
	class Survivalists_Mods_Yawn_Female1_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\female-yawn-1.ogg",1}
		};
	};
	class Survivalists_Mods_Yawn_Female2_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\female-yawn-2.ogg",1}
		};
	};
	class Survivalists_Mods_Yawn_Female3_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\female-yawn-3.ogg",1}
		};
	};
	class Survivalists_Mods_Yawn_Female4_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\female-yawn-4.ogg",1}
		};
	};
	class Survivalists_Mods_Yawn_Female5_SoundShader: Survivalists_Mods_Yawn_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\yawns\data\female-yawn-5.ogg",1}
		};
	};
};
class CfgSoundSets
{
	class Survivalists_Mods_Yawn_Male_SoundSet1
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Male1_SoundShader"
		};
	};
	class Survivalists_Mods_Yawn_Male_SoundSet2
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Male2_SoundShader"
		};
	};
	class Survivalists_Mods_Yawn_Male_SoundSet3
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Male3_SoundShader"
		};
	};
	class Survivalists_Mods_Yawn_Male_SoundSet4
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Male4_SoundShader"
		};
	};
	class Survivalists_Mods_Yawn_Female_SoundSet1
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Female1_SoundShader"
		};
	};
	class Survivalists_Mods_Yawn_Female_SoundSet2
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Female2_SoundShader"
		};
	};
	class Survivalists_Mods_Yawn_Female_SoundSet3
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Female3_SoundShader"
		};
	};
	class Survivalists_Mods_Yawn_Female_SoundSet4
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Female4_SoundShader"
		};
	};
	class Survivalists_Mods_Yawn_Female_SoundSet5
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Yawn_Female5_SoundShader"
		};
	};
};
