class CfgPatches
{
	class Survivalists_Mods_Structures_Furniture
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Structures",
      "DZ_Structures_Furniture",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;
  class Container_Base;

  class SRP_KitBase;

  class land_srp_saloon_counter: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\furniture\SRP_BarCounter.p3d";
	};

  class Land_srp_furniture_punchingbag: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\furniture\srp_punchingbag.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\furniture\data\srp_punchingbag_co.paa"
		};
	};

  class SRP_Furniture_Gazebo_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Gazebo Kit";
		descriptionShort="A placeable gazebo kit!";
	};
  class SRP_Furniture_Gazebo: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Mods\structures\furniture\srp_gazebo.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\furniture\data\srp_gazeebo_co.paa"
		};
	};

  class SRP_Furniture_WitchTable: Container_Base  // new
	{
		scope=2;
		displayName="Tarot Table";
		descriptionShort="A table used to display tarot cards";
    model="Survivalists_Mods\structures\furniture\srp_witchtable.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\furniture\data\srp_witchtable_co.paa"
		};
    attachments[]=
		{
			"CardHand1",
			"CardHand2",
			"CardHand3",
			"CardHand4",
			"CardHand5",
		};		
    carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
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

  class SRP_Furniture_BarCounter_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Bar Counter Kit";
		descriptionShort="A placeable bar counter kit!";
	};

  class SRP_Furniture_BarCounter: Container_Base  // new
	{
		scope=2;
		displayName="Bar Counter";
		descriptionShort="Everything you need to run a bar!";
		model="Survivalists_Mods\structures\furniture\SRP_BarCounter.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
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
					hitpoints=1000000;
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

	class land_srp_saloon_sofal: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\furniture\SRP_BarSofaL.p3d";
	};

  class SRP_Furniture_Sofa_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Bar Sofa Kit";
		descriptionShort="A placeable bar sofa kit!";
	};

  class SRP_Furniture_Sofa: Container_Base  // new
	{
		scope=2;
		displayName="Sofa";
		descriptionShort="You are the sofa king!";
		model="Survivalists_Mods\structures\furniture\SRP_BarSofaL.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
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
					hitpoints=1000000;
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

  class SRP_Furniture_Sofa_Modern_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Modern Sofa Kit";
		descriptionShort="A placeable sofa kit!";
	};

  class SRP_Furniture_Sofa_Modern: Container_Base  // new
	{
		scope=2;
		displayName="Sofa";
		descriptionShort="You are the sofa king!";
		model="Survivalists_Mods\structures\furniture\srp_modernsofa.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
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
					hitpoints=1000000;
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

  class SRP_Furniture_Sofa_Old_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Old Sofa Kit";
		descriptionShort="A placeable sofa kit!";
	};

  class SRP_Furniture_Sofa_Old: Container_Base  // new
	{
		scope=2;
		displayName="Sofa";
		descriptionShort="You are the sofa king!";
		model="Survivalists_Mods\structures\furniture\srp_oldsofa.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
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
					hitpoints=1000000;
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

  class SRP_Furniture_OldWoodenChair_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Old Wooden Chair Kit";
		descriptionShort="A placeable chair kit!";
	};

  class SRP_Furniture_OldWoodenChair: Container_Base  // new
	{
		scope=2;
		displayName="Chair";
		descriptionShort="Four legs and a seat.";
		model="Survivalists_Mods\structures\furniture\srp_chairoldwood.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
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

  class SRP_Furniture_WoodenChair_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Wooden Chair Kit";
		descriptionShort="A placeable chair kit!";
	};

  class SRP_Furniture_WoodenChair: Container_Base  // new
	{
		scope=2;
		displayName="Chair";
		descriptionShort="Four legs and a seat.";
		model="Survivalists_Mods\structures\furniture\srp_chairwood.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
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

  class land_srp_saloon_barrel: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\furniture\SRP_BarBarrel.p3d";
	};

  class SRP_Furniture_Barrel_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Barrel Kit";
		descriptionShort="A placeable barrel kit!";
	};

  class SRP_Furniture_Barrel: Container_Base  // new
	{
		scope=2;
		displayName="Wooden Barrel";
		descriptionShort="This is a barrel. Made of wood.";
		model="Survivalists_Mods\structures\furniture\SRP_BarBarrel.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
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
					hitpoints=1000000;
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

  class land_srp_saloon_barreltable: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\furniture\SRP_BarBarrelTable.p3d";
	};

  class SRP_Furniture_BarrelTable_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Barrel Table Kit";
		descriptionShort="A placeable barrel table kit!";
	};

	class SRP_Furniture_BarrelTable: Container_Base  // new
	{
		scope=2;
		displayName="Barrel Table";
		descriptionShort="This is a table... You put things on it?";
		model="Survivalists_Mods\structures\furniture\SRP_BarBarrelTable.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
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
					hitpoints=1000000;
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

	class SRP_Furniture_WoodenTable_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Wooden Table Kit";
		descriptionShort="A placeable outdoor table kit!";
	};
	class SRP_Furniture_WoodenTable: Container_Base  // SRP_wooden_table
	{
		scope=2;
		displayName="Wooden Table";
		descriptionShort="This is a table... You put things on it?";
		model="Survivalists_Mods\structures\furniture\srp_table2.p3d";
		attachments[]=
		{
			"Melee",
			"Back",
			"SRP_Lantern"
		};
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class Cargo
		{
			itemsCargoSize[]={5,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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

  class SRP_Furniture_WoodenStairs_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Wooden Stairs Kit";
		descriptionShort="A placeable stairs kit!";
	};
	class SRP_Furniture_WoodenStairs: Container_Base  // new
	{
		scope=2;
		displayName="Wooden Stairs";
		descriptionShort="These are stairs. Where do they go?";
		model="Survivalists_Mods\structures\furniture\srp_stairswood.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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

  class SRP_Furniture_LogStump_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Log Stump Kit";
		descriptionShort="A placeable log stump kit!";
	};
  class SRP_Furniture_LogStump: Container_Base  // new
	{
		scope=2;
		displayName="Log Stump";
		descriptionShort="Stump for a seat.";
		model="Survivalists_Mods\structures\furniture\srp_logstump.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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

  class SRP_Furniture_LogBenchSmall_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Log Bench Kit - Small";
		descriptionShort="A placeable log bench kit!";
	};
  class SRP_Furniture_LogBenchSmall: Container_Base  // new
	{
		scope=2;
		displayName="Log Bench";
		descriptionShort="A crudely built log bench.";
		model="Survivalists_Mods\structures\furniture\srp_logbenchold.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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

  class SRP_Furniture_WoodBenchSmall_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Wood Bench Kit - Small";
		descriptionShort="A placeable weed bench kit!";
	};
  class SRP_Furniture_WoodBenchSmall: Container_Base  // new
	{
		scope=2;
		displayName="Log Bench";
		descriptionShort="A crudely built log bench.";
		model="Survivalists_Mods\structures\furniture\srp_logbenchwood.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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

  class SRP_Furniture_WoodBenchSlim_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Wood Bench Kit - Slim";
		descriptionShort="A placeable wood bench kit!";
	};
  class SRP_Furniture_WoodBenchSlim: Container_Base  // new
	{
		scope=2;
		displayName="Bench";
		descriptionShort="A crudely built wood bench.";
		model="Survivalists_Mods\structures\furniture\srp_woodenbenchslim.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
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

  class SRP_Furniture_PileOfPlanks: Container_Base  // new
	{
		scope=2;
		displayName="Planks";
		descriptionShort="A pile of planks.";
		model="Survivalists_Mods\structures\furniture\srp_plankpile.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
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

  class SRP_Furniture_SmallLogPile: Container_Base  // new
	{
		scope=2;
		displayName="Log Pile";
    descriptionShort="A small pile of lumber used for constructing various things like stairs and platforms.";
    model="Survivalists_Mods\gear\containers\logpilesmall.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
    itemsCargoSize[]={1,1};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
    attachments[]=
		{
			"Bark",
      "WoodenStick",
      "Firewood",
      "Material_WoodenLogs"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
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

  class SRP_Furniture_LargeLogPile: Container_Base  // new
	{
		scope=2;
		displayName="Log Pile";
    descriptionShort="A pile of lumber used for constructing various things like stairs and platforms.";
    model="Survivalists_Mods\gear\containers\logpilelarge.p3d";
		carveNavmesh=1;
		itemBehaviour=2;
		weight=3000;
		itemSize[]={15,10};
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
    itemsCargoSize[]={1,1};
    attachments[]=
		{
			"Bark",
      "WoodenStick",
      "Firewood",
      "Material_WoodenLogs",
      "Material_L1_WoodenLogs"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
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

	class SRP_GChair_Kit: SRP_KitBase  // SRP_GChairKit
	{
		scope=2;
		displayName="Outdoor Chair Kit";
		descriptionShort="A placeable outdoor chair kit!";
	};
	class SRP_GChair: Container_Base
	{
		scope=2;
		displayName="Outdoor Chair";
		descriptionShort="Stained but cozy garden chair";
		model="Survivalists_Mods\structures\furniture\SRP_GChair.p3d";
		carveNavmesh=1;
		weight=3000;
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class Cargo
		{
			itemsCargoSize[]={5,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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

  class SRP_GChairHigh_Kit: SRP_KitBase  // SRP_GChairHighKit
	{
		scope=2;
		displayName="Outdoor Chair Kit";
		descriptionShort="A placeable outdoor chair kit!";
	};
	class SRP_GChairHigh: Container_Base
	{
		scope=2;
		displayName="Outdoor Chair";
		descriptionShort="Stained but cozy garden chair";
		model="Survivalists_Mods\structures\furniture\SRP_GChairHigh.p3d";
		carveNavmesh=1;
		weight=3000;
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class Cargo
		{
			itemsCargoSize[]={5,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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
	
  class SRP_GOutdoorTable_Kit: SRP_KitBase  // SRP_GOutdoorTableKit
	{
		scope=2;
		displayName="Outdoor Table Kit";
		descriptionShort="A placeable outdoor table kit!";
	};
	class SRP_GOutdoorTable: Container_Base
	{
		scope=2;
		displayName="Outdoor Table";
		descriptionShort="A table used for garden things and stuff";
		model="Survivalists_Mods\structures\furniture\SRP_GTable2.p3d";
		attachments[]=
		{
			"Melee",
			"SRP_Lantern"
		};
		carveNavmesh=1;
		weight=3000;
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class Cargo
		{
			itemsCargoSize[]={5,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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

	class SRP_GOutdoorTableUmbrella_Kit: SRP_KitBase  // SRP_GOutdoorTableUmbKit
	{
		scope=2;
		displayName="Outdoor Table Kit With Umbrella";
		descriptionShort="A placeable outdoor table kit!";
	};

  class SRP_GOutdoorTableUmbrella: Container_Base  // SRP_GOutdoorTableUmb
	{
		scope=2;
		displayName="Outdoor Table";
		descriptionShort="A table used for garden things and stuff... With a Parasol";
		model="Survivalists_Mods\structures\furniture\SRP_GTableUmbreller.p3d";
		attachments[]=
		{
			"Melee",
			"SRP_Lantern"
		};
		carveNavmesh=1;
		weight=3000;
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class Cargo
		{
			itemsCargoSize[]={5,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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
	
  class SRP_Umbrella_Kit: SRP_KitBase  // SRP_UmbrellerKit
	{
		scope=2;
		displayName="Parasol Kit";
		descriptionShort="A placeable Parasol kit!";
	};

	class SRP_Umbrella: Container_Base  // SRP_Umbreller
	{
		scope=2;
		displayName="Parasol";
		descriptionShort="A parasol made for garden use";
		model="Survivalists_Mods\structures\furniture\SRP_Umbreller.p3d";
		carveNavmesh=1;
		weight=3000;
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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


  class SRP_BarricadeMetal_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Metal Barricade Kit";
		descriptionShort="A placeable metal Barricade kit!";
	};

	class SRP_BarricadeMetal: Container_Base  // new
	{
		scope=2;
		displayName="Metal Barricade";
		descriptionShort="A metal barricade meant to keep things out.";
		model="Survivalists_Mods\structures\furniture\metalspikewall.p3d";
		carveNavmesh=1;
		weight=3000;
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
    itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
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


  class SRP_WoodenBench_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden Bench Kit";
		descriptionShort="A placeable wooden bench kit!";
	};

  class SRP_WoodenBench: Container_Base  // new
	{
		scope=2;
		displayName="Bench";
		descriptionShort="A wooden bench meant to sit on.";
		model="Survivalists_Mods\structures\furniture\srp_woodenbench.p3d";
		carveNavmesh=1;
		weight=3000;
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=2;
    itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
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