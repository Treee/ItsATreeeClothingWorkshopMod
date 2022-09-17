class CfgPatches
{
	class Survivalists_Mods_Vehicles_Parts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Vehicles_Parts"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Bottle_Base;

  // ----------------------  BASE GAME OVERRIDES
  class TruckBattery: Inventory_Base
	{
    varQuantityInit=6000;
		varQuantityMax=6000;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\vehicles\parts\data\truck_bat_espen_co.paa"
		};
		class EnergyManager
		{
			energyStorageMax=6000;
			energyAtSpawn=6000;
		};
	};
	class CarBattery: Inventory_Base
	{
    varQuantityInit=2000;
		varQuantityMax=2000;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\vehicles\parts\data\battery_smallcar_espen_co.paa"
		};
		class EnergyManager
		{
			energyStorageMax=2000;
			energyAtSpawn=2000;
		};
	};
  class CanisterGasoline: Bottle_Base
	{
		inventorySlot[]+={"CanisterGasoline"};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\vehicles\parts\data\jerrycan_espen_co.paa"
		};
	};
};