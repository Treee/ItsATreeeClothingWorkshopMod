class CfgMods
{
	class Survivalists_Drink
	{
		type = "mod";
		author = "ItsATreee | Mar";
		name = "Survivalists_Drink";
		dir = "Survivalists_Drink";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_Drink/scripts/4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class Survivalists_Drink
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