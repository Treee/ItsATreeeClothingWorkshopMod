class CfgPatches
{
	class Survivalists_Building_Structures_Residential
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Structures_Residential",
      "Survivalists_Mods_Gear_Crafting"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;

  class SRP_Building_KitBase;
// ---------------------PRE FABS
  class SRP_PrefabHouse_Base: HouseNoDestruct
	{
		scope=0;
		displayName="BaseHouse";
		descriptionShort="Base House";
		model="Survivalists_Building\structures\residential\srp_woodenouthouse_full.p3d";
		carveNavmesh=1;
		weight=500;
    storageCategory=1;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		physLayer="item_large";
		// rotationFlags=2;
    minPlacingDist=5;
	};

  class SRP_Structures_WoodenHouseOuthouse_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Wooden Outhouse kit";
		descriptionShort="A kit for building a place to do the most important business.";
    projectionTypename="SRP_Structures_WoodenHouseOuthouse";
	};
  class SRP_Structures_WoodenHouseOuthouse: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_woodenouthouse_full.p3d";
	};
  class SRP_Structures_RussianHouse_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Russian House Kit";
		descriptionShort="The kit for a house";
    projectionTypename="SRP_Structures_RussianHouse";
	};
  class SRP_Structures_RussianHouse: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_russianhouse.p3d";
	};
  class SRP_Structures_RussianHouse1_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Russian House Kit - Variant 1";
		descriptionShort="The kit for a house";
    projectionTypename="SRP_Structures_RussianHouse1";
	};
  class SRP_Structures_RussianHouse1: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_russianhouse1.p3d";
	};
  class SRP_Structures_WoodenHouseSingleRoom_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Wooden House Kit - Single Room";
		descriptionShort="The kit for a house";
    projectionTypename="SRP_Structures_WoodenHouseSingleRoom";
	};
  class SRP_Structures_WoodenHouseSingleRoom: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_woodenhousesingleroom.p3d";
	};
  class SRP_Structures_WoodenBarn_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Wooden Barn Kit";
		descriptionShort="The kit for a barn";
    projectionTypename="SRP_Structures_WoodenBarn";
	};
  class SRP_Structures_WoodenBarn: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_woodenbarn.p3d";
	};
  class SRP_Structures_WoodenShanty_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Wooden Shanty Kit";
		descriptionShort="The kit for a shanty";
    projectionTypename="SRP_Structures_WoodenShanty";
	};
  class SRP_Structures_WoodenShanty: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_woodenshanty.p3d";
	};
  class SRP_Structures_WoodenShed_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Wooden Shed Kit";
		descriptionShort="The kit for a Shed";
    projectionTypename="SRP_Structures_WoodenShed";
	};
  class SRP_Structures_WoodenShed: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_woodenshed.p3d";
	};
  class Land_srp_wooden_2floor_tavern_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Wooden Tavern 2 Floor Kit";
		descriptionShort="The kit for a wooden tavern with 2 floors and multiple windows";
    projectionTypename="Land_srp_wooden_2floor_tavern";
	};
  class Land_srp_wooden_2floor_tavern: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_wooden_2floor_tavern.p3d";
    class Doors
		{
			class window1f_1
			{
				displayName="Window 1 Floor 1";
				component="window1f_1";
				soundPos="window1f_1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window1f_2
			{
				displayName="Window 1 Floor 1";
				component="window1f_2";
				soundPos="window1f_2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window1f_3
			{
				displayName="Window 1 Floor 1";
				component="window1f_3";
				soundPos="window1f_3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window1f_4
			{
				displayName="Window 1 Floor 1";
				component="window1f_4";
				soundPos="window1f_4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window2f_1
			{
				displayName="Window 1 Floor 2";
				component="window2f_1";
				soundPos="window2f_1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window2f_2
			{
				displayName="Window 1 Floor 1";
				component="window2f_2";
				soundPos="window2f_2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window2f_3
			{
				displayName="Window 1 Floor 1";
				component="window2f_3";
				soundPos="window2f_3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window2f_4
			{
				displayName="Window 1 Floor 1";
				component="window2f_4";
				soundPos="window2f_4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window2f_5
			{
				displayName="Window 1 Floor 1";
				component="window2f_5";
				soundPos="window2f_5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window3f_1
			{
				displayName="Window 1 Floor 1";
				component="window3f_1";
				soundPos="window3f_1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
      class window3f_2
			{
				displayName="Window 1 Floor 1";
				component="window3f_2";
				soundPos="window3f_2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
		};
	};


  class Land_srp_treehouse_circular_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Circular Wooden Tree House Kit - 1 Door";
		descriptionShort="The kit for a wooden tree house with a single entry point.";
    projectionTypename="Land_srp_treehouse_circular";
	};
  class Land_srp_treehouse_circular: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_treehouse_circular.p3d";
	};
  class Land_srp_treehouse_box_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Cubed Wooden Tree House Kit - 1 Door";
		descriptionShort="The kit for a wooden tree house with a single entry point.";
    projectionTypename="Land_srp_treehouse_box";
	};
  class Land_srp_treehouse_box: SRP_PrefabHouse_Base
	{
		scope=2;
		// model="Survivalists_Building\structures\residential\srp_treehouse_box.p3d";
		model="Survivalists_Building\structures\residential\srp_treehouse_boxv2.p3d";
    minPlacingDist=20;
	};
  class Land_srp_treehouse_doubleplatform_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Wooden Tree House Kit - 2 Platform";
		descriptionShort="The kit for a wooden tree house with two flat areas.";
    projectionTypename="Land_srp_treehouse_doubleplatform";
	};
  class Land_srp_treehouse_doubleplatform: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_treehouse_doubleplatform.p3d";
	};
  class Land_srp_treehouse_tripleplatform_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Wooden Tree House Kit - 3 Platform";
		descriptionShort="The kit for a wooden tree house with three flat areas.";
    projectionTypename="Land_srp_treehouse_tripleplatform";
	};
  class Land_srp_treehouse_tripleplatform: SRP_PrefabHouse_Base
	{
		scope=2;
		model="Survivalists_Building\structures\residential\srp_treehouse_tripleplatform.p3d";
	};

  class Land_srp_constructionmaterials_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Construction Materials Kit";
		descriptionShort="The kit for a caravan to store building materials.";
    projectionTypename="Land_srp_constructionmaterials";
	};
  class Land_srp_constructionmaterials: SRP_PrefabHouse_Base
	{
		scope=2;
    displayName="Construction Office";
    descriptionShort="A localized storage container that holds materials for a large build.";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\industrial\data\srp_shippingcontainer_construction_co.paa"};    
    model="Survivalists_Building\structures\industrial\srp_shippingcontainer_20ft.p3d";
    attachments[]=
    {
      "SRP_Construction_WoodenLogs",
      "SRP_Construction_WoodenPlanks",
      "SRP_Construction_Stone",
      "SRP_Construction_Mortar",
      "SRP_Construction_Cement",
      "SRP_Construction_MetalPlate",
      "SRP_Construction_Nails",
      "SRP_Construction_MetalWire",
      "SRP_Construction_Pipe",
      "SRP_Construction_Epoxy",
      "SRP_Construction_Fabric",
      "SRP_Construction_Rope"
    };
    class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="doorstwin1";
				soundPos="doorstwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
			};
      class DoorsTwin2
			{
				displayName="door Twin2";
				component="doorstwin2";
				soundPos="doorstwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
			};
		};
	};

// ---------------------DOORS (Scope 0 for now)
  class SRP_PrefabDoor_Base: HouseNoDestruct
	{
		scope=0;
		displayName="Door";
		descriptionShort="A door that can take a codelock";
		model="Survivalists_Building\structures\residential\srp_russianhousedoor.p3d";
		carveNavmesh=1;
		weight=500;
    storageCategory=1;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		physLayer="item_large";
		// rotationFlags=2;
    minPlacingDist=5;
    handheld="false";
    attachments[]=
		{
			"Att_CombinationLock"
		};
    class GUIInventoryAttachmentsProps
		{
			class Attachments
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Attachments";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="set:dayz_inventory image:cat_bb_attachments";
				selection="wall";
			};
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
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
				class Melee
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
    class AnimationSources
		{
			class AnimRotate
			{
				source="user";
				component="selection_door";
				animPeriod=1;
				initPhase=0;
				initOpened=0.5;
			};
      class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Wall_Gate_Rotate: AnimRotate
			{
			};
		};
	};
  // class SRP_Structures_HouseDoor: Fence
	// {
	// 	scope=0;
	// 	displayName="Door";
	// 	descriptionShort="A door.";
	// 	model="Survivalists_Building\structures\residential\srp_russianhousedoor.p3d";
	// 	carveNavmesh=1;
	// 	weight=500;
	// 	itemSize[]={15,10};
	// 	physLayer="item_large";
	// 	rotationFlags=2;
  //   minPlacingDist=5;
  //   handheld="false";
  //   attachments[]=
	// 	{
	// 		"Att_CombinationLock"
	// 	};
  //   class GUIInventoryAttachmentsProps
	// 	{
	// 		class Attachments
	// 		{
	// 			name="$STR_CfgVehicles_Fence_Att_Category_Attachments";
	// 			description="";
	// 			attachmentSlots[]=
	// 			{
	// 				"Att_CombinationLock"
	// 			};
	// 			icon="set:dayz_inventory image:cat_bb_attachments";
	// 			selection="wall";
	// 		};
	// 	};
  //   class DamageSystem
	// 	{
	// 		class GlobalHealth
	// 		{
	// 			class Health
	// 			{
	// 				hitpoints=1000;
	// 			};
	// 		};
	// 		class GlobalArmor
	// 		{
	// 			class Projectile
	// 			{
	// 				class Health
	// 				{
	// 					damage=0;
	// 				};
	// 				class Blood
	// 				{
	// 					damage=0;
	// 				};
	// 				class Shock
	// 				{
	// 					damage=0;
	// 				};
	// 			};
	// 			class Melee
	// 			{
	// 				class Health
	// 				{
	// 					damage=0;
	// 				};
	// 				class Blood
	// 				{
	// 					damage=0;
	// 				};
	// 				class Shock
	// 				{
	// 					damage=0;
	// 				};
	// 			};
	// 			class FragGrenade
	// 			{
	// 				class Health
	// 				{
	// 					damage=0;
	// 				};
	// 				class Blood
	// 				{
	// 					damage=0;
	// 				};
	// 				class Shock
	// 				{
	// 					damage=0;
	// 				};
	// 			};
	// 		};
	// 	};
  //   class AnimationSources
	// 	{
	// 		class AnimRotate
	// 		{
	// 			source="user";
	// 			component="selection_door";
	// 			animPeriod=1;
	// 			initPhase=0;
	// 			initOpened=0.5;
	// 		};
  //     class AnimSourceHidden
	// 		{
	// 			source="user";
	// 			animPeriod=0.0099999998;
	// 			initPhase=1;
	// 		};
	// 		class Wall_Gate_Rotate: AnimRotate
	// 		{
	// 		};
	// 	};
	// };
  class SRP_Structures_RussianHouseDoor_Kit: SRP_Building_KitBase
	{
		scope=0;
		displayName="Russian House Door Kit";
		descriptionShort="The kit for a door";
    projectionTypename="SRP_Structures_RussianHouseDoor";
	};
  class SRP_Structures_RussianHouseDoor: SRP_PrefabDoor_Base
	{
		scope=0;
		model="Survivalists_Building\structures\residential\srp_russianhousedoor.p3d";
	};
  class SRP_Structures_RussianHouse1Door_Kit: SRP_Building_KitBase
	{
		scope=0;
		displayName="Russian House Door Kit - Variant 1";
		descriptionShort="The kit for a door";
    projectionTypename="SRP_Structures_RussianHouse1Door";
	};
  class SRP_Structures_RussianHouse1Door: SRP_PrefabDoor_Base
	{
		scope=0;
		model="Survivalists_Building\structures\residential\srp_russianhouse1door.p3d";
	};
  class SRP_Structures_WoodenShedDoor_Kit: SRP_Building_KitBase
	{
		scope=0;
		displayName="Wooden Shed Door Kit";
		descriptionShort="The kit for a door";
    projectionTypename="SRP_Structures_WoodenShedDoor";
	};
  class SRP_Structures_WoodenShedDoor: SRP_PrefabDoor_Base
	{
		scope=0;
		model="Survivalists_Building\structures\residential\srp_woodensheddoor.p3d";
	};
};