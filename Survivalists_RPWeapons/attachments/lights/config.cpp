class CfgPatches
{
	class Survivalists_RPWeapons_Attachments_Lights
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Lights",
      "Survivalists_Weapons_JMC_Attachments_Lights"
		};
	};
};
class CfgVehicles
{
	class Switchable_Base;
	class UniversalLight: Switchable_Base
	{
    inventorySlot[]+=
		{
			"RISLeft",
			"RISRight",
			"RISBottom"
		};
  };
};