class CfgPatches
{
	class TestScripts_Scripts
	{
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class TestScripts
	{
		name = "TestScripts";
		dir = "TestScripts";
		credits = "ItsATreee";
		author = "ItsATreee";
		type = "mod";
		dependencies[] =
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"TestScripts/scripts/4_world"
				};
			};
		};
	};
};
class CfgVehicles
{ 
  class Radio;
  class Test_Radio: Radio
	{
		inventorySlot[] = {"MassRadio","walkietalkie", "Belt_Left", "flashlight"};
	};
};
