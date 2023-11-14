class CfgMods
{
	class SRP_WesternZ_Scripts
	{
		type = "mod";
		author = "ItsATreee";
		name = "SRP_WesternZ_Scripts";
		dir = "SRP_WesternZ_Scripts";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"SRP/PvP_WesternZ/SRP_WesternZ_Scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"SRP/PvP_WesternZ/SRP_WesternZ_Scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"SRP/PvP_WesternZ/SRP_WesternZ_Scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class SRP_WesternZ_Scripts
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts"    
    };
  };
};