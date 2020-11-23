class CfgPatches
{
	class Editor_Scripts
	{
      units[] = {};
      weapons[] = {};
      requiredVersion = 0.1;
		  requiredAddons[] = {"DZ_Scripts"};//, "JM_CF_Scripts"};
	};
};

class CfgMods 
{
	class ItsATreeeMuteTransmitter
	{
		name = "ItsATreeeMuteTransmitter";
		dir = "ItsATreeeMuteTransmitter";
		credits = "Killerek, ItsATreee";
		author = "ItsATreee";
		// creditsJson = "ItsATreeeMuteTransmitter/Scripts/Data/Credits.json";
		// versionPath = "ItsATreeeMuteTransmitter/scripts/Data/Version.hpp";
		inputs = "ItsATreeeMuteTransmitter/data/inputs.xml";
		type = "mod";
		dependencies[] =
		{
			"World", "Mission"
		};
		class defs
		{			
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					// "ItsATreeeMuteTransmitter/scripts/scripts/common",
					"ItsATreeeMuteTransmitter/scripts/4_world"
				};
			};
			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					// "ItsATreeeMuteTransmitter/scripts/scripts/common",
					"ItsATreeeMuteTransmitter/scripts/5_mission"
				};
			};
		};
	};
};