class CfgMods
{
	class Survivalists_Mods
	{
		type="mod";
		author="ItsATreee | Sir Locksley | Turko | Orin | Alevaric | Mar";
		name="Survivalists_Mods";
		dir="Survivalists_Mods";
	};
};

class CfgPatches
{
	class Survivalists_Mods
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
      "Notes_Gear", // WrittenNote from notes
      "deerisle", // for the map (security door)      
      "Deerisle_Security_System", // overriding air craft carrier loot
      "DeerIsle_Weapons",      
      "JMC_Mjolnir",      
      "Survivalists_Narcotics",
      "Survivalists_Drink",
      "Survivalists_Food",
      "Survivalists_RadioElectronics"
		};
	};
};