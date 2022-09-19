class CfgMods
{
	class CombatLogger
	{
		type = "mod";
		author = "ItsATreee";
		name = "CombatLogger";
		dir = "CombatLogger";
		dependencies[] = {"Mission"};
		class defs
		{
			class missionScriptModule
			{
				value = "";
        files[] = {"CombatLogger/scripts/5_mission"};			
      };
		};
	};
};
class CfgPatches
{
  class CombatLogger
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
