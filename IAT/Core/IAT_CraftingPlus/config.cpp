class CfgMods
{
	class IAT_CraftingPlus
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Fishing";
		dir="IAT_CraftingPlus";    
    dependencies[] = {"Game","World"};
		class defs
		{
      class gameScriptModule
			{
				value = "";
        files[] = {"IAT\Core\IAT_CraftingPlus\scripts\3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"IAT\Core\IAT_CraftingPlus\scripts\4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class IAT_CraftingPlus
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts",
    };
  };
};
class CfgVehicles
{
};