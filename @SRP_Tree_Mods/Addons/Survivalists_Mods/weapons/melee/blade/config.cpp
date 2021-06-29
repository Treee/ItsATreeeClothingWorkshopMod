class CfgPatches
{
	class Survivalists_Mods_Weapons_Melee_Blade
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "DZ_Weapons_Melee_Blade"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  
  class Hatchet: Inventory_Base
	{
		scope=2;
		inventorySlot[]=
		{
			"Hatchet",
			"no_car"
		};
	};
};