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
  class LongWoodenStick;
  class WoodenStick;
  class Firewood;
  class WoodenLog;
  class Bark_Oak;
  class Bark_Birch;

  class SRP_KitBase;
  //========================================== VANILLA OVERRIDE
  class LongWoodenStick_Irradiated: LongWoodenStick
	{
		scope=2;
		displayName="Long Wooden Stick";
		descriptionShort="A long wooden stick. Oddly feels hot to the touch.";
	};
	class WoodenStick_Irradiated: WoodenStick
	{
		scope=2;
		displayName="Wooden Stick";
		descriptionShort="A wooden stick. Oddly feels hot to the touch.";
  };
  class Firewood_Irradiated: Firewood
	{
		scope=2;
		displayName="Firewood";
		descriptionShort="A small log. Oddly feels hot to the touch.";
  };
  class WoodenLog_Irradiated: WoodenLog
	{
		scope=2;
		displayName="Wooden Log";
		descriptionShort="A large log. Oddly feels hot to the touch.";
  };
  class Bark_Oak_Irradiated: Bark_Oak
	{
		scope=2;
		displayName="Oak Bark";
		descriptionShort="Some oak bark. Oddly feels hot to the touch.";
  };
  class Bark_Birch_Irradiated: Bark_Birch
	{
		scope=2;
		displayName="Birch Bark";
		descriptionShort="Some birch bark. Oddly feels hot to the touch.";
  };
  //=-------------------------------------- CUSTOM STUFF

	class SRP_AdvancedWorkbench: Container_Base
	{
		scope=2;
		displayName="Ammo Workbench";
		descriptionShort="A workbench with tools for manufacturing ammunition and repairing weaponry.";
		model="Survivalists_Mods\gear\crafting\SRP_AmmoWorkbench.p3d";
		useEntityHierarchy="true";
		attachments[]=
		{
			"Shoulder",
			"Back",
			"CanisterGasoline",
			"SRP_Lantern",
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
				icon="set:dayz_inventory image:cat_common_cargo";
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
					"SRP_Lantern"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
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
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_ammoworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_ammoworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_ammoworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_ammoworkbench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_ammoworkbench.rvmat"}}
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

	class SRP_AmmoPress: Inventory_Base
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

	class SRP_CasePrep: Inventory_Base
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

  class SRP_SewingTable: Container_Base
	{
		scope=2;
		displayName="Tailor Machine";
		descriptionShort="A sewing machine used to tailor clothing";
		model="Survivalists_Mods\gear\crafting\SRP_SewingMachineTable.p3d";
		overrideDrawArea=8;
		useEntityHierarchy="true";
		attachments[]=
		{
			"SRP_SewingMachine",
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
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
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class Cargo
		{
			itemsCargoSize[]={8,12};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Machine
			{
				name="Machine";
				description="";
				attachmentSlots[]=
				{
					"SRP_SewingMachine"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
      class Thread
			{
				name="Thread";
				description="";
				attachmentSlots[]=
				{
					"SRP_SewingThread1",
          "SRP_SewingThread2",
          "SRP_SewingThread3",
          "SRP_SewingThread4",
          "SRP_SewingThread5",
				};
				icon="set:dayz_inventory image:cat_common_cargo";
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
						
						{
							1.01,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0099999998,
							{}
						}
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
	class SRP_SewingTable_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Sewing Table";
		descriptionShort="A sewing machine used to tailor clothing";
	};
	class SRP_SewingMachine: Inventory_Base
	{
		scope=2;
		displayName="Sewing Machine";
		descriptionShort="Looks like a sewing machine huh";
		model="Survivalists_Mods\gear\crafting\SRP_SewingMachine.p3d";
		inventorySlot[]=
		{
			"SRP_SewingMachine"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={4,4};
		itemBehaviour=0;
		physLayer="item_large";
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingmachine_co.paa"
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
						
						{
							1.01,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0099999998,
							{}
						}
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
	
	class SRP_SewingThread: Inventory_Base
	{
		scope=2;
		displayName="Sewing Thread";
		descriptionShort="A thread... Used for you... YOU GUESSED IT. Sewing";
		model="\Survivalists_Mods\gear\crafting\SRP_SewingThread.p3d";
		weight=500;
		itemSize[]={1,1};
		stackedUnit="g";
		absorbency=0.2;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
    canBeSplit=1;
    inventorySlot[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
    };
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingmachine_co.paa"
		};
	};
	class SRP_SewingThread_Black: SRP_SewingThread
	{
		scope=2;
		displayName="Sewing Thread";
		descriptionShort="A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_black_co.paa"
		};
	};
	class SRP_SewingThread_Green: SRP_SewingThread
	{
		scope=2;
		displayName="Sewing Thread";
		descriptionShort="A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_green_co.paa"
		};
	};
	class SRP_SewingThread_LightBlue: SRP_SewingThread
	{
		scope=2;
		displayName="Sewing Thread";
		descriptionShort="A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_lightblue_co.paa"
		};
	};
	class SRP_SewingThread_Red: SRP_SewingThread
	{
		scope=2;
		displayName="Sewing Thread";
		descriptionShort="A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_red_co.paa"
		};
	};
	class SRP_SewingThread_Blue: SRP_SewingThread
	{
		scope=2;
		displayName="Sewing Thread";
		descriptionShort="A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_blue_co.paa"
		};
	};
  class SRP_SewingThread_Grey : SRP_SewingThread
	{
		scope = 2;
		displayName = "Sewing Thread";
		descriptionShort = "A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_grey_co.paa"
		};
	};
	class SRP_SewingThread_Orange : SRP_SewingThread
	{
		scope = 2;
		displayName = "Sewing Thread";
		descriptionShort = "A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_orange_co.paa"
		};
	};
	class SRP_SewingThread_Pink : SRP_SewingThread
	{
		scope = 2;
		displayName = "Sewing Thread";
		descriptionShort = "A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_pink_co.paa"
		};
	};
	class SRP_SewingThread_Purple : SRP_SewingThread
	{
		scope = 2;
		displayName = "Sewing Thread";
		descriptionShort = "A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_purple_co.paa"
		};
	};
	class SRP_SewingThread_Yellow : SRP_SewingThread
	{
		scope = 2;
		displayName = "Sewing Thread";
		descriptionShort = "A thread... Used for you... YOU GUESSED IT. Sewing";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_yellow_co.paa"
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

  //========================================== TAILORING
  class SRP_ClothingBackpacks_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Backpacks";
		descriptionShort="A kit with the appropriate materials to make a backpack.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};
  class SRP_ClothingBelts_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Belt";
		descriptionShort="A kit with the appropriate materials to make a belt.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};
  class SRP_ClothingGloves_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Gloves";
		descriptionShort="A kit with the appropriate materials to make gloves.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};
  class SRP_ClothingHeadgear_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Headgear";
		descriptionShort="A kit with the appropriate materials to make headgear.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};
  class SRP_ClothingMasks_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Masks";
		descriptionShort="A kit with the appropriate materials to make masks.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};
  class SRP_ClothingPants_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Pants";
		descriptionShort="A kit with the appropriate materials to make pants.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};
  class SRP_ClothingTops_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Shirts";
		descriptionShort="A kit with the appropriate materials to make shirts.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};
  class SRP_ClothingVests_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Vests";
		descriptionShort="A kit with the appropriate materials to make vests.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};
  class SRP_ClothingVestsPouches_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Clothing Kit - Pouches";
		descriptionShort="A kit with the appropriate materials to make vest pouches.";
    attachments[]=
    {
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "AnimalPelt1",
      "AnimalPelt2",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_case_textiles_co.paa"
		};
	};

  //------------- Machining
  class SRP_LatheWorkbench_Kit: SRP_KitBase 
	{
		scope=2;
		displayName="Lathe Workbench Kit";
		descriptionShort="A lathe workbench kit";
	};

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

  //===================== Wood and General Crafting
  class SRP_WornWorkbench_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Worn Workbench Kit";
		descriptionShort="A worn workbench kit";
	};

  class SRP_WornWorkbench: Container_Base
	{
		scope=2;
		displayName="Worn Workbench";
		descriptionShort="A Workbench with basic tools.";
		model="Survivalists_Mods\gear\crafting\SRP_genericworkbench.p3d";
		useEntityHierarchy="true";
		attachments[]=
		{
      "SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3",
      "SRP_LargeTool1",
      "SRP_LargeTool2",
      "SRP_LargeTool3",
			"SRP_WoodDrill",
			"SRP_WoodClamp",
      "SRP_ToolKit_Hammer",
      "SRP_ToolKit_Hatchet",
      "SRP_ToolKit_HandSaw",
      "SRP_ToolKit_Pliers",
      "SRP_ToolKit_Screwdriver",
      "SRP_ToolKit_Shovel",
      "SRP_ToolKit_Caliper",
      "SRP_ToolKit_Handdrill",
      "SRP_ToolKit_Crowbar",
      "SRP_ToolKit_Wrench",
      "SRP_ToolKit_DeconstructKit"
		};
		destroyOnEmpty=0;
		carveNavmesh=0;
		canBeDigged=0;
		heavyItem=1;
		weight=500;
		itemSize[]={14,14};
    itemsCargoSize[]={4,4};
		itemBehaviour=0;
		repairKitType=1;
		physLayer="item_large";
		class GUIInventoryAttachmentsProps
		{
      class Tools
			{
				name="Tools";
				description="Small Tools";
				attachmentSlots[]=
				{
					"SRP_Tool1",
          "SRP_Tool2",
          "SRP_Tool3",
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};
      class LargeTools
			{
				name="Large Tools";
				description="Large Tools";
				attachmentSlots[]=
				{
					"SRP_LargeTool1",
          "SRP_LargeTool2",
          "SRP_LargeTool3",
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};
			class Augments
			{
				name="Augments";
				description="Attachments for wood workbench";
				attachmentSlots[]=
				{
					"SRP_WoodDrill",
          "SRP_WoodClamp"
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};
      class ExtraTools
			{
				name="Extra Tools";
				description="Extra Tools";
				attachmentSlots[]=
				{
          "SRP_ToolKit_Hammer",
          "SRP_ToolKit_Hatchet",
          "SRP_ToolKit_HandSaw",
          "SRP_ToolKit_Pliers",
          "SRP_ToolKit_Screwdriver",
          "SRP_ToolKit_Shovel",
          "SRP_ToolKit_Caliper",
          "SRP_ToolKit_Handdrill",
          "SRP_ToolKit_Crowbar",
          "SRP_ToolKit_Wrench",
          "SRP_ToolKit_DeconstructKit"
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
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}}
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

  class SRP_WorkbenchDrill: Inventory_Base
	{
		scope=2;
		displayName="Drill";
		descriptionShort="A drill for wood.";
		model="Survivalists_Mods\gear\crafting\SRP_carpentryworkbench_drill.p3d";
		inventorySlot[]=
		{
			"SRP_WoodDrill"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={4,3};
		itemBehaviour=0;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}}
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

  class SRP_WorkbenchClamp: Inventory_Base
	{
		scope=2;
		displayName="Clamp";
		descriptionShort="A clamp for wood.";
		model="Survivalists_Mods\gear\crafting\SRP_carpentryworkbench_clamp.p3d";
		inventorySlot[]=
		{
			"SRP_WoodClamp"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={4,3};
		itemBehaviour=0;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_defaultworkbench.rvmat"}}
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

  class SRP_WornWorkbench_Metal_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Worn Metal Workbench Kit";
		descriptionShort="A worn metal workbench kit";
	};

  class SRP_WornWorkbench_Metal: Container_Base
	{
		scope=2;
		displayName="Worn Metal Workbench";
		descriptionShort="A Workbench with basic tools.";
		model="Survivalists_Mods\gear\crafting\SRP_genericworkbench_metal.p3d";
		useEntityHierarchy="true";
    attachments[]=
		{
      "SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3",
      "SRP_LargeTool1",
      "SRP_LargeTool2",
      "SRP_LargeTool3",
			"SRP_WoodDrill",
			"SRP_WoodClamp",
      "SRP_ToolKit_Hammer",
      "SRP_ToolKit_Hatchet",
      "SRP_ToolKit_HandSaw",
      "SRP_ToolKit_Pliers",
      "SRP_ToolKit_Screwdriver",
      "SRP_ToolKit_Shovel",
      "SRP_ToolKit_Caliper",
      "SRP_ToolKit_Handdrill",
      "SRP_ToolKit_Crowbar",
      "SRP_ToolKit_Wrench",
      "SRP_ToolKit_DeconstructKit"
		};
		destroyOnEmpty=0;
		carveNavmesh=0;
		canBeDigged=0;
		heavyItem=1;
		weight=500;
		itemSize[]={14,14};
    itemsCargoSize[]={4,4};
		itemBehaviour=0;
		repairKitType=1;
		physLayer="item_large";
    class GUIInventoryAttachmentsProps
		{
      class Tools
			{
				name="Tools";
				description="Small Tools";
				attachmentSlots[]=
				{
					"SRP_Tool1",
          "SRP_Tool2",
          "SRP_Tool3",
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};
      class LargeTools
			{
				name="Large Tools";
				description="Large Tools";
				attachmentSlots[]=
				{
					"SRP_LargeTool1",
          "SRP_LargeTool2",
          "SRP_LargeTool3",
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};
			class Augments
			{
				name="Augments";
				description="Attachments for wood workbench";
				attachmentSlots[]=
				{
					"SRP_WoodDrill",
          "SRP_WoodClamp"
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};
      class ExtraTools
			{
				name="Extra Tools";
				description="Extra Tools";
				attachmentSlots[]=
				{
          "SRP_ToolKit_Hammer",
          "SRP_ToolKit_Hatchet",
          "SRP_ToolKit_HandSaw",
          "SRP_ToolKit_Pliers",
          "SRP_ToolKit_Screwdriver",
          "SRP_ToolKit_Shovel",
          "SRP_ToolKit_Caliper",
          "SRP_ToolKit_Handdrill",
          "SRP_ToolKit_Crowbar",
          "SRP_ToolKit_Wrench",
          "SRP_ToolKit_DeconstructKit"
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
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_wornworkbenchmetal.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_wornworkbenchmetal.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_wornworkbenchmetal.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_wornworkbenchmetal.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_wornworkbenchmetal.rvmat"}}
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
