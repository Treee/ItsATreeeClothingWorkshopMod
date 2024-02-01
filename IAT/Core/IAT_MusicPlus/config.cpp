class CfgMods
{
	class IAT_MusicPlus
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Crafting Plus Enums";
		dir="IAT_MusicPlus";    
    dependencies[] = {"World"};
		class defs
		{
      class worldScriptModule
			{
				value = "";
        files[] = {"IAT\Core\IAT_MusicPlus\scripts\4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class IAT_MusicPlus
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