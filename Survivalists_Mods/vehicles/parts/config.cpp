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
  class Bottle_Base;

  // ----------------------  BASE GAME OVERRIDES

  class CanisterGasoline: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_CanisterGasoline0";
		descriptionShort="$STR_CfgVehicles_CanisterGasoline1";
		model="\dz\vehicles\parts\JerryCan.p3d";
		weight=4000;
		itemSize[]={5,6};
		inventorySlot[]={"CanisterGasoline"};
		absorbency=0;
		canBeSplit=0;
		stackedRandom=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=8192;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit=20000;
		varQuantityMin=0;
		varQuantityMax=20000;
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpCanisterGasoline_Light
				{
					soundSet="pickUpCanisterGasolineLight_SoundSet";
					id=796;
				};
				class pickUpCanisterGasoline
				{
					soundSet="pickUpCanisterGasoline_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="canistergasoline_drop_SoundSet";
					id=898;
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1,{"DZ\vehicles\parts\data\jerrycan.rvmat"}},
            {0.69999999,{"DZ\vehicles\parts\data\jerrycan.rvmat"}},
            {0.5,{"DZ\vehicles\parts\data\jerrycan_damage.rvmat"}},
            {0.30000001,{"DZ\vehicles\parts\data\jerrycan_damage.rvmat"}},
            {0,{"DZ\vehicles\parts\data\jerrycan_destruct.rvmat"}}
					};
				};
			};
		};
	};
};