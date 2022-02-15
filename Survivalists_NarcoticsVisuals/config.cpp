class CfgMods
{
	class Survivalists_NarcoticsVisuals
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_NarcoticsVisuals";
		dir = "Survivalists_NarcoticsVisuals";
		dependencies[] = {"Game", "World"};
		class defs
		{
      class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_NarcoticsVisuals/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_NarcoticsVisuals/scripts/4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class Survivalists_NarcoticsVisuals
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts",
      "Survivalists_Narcotics" 
    };
  };
};