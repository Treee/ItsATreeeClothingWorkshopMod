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
      "DZ_Gear_Cooking"
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
    inventorySlot="BP_gas_lamp";
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

  class SRP_Pot_Compact: Pot // BP1_Cotelok
	{
		scope=2;
		displayName="Compact Cooking Pot";
		descriptionShort="The army bowler hat is popular with tourists as a compact, functional tool for preparing food in nature.";
		model="Survivalists_Mods\gear\cooking\Mess.p3d";
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=2000;
		varTemperatureMax=200;
	};
};