class CfgMods
{
	class Survivalists_Narcotics
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_Narcotics";
		dir = "Survivalists_Narcotics";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_Narcotics/scripts/4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class Survivalists_Narcotics
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