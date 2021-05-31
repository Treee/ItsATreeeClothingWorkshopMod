class CfgPatches
{
	class SRP_Tree_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Consumables",
      "DZ_Vehicles_Parts"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Battery9V: Inventory_Base
	{
    varQuantityInit=200;
		varQuantityMax=200;
		class EnergyManager
		{
			energyStorageMax=200;
			energyAtSpawn=200;
		};
	};
	class TruckBattery: Inventory_Base
	{
    varQuantityInit=6000;
		varQuantityMax=6000;
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
		class EnergyManager
		{
			energyStorageMax=2000;
			energyAtSpawn=2000;
		};
	};
	class AircraftBattery: Inventory_Base
	{
    varQuantityInit=2000;
		varQuantityMax=2000;
		class EnergyManager
		{
			energyStorageMax=2000;
			energyAtSpawn=2000;
		};
	};
};
