class CfgPatches
{
	class Survivalists_Gestures
	{
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class Survivalists_Gestures
	{
		name = "Survivalists_Gestures";
		dir = "Survivalists_Gestures";
		credits = "ItsATreee";
		author = "ItsATreee";
		type = "mod";
		dependencies[] ={"Game","World","Mission"};
		class defs
		{
      class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_Gestures/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_Gestures/scripts/4_world"};			
      };
			class missionScriptModule
			{
				value="";
				files[] = {"Survivalists_Gestures/scripts/5_mission"};
			};
		};
	};
};