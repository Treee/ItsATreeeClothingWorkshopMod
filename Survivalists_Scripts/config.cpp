class CfgMods
{
	class Survivalists_Scripts
	{
		type="mod";
		author="ItsATreee | Sir Locksley | Turko | Orin | Alevaric | Mar";
		name="Survivalists_Scripts";
		dir="Survivalists_Scripts";
    inputs="Survivalists_Scripts/inputs.xml";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
      class imageSets
      {
        files[]=
        {
          "Survivalists_Scripts/gui/images/srp_sleep_iconset.imageset"
        };
      };
			class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_Scripts/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_Scripts/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"Survivalists_Scripts/scripts/5_mission"};
			};
		};
	};
};

class CfgPatches
{
	class Survivalists_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
      "DZM_VPPAdminToolsScripts", // VPP logging enhancement
      "Notes_Gear", // WrittenNote from notes
      "deerisle", // for the map (security door)      
      "Deerisle_Security_System", // overriding air craft carrier loot
      "DeerIsle_Weapons",      
      "JMC_Mjolnir",
      "CodeLock",
      "VanillaPlusPlus", // hiding map when restrained
      "Survivalists_Mods",
      "Survivalists_Narcotics",
      "Survivalists_Drink",
      "Survivalists_Food",
      "Survivalists_RadioElectronics",
		};
	};
};