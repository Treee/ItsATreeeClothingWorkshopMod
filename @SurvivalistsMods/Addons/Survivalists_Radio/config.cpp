class CfgPatches
{
	class Survivalists_Radio
	{
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class Survivalists_Radio
	{
		name = "Survivalists_Radio";
		dir = "Survivalists_Radio";
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
					"Survivalists_Radio/scripts/4_world"
				};
			};
		};
	};
};
class CfgVehicles
{ 
  class GGRadio_Radio_Base;
  class GGRadio_Radio: GGRadio_Radio_Base
	{
		inventorySlot[] = {"GGRadio_Radio", "MassRadio","walkietalkie", "Belt_Left", "flashlight"};
	};
};