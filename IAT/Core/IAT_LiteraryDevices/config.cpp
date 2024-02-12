class CfgMods
{
	class IAT_LiteraryDevices
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Literary Devices";
		dir="IAT_LiteraryDevices";    
    // dependencies[] = {"Game"};
		// class defs
		// {
    //   class gameScriptModule
		// 	{
		// 		value = "";
    //     files[] = {"IAT\Core\IAT_LiteraryDevices\scripts\3_game"};			
    //   };
		// };
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