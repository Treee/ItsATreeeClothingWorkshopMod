class CfgPatches
{
	class Survivalists_Mods_Weapons_Explosives
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
      "DZ_Data",
      "DZ_Weapons_Explosives",
      "Survivalists_Mods"
    };
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class SRP_Dynamite_Stick : Inventory_Base
  {
		scope=2;
		displayName="Dynamite";
		descriptionShort="A single stick of dynamite... explosive.";
		model="Survivalists_Mods\weapons\explosives\dynamite_stick.p3d";
		weight=10;
    varTemperatureMax=100;
    itemSize[]={1,3};
    varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
    destroyOnEmpty=1;	
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_Mods\weapons\explosives\data\dynamite_stick_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_Mods\weapons\explosives\data\dynamite_stick.rvmat"
		};		
    class EnergyManager
		{
			energyAtSpawn=10;
			energyUsagePerSecond=1;
			updateInterval=1;
			convertEnergyToQuantity=1;
		};
  };

  class SRP_Dynamite_Stack : Inventory_Base
  {
		scope=2;
		displayName="Dynamite Stack";
		descriptionShort="A stack of dynamite... explosive.";
		model="Survivalists_Mods\weapons\explosives\dynamite_stack.p3d";
		weight=15;
    varTemperatureMax=100;
    itemSize[]={3,5};
    varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
    destroyOnEmpty=1;	
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_Mods\weapons\explosives\data\dynamite_stack_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_Mods\weapons\explosives\data\dynamite_stack.rvmat"
		};		
    class EnergyManager
		{
			energyAtSpawn=10;
			energyUsagePerSecond=1;
			updateInterval=1;
			convertEnergyToQuantity=1;
		};
  };
};