class CfgPatches
{
	class SRP_Core_Fishing_Camping
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Camping",
      "SRP_Core_Fishing"
		};
	};
};
class CfgVehicles
{	
  class Inventory_Base;

  class SRP_Fishing_KitBase: Inventory_Base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Fishing Kit";
		descriptionShort="A wooden box that holds various items.";
		model="\DZ\gear\camping\wooden_case.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={7,5};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=2;
		heavyItem=1;
		weight=3000;
		itemBehaviour=2;
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_wooden_case_fishing_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
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

  class SRP_Tacklebox_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Tacklebox";
		descriptionShort="A tacklebox for various fishing accessories.";
		model="SRP\Core\SRP_Fishing\camping\srp_tacklebox.p3d";    
		itemBehaviour=1;
    useEntityHierarchy="true";
		physLayer="item_small";
		weight=5000;
		itemSize[]={6,5};
    attachments[]=
    {
      "SRP_FishingLure1",
      "SRP_FishingLure2",
      "SRP_FishingLure3",
      "SRP_FishingLure4",
      "SRP_FishingLure5",
      "SRP_FishingLure6",
      "SRP_FishingLure7",
      "SRP_FishingLure8",
      "SRP_FishingLure9",
      "SRP_FishingLure10",
      "SRP_FishingLure11",
      "SRP_FishingLure12",
      "SRP_FishingLure13",
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_tacklebox_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={6,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
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
						{1.0,{"SRP\Core\SRP_Fishing\camping\data\srp_tacklebox.rvmat"}},
						{0.69999999,{"SRP\Core\SRP_Fishing\camping\data\srp_tacklebox.rvmat"}},
						{0.5,{"SRP\Core\SRP_Fishing\camping\data\srp_tacklebox_damage.rvmat"}},
						{0.30000001,{"SRP\Core\SRP_Fishing\camping\data\srp_tacklebox_damage.rvmat"}},
						{0.0,{"SRP\Core\SRP_Fishing\camping\data\srp_tacklebox_destruct.rvmat"}}
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
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
  class SRP_Tacklebox_Basic: SRP_Tacklebox_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_tacklebox_co.paa"
		};
	};

// scope 0 (backwards compatibility with previous mod)
  class SRP_AquariumIntermediate_Kit: SRP_Fishing_KitBase
	{
		scope=0;
		displayName="Aquarium Starter Kit";
		descriptionShort="This kit is missing a few pieces, namely wood fashioned into a base and top then glass to encase the water.";
    attachments[]=
    {
      "SRP_Aquarium_Top",
      "SRP_Aquarium_Bot",
      "SRP_Aquarium_Glass1",
      "SRP_Aquarium_Glass2",
      "SRP_Aquarium_Glass3",
      "SRP_Aquarium_Glass4"      
    };
	};
  class SRP_AquariumIntermediate_Top: SRP_Fishing_KitBase
	{
		scope=0;
		displayName="Aquarium Top";
		descriptionShort="The top of an aquarium.";
    model="\dz\gear\food\food_can.p3d";
    inventorySlot[]=
    {
      "SRP_Aquarium_Top"
    };
	};
  class SRP_AquariumIntermediate_Bot: SRP_Fishing_KitBase
	{
		scope=0;
		displayName="Aquarium Bottom";
		descriptionShort="The foundation of an aquarium";
    model="\dz\gear\food\food_can.p3d";
    inventorySlot[]=
    {
      "SRP_Aquarium_Bot"
    };
	};
  class SRP_AquariumIntermediate_Glass: SRP_Fishing_KitBase
	{
		scope=0;
		displayName="Aquarium Glass";
		descriptionShort="A small sheet of glass";
    model="\dz\gear\food\food_can.p3d";
    inventorySlot[]=
    {
      "SRP_Aquarium_Glass1",
      "SRP_Aquarium_Glass2",
      "SRP_Aquarium_Glass3",
      "SRP_Aquarium_Glass4",
    };
	};
  class SRP_WoodenFishHangerIntermediate_Kit: SRP_Fishing_KitBase
	{
		scope=0;
		displayName="Wooden Fish Hanger Starter Kit";
		descriptionShort="The beginnings of a large display for fish. Gather appropriate materials and apply force.";
    attachments[]=
    {
			"Material_FPole_WoodenLog2",
			"MetalWire",
			"Material_MetalWire",
			"Rope",
			"Material_FPole_Rope",
			"Material_Shelter_Rope",
      "Material_FPole_Nails"
    };
	};
  class SRP_WoodenFishRackIntermediate_Kit: SRP_Fishing_KitBase
	{
		scope=0;
		displayName="Wooden Fish Rack Starter Kit";
		descriptionShort="The beginnings of a rack display for fish. Gather appropriate materials and apply force.";
    attachments[]=
    {
			"Material_L2_WoodenLogs",
			"MetalWire",
			"Material_MetalWire",
			"Rope",
			"Material_FPole_Rope",
			"Material_Shelter_Rope",
      "Material_FPole_Nails"
    };
	};
// end

  class SRP_Aquarium_Kit: SRP_Fishing_KitBase
	{
		scope=2;
		displayName="Aquarium Kit";
		descriptionShort="This kit contains the required materials to build a large fish display.";
	};

  class SRP_Aquarium_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Aquarium";
		descriptionShort="An old world aquarium.";
		model="SRP\Core\SRP_Fishing\camping\srp_aquarium.p3d";    
		itemBehaviour=0;
    carveNavmesh=1;
    useEntityHierarchy="true";
		physLayer="item_large";		
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "SRP_Fish_Small1",
      "SRP_Fish_Small2",
      "SRP_Fish_Small3",
      "SRP_Fish_Small4",
      "SRP_Fish_Small5",
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_aquarium_ca.paa"
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
						{1.0,{"SRP\Core\SRP_Fishing\camping\data\srp_aquarium.rvmat"}},
						{0.69999999,{"SRP\Core\SRP_Fishing\camping\data\srp_aquarium.rvmat"}},
						{0.5,{"SRP\Core\SRP_Fishing\camping\data\srp_aquarium_damage.rvmat"}},
						{0.30000001,{"SRP\Core\SRP_Fishing\camping\data\srp_aquarium_damage.rvmat"}},
						{0.0,{"SRP\Core\SRP_Fishing\camping\data\srp_aquarium_destruct.rvmat"}}
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
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
  class SRP_Aquarium_Basic: SRP_Aquarium_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_aquarium_ca.paa"
		};
	};

  class SRP_WoodenFishHanger_Kit: SRP_Fishing_KitBase
	{
		scope=2;
		displayName="Wooden Fish Display Kit";
		descriptionShort="This kit contains the required materials to build a large fish display.";
	};
  class SRP_WoodenFishHanger_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Wooden Fish Post";
		descriptionShort="A wooden post to hang a prize fish.";
		model="SRP\Core\SRP_Fishing\camping\srp_woodenfishhanger.p3d";    
		itemBehaviour=0;
    useEntityHierarchy="true";
		physLayer="item_large";		
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "SRP_Fish_Small1",
      "SRP_Fish_Small2",
      "SRP_Fish_Small3",
      "SRP_Fish_Small4",
      "SRP_Fish_Large1"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishhanger_co.paa"
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
						{1.0,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishhanger.rvmat"}},
						{0.69999999,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishhanger.rvmat"}},
						{0.5,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishhanger_damage.rvmat"}},
						{0.30000001,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishhanger_damage.rvmat"}},
						{0.0,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishhanger_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_WoodenFishHanger_Basic: SRP_WoodenFishHanger_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishhanger_co.paa"
		};
	};
  
  class SRP_WoodenFishRack_Kit: SRP_Fishing_KitBase
	{
		scope=2;
		displayName="Wooden Fish Rack Kit";
		descriptionShort="This kit contains the required materials to build a large fish rack.";
	};
  class SRP_WoodenFishRack_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Wooden Fish Rack";
		descriptionShort="A wooden rack to hang a several fish.";
		model="SRP\Core\SRP_Fishing\camping\srp_woodenfishrack.p3d";    
		itemBehaviour=0;
    useEntityHierarchy="true";
		physLayer="item_large";		
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "SRP_Fish_Small1",
      "SRP_Fish_Small2",
      "SRP_Fish_Small3",
      "SRP_Fish_Small4",
      "SRP_Fish_Small5",
      "SRP_Fish_Small6",
      "SRP_Fish_Small7",
      "SRP_Fish_Small8",
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishrack_co.paa"
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
						{1.0,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishrack.rvmat"}},
						{0.69999999,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishrack.rvmat"}},
						{0.5,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishrack_damage.rvmat"}},
						{0.30000001,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishrack_damage.rvmat"}},
						{0.0,{"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishrack_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_WoodenFishRack_Basic: SRP_WoodenFishRack_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Fishing\camping\data\srp_woodenfishrack_co.paa"
		};
	};

  class SRP_CanOfWorms_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Can of Worms";
		descriptionShort="A whole can of worms. Wriggly.";
		model="\dz\gear\food\food_can.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={2,2};
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=50;
    varQuantityDestroyOnMin=1;
		rotationFlags=63;
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
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
  class SRP_CanOfWorms_Basic: SRP_CanOfWorms_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
  };
  class SRP_CanOfWorms_Dicks: SRP_CanOfWorms_ColorBase
	{
		scope=2;
		displayName="Dick's - Can of Worms";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
  };
};