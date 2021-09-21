class CfgMods
{
	class SRP_Tree_Mods
	{
		type = "mod";
		author = "ItsATreee";
		name = "SRP_Tree_Mods";
		dir = "SRP_Tree_Mods";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
        files[] = {"SRP_Tree_Mods/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"SRP_Tree_Mods/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"SRP_Tree_Mods/scripts/5_mission"};
			};
		};
	};
};

class CfgPatches
{
	class SRP_Tree_Mods
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts", "DZ_Characters"};
	};
};