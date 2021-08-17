class CfgPatches
{
	class Survivalists_Mods_Gear_Crafting
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Crafting",
      "Survivalists_Mods"
		};
	};
};

class CfgVehicles
{
  class Container_Base;
  class Inventory_Base;
  class SRP_KitBase;

  //-------------------------------------BASE GAME OVERRIDE
  // sneaky stashes attachments
  class WoodenStick: Inventory_Base
	{
    inventorySlot[]=
		{
			"WoodenStick",
			"Material_Shelter_Sticks",
      "WoodenSticks_20"
		};
  };

	class SRP_AdvancedWorkbench: Container_Base // BP1_Workbench
	{
		scope=2;
		displayName="Advanced Workbench";
		descriptionShort="A Workbench with tools for creating and repairing weapons and ammunition";
		model="Survivalists_Mods\gear\crafting\SRP_Workbench.p3d";
		useEntityHierarchy="true";
		attachments[]=
		{
			"Shoulder",
			"Back",
			"CanisterGasoline",
			"BP_gas_lamp",
			"SRP_CasePrep",
			"SRP_AmmoPress"
		};
		destroyOnEmpty=0;
		carveNavmesh=0;
		canBeDigged=0;
		heavyItem=1;
		weight=500;
		itemSize[]={12,12};
		itemBehaviour=0;
		repairKitType=1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={8,16};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Tools
			{
				name="Tools";
				description="";
				attachmentSlots[]=
				{
					"SRP_CasePrep",
					"SRP_AmmoPress"
				};
				icon="cat_common_cargo";
			};
			class Storage
			{
				name="Storage";
				description="";
				attachmentSlots[]=
				{
					"Shoulder",
					"Back",
					"CanisterGasoline",
					"BP_gas_lamp"
				};
				icon="cat_common_cargo";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\ReloadingBench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\ReloadingBench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\ReloadingBench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\ReloadingBench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\ReloadingBench.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

	class SRP_AmmoPress: Inventory_Base // AmmoPress
	{
		scope=2;
		displayName="Ammo Prep";
		descriptionShort="A module for pressing gun powder into ammo casings.";
		model="Survivalists_Mods\gear\crafting\SRP_AmmoPress.p3d";
		inventorySlot[]=
		{
			"SRP_AmmoPress"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={4,4};
		itemBehaviour=0;
		physLayer="item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
            {1.01,{}},
            {0.69999999,{}},
            {0.5,{}},
            {0.30000001,{}},
            {0.0099999998,{}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

	class SRP_CasePrep: Inventory_Base  // CasePrep
	{
		scope=2;
		displayName="Case Prep";
		descriptionShort="A module for preparing ammo casings";
		model="Survivalists_Mods\gear\crafting\SRP_CasePrep.p3d";
		inventorySlot[]=
		{
			"SRP_CasePrep"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={4,4};
		physLayer="item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
            {1.01,{}},
            {0.69999999,{}},
            {0.5,{}},
            {0.30000001,{}},
            {0.0099999998,{}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_ShootingTargets_Kit: SRP_KitBase  // BP_ShootingTargetO_kit
	{
		scope=2;
		displayName="Shooting Targets Kit";
		descriptionShort="A placeable shooting target set! Multiple targets.";
	};

  class SRP_ShootingTargets: Container_Base // BP_ShootingTargetO
	{
		scope=2;
		displayName="Shooting Targets";
		descriptionShort="Multiple targets for shooting at.";
		model="Survivalists_Mods\gear\crafting\SRP_ShootingTargets.p3d";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		carveNavmesh=1;
		weight=3000;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
			};
		};
	};



  //------------- Machining
  class SRP_LatheWorkbench: Container_Base
	{
		scope=2;
		displayName="Lathe Workbench";
		descriptionShort="A Workbench with tools for machining metals.";
		model="Survivalists_Mods\gear\crafting\SRP_LatheWorkbench.p3d";
		useEntityHierarchy="true";
		attachments[]=
		{
			"SRP_LatheClamp",
			"SRP_LatheGearDrive",
			"SRP_LatheTable",
			"SRP_LatheBelt",
		};
		destroyOnEmpty=0;
		carveNavmesh=0;
		canBeDigged=0;
		heavyItem=1;
		weight=500;
		itemSize[]={14,14};
		itemBehaviour=0;
		repairKitType=1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={8,8};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Tools
			{
				name="Tools";
				description="Attachments for a lathe";
				attachmentSlots[]=
				{
					"SRP_LatheClamp",
          "SRP_LatheGearDrive",
          "SRP_LatheTable",
          "SRP_LatheBelt",
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};		
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_LatheBelt: Inventory_Base
	{
		scope=2;
		displayName="Lathe Belt";
		descriptionShort="A module for transition power from the main gearbox to the lathe table.";
		model="Survivalists_Mods\gear\crafting\SRP_LatheWorkbench_Belt.p3d";
		inventorySlot[]=
		{
			"SRP_LatheBelt"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={4,2};
		itemBehaviour=0;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}}
					};
				};
			};
		};		
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_LatheTable: Inventory_Base
	{
		scope=2;
		displayName="Lathe Table";
		descriptionShort="A module for machining metals on a lathe.";
		model="Survivalists_Mods\gear\crafting\SRP_LatheWorkbench_Table.p3d";
		inventorySlot[]=
		{
			"SRP_LatheTable"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={6,6};
		itemBehaviour=0;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}}
					};
				};
			};
		};		
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_LatheGearDrive: Inventory_Base
	{
		scope=2;
		displayName="Lathe Gear Drive";
		descriptionShort="A module for generating power on a lathe";
		model="Survivalists_Mods\gear\crafting\SRP_LatheWorkbench_GearDrive.p3d";
		inventorySlot[]=
		{
			"SRP_LatheGearDrive"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={8,8};
		itemBehaviour=0;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}}
					};
				};
			};
		};		
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_LatheClamp: Inventory_Base
	{
		scope=2;
		displayName="Lathe Clamp";
		descriptionShort="A module for stablizing metals on a lathe.";
		model="Survivalists_Mods\gear\crafting\SRP_LatheWorkbench_Clamp.p3d";
		inventorySlot[]=
		{
			"SRP_LatheClamp"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={6,4};
		itemBehaviour=0;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\latheworkbench.rvmat"}}
					};
				};
			};
		};		
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};
};
