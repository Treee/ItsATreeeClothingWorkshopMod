class CfgMods
{
	class IAT_UniversalRepair
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Universal Repair";
		dir="IAT_UniversalRepair";    
    dependencies[] = {"World"};
		class defs
		{
      class worldScriptModule
			{
				value = "";
        files[] = {"IAT\Core\IAT_UniversalRepair\scripts\4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class IAT_UniversalRepair
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