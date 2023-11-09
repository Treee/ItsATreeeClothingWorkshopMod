class CfgMods
{
	class SRP_Core_Scripts
	{
		type = "mod";
		author = "ItsATreee";
		name = "SRP_Core_Scripts";
		dir = "SRP_Core_Scripts";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"SRP/Core/SRP_Scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"SRP/Core/SRP_Scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"SRP/Core/SRP_Scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class SRP_Core_Scripts
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