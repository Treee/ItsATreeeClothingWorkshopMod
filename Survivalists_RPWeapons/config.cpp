class CfgMods
{
	class Survivalists_RPWeapons
	{
		type="mod";
		author="Turko | Alevaric | ItsATreee";
		name="Survivalists_RPWeapons";
		dir="Survivalists_RPWeapons";
		dependencies[]={"World","Mission"};
		class defs
		{
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
		requiredAddons[]=	{ "DZ_Data", "Survivalists_Weapons_JMC", "Dressupbox_Weapons"};
	};
};