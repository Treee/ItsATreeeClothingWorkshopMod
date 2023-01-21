class CfgMods
{
	class Survivalists_Characters
	{
		type="mod";
		author="ItsATreee | Sir Locksley | Orin | Alevaric";
		name="Survivalists_Characters";
		dir="Survivalists_Characters";
	};
};

class CfgPatches
{
	class Survivalists_Characters
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class CfgVehicles
{
  class DayZInfected;
  class Man;

  class ZombieBase: DayZInfected
	{
    class Skinning
		{
			class Guts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class Bones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.2,0.4};
			};
			class Skin
			{
				item = "DUB_Humanpelt";
				count = 1;
				quantityMinMaxCoef[] = {0.8,1};
			};
		};
  };
  class SurvivorBase: Man
	{
    class States
		{
			// class Energy
			// {
			// 	min=-500;
			// 	max=20000;
			// 	events[]=
			// 	{
			// 		"Hunger",
			// 		"HighEnergy"
			// 	};
			// 	change="-(DZ_METABOLISM_SEC + (((_person call fnc_speedVector) min 7) * 0.125))";
			// };
			// class Water
			// {
			// 	min=-1000;
			// 	max=4000;
			// 	events[]=
			// 	{
			// 		"Thirst",
			// 		"HighWater"
			// 	};
			// 	change="-(DZ_THIRST_SEC + (((_person call fnc_speedVector) min 7) * 0.2))";
			// };
			// class Bodytemperature
			// {
			// 	min=30;
			// 	max=43;
			// 	events[]=
			// 	{
			// 		"Temperature"
			// 	};
			// 	change="0";
			// };
			// class Heatcomfort
			// {
			// 	min=-100;
			// 	max=100;
			// 	events[]=
			// 	{
			// 		"FeelingCold"
			// 	};
			// 	change="0";
			// };
			// class Stomach
			// {
			// 	min=0;
			// 	max=4000;
			// 	events[]=
			// 	{
			// 		"Packed"
			// 	};
			// 	change="-DZ_DIGESTION_RATE";
			// };
			// class Blood
			// {
			// 	min=0;
			// 	max=5000;
			// 	events[]=
			// 	{
			// 		"Bleeding"
			// 	};
			// 	change="0";
			// };
			// class Health
			// {
			// 	min=0;
			// 	max=5000;
			// 	events[]=
			// 	{
			// 		"Healing",
			// 		"FootInjury"
			// 	};
			// 	change="0.02 call player_fnc_tickHealth";
			// };
			// class Exposure
			// {
			// 	min=-1;
			// 	max=1;
			// 	events[]={};
			// 	change="call player_fnc_tickExposure";
			// };
			// class Shock
			// {
			// 	min=0;
			// 	max=5000;
			// 	events[]=
			// 	{
			// 		"Unconscious"
			// 	};
			// 	change="-30";
			// };
			// class Wet
			// {
			// 	min=0;
			// 	max=1;
			// 	events[]={};
			// 	change="";
			// };
      class Tiredness
			{
				min=-1000;
				max=5000;
				events[]={};
				change="";
			};
		};
  };
};