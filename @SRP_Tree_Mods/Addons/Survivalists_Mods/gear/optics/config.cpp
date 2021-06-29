class CfgPatches
{
	class Survivalists_Mods_Gear_Optics
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols",
      "DZ_Gear_Optics"
		};
	};
};
class CfgVehicles
{
  class ItemOptics;
	class Binoculars: ItemOptics
	{
		inventorySlot="binocular";
	};
};