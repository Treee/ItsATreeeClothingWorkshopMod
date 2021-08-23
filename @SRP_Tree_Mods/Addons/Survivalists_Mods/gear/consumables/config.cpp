class CfgPatches
{
	class Survivalists_Mods_Gear_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Spraycan_ColorBase;
  class Inventory_Base;
  class ButaneCanister;

  //--------------------------------------------- BASE GAME OVERRIDES
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
  class WoodenPlank: Inventory_Base
	{
    varStackMax=20;
  };
  
  //----------------------------------------------- CUSTOM STUFF
  class SRP_LongRangeRadioBattery: Battery9V // SRPLRRadioBattery
	{
		scope=2;
		displayName="Military Radio Battery";
		descriptionShort="Military radio battery pack";
		model="Survivalists_Mods\gear\consumables\SRP_LRRadioBattery.p3d";
		inventorySlot="SRPRadioBattery";
		itemSize[]={1,2};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=250;
			energyAtSpawn=250;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};

	class SRP_Spraycan_Turquoise: Spraycan_ColorBase
	{
		scope=2;
		displayName="Turquoise Spraycan";
		descriptionShort="A spray can that can be used to paint some weapons";
		color="Turquoise";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_co.paa"
		};
	};
	class SRP_Spraycan_Red: Spraycan_ColorBase
	{
		scope=2;
		displayName="Red Spraycan";
		descriptionShort="A spray can that can be used to paint some weapons";
		color="Red";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_co.paa"
		};
	};
	class SRP_Spraycan_Brown: Spraycan_ColorBase
	{
		scope=2;
		displayName="Brown Spraycan";
		descriptionShort="A spray can that can be used to paint some weapons";
		color="Brown";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_co.paa"
		};
	};
	class SRP_Spraycan_Green: Spraycan_ColorBase
	{
		scope=2;
		displayName="Green Spraycan";
		descriptionShort="Green Spraycan";
		color="Green";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_co.paa"
		};
	};  
  class SRP_ButaneCanister: ButaneCanister
	{
		scope=2;
		displayName="Refillable Butane Canister";
		descriptionShort="A canister used for re-fueling gas containers";
		overrideDrawArea="3.0";
		varQuantityInit=20;
		varQuantityMin=0;
		varQuantityMax=20;
		stackedUnit="w";
		varQuantityDestroyOnMin=0;
		destroyOnEmpty=0;
	};
};