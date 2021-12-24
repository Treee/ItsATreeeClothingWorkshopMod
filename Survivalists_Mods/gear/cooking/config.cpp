class CfgPatches
{
	class Survivalists_Mods_Gear_Cooking
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Cooking",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Pot;
  // ----------------------  BASE GAME OVERRIDES
  class PortableGasLamp: Inventory_Base 
	{
		scope=2;
		itemSize[]={4,3};
    inventorySlot[]=
    {
      "SRP_Lantern"
    };
	};

};