class CfgPatches
{
	class Survivalists_Mods_Gear_Navigation
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;

	class ItemCompass: Inventory_Base
	{
    inventorySlot[]=
		{
			"Compass"	
		};
	};
};
