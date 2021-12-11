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
		displayName="$STR_CfgVehicles_PortableGasLamp0";
		descriptionShort="$STR_CfgVehicles_PortableGasLamp1";
		model="\dz\gear\cooking\GasLight.p3d";
		weight=330;
		itemSize[]={4,3};
		attachments[]=
		{
			"GasCanister"
		};
    inventorySlot[]={"BP_gas_lamp"};
		containerSlot="GasCanister";
		hiddenSelections[]=
		{
			"glow",
			"zbytek",
			"glow_on",
			"glow_off"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\cooking\data\gaslight.rvmat",
			"dz\gear\cooking\data\gaslight.rvmat",
			"",
			"dz\gear\cooking\data\gaslight.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\cooking\data\GasLight.rvmat"}},
            {0.69999999,{"DZ\gear\cooking\data\GasLight.rvmat"}},
            {0.5,{"DZ\gear\cooking\data\GasLight_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cooking\data\GasLight_damage.rvmat"}},
            {0,{"DZ\gear\cooking\data\GasLight_destruct.rvmat"}}
					};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn=0;
			autoSwitchOff=1;
			autoSwitchOffWhenInCargo=1;
			energyStorageMax=0;
			energyUsagePerSecond=0.1;
			energyAtSpawn=0;
			powerSocketsCount=0;
			plugType=7;
			attachmentAction=1;
			updateInterval=50;
		};
	};

};