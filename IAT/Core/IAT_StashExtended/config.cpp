class CfgMods
{
	class IAT_StashExtended
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Extended Stash";
		dir="IAT_StashExtended";    
    dependencies[] = {"Game"};
		class defs
		{
      class gameScriptModule
			{
				value = "";
        files[] = {"IAT\Core\IAT_StashExtended\scripts\3_game"};			
      };
		};
	};
};
class CfgPatches
{
  class IAT_StashExtended
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