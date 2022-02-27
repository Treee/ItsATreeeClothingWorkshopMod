class CfgMods
{
	class Survivalists_MasonryMetallurgy
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_MasonryMetallurgy";
		dir = "Survivalists_MasonryMetallurgy";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"Survivalists_MasonryMetallurgy/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"Survivalists_MasonryMetallurgy/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"Survivalists_MasonryMetallurgy/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class Survivalists_MasonryMetallurgy
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
class CfgVehicles
{

};
