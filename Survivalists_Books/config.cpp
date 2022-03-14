class CfgMods
{
	class Survivalists_Books
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_Books";
		dir = "Survivalists_Books";
    dependencies[] = {"World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_Books/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"Survivalists_Books/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class Survivalists_Books
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