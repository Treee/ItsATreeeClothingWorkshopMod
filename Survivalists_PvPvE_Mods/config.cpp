class CfgMods
{
	class Survivalists_PvPvE_Mods
	{
		type="mod";
		author="ItsATreee";
		name="Survivalists_PvPvE_Mods";
		dir="Survivalists_PvPvE_Mods";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_PvPvE_Mods/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_PvPvE_Mods/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"Survivalists_PvPvE_Mods/scripts/5_mission"};
			};
		};
	};
};

class CfgPatches
{
	class Survivalists_PvPvE_Mods
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={	};
	};
};