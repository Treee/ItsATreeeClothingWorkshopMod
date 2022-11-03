class CfgMods
{
	class Survivalists_PostBox
	{
		type="mod";
		author="ItsATreee";
		name="Survivalists_PostBox";
		dir="Survivalists_PostBox";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_PostBox/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_PostBox/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"Survivalists_PostBox/scripts/5_mission"};
			};
		};
	};
};

class CfgPatches
{
	class Survivalists_PostBox
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};