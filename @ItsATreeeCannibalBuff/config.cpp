class CfgPatches
{
	class ItsATreeeCannibalBuff
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
      "DZ_Data",
      "JM_CF_Scripts"
    };
		author = "ItsATreee";
		name = "ItsATreeeCannibalBuff";
		url = "https://github.com/Treee/ItsATreeeDayZWorkshopMods/tree/master/TestScript";
	};
};

class CfgMods
{
	class ItsATreeeCannibalBuff
	{	
		type = "mod";
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"ItsATreeeCannibalBuff/scripts/4_world"};
			};
		}
	};
};