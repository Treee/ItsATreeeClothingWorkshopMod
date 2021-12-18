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

  //--------------------------------------- Custom Stuff
  
  class SRP_Fridge_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Fridge Kit";
		descriptionShort="A Fridge Kit";
	};
  class SRP_Fridge: Container_Base // BP_FridgeBig
	{
		scope=2;
		displayName="Fridge";
		descriptionShort="A fridge";
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
  class SRP_FridgeLarge_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Big Fridge Kit";
		descriptionShort="A Big Fridge Kit";
	};
  class SRP_FridgeLarge: Container_Base // new
	{
		scope=2;
		displayName="Big Fridge";
		descriptionShort="A really big fridge";
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
		descriptionShort="A Retro Fridge Kit";
	};
  class SRP_FridgeRetro: Container_Base // new
	{
		scope=2;
		displayName="Retro Fridge";
		descriptionShort="A really retro fridge";
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
		descriptionShort="A Minsk Fridge Kit";
	};
  class SRP_FridgeMinsk: Container_Base // new
	{
		scope=2;
		displayName="Minsk Fridge";
		descriptionShort="A Minsk fridge";
		model="Survivalists_Mods\gear\containers\refrigeratorminsk.p3d";
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
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_WoodenShelfKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Shelf Kit";
		descriptionShort="A Wooden Shelf Kit - Still needs a bit of work";
	};

  class SRP_WoodenShelfSimple_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Simple Wooden Shelf Kit";
		descriptionShort="A Simple Wooden Shelf Kit";
	};
  class SRP_WoodenShelfSimple: Container_Base //BP_Shelf
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
		descriptionShort="A Metal Shelf Kit - Still needs a bit of work";
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
		descriptionShort="A Extra Large Metal Shelf Kit";
	};
  class SRP_MetalShelfGroundXL: Container_Base //new
	{
		scope=2;
		displayName="Large Metal Shelf - Ground";
		descriptionShort="A Convenient shelf where you can put your junk";
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


  class SRP_TetrisShelfKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Tetris Shelf Kit";
		descriptionShort="A Tetris Shelf Kit - Still needs a bit of work";
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
					"Shoulder5",
					"Shoulder6"
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
					"no",
					"Shoulder7",
					"Shoulder8",
					"Shoulder9"
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

  class SRP_PostBox: Container_Base // BP_post_box
	{
		scope=2;
		displayName="Post Box";
		descriptionShort="A box for mailing letters.";
		model="Survivalists_Mods\gear\containers\mailboxregular.p3d";
		weight=1000;
		rotationFlags=16;
		itemSize[]={10,15};
		itemsCargoSize[]={3,4};
		slopeTolerance=0.30000001;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.69999999,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.5,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0,{"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"}}
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
  class SRP_PostBoxBlue: Container_Base // BP_post_box
	{
		scope=2;
		displayName="Blue Post Box";
		descriptionShort="A box for mailing letters.";
		model="Survivalists_Mods\gear\containers\mailboxregularblue.p3d";
		weight=1000;
		rotationFlags=16;
		itemSize[]={10,15};
		itemsCargoSize[]={3,4};
		slopeTolerance=0.30000001;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.69999999,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.5,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0,{"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"}}
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
  class SRP_PostBoxWooden: Container_Base // new
	{
		scope=2;
		displayName="Wooden Post Box";
		descriptionShort="A box for mailing letters.";
		model="Survivalists_Mods\gear\containers\mailboxwooden.p3d";
		weight=1000;
		rotationFlags=16;
		itemSize[]={10,15};
		itemsCargoSize[]={3,4};
		slopeTolerance=0.30000001;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.69999999,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.5,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0,{"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"}}
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
			"BP_gas_lamp"
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
				icon="cat_common_cargo";
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
					"Hips"
				};
				icon="body";
			};
			class Lamp
			{
				name="Lamp";
				description="";
				attachmentSlots[]=
				{
					"BP_gas_lamp"
				};
				icon="gascanister";
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
			"BP_gas_lamp"
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
				icon="cat_common_cargo";
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
					"Hips"
				};
				icon="body";
			};
			class Lamp
			{
				name="Lamp";
				description="";
				attachmentSlots[]=
				{
					"BP_gas_lamp"
				};
				icon="gascanister";
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

  class SRP_LeatherPouch_Default: PlateCarrierPouches  // new
	{
		scope=2;
    displayName="Leather Pouch";
    descriptionShort="A leather pouch that holds items.";
		model="Survivalists_Mods\gear\containers\leatherpouch.p3d";
    inventorySlot[]=
		{
			"VestPouch"
		};
    itemSize[]={3,3};
		itemsCargoSize[]={3,3};
    repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
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
    inventorySlot[]=
		{
			"VestPouch"
		};
    itemSize[]={4,4};
		itemsCargoSize[]={4,4};
    repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
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
    inventorySlot[]=
		{
			"VestPouch"
		};
    itemSize[]={3,3};
		itemsCargoSize[]={3,3};
    repairableWithKits[]={5,2};
		repairCosts[]={30,25};
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


  class SRP_MetalBarrel_Colorbase: Container_Base  // new
	{
		scope=2;
		displayName="Metal Barrel";
		descriptionShort="A sturdy barrel.";
		model="Survivalists_Mods\gear\containers\srp_metalbarrel.p3d";
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
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_metalbarrel_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_metalbarrel.rvmat"
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
	};

  class SRP_MetalBarrel_Old_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Old";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Old: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="old";
  };

  class SRP_MetalBarrel_Blue_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Blue";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Blue: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_metalbarrel_blue_co.paa"
		};
  };

  class SRP_MetalBarrel_Red_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Red";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Red: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_metalbarrel_red_co.paa"
		};
  };

  class SRP_MetalBarrel_Yellow_Kit: SRP_KitBase // new
	{
		scope=2;
		displayName="Metal Barrel Kit - Yellow";
		descriptionShort="A Metal Barrel Kit";
	};
  class SRP_MetalBarrel_Yellow: SRP_MetalBarrel_Colorbase // new
  {
    scope=2;
    color="yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\srp_metalbarrel_yellow_co.paa"
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

  }

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
  
};