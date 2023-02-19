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
  class FireplaceBase;

  class SRP_KitBase: Inventory_Base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Blueprint Kit";
		descriptionShort="A blueprint kit. Contains everything needed to build. Can be disassembled.";
		model="Survivalists_Mods\gear\crafting\srp_kitbase.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={4,4};
		carveNavmesh=1;
    itemBehaviour=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=16;
		weight=3000;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
          healthLevels[] = 
          {
            {1,"Survivalists_Mods\gear\crafting\data\srp_kitbase.rvmat"},
            {0.7,"Survivalists_Mods\gear\crafting\data\srp_kitbase.rvmat"},
            {0.5,"Survivalists_Mods\gear\crafting\data\srp_kitbase.rvmat"},
            {0.3,"Survivalists_Mods\gear\crafting\data\srp_kitbase.rvmat"},
            {0.1,"Survivalists_Mods\gear\crafting\data\srp_kitbase.rvmat"}
          };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
  class SRP_Building_KitBase: SRP_KitBase
  {
		displayName="Building Kit";
		descriptionShort="A wooden box used to transport small items. Find a suitable place to construct. Can be disassembled.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_building_co.paa"
		};
  };
  class SRP_AccessoryRing_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Accessory Kit - Ring";
		descriptionShort="An accessory kit. Used to make rings.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalRod1",
      "SRP_RawCrystal1",
      "Material_MetalWire",
		};
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_accessoryring_co.paa"
		};
	};
  //--------------------------------- TAXIDERMY
  class SRP_Taxidermy_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Taxidermy Kit - Base Mount";
		descriptionShort="A kit with the appropriate tools to build the base mount for a properly taxidermied animal.";
    attachments[]=
    {
      "AnimalSkull",
      "AnimalPelt1",
      "AnimalPelt2",
      "AnimalPelt3",
      "AnimalPelt4",
      "Material_Shelter_Leather",
      "Material_Shelter_FrameSticks",
			"MetalWire",
			"Material_MetalWire",
			"Material_FPole_MetalWire",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags",
    };
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_taxidermy_co.paa"
		};
	};
  class SRP_TaxidermyWall_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Taxidermy Kit - Wall Mount";
		descriptionShort="A kit with the appropriate tools to build the wall mount for a properly taxidermied animal.";
    attachments[]=
    {
      "AnimalSkull",
      "AnimalPelt1",
      "AnimalPelt2",
      "AnimalPelt3",
      "AnimalPelt4",
      "Material_Shelter_Leather",
      "Material_Shelter_FrameSticks",
			"MetalWire",
			"Material_MetalWire",
			"Material_FPole_MetalWire",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags",
    };
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_taxidermy_co.paa"
		};
	};
  class SRP_WoodAttachmentGunKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Weapon Attachment Kit - Wood";
		descriptionShort="A kit for creating wooden gun attachments.";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_weapons_co.paa"
		};
	};
  class SRP_WeaponLongBarrel_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Weapon Kit - Long Barreled Gun";
		descriptionShort="A kit for assembling a long barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"
    };
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_weapons_co.paa"
		};
	};
  class SRP_WeaponMediumBarrel_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Weapon Kit - Medium Barreled Gun";
		descriptionShort="A kit for assembling a medium length barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"      
    };
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_weapons_co.paa"
		};
	};
  class SRP_WeaponShortBarrel_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Weapon Kit - Short Barreled Gun";
		descriptionShort="A kit for assembling a short length barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"      
    };
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_weapons_co.paa"
		};
	};

//========================================== VANILLA OVERRIDE
  class Rope: Inventory_Base
	{
    itemSize[]={1,2};
    canBeSplit=1;
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		varStackMax=1;
    inventorySlot[]+=
    {
      "SRP_Construction_Rope",
      "Smithing_Rope"
    };
  };
  class MetalWire: Inventory_Base
	{
    canBeSplit=1;
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		varStackMax=1;
    inventorySlot[]+=
    {
      "SRP_Construction_MetalWire",
      "Smithing_MetalWire",
      "Tailoring_MetalWire"
    };
  };    
  class WoodenStick: Inventory_Base
	{
    inventorySlot[]+=
    {
      "Tailoring_Sticks"
    };
  };  
  class LongWoodenStick_Irradiated: LongWoodenStick
	{
		scope=2;
		displayName="Long Wooden Stick";
		descriptionShort="A long wooden stick. Oddly feels hot to the touch.";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\wooden_stick_irradiated_co.paa"
		};
	};
	class WoodenStick_Irradiated: WoodenStick
	{
		scope=2;
		displayName="Wooden Stick";
		descriptionShort="A wooden stick. Oddly feels hot to the touch.";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\crafting\data\bp_wooden_stick_irradiated_co.paa"
		};
  };
//============================================CUSTOM STUFF
  class SRP_ShootingTargets_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Shooting Targets Kit";
		descriptionShort="A placeable shooting target set! Multiple targets.";
	};
  class SRP_ShootingTargets: Container_Base
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
//==========================================AMMO CRAFTING
	class SRP_AdvancedWorkbench: Container_Base
	{
		scope=2;
		displayName="Ammo Workbench";
		descriptionShort="A workbench with tools for manufacturing ammunition and repairing weaponry. OOC DEV NOTE: REDUCING STORAGE TO 80 SLOTS";
		model="Survivalists_Mods\gear\crafting\SRP_AmmoWorkbench.p3d";
		useEntityHierarchy="true";
		attachments[]=
		{
			"Shoulder",
			"Back",
			"CanisterGasoline",
			"SRP_Lantern",
			"SRP_CasePrep",
			"SRP_AmmoPress",
      "SRP_AmmoCasings",
      "SRP_AmmoGunpowder",
      "SRP_AmmoBullets",
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
      class AmmoCrafting
			{
				name="AmmoCrafting";
				description="";
				attachmentSlots[]=
				{
					"SRP_AmmoCasings",
          "SRP_AmmoGunpowder",
          "SRP_AmmoBullets",
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
//==========================================TAILORING
  class SRP_SewingTable: Inventory_Base
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
      "TailoringPelt1",
      "TailoringPelt2",
      "TailoringPelt3",
      "TailoringPelt4",
      "TailoringPelt5",
      "Tailoring_Leather",
      "Tailoring_Sticks",
      "Tailoring_Bones",
      "Tailoring_Fabric",
      "Tailoring_MetalWire",
      "Tailoring_MetalPlate",
		};
		destroyOnEmpty=0;
		carveNavmesh=0;
		canBeDigged=0;
		heavyItem=1;
		weight=500;
		itemSize[]={10,4};
    itemsCargoSize[]={0,0};
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
			"zbytek"
		};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_sewingmachine_table_co.paa"};
		class GUIInventoryAttachmentsProps
		{
			class SewingMachine
			{
				name="Sewing Machine";
				description="A belt driven sewing machine.";
				attachmentSlots[]=
				{
					"SRP_SewingMachine"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};      
      class AnimalPelts
			{
				name="Animal Pelts";
				description="Animal Pelts for sewing.";
				attachmentSlots[]=
				{
					"TailoringPelt1",
          "TailoringPelt2",
          "TailoringPelt3",
          "TailoringPelt4",
          "TailoringPelt5",
				};
				icon="set:dayz_inventory image:animal_pelt";
			};
      class SewingThread
			{
				name="Sewing Thread";
				description="Spools of thread for embroidering fabric.";
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
      class Misc
			{
				name="Misc Ingredients";
				description="Various ingredients that enhance fabric.";
				attachmentSlots[]=
				{
					"Tailoring_Leather",
          "Tailoring_Sticks",
          "Tailoring_Bones",
          "Tailoring_Fabric",
          "Tailoring_MetalWire",
          "Tailoring_MetalPlate",
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
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
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
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_sewingmachine_co.paa"};
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
		displayName="Sewing Thread - White";
		descriptionShort="A thread... Used for you... YOU GUESSED IT. Sewing";
		model="\Survivalists_Mods\gear\crafting\SRP_SewingThread.p3d";
		weight=500;
		itemSize[]={1,1};
		stackedUnit="g";
		absorbency=0.2;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=1000;
    varStackMax=200;
    canBeSplit=1;
    color="white";
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
		displayName="Sewing Thread - Black";
    color="black";
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
		displayName="Sewing Thread - Green";
    color="green";
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
		displayName="Sewing Thread - Light Blue";
    color="lightblue";
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
		displayName="Sewing Thread - Red";
    color="red";
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
		displayName="Sewing Thread - Blue";
    color="blue";
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
		displayName = "Sewing Thread - Gray";
    color="gray";
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
		displayName = "Sewing Thread - Orange";
    color="orange";
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
		displayName = "Sewing Thread - Pink";
    color="pink";
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
		displayName = "Sewing Thread - Purple";
    color="purple";
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
		displayName = "Sewing Thread - Yellow";
    color="yellow";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"\Survivalists_Mods\gear\crafting\data\srp_sewingthread_yellow_co.paa"
		};
	}; 
//==========================================MACHINING
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
//==========================================WOOD WORKING
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
      "SRP_ToolKit_Wrench"
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
          "SRP_ToolKit_Wrench"
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
      "SRP_ToolKit_Wrench"
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
          "SRP_ToolKit_Wrench"
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
//==========================================BREWING
  class SRP_BrewingWorkbench_ColorBase: FireplaceBase 
	{
		displayName="Brewing Still";
		descriptionShort="A workbench with tools for manufacturing alcohol.";
		model="Survivalists_Mods\gear\crafting\srp_brewingstill_alchemy.p3d";
    useEntityHierarchy="true";
		weight=500;
		itemSize[]={15,15};
		itemBehaviour=0;
		quantityBar=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		stackedUnit="";
    varTemperatureMax=1000;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
    carveNavmesh=0;
		canBeDigged=0;
		physLayer="item_large";
    itemsCargoSize[]={1,1};
    attachments[]=
		{
      "CookingEquipment",
			"Firewood",
			"WoodenStick",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
      "SRP_FuelCoal"
		};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_brewingstill_alchemy_ca.paa"};
		class GUIInventoryAttachmentsProps
		{
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick",
          "SRP_FuelCoal"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
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
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_alchemy.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_alchemy.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_alchemy.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_alchemy.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_alchemy.rvmat"}}
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
  class SRP_BrewingWorkbench_Alchemy_Kit: SRP_KitBase 
	{
		scope=2;
		displayName="Brewing Still Kit - Alchemy";
		descriptionShort="A brewing workbench kit";
    projectionTypename="SRP_BrewingWorkbench_Alchemy";
	};
  class SRP_BrewingWorkbench_Alchemy: SRP_BrewingWorkbench_ColorBase 
	{
		scope=2;
		displayName="Alchemy Still";
		descriptionShort="A workbench with tools for manufacturing alcohol.";
		model="Survivalists_Mods\gear\crafting\srp_brewingstill_alchemy.p3d";
		itemSize[]={4,4};
    attachments[]+={"BrewingBarrel","BrewingBarrel1"};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_brewingstill_alchemy_ca.paa"};
    class GUIInventoryAttachmentsProps
		{
      class Brewing
			{
				name="Brewing";
				description="Still Attachments";
				attachmentSlots[]=
				{
          "BrewingBarrel",
          "BrewingBarrel1",
          "CookingEquipment"
				};
				icon="set:dayz_inventory image:cat_fp_cooking";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick",
          "SRP_FuelCoal"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
	};
  class SRP_BrewingWorkbench_Ceramic_Kit: SRP_KitBase 
	{
		scope=2;
		displayName="Brewing Still Kit - Ceramic";
		descriptionShort="A brewing workbench kit";
    projectionTypename="SRP_BrewingWorkbench_Ceramic";
	};
  class SRP_BrewingWorkbench_Ceramic: SRP_BrewingWorkbench_ColorBase 
	{
		scope=2;
		displayName="Ceramic Still";
		descriptionShort="A workbench with tools for manufacturing alcohol.";
		model="Survivalists_Mods\gear\crafting\srp_brewingstill_ceramic.p3d";
		itemSize[]={10,10};
    attachments[]+={"BrewingBarrel","BrewingBarrelTable", "BrewingBarrel1"};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_brewingstill_stone_co.paa"};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_stone.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_stone.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_stone.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_stone.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_stone.rvmat"}}
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Brewing
			{
				name="Brewing";
				description="Still Attachments";
				attachmentSlots[]=
				{
					"BrewingBarrelTable",
					"BrewingBarrel",
          "BrewingBarrel1",
          "CookingEquipment"
				};
				icon="set:dayz_inventory image:cat_fp_cooking";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick",
          "SRP_FuelCoal"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
	};
  class SRP_BrewingWorkbench_Copper_Kit: SRP_KitBase 
	{
		scope=2;
		displayName="Brewing Still Kit - Copper";
		descriptionShort="A brewing workbench kit";
    projectionTypename="SRP_BrewingWorkbench_Copper";
	};
  class SRP_BrewingWorkbench_Copper: SRP_BrewingWorkbench_ColorBase 
	{
		scope=2;
		displayName="Copper Still";
		descriptionShort="A workbench with tools for manufacturing alcohol.";
		model="Survivalists_Mods\gear\crafting\srp_brewingstill_copper.p3d";
		itemSize[]={8,8};
    attachments[]+={"BrewingBarrel", "BrewingBarrel1"};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_brewingstill_copper_co.paa"};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_copper.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_copper.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_copper.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_copper.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_brewingstill_copper.rvmat"}}
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Brewing
			{
				name="Brewing";
				description="Still Attachments";
				attachmentSlots[]=
				{
          "BrewingBarrel",
          "BrewingBarrel1",
          "CookingEquipment"
				};
				icon="set:dayz_inventory image:cat_fp_cooking";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick",
          "SRP_FuelCoal"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
	};

//==========================================SMITHING
  class SRP_Grindstone_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Grindstone";
		descriptionShort="A makeshift grindstone that is powered by pressing on the pedal.";
		model="Survivalists_Mods\gear\crafting\srp_grindstone.p3d";
		inventorySlot[]={};
		heavyItem=1;
    itemBehaviour=0;
		weight=10000;
		itemSize[]={8,8};
		physLayer="item_large";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_grindstone_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_grindstone.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_grindstone.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_grindstone.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_grindstone.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_grindstone.rvmat"}}
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
    class AnimationSources
    {
      class spinner1_rotate{source="user";initPhase=0;animPeriod=2;};
    };
	};
  class SRP_Grindstone_Simple: SRP_Grindstone_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_grindstone_co.paa"};
    color="simple";
	};
  class SRP_Grindstone_Hobbit: SRP_Grindstone_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_grindstone_hobbit_co.paa"};
    color="hobbit";
	};
  class SRP_Anvil_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Anvil";
		descriptionShort="A heavy iron anvil. Useful for forming metal into shapes.";
		model="Survivalists_Mods\gear\crafting\srp_anvil.p3d";
    physLayer="item_large";
		inventorySlot[]={};
    attachments[]=
    {
      "SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalPlate3",
      "SRP_MetalPlate4",
      "SRP_MetalPlate5",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "SRP_MetalRod3",
      "SRP_MetalRod4",
      "SRP_MetalRod5",
      "Smithing_Leather",
      "Smithing_MetalWire",
      "Smithing_Fabric",
      "Smithing_Rope",
      "Smithing_WoodenLogs",
      "SRP_PreciousStone1",
      "SRP_PreciousStone2",
      "SRP_PreciousStone3",
      "SRP_PreciousStone4",
      "SRP_PreciousStone5",
    };
		heavyItem=1;
    itemBehaviour=0;
		weight=10000;
		itemSize[]={8,8};
    itemsCargoSize[]={0,0};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\crafting\data\srp_anvil_co.paa"};
    class GUIInventoryAttachmentsProps
		{
      class Misc
			{
				name="Misc";
				description="Other ingredients";
				attachmentSlots[]=
				{
          "Smithing_Leather",
					"Smithing_MetalWire",
          "Smithing_Fabric",
          "Smithing_Rope",
          "Smithing_WoodenLogs"
				};
				icon="set:dayz_inventory image:missing";
			};
			class MetalPlates
			{
				name="Metal Plates";
				description="Smithable Metal Plates";
				attachmentSlots[]=
				{
					"SRP_MetalPlate1",
          "SRP_MetalPlate2",
          "SRP_MetalPlate3",
          "SRP_MetalPlate4",
          "SRP_MetalPlate5",
				};
				icon="set:dayz_inventory image:plates";
			};
      class MetalRods
			{
				name="Metal Rods";
				description="Smithable Metal Rods";
				attachmentSlots[]=
				{
					"SRP_MetalRod1",
          "SRP_MetalRod2",
          "SRP_MetalRod3",
          "SRP_MetalRod4",
          "SRP_MetalRod5",
				};
				icon="set:dayz_inventory image:missing";
			};
      class GemStones
			{
				name="Crystals and Gems";
				description="Various rough and refined precious stones.";
				attachmentSlots[]=
				{
					"SRP_PreciousStone1",
          "SRP_PreciousStone2",
          "SRP_PreciousStone3",
          "SRP_PreciousStone4",
          "SRP_PreciousStone5",
				};
				icon="set:dayz_inventory image:missing";
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
            {1.01,{"Survivalists_Mods\gear\crafting\data\srp_anvil.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\crafting\data\srp_anvil.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\crafting\data\srp_anvil.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\crafting\data\srp_anvil.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\crafting\data\srp_anvil.rvmat"}}
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
  class SRP_Anvil_Basic_Kit: SRP_KitBase 
	{
		scope=2;
		displayName="Smithing Anvil - Kit";
		descriptionShort="A kit for placing an anvil";
    projectionTypename="SRP_Anvil_Basic";
	};
  class SRP_Anvil_Basic: SRP_Anvil_ColorBase
  {
    scope=2;
  };
//============================================DRUGS
  class SRP_DrugWorkbench_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Drug Workbench Kit";
		descriptionShort="Blueprints for a mixing tub. Use at your own risk.";
    projectionTypename="SRP_DrugWorkbench";
	};  
};
