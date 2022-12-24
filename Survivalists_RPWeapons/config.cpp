class CfgMods
{
	class Survivalists_RPWeapons
	{
		type="mod";
		author="Turko | Alevaric | ItsATreee";
		name="Survivalists_RPWeapons";
		dir="Survivalists_RPWeapons";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_RPWeapons/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_RPWeapons/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"Survivalists_RPWeapons/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
	class Survivalists_RPWeapons
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "Survivalists_Weapons"}; //"Survivalists_Weapons_JMC"};
	};
};