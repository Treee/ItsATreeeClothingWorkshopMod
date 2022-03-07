class CfgMods
{
	class Survivalists_Fishing
	{
		type="mod";
		author="ItsATreee";
		name="Survivalists_Fishing";
		dir="Survivalists_Fishing";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"Survivalists_Fishing/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"Survivalists_Fishing/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"Survivalists_Fishing/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class Survivalists_Fishing
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts",
      "DZ_Gear_Food"
    };
  };
};