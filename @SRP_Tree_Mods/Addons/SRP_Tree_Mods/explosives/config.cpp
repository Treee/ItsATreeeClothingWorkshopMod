class CfgPatches
{
	class SRP_Tree_Explosives
	{
    units[] = {
      "SRP_Dynamite_Stick"
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class Grenade_Base;
  class Inventory_Base;
  class SRP_Dynamite_Stick : Inventory_Base
  {
		scope=2;
		displayName="Dynamite";
		descriptionShort="A single stick of dynamite... explosive.";
		model="SRP_Tree_Mods\explosives\dynamite_stick.p3d";
		weight=10;
    varTemperatureMax=100;
    itemSize[]={1,3};
    varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
    destroyOnEmpty=1;	
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {
      "SRP_Tree_Mods\explosives\data\dynamite_stick_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"SRP_Tree_Mods\explosives\data\dynamite_stick.rvmat"
		};		
    class EnergyManager
		{
			energyAtSpawn=10;
			energyUsagePerSecond=1;
			updateInterval=1;
			convertEnergyToQuantity=1;
		};
  }
};

// class CfgSlots
// {
// 	class Slot_SRP_CigaretteCase1
// 	{
// 		name="CigaretteCase1";
// 		displayName="Cigarette";
// 		ghostIcon="set:dayz_inventory image:paper";
// 	};
// };

// class CfgNonAIVehicles
// {
//   class ProxyAttachment;
//   class Proxycigarettecase_proxy1: ProxyAttachment //same as p3d name
//   {
//       scope=2;
//       inventorySlot[]={"CigaretteCase1"}; // same as slot name 
//       model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy1.p3d"; //proxy path 
//   };    
// };