class CfgMods
{
	class Survivalists_Mods
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_Mods";
		dir = "Survivalists_Mods";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
      class imageSets
      {
        files[]=
        {
          "Survivalists_Mods/gui/images/srp_tree_iconset.imageset"
        };
      };
			class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_Mods/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_Mods/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"Survivalists_Mods/scripts/5_mission"};
			};
		};
	};
};

class CfgPatches
{
	class Survivalists_Mods
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts", "DZ_Characters"};
	};
};