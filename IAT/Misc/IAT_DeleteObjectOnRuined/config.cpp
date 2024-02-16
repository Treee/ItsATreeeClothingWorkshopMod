class CfgMods
{
	class IAT_DeleteObjectOnRuined
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Delete Object On Ruined";
		dir="IAT_DeleteObjectOnRuined";    
    dependencies[] = {"World"};
		class defs
		{
      class worldScriptModule
			{
				value = "";
        files[] = {"IAT/Misc/IAT_DeleteObjectOnRuined/scripts/4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class IAT_DeleteObjectOnRuined
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