class CfgPatches
{
	class OneWayMuteTransmitter_Scripts
	{
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Scripts"};//, "JM_CF_Scripts"};
	};
};

class CfgMods 
{
	class OneWayMuteTransmitter
	{
		name = "OneWayMuteTransmitter";
		dir = "OneWayMuteTransmitter";
		credits = "Killerek, ItsATreee";
		author = "ItsATreee";
		// creditsJson = "OneWayMuteTransmitter/Scripts/Data/Credits.json";
		// versionPath = "OneWayMuteTransmitter/scripts/Data/Version.hpp";
		inputs = "OneWayMuteTransmitter/data/inputs.xml";
		type = "mod";
		dependencies[] =
		{
			"World", "Mission"
		};
		class defs
		{
      class imageSets
      {
        files[]=
        {
          "OneWayMuteTransmitter/gui/imagesets/mute_transmitter_imageset.imageset"
        };
      };
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					// "OneWayMuteTransmitter/scripts/scripts/common",
					"OneWayMuteTransmitter/scripts/4_world"
				};
			};
			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					// "OneWayMuteTransmitter/scripts/scripts/common",
					"OneWayMuteTransmitter/scripts/5_mission"
				};
			};
		};
	};
};
