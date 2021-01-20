class CfgMods
{
	class Survivalists_Drugs
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_Drugs";
		dir = "Survivalists_Drugs";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Survivalists_Drugs\scripts\4_world"};
			};
		};
	};
};
class CfgPatches
{
	class Survivalists_Drugs
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts" };
	};
};