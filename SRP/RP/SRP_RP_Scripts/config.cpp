class CfgMods
{
	class SRP_RP_Scripts
	{
		type = "mod";
		author = "ItsATreee";
		name = "SRP_RP_Scripts";
		dir = "SRP_RP_Scripts";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"SRP/RP/SRP_RP_Scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"SRP/RP/SRP_RP_Scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"SRP/RP/SRP_RP_Scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class SRP_RP_Scripts
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