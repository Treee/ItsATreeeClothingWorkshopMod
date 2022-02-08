class CfgPatches
{
	class Survivalists_TestMod_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects",
      "Survivalists_TestMod"
		};
	};
};
class CfgSounds
{
	class default
	{
		name="";
		titles[]={};
	};
	class jmc_cryptodoor_WoodOpen: default
	{
		sound[]=
		{
			"Survivalists_TestMod\sounds\data\creepy-dungeon-door-slam.ogg",
			1.2,
			1.5,
			500
		};
	};
  class jmc_cryptodoor_StoneOpen: default
	{
		sound[]=
		{
			"Survivalists_TestMod\sounds\data\secret-door-fantasy.ogg",
			0.2,
			1,
			15
		};
	};
};

class CfgActionSounds
{
	class jmc_crypto_door_wood
	{
		sounds[]=
		{
			"jmc_cryptodoor_WoodOpen"
		};
		distance=300;
	};
  class jmc_crypto_door_stone
	{
		sounds[]=
		{
			"jmc_cryptodoor_StoneOpen"
		};
		distance=15;
	};
};