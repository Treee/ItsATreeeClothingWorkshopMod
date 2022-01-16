class CfgMods
{
	class Survivalists_TestMod
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_TestMod";
		dir = "Survivalists_TestMod";
		dependencies[] = {"Game","World"};
		class defs
		{
      class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_TestMod/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_TestMod/scripts/4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class Survivalists_TestMod
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
class CfgVehicles
{
};
