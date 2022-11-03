class CfgPatches
{
	class Survivalists_Mods_Gear_Containers
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Container_Base;
  class Inventory_Base;
  class SmallProtectorCase;
  class PlateCarrierPouches;

  class SRP_KitBase;
  
  //-------------------------------------- BASE GAME OVERRIDE
  class FirstAidKit: Container_Base
	{
    itemSize[]={4,4};
		itemsCargoSize[]={4,4};
		inventorySlot[]=
		{
			"firstaidkit"
		};
	};

  class Bear_ColorBase: Container_Base
	{
    inventorySlot[]+=
		{
			"SRP_Teddy1",
			"SRP_Teddy2",
			"SRP_Teddy3",
			"SRP_Teddy4",
			"SRP_Teddy5",
			"SRP_Teddy6",
			"SRP_Teddy7",
		};
  };  

  //--------------------------------------- Custom Stuff  
  class SRP_Fridge_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Fridge Kit";
		descriptionShort="A Fridge Kit. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
	};
  class SRP_Fridge: Container_Base // double door window
	{
		scope=2;
		displayName="Fridge";
		descriptionShort="A fridge. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
		model="Survivalists_Mods\gear\containers\refrigerator.p3d";
    carveNavmesh=1;
		itemBehaviour=2;
    useEntityHierarchy="true";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
  class SRP_FridgeLarge_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Big Fridge Kit";
		descriptionShort="A Big Fridge Kit. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
	};
  class SRP_FridgeLarge: Container_Base // quad window
	{
		scope=2;
		displayName="Big Fridge";
		descriptionShort="A really big fridge. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
		model="Survivalists_Mods\gear\containers\refrigeratorlarge.p3d";
    carveNavmesh=1;
		itemBehaviour=2;
    useEntityHierarchy="true";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
  class SRP_FridgeRetro_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Retro Fridge Kit";
		descriptionShort="A Retro Fridge Kit. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
	};
  class SRP_FridgeRetro: Container_Base // blue with stikey notes
	{
		scope=2;
		displayName="Retro Fridge";
		descriptionShort="A really retro fridge. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
		model="Survivalists_Mods\gear\containers\refrigeratorretro.p3d";
    carveNavmesh=1;
		itemBehaviour=2;
    useEntityHierarchy="true";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
  class SRP_FridgeMinsk_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Minsk Fridge Kit";
		descriptionShort="A Minsk Fridge Kit. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
	};
  class SRP_FridgeMinsk: Container_Base // tall white
	{
		scope=2;
		displayName="Minsk Fridge";
		descriptionShort="A Minsk fridge. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
		model="Survivalists_Mods\gear\containers\refrigeratorminsk.p3d";
    carveNavmesh=1;
		itemBehaviour=2;
    useEntityHierarchy="true";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
    hiddenSelections[]={"zbytek","door"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\refrigeratorminsk_co.paa",
      "Survivalists_Mods\gear\containers\data\refrigeratorminskdoors_co.paa"
    };
		class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_FridgeMinsk_Medical_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Minsk Fridge Kit - Medical";
		descriptionShort="A Minsk Fridge Kit. Branded with medical insignia";
	};
  class SRP_FridgeMinsk_Medical: SRP_FridgeMinsk // tall white
	{
		scope=2;
		displayName="Minsk Fridge - Medical";
		descriptionShort="A Minsk fridge. Branded with medical insignia";
    hiddenSelections[]={"zbytek","door"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\refrigeratorminsk_medical_co.paa",
      "Survivalists_Mods\gear\containers\data\refrigeratorminskdoors_medical_co.paa"
    };
	};

  class SRP_WoodenShelfKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Shelf Kit";
		descriptionShort="A Wooden Shelf Kit - Still needs a bit of work. Combine with other materials to finish.";
    attachments[]=
    {
      "Material_Nails",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      "Material_MetalWire"
    };
	};

  class SRP_WoodenShelfSimple_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Simple Wooden Shelf Kit";
		descriptionShort="A Simple Wooden Shelf Kit";
	};
  class SRP_WoodenShelfSimple: Container_Base
	{
		scope=2;
		displayName="Simple Wooden Shelf";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelfsimplewood.p3d";
		attachments[]=
		{
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Gloves",
			"Hips",
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={4,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Shoulder",
					"Shoulder1",
				};
				icon="shoulderright";
			};
		};
	};
  class SRP_WoodenShelfSimpleGround_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Simple Wooden Shelf Kit - Ground";
		descriptionShort="A Simple Wooden Shelf Kit";
	};
  class SRP_WoodenShelfSimpleGround: Container_Base //new
	{
		scope=2;
		displayName="Simple Wooden Shelf - Ground";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\groundshelfsimplewood.p3d";
		attachments[]=
		{
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Gloves",
			"Hips",
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={6,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Shoulder",
					"Shoulder1",
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_WoodenShelfGround_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Shelf Kit - Ground";
		descriptionShort="A Wooden Shelf Kit";
	};
  class SRP_WoodenShelfGround: Container_Base //new
	{
		scope=2;
		displayName="Wooden Shelf - Ground";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\groundshelfwood.p3d";
		attachments[]=
		{
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Gloves",
			"Hips",
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={6,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Shoulder",
					"Shoulder1",
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_WoodenShelfGroundTall_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Tall Wooden Shelf Kit - Ground";
		descriptionShort="A Tall Wooden Shelf Kit";
	};
  class SRP_WoodenShelfGroundTall: Container_Base //new
	{
		scope=2;
		displayName="Tall Wooden Shelf - Ground";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\groundshelftallwood.p3d";
		attachments[]=
		{
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Gloves",
			"Hips",
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={6,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Shoulder",
					"Shoulder1",
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_MetalShelfKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Metal Shelf Kit";
		descriptionShort="A Metal Shelf Kit - Still needs a bit of work. Combine with other materials to finish.";
    attachments[]=
    {
      "Material_Nails",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      "Material_MetalWire"
    };
	};

  class SRP_MetalShelfSimpleGround_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Simple Metal Shelf Kit - Ground";
		descriptionShort="A Simple Metal Shelf Kit";
	};
  class SRP_MetalShelfSimpleGround: Container_Base //new
	{
		scope=2;
		displayName="Simple Metal Shelf - Ground";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\groundshelfsimplemetal.p3d";
		attachments[]=
		{
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Gloves",
			"Hips",
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={6,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Shoulder",
					"Shoulder1",
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_MetalShelfGround_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Metal Shelf Kit - Ground";
		descriptionShort="A Metal Shelf Kit";
	};
  class SRP_MetalShelfGround: Container_Base //new
	{
		scope=2;
		displayName="Metal Shelf - Ground";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\groundshelfmetal.p3d";
		attachments[]=
		{
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Gloves",
			"Hips",
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={6,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Shoulder",
					"Shoulder1",
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_MetalShelfGroundLarge_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Large Metal Shelf Kit - Ground";
		descriptionShort="A Large Metal Shelf Kit";
	};
  class SRP_MetalShelfGroundLarge: Container_Base //new
	{
		scope=2;
		displayName="Large Metal Shelf - Ground";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\groundshelfmetallarge.p3d";
		attachments[]=
		{
			"Melee",
			"Feet",
			"Gloves",
			"Eyewear",
			"Headgear",
			"Pistol"
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={6,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Display
			{
				name="Display";
				description="";
				attachmentSlots[]=
				{
					"Melee",
					"Feet",
					"Gloves",
					"Eyewear",
					"Headgear",
					"Pistol"
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_MetalShelfGroundXL_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Extra Large Metal Shelf Kit - Ground";
		descriptionShort="A Extra Large Metal Shelf Kit. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
	};
  class SRP_MetalShelfGroundXL: Container_Base //new
	{
		scope=2;
		displayName="Large Metal Shelf - Ground";
		descriptionShort="A Convenient shelf where you can put your junk. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
		model="Survivalists_Mods\gear\containers\groundshelfmetalxlarge.p3d";
		attachments[]=
		{
			"Melee",
			"Feet",
			"Gloves",
			"Eyewear",
			"Headgear",
			"Pistol"
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
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
			class Display
			{
				name="Display";
				description="";
				attachmentSlots[]=
				{
					"Melee",
					"Feet",
					"Gloves",
					"Eyewear",
					"Headgear",
					"Pistol"
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_BookCaseCube_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Cubed Book Case Kit";
		descriptionShort="A cubed book case kit. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
	};
  class SRP_BookCaseCube: Container_Base //new
	{
		scope=2;
		displayName="Book Case - Cubed";
		descriptionShort="An easy to build cube book case. (OOC DEV NOTE: Reducing Storage to 40 slots.)";
		model="Survivalists_Mods\gear\containers\srp_bookcasecube.p3d";
		attachments[]=
		{
			"Melee",
			"Feet",
			"Gloves",
			"Eyewear",
			"Headgear",
			"Pistol",
      "SRP_Teddy1",
			"SRP_Teddy2",
			"SRP_Teddy3",
			"SRP_Teddy4",
			"SRP_Book1",
			"SRP_Book2",
			"SRP_Book3",
			"SRP_Book4",
			"SRP_Book5",
			"SRP_Book6",
			"SRP_Book7",
			"SRP_Book8",
			"SRP_Book9",
			"SRP_Book10",      
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
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
			class Display
			{
				name="Display";
				description="";
				attachmentSlots[]=
				{
					"Melee",
					"Feet",
					"Gloves",
					"Eyewear",
					"Headgear",
					"Pistol"
				};
				icon="shoulderright";
			};
      class Teddy
			{
				name="Teddy";
				description="";
				attachmentSlots[]=
				{
          "SRP_Teddy1",
          "SRP_Teddy2",
          "SRP_Teddy3",
          "SRP_Teddy4",
				};
				icon="";
			};
      class Books
			{
				name="Books";
				description="";
				attachmentSlots[]=
				{
          "SRP_Book1",
          "SRP_Book2",
          "SRP_Book3",
          "SRP_Book4",
          "SRP_Book5",
          "SRP_Book6",
          "SRP_Book7",
          "SRP_Book8",
          "SRP_Book9",
          "SRP_Book10",
				};
				icon="set:dayz_inventory image:book";
			};
		};
	};

  class SRP_GarbageBin_ColorBase: Container_Base //new
	{
		scope=0;
		displayName="Garbage Bin - Base";
		descriptionShort="A large garbage bin to throw things away. Espen technologies breakthoughs allows this container to be clean every 10 minutes.";
		model="Survivalists_Mods\gear\containers\srp_garbagebin.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_garbagebin_co.paa"
    };
	};

  class SRP_GarbageBin_Waste: SRP_GarbageBin_ColorBase //new
	{
		scope=2;
		displayName="Garbage Bin - Waste";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_garbagebin_co.paa"
    };
	};
  class SRP_GarbageBin_Recycling: SRP_GarbageBin_ColorBase //new
	{
		scope=2;
		displayName="Garbage Bin - Recycling";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_garbagebin_recycle_co.paa"
    };
	};
  class SRP_GarbageBin_Compost: SRP_GarbageBin_ColorBase //new
	{
		scope=2;
		displayName="Garbage Bin - Compost";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_garbagebin_compost_co.paa"
    };
	};

  class SRP_GuitarCase_ColorBase: Container_Base //new
	{
		scope=0;
		displayName="Guitar Case - Base";
		descriptionShort="A guitar case. Can hold a wide variety of things.";
		model="Survivalists_Mods\gear\containers\srp_guitarcase.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={4,8};
    itemsCargoSize[]={3,3};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_guitarcase_co.paa"
    };
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_GuitarCase_Blue_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Guitar Case Kit - Blue";
		descriptionShort="A kit for placing a guitar case.";
	};

  class SRP_GuitarCase_Blue: SRP_GuitarCase_ColorBase //new
	{
		scope=2;
		displayName="Guitar Case - Blue";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_guitarcase_co.paa"
    };
	};

  class SRP_TetrisShelfKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Tetris Shelf Kit";
		descriptionShort="A Tetris Shelf Kit - Still needs a bit of work. Combine with other materials to finish.";
    attachments[]=
    {
      "Material_Nails",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      "Material_MetalWire"
    };
	};

  class SRP_TetrisShelfLDown: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf - L Shape Down";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisL_down.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfLUp: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf - L Shape Up";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisL_up.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfLLeft: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf - L Shape Left";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisL_left.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfLRight: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf - L Shape Right";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisL_right.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};

  class SRP_TetrisShelfIVertical: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf - I Shape Vertical";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisI_vertical.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfIHorizontal: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf Kit - I Shape Horizontal";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisI_horizontal.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfTUp: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf - T Shape Up";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisT_up.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfTDown: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf - T Shape Down";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisT_down.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfTVertical: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf Kit - T Shape Vertical";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisT_vertical.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfSHorizontal: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf - S Shape Horizontal";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisS_horizontal.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfSVertical: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf Kit - S Shape Vertical";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisS_vertical.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};
  class SRP_TetrisShelfBox: Container_Base //new
	{
		scope=2;
		displayName="Tetris Shelf Kit - Box Shape";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\wallshelftetrisbox.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};

  class SRP_GiftBoxSmall: Container_Base //new
	{
		scope=2;
		displayName="Gift Box - Small";
		descriptionShort="A box with a gift inside";
		model="Survivalists_Mods\gear\containers\giftboxsmall.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={2,3};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};

  class SRP_GiftBoxMedium: Container_Base //new
	{
		scope=2;
		displayName="Gift Box - Medium";
		descriptionShort="A box with a gift inside";
		model="Survivalists_Mods\gear\containers\giftboxmedium.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={3,4};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};

  class SRP_GiftBoxLarge: Container_Base //new
	{
		scope=2;
		displayName="Gift Box - Large";
		descriptionShort="A box with a gift inside";
		model="Survivalists_Mods\gear\containers\giftboxlarge.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={4,4};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};

  class SRP_GiftBoxLetter: Container_Base //new
	{
		scope=2;
		displayName="Gift Box - Letter";
		descriptionShort="A box with a gift inside";
		model="Survivalists_Mods\gear\containers\giftboxletter.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={2,2};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
	};

  class SRP_GunShelfWall_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Gun Shelf Wall Kit";
		descriptionShort="A Gun Shelf Wall Kit";
	};

	class SRP_GunShelfWall: Container_Base // BP_GunShelf
	{
		scope=2;
		displayName="Wall Gun Shelf";
		descriptionShort="A shelf for displaying guns.";
		model="Survivalists_Mods\gear\containers\weaponrackwooden.p3d";
		attachments[]=
		{
			"Back",
			"no",
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5"
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={3,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Shoulder",
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5"
				};
				icon="shoulderright";
			};
			class Accessories
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Back",
					"Pistol",
					"no"
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_GunShelfGround_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Gun Shelf Ground Kit";
		descriptionShort="A Gun Shelf Ground Kit";
	};

	class SRP_GunShelfGround: Container_Base // new
	{
		scope=2;
		displayName="Ground Gun Shelf";
		descriptionShort="A shelf for displaying guns. Stands on the ground.";
		model="Survivalists_Mods\gear\containers\weaponrackwoodenground.p3d";
		attachments[]=
		{
			"Back",
			"no",
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Shoulder2"
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={3,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Shoulder",
					"Shoulder1",
					"Shoulder2"
				};
				icon="shoulderright";
			};
		};
	};

  class SRP_MilitaryCaseSmall_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Military Case Kit";
		descriptionShort="A Military Case Kit";
		model="Survivalists_Mods\gear\containers\militarycasesmall.p3d";
	};
  class SRP_MilitaryCaseSmall: Container_Base // BP_mil_case
	{
		scope=2;
		displayName="Military Gun Case";
		descriptionShort="A case for storing guns";
		model="Survivalists_Mods\gear\containers\militarycasesmall.p3d";
		attachments[]=
		{
			"Shoulder1",
			"Shoulder2"
		};
		weight=2000;
		itemSize[]={11,3};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
		class Cargo
		{
			itemsCargoSize[]={8,6};
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="Guns";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2"
				};
				icon="shoulderright";
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
            {1.01,{"Survivalists_Mods\gear\containers\data\militarycasesmall.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\militarycasesmall.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\militarycasesmall_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\militarycasesmall_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\militarycasesmall_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MilitaryCaseSmallBlack_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Small Military Case Kit";
		descriptionShort="A Military Case Kit";
		model="Survivalists_Mods\gear\containers\militarycasesmallblack.p3d";
	};
  class SRP_MilitaryCaseSmallBlack: Container_Base // new
	{
		scope=2;
		displayName="Military Gun Case";
		descriptionShort="A case for storing guns";
		model="Survivalists_Mods\gear\containers\militarycasesmallblack.p3d";
		attachments[]=
		{
			"Shoulder1"
		};
		weight=2000;
		itemSize[]={11,3};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
		class Cargo
		{
			itemsCargoSize[]={8,6};
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="Guns";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2"
				};
				icon="shoulderright";
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
            {1.01,{"Survivalists_Mods\gear\containers\data\militarycasesmallblack.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\militarycasesmallblack.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\militarycasesmallblack_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\militarycasesmallblack_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\militarycasesmallblack_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MilitaryCaseMedium_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Medium Military Case Kit";
		descriptionShort="A Military Case Kit";
		model="Survivalists_Mods\gear\containers\militarycasemedium.p3d";
	};
  class SRP_MilitaryCaseMedium: Container_Base // new
	{
		scope=2;
		displayName="Military Gun Case";
		descriptionShort="A case for storing guns";
		model="Survivalists_Mods\gear\containers\militarycasemedium.p3d";
		attachments[]=
		{
			"Shoulder1",
      "Shoulder2"
		};
		weight=2000;
		itemSize[]={11,3};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
		class Cargo
		{
			itemsCargoSize[]={8,8};
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="Guns";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2"
				};
				icon="shoulderright";
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
            {1.01,{"Survivalists_Mods\gear\containers\data\militarycasemedium.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\militarycasemedium.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\militarycasemedium_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\militarycasemedium_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\militarycasemedium_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MilitaryCaseLong_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Long Military Case Kit";
		descriptionShort="A Military Case Kit";
		model="Survivalists_Mods\gear\containers\militarycaselong.p3d";
	};
  class SRP_MilitaryCaseLong: Container_Base // new
	{
		scope=2;
		displayName="Long Military Gun Case";
		descriptionShort="A case for storing guns. Very long.";
		model="Survivalists_Mods\gear\containers\militarycaselong.p3d";
		attachments[]=
		{
			"Shoulder1",
      "Shoulder2"
		};
		weight=2000;
		itemSize[]={11,3};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
		class Cargo
		{
			itemsCargoSize[]={8,8};
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="Guns";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2"
				};
				icon="shoulderright";
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
            {1.01,{"Survivalists_Mods\gear\containers\data\millitarycaselong.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\millitarycaselong.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\millitarycaselong_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\millitarycaselong_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\millitarycaselong_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MilitaryCaseLongBlue_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Long Military Case Kit - Blue";
		descriptionShort="A Military Case Kit";
		model="Survivalists_Mods\gear\containers\militarycaselong.p3d";
	};
  class SRP_MilitaryCaseLongBlue: Container_Base // new
	{
		scope=2;
		displayName="Military Gun Case - Blue";
		descriptionShort="A case for storing guns";
		model="Survivalists_Mods\gear\containers\militarycaselong.p3d";
		attachments[]=
		{
			"Shoulder1",
      "Shoulder2"
		};
		weight=2000;
		itemSize[]={11,3};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\millitarycaselongblue_co.paa"
    };
		class Cargo
		{
			itemsCargoSize[]={8,8};
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="Guns";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2"
				};
				icon="shoulderright";
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
            {1.01,{"Survivalists_Mods\gear\containers\data\millitarycaselong.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\millitarycaselong.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\millitarycaselong_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\millitarycaselong_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\millitarycaselong_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MilitaryCaseLongTan_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Long Military Case Kit - Tan";
		descriptionShort="A Military Case Kit";
		model="Survivalists_Mods\gear\containers\militarycaselong.p3d";
	};
  class SRP_MilitaryCaseLongTan: Container_Base // new
	{
		scope=2;
		displayName="Military Gun Case - Tan";
		descriptionShort="A case for storing guns";
		model="Survivalists_Mods\gear\containers\militarycaselong.p3d";
		attachments[]=
		{
			"Shoulder1",
      "Shoulder2"
		};
		weight=2000;
		itemSize[]={11,3};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\millitarycaselongcamo_co.paa"
    };
		class Cargo
		{
			itemsCargoSize[]={8,8};
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="Guns";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2"
				};
				icon="shoulderright";
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
            {1.01,{"Survivalists_Mods\gear\containers\data\millitarycaselong.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\millitarycaselong.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\millitarycaselong_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\millitarycaselong_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\millitarycaselong_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MilitaryCaseLarge_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Large Military Case Kit";
		descriptionShort="A Military Case Kit";
		model="Survivalists_Mods\gear\containers\militarycaselarge.p3d";
	};
  class SRP_MilitaryCaseLarge: Container_Base // new
	{
		scope=2;
		displayName="Large Military Gun Case";
		descriptionShort="A case for storing guns";
		model="Survivalists_Mods\gear\containers\militarycaselarge.p3d";
		attachments[]=
		{
			"Shoulder1",
      "Shoulder2"
		};
		weight=2000;
		itemSize[]={15,10};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
		class Cargo
		{
			itemsCargoSize[]={10,10};
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="Guns";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2"
				};
				icon="shoulderright";
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
            {1.01,{"Survivalists_Mods\gear\containers\data\militarycaselarge.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\militarycaselarge.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\militarycaselarge_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\militarycaselarge_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\militarycaselarge_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_WoodenFurnitureKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Furniture Kit";
		descriptionShort="A Wooden Furniture Kit - Still needs a bit of work. Combine with other materials to finish.";
    attachments[]=
    {
      "Material_Nails",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      "Material_MetalWire"
    };
	};

  class SRP_MetalBox_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Metal Box Kit";
		descriptionShort="A Metal Box Kit";
	};
  class SRP_MetalBox: Container_Base // new
	{
		scope=2;
		displayName="Metal Box";
		descriptionShort="A metal box.";
		model="Survivalists_Mods\gear\containers\srp_metalbox.p3d";
		weight=2000;
		itemSize[]={15,10};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
		class Cargo
		{
			itemsCargoSize[]={8,8};
			allowOwnedCargoManipulation=1;
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
            {1.01,{"Survivalists_Mods\gear\containers\data\srp_metalbox.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\srp_metalbox.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\srp_metalbox_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\srp_metalbox_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\srp_metalbox_destruct.rvmat"}}
					};
				};
			};
		};
	};
  
  class SRP_Cardboardbox_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Cardboard Box Kit";
		descriptionShort="A Cardboard Box Kit";
    model="Survivalists_Mods\gear\containers\srp_cardboardbox_kit.p3d";
	};

  class SRP_Cardboardbox: Container_Base // new
	{
		scope=2;
		displayName="Cardboard Box";
		descriptionShort="A paper box";
		model="Survivalists_Mods\gear\containers\srp_cardboardbox.p3d";
		weight=2000;
		itemSize[]={5,5};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			allowOwnedCargoManipulation=1;
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
            {1.01,{"Survivalists_Mods\gear\containers\data\srp_cardboardbox.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\srp_cardboardbox.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\srp_cardboardbox_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\srp_cardboardbox_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\srp_cardboardbox_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_BedsideTable_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Bedside Table Kit";
		descriptionShort="A Bedside Table Kit";
	};

  class SRP_BedsideTable: Container_Base  // BP_tumba
	{
		scope=2;
		displayName="Bedside Table";
		descriptionShort="Convenient and roomy cabinet. Almost not stained with blood.";
		model="Survivalists_Mods\gear\containers\bedsidetable.p3d";
		attachments[]=
		{
			"Vest",
			"Back",
			"Headgear",
			"Legs",
			"Body",
			"no",
			"Pistol",
			"Shoulder",
			"Gloves",
			"Feet",
			"Hips",
			"tripWireAttachment",
			"SRP_Lantern"
		};
		carveNavmesh=1;
		canBeDigged=0;
		weight=1000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		hiddenSelections[]=
		{
			"stand" // will need to define in model.cfg if you want this to be actually retextureable (prevents other from blatently retexturing our assets)
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\bedsidetable_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\containers\data\bedsidetable.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={4,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="belongings";
				description="";
				attachmentSlots[]=
				{
					"Back",
					"Body",
					"Legs",
					"no",
					"Pistol",
					"Shoulder"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Accessories
			{
				name="Other";
				description="";
				attachmentSlots[]=
				{
					"Feet",
					"Headgear",
					"Vest",
					"Gloves",
					"Hips",
          "SRP_Lantern"
				};
				icon="body";
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

  class BrewingTable: Inventory_Base
	{
		scope=2;
		displayName="Brewing Table";
		descriptionShort="A table meant to hold brewing materials";
		model="DZ\structures\furniture\various\table_dz.p3d";
    inventorySlot[]={"BrewingBarrelTable"};		
    attachments[]={};
		carveNavmesh=1;
		canBeDigged=0;
		weight=1000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,{"dz\data\data\default.rvmat"}},
						{0.69999999,{"dz\data\data\default.rvmat"}},
						{0.5,{"dz\data\data\default.rvmat"}},
						{0.30000001,{"dz\data\data\default.rvmat"}},
						{0,{"dz\data\data\default.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_BedsideTableMetal_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Bedside Table Kit";
		descriptionShort="A Metal Bedside Table Kit";
	};

  class SRP_BedsideTableMetal: Container_Base  // new
	{
		scope=2;
		displayName="Metal Bedside Table";
		descriptionShort="Convenient and roomy cabinet. Almost not stained with blood.";
		model="Survivalists_Mods\gear\containers\bedsidetablemetal.p3d";
		attachments[]=
		{
			"Vest",
			"Back",
			"Headgear",
			"Legs",
			"Body",
			"no",
			"Pistol",
			"Shoulder",
			"Gloves",
			"Feet",
			"Hips",
			"tripWireAttachment",
			"SRP_Lantern"
		};
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=1000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		hiddenSelections[]=
		{
			"stand"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\bedsidetablemetal_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\containers\data\bedsidetablemetal.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={2,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="belongings";
				description="";
				attachmentSlots[]=
				{
					"Back",
					"Body",
					"Legs",
					"no",
					"Pistol",
					"Shoulder"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Accessories
			{
				name="Other";
				description="";
				attachmentSlots[]=
				{
					"Feet",
					"Headgear",
					"Vest",
					"Gloves",
					"Hips",
          "SRP_Lantern"
				};
				icon="body";
			};
		};
		class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
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

  class SRP_Notebook_Base: SmallProtectorCase
	{
		scope=0; // dont spawn this in
    displayName="Base class do not spawn in";
    descriptionShort="Base class do not spawn in";
		model="DZ\gear\books\Book_kniga.p3d";
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\books\data\book_kniga_co.paa"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		attachments[]=
		{
			"Pen_slot"
		};
		inventorySlot[]=
		{
			"Book_slot",
			"OpenBook",
			"Book1",
			"Book2",
			"Book3",
			"Book4",
			"Book5",
			"Book6",
			"Book7",
			"Book8",
			"Book9",
			"Book10",
			"Book11",
			"Book12",
			"Book13",
			"Book14",
			"Book15",
			"Book16",
			"Book17",
			"Book18",
			"Book19",
			"Book20",
			"Book21",
			"Book22",
			"Book23",
			"Book24",
			"Book25",
			"Book26",
			"Book27",
			"Book28",
			"Book29",
			"Book30",
			"Book31",
			"Book32",
			"Book33",
			"Book34",
			"Book35",
			"Book36",
			"Book37",
			"Book38",
			"Book39",
			"Book40",
			"Book41",
			"Book42",
			"Book43",
			"Book44",
			"Book45",
			"Book46",
			"Book47",
			"Book48",
			"Book49",
			"Book50"
		};
		rotationFlags=1;
		weight=140;
		itemSize[]={2,2};
		itemsCargoSize[]={10,4};
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		isMeleeWeapon=1;
	};

	class SRP_Notebook: SRP_Notebook_Base
	{
		scope=2;
		displayName="Notebook";
		descriptionShort="A notebook that can be used to carry paper, notes and a pen";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_notepad_co.paa"
		};
		class GUIInventoryAttachmentsProps
		{
			class Pen_slot
			{
				name="Pen_slot";
				attachmentSlots[]=
				{
					"Pen_slot"
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{1.01,{"DZ\gear\books\Data\book.rvmat"}},
            {0.69999999,{"DZ\gear\books\Data\book.rvmat"}},
            {0.5,{"DZ\gear\books\Data\book_damage.rvmat"}},
            {0.30000001,{"DZ\gear\books\Data\book_damage.rvmat"}},
            {0.1,{"DZ\gear\books\Data\book_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_SmallProtectorCase_Nails: SmallProtectorCase
	{
		scope=2;
    displayName="Protected Nail Box";
    descriptionShort="This protected case is meant to hold a good amount of nails.";
		itemSize[]={4,4};
		itemsCargoSize[]={10,5};
	};
  class SRP_SmallProtectorCase_Syringe: SmallProtectorCase
	{
		scope=2;
    displayName="Protected Syringe Box";
    descriptionShort="This protected case is meant to hold several syringes safely.";
		itemSize[]={4,4};
		itemsCargoSize[]={4,4};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\loot_protectorcase_syringe_co.paa"
		};
	};
  class SRP_SmallProtectorCase_FlareBox: SmallProtectorCase
	{
		scope=2;
    displayName="Protected Flare Box";
    descriptionShort="This protected case is meant to hold several flares safely.";
		itemSize[]={4,4};
		itemsCargoSize[]={2,2};
    attachments[]=
		{
   		"SRP_GunDerringer"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\loot_protectorcase_flaregun_co.paa"
		};
	};

  class SRP_LeatherPouch_Default: PlateCarrierPouches  // new
	{
		scope=2;
    displayName="Leather Pouch";
    descriptionShort="A leather pouch that holds items.";
		model="Survivalists_Mods\gear\containers\leatherpouch.p3d";
		rotationFlags=16;
    inventorySlot[]={};
    attachments[]=
    {
      "SRP_CoinPlatinum",
      "SRP_CoinIron",
      "SRP_CoinGold",
      "SRP_CoinBronze",
      "SRP_CoinCopper"
    };
    itemSize[]={3,3};
		itemsCargoSize[]={3,3};
    repairableWithKits[]={5,2};
		repairCosts[]={30,25};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\leatherpouch_co.paa",
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\containers\data\leatherpouch.rvmat",
    };
	};

  class SRP_LeatherPouch_Medieval: PlateCarrierPouches  // new
	{
		scope=2;
    displayName="Medieval Leather Pouch";
    descriptionShort="A medieval leather pouch that holds items.";
		model="Survivalists_Mods\gear\containers\leatherpouchmedieval.p3d";
    rotationFlags=16;
    inventorySlot[]={};
    attachments[]=
    {
      "SRP_CoinPlatinum",
      "SRP_CoinIron",
      "SRP_CoinGold",
      "SRP_CoinBronze",
      "SRP_CoinCopper"
    };
    itemSize[]={4,4};
		itemsCargoSize[]={4,4};
    repairableWithKits[]={5,2};
		repairCosts[]={30,25};
    hiddenSelections[]=
		{
			"pouch",
      "strap"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\leatherpouchmedieval_pouch_co.paa",
			"Survivalists_Mods\gear\containers\data\leatherpouchmedieval_strap_co.paa",
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\containers\data\leatherpouchmedieval_pouch.rvmat",
			"Survivalists_Mods\gear\containers\data\leatherpouchmedieval_strap.rvmat",
    };
	};

  class SRP_LeatherPouch_Small: PlateCarrierPouches  // new
	{
		scope=2;
    displayName="Small Leather Pouch";
    descriptionShort="A small leather pouch that holds items.";
		model="Survivalists_Mods\gear\containers\leatherpouchsmall.p3d";
    inventorySlot[]={};
    attachments[]=
    {
      "SRP_CoinPlatinum",
      "SRP_CoinIron",
      "SRP_CoinGold",
      "SRP_CoinBronze",
      "SRP_CoinCopper"
    };
    itemSize[]={3,3};
		itemsCargoSize[]={3,3};
    repairableWithKits[]={5,2};
		repairCosts[]={30,25};
    rotationFlags=64;
		allowOwnedCargoManipulation=1;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\leatherpouchsmall_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\containers\data\leatherpouchsmall.rvmat"
    };
	};

  class SRP_ArmorStandBasic_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Basic Armor Stand Kit";
		descriptionShort="A Basic Armor Stand Kit";
	};

  class SRP_ArmorStandBasic: Container_Base  // new
	{
		scope=2;
		displayName="Basic Armor Stand";
		descriptionShort="A makeshift stand to hold your gear";
		model="Survivalists_Mods\gear\containers\srp_armorrackbasic.p3d";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		heavyItem=1;
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		allowOwnedCargoManipulation=1;
		clothingType="male";
		attachments[]=
		{
			"Head",
			"Shoulder",
			"Melee",
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet"
		};
		hiddenSelections[]=
		{
			"stand"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_armorrackbasic_co.paa"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\containers\data\srp_armorrackbasic.rvmat"}},
            {0.699,{"Survivalists_Mods\gear\containers\data\srp_armorrackbasic.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\srp_armorrackbasic_damage.rvmat"}},
            {0.301,{"Survivalists_Mods\gear\containers\data\srp_armorrackbasic_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\containers\data\srp_armorrackbasic_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
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

  class SRP_MetalBarrel_Colorbase: Container_Base  // plan for vanilla replacement
	{
		scope=2;
		displayName="Metal Barrel";
		descriptionShort="A metal barrel used to store various things.";
		model="\dz\gear\cooking\barrel_holes.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=1000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
    color="base";
		hiddenSelections[]=
		{
			"ashes",
			"camoGround",
			"inventory"
		};
    hiddenSelectionsTextures[]=
		{
			"\dz\gear\cooking\data\stoneground_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_worn_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_worn_co.paa",
		};
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
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
    class AnimationSources
		{
      class LidOn
			{
				source="user";
				initPhase=0;
			};
      class LidOff
			{
				source="user";
				initPhase=1;
			};
		};
	};

  class SRP_MetalBarrelKit_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit";
		descriptionShort="A Metal Barrel Kit";
    attachments[]=
    {
      "Material_Nails",
      "Material_MetalSheets",
      "Material_MetalWire"
    };
	};

  class SRP_MetalBarrel_Old_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Worn";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Old: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="old";
    hiddenSelectionsTextures[]=
		{
			"\dz\gear\cooking\data\stoneground_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_worn_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_worn_co.paa",
		};
  };

  class SRP_MetalBarrel_Blue_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Ammo";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Blue: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="blue";
    descriptionShort="OOC Dev Note: Will only store ammo in the comming updates.";
    hiddenSelectionsTextures[]=
		{
      "\dz\gear\cooking\data\stoneground_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_ammo_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_ammo_co.paa",
		};
  };

  class SRP_MetalBarrel_Red_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Medical";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Red: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="red";
    descriptionShort="OOC Dev Note: Will only store medical items in the comming updates.";
    hiddenSelectionsTextures[]=
		{
      "\dz\gear\cooking\data\stoneground_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_medical_co.paa",
      "Survivalists_Mods\gear\containers\data\barrel_holes_medical_co.paa",
		};
  };

  class SRP_MetalBarrel_Yellow_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Biohazard";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Yellow: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="yellow";
    descriptionShort="OOC Dev Note: Will only store irradiated items in the comming updates.";
    hiddenSelectionsTextures[]=
		{
      "\dz\gear\cooking\data\stoneground_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_biohazard_co.paa",
      "Survivalists_Mods\gear\containers\data\barrel_holes_biohazard_co.paa",
		};
  };

  class SRP_MetalBarrel_Concrete_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Concrete";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Concrete: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="concrete";
    displayName="Metal Barrel - Concrete Mixer";
		descriptionShort="Used to mix concrete and mortar";
    stackedUnit="ml";
		varLiquidTypeInit=512;
    itemsCargoSize[]={5,4};
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=5000;
    destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
    hiddenSelectionsTextures[]=
		{
			"\dz\gear\cooking\data\stoneground_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_concrete_co.paa",
			"Survivalists_Mods\gear\containers\data\barrel_holes_concrete_co.paa",
		};
  };

  class SRP_CassetteBinder: SmallProtectorCase
  {
		scope=2;
		displayName="Cassette Binder";
		descriptionShort="Holds various cassettes";
		model="Survivalists_Mods\gear\containers\srp_binder.p3d";
		weight=980;
		itemSize[]={3,4};
		itemsCargoSize[]={0,0};
		canBeDigged=0;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=1;
    attachments[]=
		{
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4",
			"Cassette5",
			"Cassette6",
			"Cassette7",
			"Cassette8",
			"Cassette9",
			"Cassette10",
			"Cassette11",
			"Cassette12",
			"Cassette13",
			"Cassette14",
			"Cassette15",
			"Cassette16",
			"Cassette17",
			"Cassette18",
			"Cassette19",
			"Cassette20",
			"Cassette21",
			"Cassette22",
			"Cassette23",
			"Cassette24",
			"Cassette25",
			"Cassette26"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_binder_co.paa"
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
						{1.0,	{	"Survivalists_Mods\gear\containers\data\srp_binder.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\containers\data\srp_binder.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\containers\data\srp_binder_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\containers\data\srp_binder_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\containers\data\srp_binder_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
  };

  class SRP_CassetteBinder_Kuru: SRP_CassetteBinder
  {
		scope=2;
		displayName="Kuru Cassette Binder";
		descriptionShort="Holds kuru study cassettes";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_binder_kuru_co.paa"
		};

  };

  class SRP_StonePile_Small_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Stone Pile Kit - Small";
		descriptionShort="A small stone pile Kit";
	};

  class SRP_StonePile_Small: Container_Base  // new
	{
		scope=2;
		displayName="Stone Pile - Small";
		descriptionShort="A small pile of stones.";
		model="Survivalists_Mods\gear\containers\srp_rockstorage.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		attachments[]=
		{
			"Stones",
			// "Material_FPole_Stones"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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

  class SRP_StonePile_Large_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Stone Pile Kit - Large";
		descriptionShort="A large stone pile Kit";
	};

  class SRP_StonePile_Large: Container_Base  // new
	{
		scope=2;
		displayName="Stone Pile - Large";
		descriptionShort="A large pile of stones.";
		model="Survivalists_Mods\gear\containers\srp_rockstorage_large.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		attachments[]=
		{
			"Material_FPole_Stones"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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


  class SRP_HoneyCombStand_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Honey Comb Display Kit - Metal";
		descriptionShort="A metal honey comb display kit";
	};

  class SRP_HoneyCombStand: Container_Base  // new
	{
		scope=2;
		displayName="Honey Comb Display - Metal";
		descriptionShort="A display stand";
		model="Survivalists_Mods\gear\containers\srp_honeycomb.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
    allowOwnedCargoManipulation="true";
		attachments[]=
		{
			"SRP_Teddy1",
			"SRP_Teddy2",
			"SRP_Teddy3",
			"SRP_Teddy4",
			"SRP_Teddy5",
			"SRP_Teddy6",
			"SRP_Teddy7",
		};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_honeycomb_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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

  class SRP_GlassDisplayCase_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Glass Display Kit - Wooden";
		descriptionShort="A wooden glass display kit";
	};

  class SRP_GlassDisplayCase: Container_Base 
	{
		scope=2;
		displayName="Glass Display - Wooden";
		descriptionShort="A display stand";
		model="Survivalists_Mods\gear\containers\srp_displaycase.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
    allowOwnedCargoManipulation="true";
    attachments[]=
    {
      "SRP_DisplayHook1",
      "SRP_DisplayHook2",
      "SRP_DisplayHook3",
      "SRP_DisplayHook4",
      "SRP_DisplayHook5",
      "SRP_DisplayHook6",
      "SRP_DisplayHook7",
      "SRP_DisplayHook8",
      "SRP_DisplayHook9",
      "SRP_DisplayHook10",
      "SRP_DisplayHook11",
      "SRP_DisplayHook12",
      "SRP_DisplayHook13",
      "SRP_DisplayHook14",
      "SRP_DisplayHook15",
      "SRP_DisplayHook16",
      "SRP_DisplayHook17",
      "SRP_DisplayHook18",
      "SRP_DisplayHook19",
      "SRP_DisplayHook20",
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_displaycase_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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
  class SRP_GlassDisplayCase_Hook: Inventory_Base
	{
		scope=0;
		displayName="Glass Display Hook - Base";
		descriptionShort="A hook meant for a display case.";
		model="Survivalists_Mods\gear\containers\srp_displaycase_hook.p3d";
		weight=10000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
    clothingType="male";
    allowOwnedCargoManipulation="true";
    inventorySlot[]=
    {
      "SRP_DisplayHook1",
      "SRP_DisplayHook2",
      "SRP_DisplayHook3",
      "SRP_DisplayHook4",
      "SRP_DisplayHook5",
      "SRP_DisplayHook6",
      "SRP_DisplayHook7",
      "SRP_DisplayHook8",
      "SRP_DisplayHook9",
      "SRP_DisplayHook10",
      "SRP_DisplayHook11",
      "SRP_DisplayHook12",
      "SRP_DisplayHook13",
      "SRP_DisplayHook14",
      "SRP_DisplayHook15",
      "SRP_DisplayHook16",
      "SRP_DisplayHook17",
      "SRP_DisplayHook18",
      "SRP_DisplayHook19",
      "SRP_DisplayHook20",
    };
    attachments[]=
    {
      "Armband"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
				};
			};
		};
	};
  class SRP_GlassDisplayCase_Hook_Armband: SRP_GlassDisplayCase_Hook
	{
    scope=2;
		displayName="Glass Display Hook - Armband";
		descriptionShort="A hook that holds a single armband. Meant for a display case.";
    model="Survivalists_Mods\gear\containers\srp_displaycase_hook_armband.p3d";
  };
  class SRP_GlassDisplayCase_Hook_ArmbandDouble: SRP_GlassDisplayCase_Hook
	{
    scope=2;
		displayName="Glass Display Hook - Double Armband";
		descriptionShort="A hook that holds a single armband. Meant for a display case.";
    model="Survivalists_Mods\gear\containers\srp_displaycase_hook_doublearmband.p3d";
  };
  class SRP_GlassDisplayCase_Hook_ArmbandLeather: SRP_GlassDisplayCase_Hook
	{
    scope=2;
		displayName="Glass Display Hook - Leather Armband";
		descriptionShort="A hook that holds a leather armband. Meant for a display case.";
    model="Survivalists_Mods\gear\containers\srp_displaycase_hook_leatherarmband.p3d";
  };
  class SRP_GlassDisplayCase_Hook_ArmbandPatch: SRP_GlassDisplayCase_Hook
	{
    scope=2;
		displayName="Glass Display Hook - Patch Armband";
		descriptionShort="A hook that holds a patch armband. Meant for a display case.";
    model="Survivalists_Mods\gear\containers\srp_displaycase_hook_patcharmband.p3d";
  };

  class SRP_WoodenDisplayKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Display Kit";
		descriptionShort="A Wooden Display Kit - Still needs a bit of work. Combine with other materials to finish.";
    attachments[]=
    {
      "Material_Nails",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      "Material_MetalWire"
    };
	};

  class SRP_CoatRack_Basic_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Coat Rack Kit - Basic";
		descriptionShort="A coat rack kit that is used to display armbands.";
	};
  class SRP_CoatRack_Basic: Container_Base 
	{
		scope=2;
		displayName="Coat Rack - Basic";
		descriptionShort="A display stand";
		model="Survivalists_Mods\gear\containers\srp_coatrackbasic.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
    allowOwnedCargoManipulation="true";
    attachments[]=
    {
      "SRP_DisplayHook1",
      "SRP_DisplayHook2",
      "SRP_DisplayHook3",
      "SRP_DisplayHook4",
      "SRP_DisplayHook5",
      "SRP_DisplayHook6",
      "SRP_DisplayHook7",
      "SRP_DisplayHook8",
      "SRP_DisplayHook9",
      "SRP_DisplayHook10",
      "SRP_DisplayHook11",
      "SRP_DisplayHook12",
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_coatrackbasic_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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

  class SRP_CoatRack_Fancy_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Coat Rack Kit - Fancy";
		descriptionShort="A coat rack kit that is used to display armbands.";
	};
  class SRP_CoatRack_Fancy: Container_Base 
	{
		scope=2;
		displayName="Coat Rack - Fancy";
		descriptionShort="A display stand";
		model="Survivalists_Mods\gear\containers\srp_coatrackfancy.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
    allowOwnedCargoManipulation="true";
    attachments[]=
    {
      "SRP_DisplayHook1",
      "SRP_DisplayHook2",
      "SRP_DisplayHook3",
      "SRP_DisplayHook4",
      "SRP_DisplayHook5",
      "SRP_DisplayHook6",
      "SRP_DisplayHook7",
      "SRP_DisplayHook8",
      "SRP_DisplayHook9",
      "SRP_DisplayHook10",
      "SRP_DisplayHook11",
      "SRP_DisplayHook12",
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_coatrackfancy_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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

  class SRP_CoatRack_Simple_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Coat Rack Kit - Simple";
		descriptionShort="A coat rack kit that is used to display armbands.";
	};
  class SRP_CoatRack_Simple: Container_Base 
	{
		scope=2;
		displayName="Coat Rack - Simple";
		descriptionShort="A display stand";
		model="Survivalists_Mods\gear\containers\srp_coatracksimple.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
    allowOwnedCargoManipulation="true";
    attachments[]=
    {
      "SRP_DisplayHook1",
      "SRP_DisplayHook2",
      "SRP_DisplayHook3",
      "SRP_DisplayHook4",
      "SRP_DisplayHook5",
      "SRP_DisplayHook6",
      "SRP_DisplayHook7",
      "SRP_DisplayHook8",
      "SRP_DisplayHook9",
      "SRP_DisplayHook10",
      "SRP_DisplayHook11",
      "SRP_DisplayHook12",
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_coatracksimple_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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

  
  class SRP_MuseumTable_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Museum Table Kit - Wood";
		descriptionShort="A fancy wooden display table kit";
	};

  class SRP_MuseumTable: Container_Base  // new
	{
		scope=2;
		displayName="Museum Table - Wood";
		descriptionShort="A fancy display stand.";
		model="Survivalists_Mods\gear\containers\srp_museumtable.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
    allowOwnedCargoManipulation="true";
    attachments[]=
    {
      "Shoulder",
      "SRP_DisplayHook1",
      "SRP_DisplayHook2",
      "SRP_DisplayHook3",
      "SRP_DisplayHook4",
      "SRP_DisplayHook5",
      "SRP_DisplayHook6",
      "SRP_DisplayHook7",
      "SRP_DisplayHook8",
      "SRP_DisplayHook9",
      "SRP_DisplayHook10"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_museumtable_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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

  class SRP_GlassDisplayCaseLarge_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Large Glass Display Kit - Wooden";
		descriptionShort="A large wooden glass display kit";
	};

  class SRP_GlassDisplayCaseLarge: Container_Base 
	{
		scope=2;
		displayName="Large Glass Display - Wooden";
		descriptionShort="A large display stand";
		model="Survivalists_Mods\gear\containers\srp_displaycaselarge.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
		itemsCargoSize[]={12,12};
    allowOwnedCargoManipulation="true";
    hiddenSelections[]=
    {
      "zbytek",
      "glass"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_displaycaselarge_co.paa",
			"Survivalists_Mods\gear\containers\data\srp_displaycaselarge_glass_ca.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
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
  
  class SRP_LockerSingle_Colorbase: Container_Base
	{
		scope=0;
		displayName="Storage Locker - Single";
		descriptionShort="A storage container.";
		model="Survivalists_Mods\gear\containers\srp_locker_single.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
    attachments[]=
    {
			"Pistol",
      "Shoulder",
			"Melee",
			"Armband",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Eyewear",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear",
      "Beard","EarRings","Rings","Wig","Coat","Scarf","Extra","LeftHand1",
			"Knife",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "SRP_Dynamite",
      "SRP_Dynamite1"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_locker_single_co.paa"
    };
    class Cargo
		{
			itemsCargoSize[]={8,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class GUIInventoryAttachmentsProps
		{
			class Explosives
			{
				name="Explosives";
				description="";
				attachmentSlots[]=
				{
					"VestGrenadeA",
					"VestGrenadeB",
					"VestGrenadeC",
					"VestGrenadeD",
          "SRP_Dynamite",
          "SRP_Dynamite1"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Weapons
			{
				name="Weapons";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Knife",
          "Shoulder",
          "Melee"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Gear
			{
				name="Gear";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet",
          "Beard","EarRings","Rings","Wig","Coat","Scarf","Extra","LeftHand1"
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
					hitpoints=500;
          healthLevels[] = {{1,""},{0.7,""},{0.5,""},{0.3,""},{0.1,""}};
				};
			};
		};
    class AnimationSources
		{
      class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
    class Doors
		{
			class Doors1
			{
				displayName="Door 1";
				component="doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
			};
    };
	};
  class SRP_LockerTriple_Colorbase: Container_Base
	{
		scope=0;
		displayName="Storage Locker - Triple";
		descriptionShort="A storage container.";
		model="Survivalists_Mods\gear\containers\srp_locker_triple.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
    attachments[]=
    {
			"Pistol",
      "Shoulder",
			"Melee",
			"Armband",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Eyewear",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear",
      "Beard","EarRings","Rings","Wig","Coat","Scarf","Extra","LeftHand1",
			"Knife",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "SRP_Dynamite",
      "SRP_Dynamite1"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_locker_single_co.paa"
    };
    class Cargo
		{
			itemsCargoSize[]={8,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class GUIInventoryAttachmentsProps
		{
			class Explosives
			{
				name="Explosives";
				description="";
				attachmentSlots[]=
				{
					"VestGrenadeA",
					"VestGrenadeB",
					"VestGrenadeC",
					"VestGrenadeD",
          "SRP_Dynamite",
          "SRP_Dynamite1"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Weapons
			{
				name="Weapons";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Knife",
          "Shoulder",
          "Melee"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Gear
			{
				name="Gear";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet",
          "Beard","EarRings","Rings","Wig","Coat","Scarf","Extra","LeftHand1"
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
					hitpoints=500;
          healthLevels[] = {{1,""},{0.7,""},{0.5,""},{0.3,""},{0.1,""}};
				};
			};
		};
    class AnimationSources
		{
      class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
      class Doors2
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
      class Doors3
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
    class Doors
		{
			class Doors1
			{
				displayName="Door 1";
				component="doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
			};
      class Doors2
			{
				displayName="Door 2";
				component="doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
			};
      class Doors3
			{
				displayName="Door 3";
				component="doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
			};
    };
	};
  class SRP_LockerQuad_Colorbase: Container_Base
	{
		scope=0;
		displayName="Storage Locker - Quad";
		descriptionShort="A storage container.";
		model="Survivalists_Mods\gear\containers\srp_locker_quad.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
    attachments[]=
    {
			"Pistol",
      "Shoulder",
			"Melee",
			"Armband",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Eyewear",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear",
      "Beard","EarRings","Rings","Wig","Coat","Scarf","Extra","LeftHand1",
			"Knife",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "SRP_Dynamite",
      "SRP_Dynamite1"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_locker_quad_co.paa"
    };
    class Cargo
		{
			itemsCargoSize[]={8,7};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class GUIInventoryAttachmentsProps
		{
			class Explosives
			{
				name="Explosives";
				description="";
				attachmentSlots[]=
				{
					"VestGrenadeA",
					"VestGrenadeB",
					"VestGrenadeC",
					"VestGrenadeD",
          "SRP_Dynamite",
          "SRP_Dynamite1"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Weapons
			{
				name="Weapons";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Knife",
          "Shoulder",
          "Melee"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Gear
			{
				name="Gear";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet",
          "Beard","EarRings","Rings","Wig","Coat","Scarf","Extra","LeftHand1"
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
					hitpoints=500;
          healthLevels[] = {{1,""},{0.7,""},{0.5,""},{0.3,""},{0.1,""}};
				};
			};
		};
    class AnimationSources
		{
      class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
    class Doors
		{
			class Doors1
			{
				displayName="Door 1";
				component="doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
			};
    };
	};
  class SRP_LockerMilitary_Colorbase: Container_Base
	{
		scope=0;
		displayName="Storage Locker - Military";
		descriptionShort="A storage container.";
		model="Survivalists_Mods\gear\containers\srp_locker_military.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
    attachments[]=
    {
			"Pistol",
      "Shoulder",
      "Shoulder1",
      "Shoulder2",
      "Shoulder3",
      "Shoulder4",
      "Melee",
			"Armband",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Eyewear",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear",
      "Beard","EarRings","Rings","Wig","Coat","Scarf","Extra","LeftHand1",
			"Knife",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "SRP_Dynamite",
      "SRP_Dynamite1"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_locker_military_co.paa"
    };
    class Cargo
		{
			itemsCargoSize[]={8,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class GUIInventoryAttachmentsProps
		{
			class Explosives
			{
				name="Explosives";
				description="";
				attachmentSlots[]=
				{
					"VestGrenadeA",
					"VestGrenadeB",
					"VestGrenadeC",
					"VestGrenadeD",
          "SRP_Dynamite",
          "SRP_Dynamite1"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Weapons
			{
				name="Weapons";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Knife",
          "Melee",
          "Shoulder",
          "Shoulder1",
          "Shoulder2",
          "Shoulder3",
          "Shoulder4",
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Gear
			{
				name="Gear";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet",
          "Beard","EarRings","Rings","Wig","Coat","Scarf","Extra","LeftHand1"
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
					hitpoints=500;
          healthLevels[] = {{1,""},{0.7,""},{0.5,""},{0.3,""},{0.1,""}};
				};
			};
		};
    class AnimationSources
		{
      class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
      class Doors2
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
    class Doors
		{
			class Doors1
			{
				displayName="Door 1";
				component="doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
			};
      class Doors2
			{
				displayName="Door 2";
				component="doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
			};
    };
	};

  class SRP_LockerSingle_Black_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Black";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Blue_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Blue";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Brown_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Brown";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Gray_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Gray";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Green_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Green";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Orange_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Orange";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Pink_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Pink";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Purple_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Purple";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Red_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Red";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_White_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - White";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerSingle_Yellow_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Single - Yellow";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Black_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Black";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Blue_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Blue";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Brown_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Brown";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Gray_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Gray";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Green_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Green";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Orange_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Orange";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Pink_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Pink";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Purple_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Purple";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Red_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Red";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_White_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - White";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerTriple_Yellow_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Triple - Yellow";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Black_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Black";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Blue_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Blue";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Brown_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Brown";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Gray_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Gray";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Green_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Green";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Orange_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Orange";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Pink_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Pink";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Purple_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Purple";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Red_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Red";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_White_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - White";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerQuad_Yellow_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Quad - Yellow";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerMilitary_Green_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Military - Green";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerMilitary_Black_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Military - Black";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerMilitary_Gray_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Military - Gray";
    descriptionShort="A kit that holds everything needed for a locker";
  };
  class SRP_LockerMilitary_Tan_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Locker Kit - Military - Tan";
    descriptionShort="A kit that holds everything needed for a locker";
  };

  class SRP_HiddenStash_Base: Inventory_Base
	{
		scope=0;
		displayName="Hidden Stash Base";
		descriptionShort="An item used to make a hidden stash";
		model="\dz\gear\food\food_can.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={2,2};
		canBeSplit=1;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		rotationFlags=63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1.0,{"DZ\gear\food\data\food_can.rvmat"}},						
						{0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},						
						{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},						
						{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
				  };
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};	
  };
  class SRP_HiddenStash_FoodCan: SRP_HiddenStash_Base
  {
    scope=2;
    displayName="$STR_UnknownFoodCan0";
		descriptionShort="$STR_UnknownFoodCan1";
    model="\dz\gear\food\food_can.p3d";
		weight=440;
    itemSize[]={2,2};
    allowOwnedCargoManipulation=1;
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={2,2};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
  };
  class SRP_HiddenStash_Guts: SRP_HiddenStash_Base
  {
    scope=2;
		displayName="$STR_CfgVehicles_Guts0";
		descriptionShort="$STR_CfgVehicles_Guts1";
		model="\dz\gear\food\animal_guts.p3d";
		weight=440;
		itemSize[]={3,2};
    allowOwnedCargoManipulation=1;
		class Cargo
		{
			itemsCargoSize[]={3,2};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
  };
  class SRP_HiddenStash_Teddy: SRP_HiddenStash_Base
  {
    scope=2;
		displayName="$STR_CfgVehicles_Bear_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Bear_ColorBase1";
		model="\dz\gear\containers\teddybear.p3d";
		weight=440;
		itemSize[]={2,3};
    allowOwnedCargoManipulation=1;
		class Cargo
		{
		  itemsCargoSize[]={2,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
  };

  class SRP_Letter_Holder: Container_Base
	{
		scope=2;
		displayName="Letter Holder";
		descriptionShort="A letter folder used for holding letters";
		model="Survivalists_Mods\gear\containers\SRP_Letter_Holder.p3d";
		inventorySlot[]=
		{
			"Belt_Left"
		};
    attachments[]=
    {
      "SRP_CourierNote1",
      "SRP_CourierNote2",
      "SRP_CourierNote3",
      "SRP_CourierNote4",
      "SRP_CourierNote5",
      "SRP_CourierNote6",
      "SRP_CourierNote7",
      "SRP_CourierNote8",
      "SRP_CourierNote9",
      "SRP_CourierNote10",
    };
		weight=440;
		itemSize[]={2,3};
		itemsCargoSize[]={2,2};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\Letter_Holder_co.paa"
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
						{1.0,{"Survivalists_Mods\gear\containers\data\Letter_Holder.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\gear\containers\data\Letter_Holder.rvmat"}},						
						{0.5,{"Survivalists_Mods\gear\containers\data\Letter_Holder.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\gear\containers\data\Letter_Holder.rvmat"}},						
						{0.0,{"Survivalists_Mods\gear\containers\data\Letter_Holder.rvmat"}}
				  };
				};
			};
		};

	};

  class SRP_OilCan_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Oil Can - Base";
		descriptionShort="An old oil can. Some people collect these.";
		model="Survivalists_Mods\gear\containers\srp_oilcan.p3d";
		weight=10000;
    color="base";
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
    inventorySlot[]={};
    attachments[]={};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_oilcan_co.paa"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
				};
			};
		};
	};
  class SRP_OilCan_Basic: SRP_OilCan_ColorBase
	{
		scope=2;
    color="basic";		
    displayName="Oil Can - Basic";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_oilcan_co.paa"
    };    
	};
  
  class SRP_GunWall_Fence_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Gun Wall Kit - Chain Fence";
    descriptionShort="A kit that holds everything needed for a makeshift gun wall";
  };

  class SRP_GunWall_Fence: Container_Base
	{
		scope=2;
		displayName="Gun Wall";
		descriptionShort="A makeshift gun wall.";
		model="Survivalists_Mods\gear\containers\srp_gunwall.p3d";
		physLayer="item_large";
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "SRP_Rifle1",
      "SRP_Rifle2",
      "SRP_Rifle3",
      "SRP_Rifle4",
      "SRP_Rifle5",
      "SRP_Rifle6",
      "SRP_Rifle7",
      "SRP_Rifle8",
      "SRP_Rifle9",
      "SRP_Rifle10",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "Shoulder",
			"Melee",
      "Pistol",
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_chainlinkfence_co.paa"
    };
    class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="Rifle Positions";
				attachmentSlots[]=
				{
          "SRP_Rifle1",
          "SRP_Rifle2",
          "SRP_Rifle3",
          "SRP_Rifle4",
          "SRP_Rifle5",
          "SRP_Rifle6",
          "SRP_Rifle7",
          "SRP_Rifle8",
          "SRP_Rifle9",
          "SRP_Rifle10",
				};
				icon="set:dayz_inventory image:shoulderright";
			};
      class Explosives
			{
				name="Explosives";
				description="Explosives Positions";
				attachmentSlots[]=
				{
          "VestGrenadeA",
          "VestGrenadeB",
          "VestGrenadeC",
          "VestGrenadeD",
				};
		    icon="set:dayz_inventory image:grenade";
			};
      class Melee
			{
				name="Melee";
				description="Pistol and Melee Positions";
				attachmentSlots[]=
				{
          "Shoulder",
          "Melee",
          "Pistol",
				};
				icon="set:dayz_inventory image:shoulderright";
			};
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
          healthLevels[] = {{1,"Survivalists_Mods\gear\containers\data\srp_chainlinkfence.rvmat"},{0.7,"Survivalists_Mods\gear\containers\data\srp_chainlinkfence.rvmat"},{0.5,"Survivalists_Mods\gear\containers\data\srp_chainlinkfence.rvmat"},{0.3,"Survivalists_Mods\gear\containers\data\srp_chainlinkfence.rvmat"},{0.1,"Survivalists_Mods\gear\containers\data\srp_chainlinkfence.rvmat"}};
				};
			};
		};
	};

//=================================================================== POTS
  class SRP_PotteryPot_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Pottery Vase - Base";
		descriptionShort="An old vase. Can be used to hold things.";
		model="Survivalists_Mods\gear\containers\srp_jar1.p3d";
    physLayer="item_large";
		weight=10000;
    color="base";
    carveNavmesh=1;
		itemBehaviour=2;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
    inventorySlot[]={};
    attachments[]={};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
				};
			};
		};
	};
  class SRP_PotteryPot1_ColorBase: SRP_PotteryPot_ColorBase
	{
		scope=0;
    displayName="Pottery Vase - Bottle";
		model="Survivalists_Mods\gear\containers\srp_jar1.p3d";
	};
  class SRP_PotteryPot2_ColorBase: SRP_PotteryPot_ColorBase
	{
		scope=0;
    displayName="Pottery Vase - Teardrop Tall";
		model="Survivalists_Mods\gear\containers\srp_jar2.p3d";
	};
  class SRP_PotteryPot3_ColorBase: SRP_PotteryPot_ColorBase
	{
		scope=0;
    displayName="Pottery Vase - Bulb Wide";
		model="Survivalists_Mods\gear\containers\srp_jar3.p3d";
	};
  class SRP_PotteryPot4_ColorBase: SRP_PotteryPot_ColorBase
	{
		scope=0;
    displayName="Pottery Vase - Cone";
		model="Survivalists_Mods\gear\containers\srp_jar4.p3d";
	};
  class SRP_PotteryPot5_ColorBase: SRP_PotteryPot_ColorBase
	{
		scope=0;
    displayName="Pottery Vase - Cone Short";
		model="Survivalists_Mods\gear\containers\srp_jar5.p3d";
	};
  class SRP_PotteryPot6_ColorBase: SRP_PotteryPot_ColorBase
	{
		scope=0;
    displayName="Pottery Vase - Decanter";
		model="Survivalists_Mods\gear\containers\srp_jar6.p3d";
	};
  class SRP_PotteryPot7_ColorBase: SRP_PotteryPot_ColorBase
	{
		scope=0;
    displayName="Pottery Vase - Teardrop Wide";
		model="Survivalists_Mods\gear\containers\srp_jar7.p3d";
	};
  class SRP_PotteryPot8_ColorBase: SRP_PotteryPot_ColorBase
	{
		scope=0;
    displayName="Pottery Vase - Bulb Short";
		model="Survivalists_Mods\gear\containers\srp_jar8.p3d";
	};

//=================================================================== POT KITS
  class SRP_PotteryPotKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit";
		descriptionShort="A kit used to choose between the various types of clay pots.";
	};
  class SRP_PotteryPot1Kit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bottle";
		descriptionShort="A kit used to choose between the various types of bottle shaped clay pots.";
	};
  class SRP_PotteryPot2Kit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Tall";
		descriptionShort="A kit used to choose between the various types of teardrop shaped clay pots.";
	};
  class SRP_PotteryPot3Kit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Wide";
		descriptionShort="A kit used to choose between the various types of bulb shaped clay pots.";
	};
  class SRP_PotteryPot4Kit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Cone";
		descriptionShort="A kit used to choose between the various types of cone shaped clay pots.";
	};
  class SRP_PotteryPot5Kit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Short Cone";
		descriptionShort="A kit used to choose between the various types of short cone shaped clay pots.";
	};
  class SRP_PotteryPot6Kit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Decanter";
		descriptionShort="A kit used to choose between the various types of decanter shaped clay pots.";
	};
  class SRP_PotteryPot7Kit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Wide";
		descriptionShort="A kit used to choose between the various types of teardrop wide shaped clay pots.";
	};
  class SRP_PotteryPot8Kit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Short";
		descriptionShort="A kit used to choose between the various types of short bulb shaped clay pots.";
	};

//=================================================================== TYPE 1
  class SRP_PotteryPot1_Basic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bottle - Basic";
		descriptionShort="A bottle shaped clay pot.";
	};
  class SRP_PotteryPot2_Basic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Tall - Basic";
		descriptionShort="A tall teardrop shaped clay pot.";
	};
  class SRP_PotteryPot3_Basic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Wide - Basic";
		descriptionShort="A wide bulb shaped clay pot.";
	};
  class SRP_PotteryPot4_Basic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Cone - Basic";
		descriptionShort="A cone shaped clay pot.";
	};
  class SRP_PotteryPot5_Basic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Short Cone - Basic";
		descriptionShort="A short cone shaped clay pot.";
	};
  class SRP_PotteryPot6_Basic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Decanter - Basic";
		descriptionShort="A decanter shaped clay pot.";
	};
  class SRP_PotteryPot7_Basic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Wide - Basic";
		descriptionShort="A short bulb shaped clay pot.";
	};
  class SRP_PotteryPot8_Basic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Short - Basic";
		descriptionShort="A short bulb shaped clay pot.";
	};

  class SRP_PotteryPot1_Basic: SRP_PotteryPot1_ColorBase
	{
		scope=2;
    color="basic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };    
	};
  class SRP_PotteryPot2_Basic: SRP_PotteryPot2_ColorBase
	{
		scope=2;
    color="basic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };    
	};
  class SRP_PotteryPot3_Basic: SRP_PotteryPot3_ColorBase
	{
		scope=2;
    color="basic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };    
	};
  class SRP_PotteryPot4_Basic: SRP_PotteryPot4_ColorBase
	{
		scope=2;
    color="basic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };    
	};
  class SRP_PotteryPot5_Basic: SRP_PotteryPot5_ColorBase
	{
		scope=2;
    color="basic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };    
	};
  class SRP_PotteryPot6_Basic: SRP_PotteryPot6_ColorBase
	{
		scope=2;
    color="basic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };    
	};
  class SRP_PotteryPot7_Basic: SRP_PotteryPot7_ColorBase
	{
		scope=2;
    color="basic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };    
	};
  class SRP_PotteryPot8_Basic: SRP_PotteryPot8_ColorBase
	{
		scope=2;
    color="basic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar1_co.paa"
    };    
	};

//=================================================================== TYPE 2
  class SRP_PotteryPot1_Ornament_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bottle - Ornamental";
		descriptionShort="A bottle shaped clay pot.";
	};
  class SRP_PotteryPot2_Ornament_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Tall - Ornamental";
		descriptionShort="A tall teardrop shaped clay pot.";
	};
  class SRP_PotteryPot3_Ornament_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Wide - Ornamental";
		descriptionShort="A wide bulb shaped clay pot.";
	};
  class SRP_PotteryPot4_Ornament_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Cone - Ornamental";
		descriptionShort="A cone shaped clay pot.";
	};
  class SRP_PotteryPot5_Ornament_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Short Cone - Ornamental";
		descriptionShort="A short cone shaped clay pot.";
	};
  class SRP_PotteryPot6_Ornament_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Decanter - Ornamental";
		descriptionShort="A decanter shaped clay pot.";
	};
  class SRP_PotteryPot7_Ornament_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Wide - Ornamental";
		descriptionShort="A short bulb shaped clay pot.";
	};
  class SRP_PotteryPot8_Ornament_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Short - Ornamental";
		descriptionShort="A short bulb shaped clay pot.";
	};

  class SRP_PotteryPot1_Ornament: SRP_PotteryPot1_ColorBase
	{
		scope=2;
    color="ornament";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar2_co.paa"
    };    
	};
  class SRP_PotteryPot2_Ornament: SRP_PotteryPot2_ColorBase
	{
		scope=2;
    color="ornament";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar2_co.paa"
    };    
	};
  class SRP_PotteryPot3_Ornament: SRP_PotteryPot3_ColorBase
	{
		scope=2;
    color="ornament";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar2_co.paa"
    };    
	};
  class SRP_PotteryPot4_Ornament: SRP_PotteryPot4_ColorBase
	{
		scope=2;
    color="ornament";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar2_co.paa"
    };    
	};
  class SRP_PotteryPot5_Ornament: SRP_PotteryPot5_ColorBase
	{
		scope=2;
    color="ornament";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar2_co.paa"
    };    
	};
  class SRP_PotteryPot6_Ornament: SRP_PotteryPot6_ColorBase
	{
		scope=2;
    color="ornament";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar2_co.paa"
    };    
	};
  class SRP_PotteryPot7_Ornament: SRP_PotteryPot7_ColorBase
	{
		scope=2;
    color="ornament";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar2_co.paa"
    };    
	};
  class SRP_PotteryPot8_Ornament: SRP_PotteryPot8_ColorBase
	{
		scope=2;
    color="ornament";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar2_co.paa"
    };    
	};

//=================================================================== TYPE 3
  class SRP_PotteryPot1_Flower_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bottle - Flower";
		descriptionShort="A bottle shaped clay pot.";
	};
  class SRP_PotteryPot2_Flower_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Tall - Flower";
		descriptionShort="A tall teardrop shaped clay pot.";
	};
  class SRP_PotteryPot3_Flower_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Wide - Flower";
		descriptionShort="A wide bulb shaped clay pot.";
	};
  class SRP_PotteryPot4_Flower_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Cone - Flower";
		descriptionShort="A cone shaped clay pot.";
	};
  class SRP_PotteryPot5_Flower_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Short Cone - Flower";
		descriptionShort="A short cone shaped clay pot.";
	};
  class SRP_PotteryPot6_Flower_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Decanter - Flower";
		descriptionShort="A decanter shaped clay pot.";
	};
  class SRP_PotteryPot7_Flower_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Wide - Flower";
		descriptionShort="A short bulb shaped clay pot.";
	};
  class SRP_PotteryPot8_Flower_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Short - Flower";
		descriptionShort="A short bulb shaped clay pot.";
	};

  class SRP_PotteryPot1_Flower: SRP_PotteryPot1_ColorBase
	{
		scope=2;
    color="flower";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar3_co.paa"
    };    
	};
  class SRP_PotteryPot2_Flower: SRP_PotteryPot2_ColorBase
	{
		scope=2;
    color="flower";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar3_co.paa"
    };    
	};
  class SRP_PotteryPot3_Flower: SRP_PotteryPot3_ColorBase
	{
		scope=2;
    color="flower";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar3_co.paa"
    };    
	};
  class SRP_PotteryPot4_Flower: SRP_PotteryPot4_ColorBase
	{
		scope=2;
    color="flower";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar3_co.paa"
    };    
	};
  class SRP_PotteryPot5_Flower: SRP_PotteryPot5_ColorBase
	{
		scope=2;
    color="flower";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar3_co.paa"
    };    
	};
  class SRP_PotteryPot6_Flower: SRP_PotteryPot6_ColorBase
	{
		scope=2;
    color="flower";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar3_co.paa"
    };    
	};
  class SRP_PotteryPot7_Flower: SRP_PotteryPot7_ColorBase
	{
		scope=2;
    color="flower";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar3_co.paa"
    };    
	};
  class SRP_PotteryPot8_Flower: SRP_PotteryPot8_ColorBase
	{
		scope=2;
    color="flower";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar3_co.paa"
    };    
	};

//=================================================================== TYPE 4
  class SRP_PotteryPot1_Geometric_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bottle - Geometric";
		descriptionShort="A bottle shaped clay pot.";
	};
  class SRP_PotteryPot2_Geometric_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Tall - Geometric";
		descriptionShort="A tall teardrop shaped clay pot.";
	};
  class SRP_PotteryPot3_Geometric_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Wide - Geometric";
		descriptionShort="A wide bulb shaped clay pot.";
	};
  class SRP_PotteryPot4_Geometric_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Cone - Geometric";
		descriptionShort="A cone shaped clay pot.";
	};
  class SRP_PotteryPot5_Geometric_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Short Cone - Geometric";
		descriptionShort="A short cone shaped clay pot.";
	};
  class SRP_PotteryPot6_Geometric_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Decanter - Geometric";
		descriptionShort="A decanter shaped clay pot.";
	};
  class SRP_PotteryPot7_Geometric_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Wide - Geometric";
		descriptionShort="A short bulb shaped clay pot.";
	};
  class SRP_PotteryPot8_Geometric_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Short - Geometric";
		descriptionShort="A short bulb shaped clay pot.";
	};

  class SRP_PotteryPot1_Geometric: SRP_PotteryPot1_ColorBase
	{
		scope=2;
    color="geometric";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar4_co.paa"
    };    
	};
  class SRP_PotteryPot2_Geometric: SRP_PotteryPot2_ColorBase
	{
		scope=2;
    color="geometric";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar4_co.paa"
    };    
	};
  class SRP_PotteryPot3_Geometric: SRP_PotteryPot3_ColorBase
	{
		scope=2;
    color="geometric";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar4_co.paa"
    };    
	};
  class SRP_PotteryPot4_Geometric: SRP_PotteryPot4_ColorBase
	{
		scope=2;
    color="geometric";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar4_co.paa"
    };    
	};
  class SRP_PotteryPot5_Geometric: SRP_PotteryPot5_ColorBase
	{
		scope=2;
    color="geometric";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar4_co.paa"
    };    
	};
  class SRP_PotteryPot6_Geometric: SRP_PotteryPot6_ColorBase
	{
		scope=2;
    color="geometric";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar4_co.paa"
    };    
	};
  class SRP_PotteryPot7_Geometric: SRP_PotteryPot7_ColorBase
	{
		scope=2;
    color="geometric";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar4_co.paa"
    };    
	};
  class SRP_PotteryPot8_Geometric: SRP_PotteryPot8_ColorBase
	{
		scope=2;
    color="geometric";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar4_co.paa"
    };    
	};

//=================================================================== TYPE 5
  class SRP_PotteryPot1_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bottle - Modern";
		descriptionShort="A bottle shaped clay pot.";
	};
  class SRP_PotteryPot2_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Tall - Modern";
		descriptionShort="A tall teardrop shaped clay pot.";
	};
  class SRP_PotteryPot3_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Wide - Modern";
		descriptionShort="A wide bulb shaped clay pot.";
	};
  class SRP_PotteryPot4_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Cone - Modern";
		descriptionShort="A cone shaped clay pot.";
	};
  class SRP_PotteryPot5_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Short Cone - Modern";
		descriptionShort="A short cone shaped clay pot.";
	};
  class SRP_PotteryPot6_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Decanter - Modern";
		descriptionShort="A decanter shaped clay pot.";
	};
  class SRP_PotteryPot7_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Wide - Modern";
		descriptionShort="A short bulb shaped clay pot.";
	};
  class SRP_PotteryPot8_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Short - Modern";
		descriptionShort="A short bulb shaped clay pot.";
	};

  class SRP_PotteryPot1_Modern: SRP_PotteryPot1_ColorBase
	{
		scope=2;
    color="modern";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar5_co.paa"
    };    
	};
  class SRP_PotteryPot2_Modern: SRP_PotteryPot2_ColorBase
	{
		scope=2;
    color="modern";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar5_co.paa"
    };    
	};
  class SRP_PotteryPot3_Modern: SRP_PotteryPot3_ColorBase
	{
		scope=2;
    color="modern";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar5_co.paa"
    };    
	};
  class SRP_PotteryPot4_Modern: SRP_PotteryPot4_ColorBase
	{
		scope=2;
    color="modern";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar5_co.paa"
    };    
	};
  class SRP_PotteryPot5_Modern: SRP_PotteryPot5_ColorBase
	{
		scope=2;
    color="modern";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar5_co.paa"
    };    
	};
  class SRP_PotteryPot6_Modern: SRP_PotteryPot6_ColorBase
	{
		scope=2;
    color="modern";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar5_co.paa"
    };    
	};
  class SRP_PotteryPot7_Modern: SRP_PotteryPot7_ColorBase
	{
		scope=2;
    color="modern";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar5_co.paa"
    };    
	};
  class SRP_PotteryPot8_Modern: SRP_PotteryPot8_ColorBase
	{
		scope=2;
    color="modern";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar5_co.paa"
    };    
	};

//=================================================================== TYPE 6
  class SRP_PotteryPot1_Celtic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bottle - Celtic";
		descriptionShort="A bottle shaped clay pot.";
	};
  class SRP_PotteryPot2_Celtic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Tall - Celtic";
		descriptionShort="A tall teardrop shaped clay pot.";
	};
  class SRP_PotteryPot3_Celtic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Wide - Celtic";
		descriptionShort="A wide bulb shaped clay pot.";
	};
  class SRP_PotteryPot4_Celtic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Cone - Celtic";
		descriptionShort="A cone shaped clay pot.";
	};
  class SRP_PotteryPot5_Celtic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Short Cone - Celtic";
		descriptionShort="A short cone shaped clay pot.";
	};
  class SRP_PotteryPot6_Celtic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Decanter - Celtic";
		descriptionShort="A decanter shaped clay pot.";
	};
  class SRP_PotteryPot7_Celtic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Wide - Celtic";
		descriptionShort="A short bulb shaped clay pot.";
	};
  class SRP_PotteryPot8_Celtic_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Short - Celtic";
		descriptionShort="A short bulb shaped clay pot.";
	};

  class SRP_PotteryPot1_Celtic: SRP_PotteryPot1_ColorBase
	{
		scope=2;
    color="celtic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar6_co.paa"
    };    
	};
  class SRP_PotteryPot2_Celtic: SRP_PotteryPot2_ColorBase
	{
		scope=2;
    color="celtic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar6_co.paa"
    };    
	};
  class SRP_PotteryPot3_Celtic: SRP_PotteryPot3_ColorBase
	{
		scope=2;
    color="celtic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar6_co.paa"
    };    
	};
  class SRP_PotteryPot4_Celtic: SRP_PotteryPot4_ColorBase
	{
		scope=2;
    color="celtic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar6_co.paa"
    };    
	};
  class SRP_PotteryPot5_Celtic: SRP_PotteryPot5_ColorBase
	{
		scope=2;
    color="celtic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar6_co.paa"
    };    
	};
  class SRP_PotteryPot6_Celtic: SRP_PotteryPot6_ColorBase
	{
		scope=2;
    color="celtic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar6_co.paa"
    };    
	};
  class SRP_PotteryPot7_Celtic: SRP_PotteryPot7_ColorBase
	{
		scope=2;
    color="celtic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar6_co.paa"
    };    
	};
  class SRP_PotteryPot8_Celtic: SRP_PotteryPot8_ColorBase
	{
		scope=2;
    color="celtic";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar6_co.paa"
    };    
	};

//=================================================================== TYPE 7
  class SRP_PotteryPot1_Rossetta_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bottle - Rossetta";
		descriptionShort="A bottle shaped clay pot.";
	};
  class SRP_PotteryPot2_Rossetta_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Tall - Rossetta";
		descriptionShort="A tall teardrop shaped clay pot.";
	};
  class SRP_PotteryPot3_Rossetta_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Wide - Rossetta";
		descriptionShort="A wide bulb shaped clay pot.";
	};
  class SRP_PotteryPot4_Rossetta_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Cone - Rossetta";
		descriptionShort="A cone shaped clay pot.";
	};
  class SRP_PotteryPot5_Rossetta_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Short Cone - Rossetta";
		descriptionShort="A short cone shaped clay pot.";
	};
  class SRP_PotteryPot6_Rossetta_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Decanter - Rossetta";
		descriptionShort="A decanter shaped clay pot.";
	};
  class SRP_PotteryPot7_Rossetta_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Teardrop Wide - Rossetta";
		descriptionShort="A short bulb shaped clay pot.";
	};
  class SRP_PotteryPot8_Rossetta_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Pottery Kit - Bulb Short - Rossetta";
		descriptionShort="A short bulb shaped clay pot.";
	};

  class SRP_PotteryPot1_Rossetta: SRP_PotteryPot1_ColorBase
	{
		scope=2;
    color="rossetta";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar7_co.paa"
    };    
	};
  class SRP_PotteryPot2_Rossetta: SRP_PotteryPot2_ColorBase
	{
		scope=2;
    color="rossetta";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar7_co.paa"
    };    
	};
  class SRP_PotteryPot3_Rossetta: SRP_PotteryPot3_ColorBase
	{
		scope=2;
    color="rossetta";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar7_co.paa"
    };    
	};
  class SRP_PotteryPot4_Rossetta: SRP_PotteryPot4_ColorBase
	{
		scope=2;
    color="rossetta";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar7_co.paa"
    };    
	};
  class SRP_PotteryPot5_Rossetta: SRP_PotteryPot5_ColorBase
	{
		scope=2;
    color="rossetta";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar7_co.paa"
    };    
	};
  class SRP_PotteryPot6_Rossetta: SRP_PotteryPot6_ColorBase
	{
		scope=2;
    color="rossetta";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar7_co.paa"
    };    
	};
  class SRP_PotteryPot7_Rossetta: SRP_PotteryPot7_ColorBase
	{
		scope=2;
    color="rossetta";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar7_co.paa"
    };    
	};
  class SRP_PotteryPot8_Rossetta: SRP_PotteryPot8_ColorBase
	{
		scope=2;
    color="rossetta";		
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\containers\data\srp_ceramicjar7_co.paa"
    };    
	};
};