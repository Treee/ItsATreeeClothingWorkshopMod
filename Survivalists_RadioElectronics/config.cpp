class CfgMods
{
	class Survivalists_RadioElectronics
	{
		type="mod";
		author="ItsATreee";
		name="Survivalists_RadioElectronics";
		dir="Survivalists_RadioElectronics";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"Survivalists_RadioElectronics/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"Survivalists_RadioElectronics/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"Survivalists_RadioElectronics/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class Survivalists_RadioElectronics
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