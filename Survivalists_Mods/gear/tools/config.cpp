class CfgPatches
{
	class Survivalists_Mods_Gear_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools",
      "DZ_Weapons_Melee_Blade", // hatchet
      "DZ_Gear_Navigation", // admin compass
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Compass;
  class FarmingHoe;
  class Container_Base;
  class FishingRod_Base_New;

  class SRP_KitBase;

  // ---------------------------- BASE GAME OVERRIDE
	class Heatpack: Inventory_Base
	{
		itemSize[]={1,1};
		varTemperatureMax=100;
	};

  class FieldShovel: Inventory_Base
	{
		inventorySlot[]+=
		{
			"no",
			"FShovel",
      "SRP_ToolKit_Shovel"
		};
	};

  class Hammer: Inventory_Base
	{
		scope=2;
		repairableWithKits[]={6}; // tire repair kit
    repairCosts[]={30};
    inventorySlot[]+=
		{
      "SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3",
      "SRP_ToolKit_Hammer"
		};
	};

  class FireExtinguisher: Inventory_Base
	{
		scope=2;
    inventorySlot[]+=
		{
			"Shoulder",
			"Melee",
      "no"
		};
	};

  class Lockpick: Inventory_Base
  {
    inventorySlot[]+=
    {
      "SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3"
    };
  };
  class Screwdriver: Inventory_Base
  {
    inventorySlot[]+=
    {
      "SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3",
      "SRP_ToolKit_Screwdriver"
    };
  };
  class Pliers: Inventory_Base
  {
    inventorySlot[]+=
    {
      "SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3",
      "SRP_ToolKit_Pliers"
    };
  };

  class Shovel: Inventory_Base
  {
    inventorySlot[]+=
    {
      "SRP_LargeTool1",
      "SRP_LargeTool2",
      "SRP_LargeTool3",
      "SRP_ToolKit_Shovel"
    };
  };

  class Pickaxe: Inventory_Base
  {
    inventorySlot[]+=
    {
      "SRP_LargeTool1",
      "SRP_LargeTool2",
      "SRP_LargeTool3",
    };
  };

  class Crowbar: Inventory_Base
	{
    inventorySlot[]+=
    {
      "SRP_ToolKit_Crowbar"
    };
  };

  class Wrench: Inventory_Base
	{
    inventorySlot[]+=
    {
      "SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3",
      "SRP_ToolKit_Wrench"
    };
  };

  class HandSaw: Inventory_Base
	{
    inventorySlot[]+=
    {
      "SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3",
      "SRP_ToolKit_HandSaw"
    };
  };

  class WeaponCleaningKit: Inventory_Base
	{
    canBeSplit=1;
  };

  class Pen_ColorBase: Inventory_Base
  {
    inventorySlot[]+=
		{
			"Pen_slot"
		};
  };

  class ImprovisedFishingRod: FishingRod_Base_New
  {
    inventorySlot[]+={"fishingRod"};
  };
	class ObsoleteFishingRod: FishingRod_Base_New
	{
    inventorySlot[]+={"fishingRod"};
  };
  class FishingRod: FishingRod_Base_New
	{
    inventorySlot[]+={"fishingRod"};
  };

  // -------------------------- MODDED MODS
  class MassAdminStash: Compass
	{
    scope=0; // do not let it even be spawned in
		itemsCargoSize[]={0,0}; // if it somehow got in, no storage
	};

  // ---------------------------- Custom Stuff

  class HammerMint_Emporium: Hammer
	{
		scope=2;
		displayName="Coin Minter - Emporium";
		descriptionShort="This hammer smashes the imprint of a die onto a metal coin";
    color="emporium";
	};
  class HammerMint_Bazaar: Hammer
	{
		scope=2;
		displayName="Coin Minter - Bazaar";
		descriptionShort="This hammer smashes the imprint of a die onto a metal coin";
    color="bazaar";
	};

  class HammerLabeler_ColorBase: Hammer
  {
		scope=0;
		displayName="Bottle Labeler - Base";
		descriptionShort="This hammer smashes the imprint of a label onto a bottle";
    color="base";
  };

  class HammerLabeler_IslandGeorge: HammerLabeler_ColorBase
	{
		scope=2;
		displayName="Bottle Labeler - Island George";
		descriptionShort="This hammer smashes the imprint of a label onto a bottle";
    color="IslandGeorge";
	};

  class SRP_Heatpack: Heatpack
	{
		scope=2;
    displayName="Advanced Heat Pack";
		descriptionShort="This one gets hot hot hot.";
    varEnergyMax=2000;
	};
  class SRP_Icepack: Heatpack 
	{
		scope=2;
    displayName="Advanced Ice Pack";
		descriptionShort="This one gets cold cold cold.";
		varTemperatureMax=10;
    varEnergyMax=1200;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\tools\data\ice_pack_co.paa"
		};
    class EnergyManager
		{
			energyAtSpawn=1200;
			energyUsagePerSecond=1;
			updateInterval=20;
		};
	};

  // carpentry or weapon smithing
	class SRP_Handdrill: Inventory_Base
	{
		scope=2;
		displayName="Hand Powered Drill";
		descriptionShort="A hand drill that runs off of human power.";
		model="Survivalists_Mods\gear\tools\handdrill.p3d";
		rotationFlags=17;
		weight=100;
		itemSize[]={2,3};
		fragility=0.001;
		openItemSpillRange[]={20,40};
    inventorySlot[]=
    {
      "SRP_ToolKit_Handdrill"
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
						{1.0,{"Survivalists_Mods\gear\tools\data\handdrill.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\handdrill.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\handdrill_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\handdrill_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\handdrill_destruct.rvmat"}}
          };
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWrench";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWrench_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWrench_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};
  // carpentry or weapon smithing
	class SRP_Handdrill_Old: Inventory_Base
	{
		scope=2;
		displayName="Old Hand Powered Drill";
		descriptionShort="An old hand drill that runs off of human power.";
		model="Survivalists_Mods\gear\tools\handdrill_old.p3d";
		rotationFlags=17;
		weight=100;
		itemSize[]={2,3};
		fragility=0.001;
		openItemSpillRange[]={20,40};
    inventorySlot[]=
    {
      "SRP_ToolKit_Handdrill"
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
						{1.0,{"Survivalists_Mods\gear\tools\data\handdrill_old.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\handdrill_old.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\handdrill_old_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\handdrill_old_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\handdrill_old_destruct.rvmat"}}
          };
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWrench";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWrench_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWrench_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};

  class SRP_Clamp: Inventory_Base
	{
		scope=2;
		displayName="Clamp";
		descriptionShort="Time to give someone the CLAMPS!";
		model="Survivalists_Mods\gear\tools\clamp.p3d";
		rotationFlags=17;
		weight=100;
		itemSize[]={2,3};
		fragility=0.001;
    physLayer="item_small";
		openItemSpillRange[]={20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\clamp_destruct.rvmat"}}
          };
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWrench";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWrench_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWrench_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};

  class SRP_Caliper: Inventory_Base
	{
		scope=2;
		displayName="Caliper";
		descriptionShort="A hand held caliper";
		model="Survivalists_Mods\gear\tools\caliper.p3d";
		rotationFlags=17;
		weight=100;
		itemSize[]={2,3};
		fragility=0.001;
    physLayer="item_small";
		openItemSpillRange[]={20,40};
    inventorySlot[]=
    {
      "SRP_ToolKit_Caliper"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\tools\data\caliper_co.paa"
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
						{1.0,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\clamp_destruct.rvmat"}}
          };
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWrench";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWrench_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWrench_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};

  // herbalism
  class SRP_MortarBowl: Inventory_Base
	{
		scope=2;
		displayName="Mortar Bowl";
		descriptionShort="A mortar bowl used for pulverizing things into dust by using a pestle.";
		model="Survivalists_Mods\gear\tools\srp_mortarbowl.p3d";
		weight=50;
		itemSize[]={2,2};
    itemsCargoSize[]={0,0};
		fragility=0.001;
    physLayer="item_small";
		openItemSpillRange[]={20,40};
    attachments[]=
    {
      "SRP_Pestle",
      "SRP_Flower1",
      "SRP_CrushedPowder1",
      "SRP_CrushedPowder2",
      "SRP_CrushedPowder3",
      "SRP_CrushedPowder4",
      "SRP_CrushedPowder5",
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_co.paa"
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
						{1.0,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_destruct.rvmat"}}
          };
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};

  class SRP_MortarPestle: Inventory_Base
	{
		scope=2;
		displayName="Mortar Pestle";
		descriptionShort="A mortar pestle used for pulverizing things into dust. Best used with a mortar.";
		model="Survivalists_Mods\gear\tools\srp_mortarpestle.p3d";
		weight=50;
    rotationFlags=16;
		itemSize[]={2,2};
    itemsCargoSize[]={0,0};
		fragility=0.001;
    physLayer="item_small";
		openItemSpillRange[]={20,40};
    inventorySlot[]=
		{
			"SRP_Pestle"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_co.paa"
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
						{1.0,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_destruct.rvmat"}}
          };
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};

  //============================================= ELECTRONIC Hardeners
  class TireRepairKit_ElectronicsKit_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Basic Hacking Protocol";
		descriptionShort="A basic anti hacking tool. Easily removed";
		model="\dz\vehicles\parts\Tire_Repair_Kit.p3d";
		weight=1000;
		itemSize[]={2,3};
		absorbency=0;
		rotationFlags=16;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		repairKitType=7;
    inventorySlot[]=
		{
			"SRP_HackingKit1",
			"SRP_HackingKit2",
			"SRP_HackingKit3",
			"SRP_HackingKit4"
		};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\tools\data\electronichacking_kit_green_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\vehicles\parts\data\Tire_Repair_Kit.rvmat"}},
						{0.69999999,{"DZ\vehicles\parts\data\Tire_Repair_Kit.rvmat"}},
						{0.5,{"DZ\vehicles\parts\data\Tire_Repair_Kit_damage.rvmat"}},
						{0.30000001,{"DZ\vehicles\parts\data\Tire_Repair_Kit_damage.rvmat"}},
						{0,{"DZ\vehicles\parts\data\Tire_Repair_Kit_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class TireRepairKit_ElectronicsKit_Green: TireRepairKit_ElectronicsKit_ColorBase
	{
		scope=2;
		displayName="Basic Hacking Protocol";
		descriptionShort="A basic anti hacking tool. Easily removed. Requires three wires to remove of at least 100 to 200 rating.";
    color="green";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\tools\data\electronichacking_kit_green_co.paa"};
	};
  class TireRepairKit_ElectronicsKit_Yellow: TireRepairKit_ElectronicsKit_ColorBase
	{
		scope=2;
		displayName="Advanced Hacking Protocol";
		descriptionShort="An anti hacking tool. Moderately difficult to removed. Requires three wires to remove of at least 50 to 100 rating.";
    color="yellow";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\tools\data\electronichacking_kit_yellow_co.paa"};
	};
  class TireRepairKit_ElectronicsKit_Red: TireRepairKit_ElectronicsKit_ColorBase
	{
		scope=2;
		displayName="Expert Hacking Protocol";
		descriptionShort="An expert anti hacking tool. Difficult to remove. Requires four wires to remove of at least 50 to 100 rating.";
    color="red";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\tools\data\electronichacking_kit_red_co.paa"};
	};
  class TireRepairKit_ElectronicsKit_Blue: TireRepairKit_ElectronicsKit_ColorBase
	{
		scope=2;
		displayName="Master Hacking Protocol";
		descriptionShort="A master anti hacking tool. Nearly impossible to remove. Requires five wires to remove of at least 75 or higher rating.";
    color="blue";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\tools\data\electronichacking_kit_blue_co.paa"};
	};
  class TireRepairKit_ElectronicsKit_Purple: TireRepairKit_ElectronicsKit_ColorBase
	{
		scope=2;
		displayName="Supreme Hacking Protocol";
		descriptionShort="A supreme anti hacking tool. Basically impossible to remove. Requires six wires to remove of at least 75 or higher rating.";
    color="purple";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\tools\data\electronichacking_kit_purple_co.paa"};
	};

};