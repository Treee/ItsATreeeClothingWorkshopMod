class CfgMods
{
	class IAT_CraftingPlusEnums
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Crafting Plus Enums";
		dir="IAT_CraftingPlusEnums";    
    dependencies[] = {"Game"};
		class defs
		{
      class gameScriptModule
			{
				value = "";
        files[] = {"IAT\Core\IAT_CraftingPlusEnums\scripts\3_game"};			
      };
		};
	};
};
class CfgPatches
{
  class IAT_CraftingPlusEnums
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