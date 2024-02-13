class CfgMods
{
	class IAT_LiteraryDevices
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Literary Devices";
		dir="IAT_LiteraryDevices";    
    dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
        files[] = {"IAT/Core/IAT_LiteraryDevices/scripts/4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class IAT_LiteraryDevices
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

