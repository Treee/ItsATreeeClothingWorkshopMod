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
  class SRP_KitBase;

  class SRP_FridgeBig_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Big Fridge Kit";
		descriptionShort="A Big Fridge Kit";
		model="Survivalists_Mods\gear\containers\Fridge_big.p3d";
	};

  class SRP_FridgeBig: Container_Base // BP_FridgeBig
	{
		scope=2;
		displayName="Big Fridge";
		descriptionShort="A really big fridge";
		model="Survivalists_Mods\gear\containers\Fridge_big.p3d";
    carveNavmesh=1;
		itemBehaviour=2;
		physLayer="item_large";
		attachments[]=
		{
			"Ingredient",
			"Food1",
			"Food2",
			"Food3",
			"Food4",
			"Food5",
			"Food6",
			"Food7",
			"Food8",
			"Can",
			"Can1",
			"Can2",
			"Can3",
			"Can4",
			"Can5",
			"Can6",
			"Can7"
		};
		weight=10000;
		itemSize[]={10,15};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Food
			{
				name="The drinks";
				description="";
				attachmentSlots[]=
				{
					"Food1",
					"Food2",
					"Food3",
					"Food4",
					"Food5",
					"Food6",
					"Food7",
					"Food8"
				};
				icon="tincan";
			};
			class Canned_food
			{
				name="Canned food";
				description="";
				attachmentSlots[]=
				{
					"Can",
					"Can1",
					"Can2",
					"Can3",
					"Can4",
					"Can5",
					"Can6",
					"Can7"
				};
				icon="tincan";
			};
			class Food1
			{
				name="Other food";
				description="";
				attachmentSlots[]=
				{
					"Ingredient"
				};
				icon="food";
			};
		};
	};

  class SRP_WoodenShelf_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Shelf Kit";
		descriptionShort="A Wooden Shelf Kit";
    model="Survivalists_Mods\gear\containers\Shelf.p3d";
	};

  class SRP_WoodenShelf: Container_Base //BP_Shelf
	{
		scope=2;
		displayName="Wooden Shelf";
		descriptionShort="A Convenient shelf where you can put your junk";
		model="Survivalists_Mods\gear\containers\Shelf.p3d";
		attachments[]=
		{
			"Vest",
			"Back",
			"Headgear",
			"Legs",
			"Body",
			"no", // wut?
			"Pistol",
			"Shoulder",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Gloves",
			"Feet",
			"Hips",
			"tripWireAttachment",
			"BP_gas_lamp"
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
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="Belongings";
				description="";
				attachmentSlots[]=
				{
					"Back",
					"Vest",
					"Body",
					"Legs",
					"Headgear",
					"no"
				};
				icon="body";
			};
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Shoulder",
					"Shoulder1",
					"Shoulder2",
					"Shoulder3"
				};
				icon="shoulderright";
			};
			class Accessories
			{
				name="Other";
				description="";
				attachmentSlots[]=
				{
					"Feet",
					"Gloves",
					"Hips"
				};
				icon="cat_common_cargo";
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
	};

  class SRP_GunShelf_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Gun Shelf Kit";
		descriptionShort="A Gun Shelf Kit";
		model="Survivalists_Mods\gear\containers\GunShelf.p3d";
	};

	class SRP_GunShelf: Container_Base // BP_GunShelf
	{
		scope=2;
		displayName="Gun Shelf";
		descriptionShort="A shelf for displaying guns.";
		model="Survivalists_Mods\gear\containers\GunShelf.p3d";
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
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Shoulder9"
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

  class SRP_PostBox_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Post Box Kit";
		descriptionShort="A Post Box Kit";
		model="Survivalists_Mods\gear\containers\BP_PostBox.p3d";
	};

  class SRP_PostBox: Container_Base // BP_post_box
	{
		scope=2;
		displayName="Post Box";
		descriptionShort="A box for mailing letters.";
		model="Survivalists_Mods\gear\containers\BP_PostBox.p3d";
		weight=1000;
		rotationFlags=16;
		itemSize[]={3,4};
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

  class SRP_PostBoxBig_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Big Post Box Kit";
		descriptionShort="A Big Post Box Kit";
		model="Survivalists_Mods\gear\containers\BP_PostBoxBig.p3d";
	};

	class SRP_PostBoxBig: Container_Base //BP_PostBoxBig
	{
		scope=2;
		displayName="Big Post Box";
		descriptionShort="A Very Large Post Box";
		model="Survivalists_Mods\gear\containers\BP_PostBoxBig.p3d";
		weight=1000;
		itemSize[]={4,8};
		rotationFlags=16;
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
					hitpoints=1000;
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

  class SRP_MilitaryCase_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Military Case Kit";
		descriptionShort="A Military Case Kit";
		model="Survivalists_Mods\gear\containers\mil_case.p3d";
	};

  class SRP_MilitaryCase: Container_Base // BP_mil_case
	{
		scope=2;
		displayName="Military Gun Case";
		descriptionShort="A case for storing guns";
		model="Survivalists_Mods\gear\containers\mil_case.p3d";
		attachments[]=
		{
			"Shoulder1",
			"Shoulder2"
		};
		weight=2000;
		itemSize[]={10,3};
		carveNavmesh=1;
		canBeDigged=0;
		itemBehaviour=2;
		physLayer="item_large";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\TX_Container_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\containers\data\tx_container.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={8,6};
			openable=0;
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
            {1.01,{"Survivalists_Mods\gear\containers\data\tx_container.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\containers\data\tx_container.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\containers\data\TX_Container_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\containers\data\TX_Container_damage.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\containers\data\TX_Container_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimationSources
		{
			class lid
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};

  class SRP_BedsideTable_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Bedside Table Kit";
		descriptionShort="A Bedside Table Kit";
		model="Survivalists_Mods\gear\containers\Tumba.p3d";
	};

  class SRP_BedsideTable: Container_Base  // BP_tumba
	{
		scope=2;
		displayName="Bedside Table";
		descriptionShort="Convenient and roomy cabinet. Almost not stained with blood.";
		model="Survivalists_Mods\gear\containers\Tumba.p3d";
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
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\containers\data\CL.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,12};
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
			class Lid1
			{
				source="user";
				component="Doors1";
				initPhase=1;
				initOpened=0.1;
				animPeriod=0.1;
			};
			class Lid2
			{
				source="user";
				component="Doors1";
				initPhase=0;
				initOpened=0.1;
				animPeriod=0.1;
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
};