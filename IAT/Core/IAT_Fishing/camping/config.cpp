class CfgPatches
{
	class IAT_Fishing_Camping
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Camping",
      "IAT_Fishing",
		};
	};
};
class CfgVehicles
{	
  class Inventory_Base;

  class IAT_Fishing_KitBase: Inventory_Base
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
		// hologramMaterial="wooden_case";
		// hologramMaterialPath="dz\gear\camping\data";
		projectionTypename="WoodenCrate";
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_wooden_case_fishing_co.paa"
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

  class IAT_Fishing_Tacklebox_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Tacklebox";
		descriptionShort="A tacklebox for various fishing accessories.";
		model="IAT\Core\IAT_Fishing\camping\iat_tacklebox.p3d";    
		itemBehaviour=1;
    useEntityHierarchy="true";
		physLayer="item_small";
		weight=5000;
		itemSize[]={6,5};
    attachments[]=
    {
      "IAT_FishingLure1",
      "IAT_FishingLure2",
      "IAT_FishingLure3",
      "IAT_FishingLure4",
      "IAT_FishingLure5",
      "IAT_FishingLure6",
      "IAT_FishingLure7",
      "IAT_FishingLure8",
      "IAT_FishingLure9",
      "IAT_FishingLure10",
      "IAT_FishingLure11",
      "IAT_FishingLure12",
      "IAT_FishingLure13",
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_tacklebox_co.paa"
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
						{1.0,{"IAT\Core\IAT_Fishing\camping\data\iat_tacklebox.rvmat"}},
						{0.69999999,{"IAT\Core\IAT_Fishing\camping\data\iat_tacklebox.rvmat"}},
						{0.5,{"IAT\Core\IAT_Fishing\camping\data\iat_tacklebox_damage.rvmat"}},
						{0.30000001,{"IAT\Core\IAT_Fishing\camping\data\iat_tacklebox_damage.rvmat"}},
						{0.0,{"IAT\Core\IAT_Fishing\camping\data\iat_tacklebox_destruct.rvmat"}}
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
  class IAT_Fishing_Tacklebox_Basic: IAT_Fishing_Tacklebox_ColorBase
	{
		scope=2;
    color="basic";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_tacklebox_co.paa"
		};
	};
  class IAT_Fishing_Aquarium_Kit: IAT_Fishing_KitBase
	{
		scope=2;
		displayName="Aquarium Kit";
		descriptionShort="This kit contains the required materials to build a large fish display.";
    projectionTypename="IAT_Fishing_Aquarium_Basic";
	};
  class IAT_Fishing_Aquarium_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Aquarium";
		descriptionShort="An old world aquarium.";
		model="IAT\Core\IAT_Fishing\camping\iat_aquarium.p3d";    
		itemBehaviour=0;
    carveNavmesh=1;
    useEntityHierarchy="true";
		physLayer="item_large";		
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "IAT_Fish_Small1",
      "IAT_Fish_Small2",
      "IAT_Fish_Small3",
      "IAT_Fish_Small4",
      "IAT_Fish_Small5",
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_aquarium_ca.paa"
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
						{1.0,{"IAT\Core\IAT_Fishing\camping\data\iat_aquarium.rvmat"}},
						{0.69999999,{"IAT\Core\IAT_Fishing\camping\data\iat_aquarium.rvmat"}},
						{0.5,{"IAT\Core\IAT_Fishing\camping\data\iat_aquarium_damage.rvmat"}},
						{0.30000001,{"IAT\Core\IAT_Fishing\camping\data\iat_aquarium_damage.rvmat"}},
						{0.0,{"IAT\Core\IAT_Fishing\camping\data\iat_aquarium_destruct.rvmat"}}
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
  class IAT_Fishing_Aquarium_Basic: IAT_Fishing_Aquarium_ColorBase
	{
		scope=2;
    color="basic";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_aquarium_ca.paa"
		};
	};

  class IAT_Fishing_WoodenFishHanger_Kit: IAT_Fishing_KitBase
	{
		scope=2;
		displayName="Wooden Fish Display Kit";
		descriptionShort="This kit contains the required materials to build a large fish display.";
    projectionTypename="IAT_Fishing_WoodenFishHanger_Basic";
	};
  class IAT_Fishing_WoodenFishHanger_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Wooden Fish Post";
		descriptionShort="A wooden post to hang a prize fish.";
		model="IAT\Core\IAT_Fishing\camping\iat_woodenfishhanger.p3d";    
		itemBehaviour=0;
    useEntityHierarchy="true";
		physLayer="item_large";		
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "IAT_Fish_Small1",
      "IAT_Fish_Small2",
      "IAT_Fish_Small3",
      "IAT_Fish_Small4",
      "IAT_Fish_Large1"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishhanger_co.paa"
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
						{1.0,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishhanger.rvmat"}},
						{0.69999999,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishhanger.rvmat"}},
						{0.5,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishhanger_damage.rvmat"}},
						{0.30000001,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishhanger_damage.rvmat"}},
						{0.0,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishhanger_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class IAT_Fishing_WoodenFishHanger_Basic: IAT_Fishing_WoodenFishHanger_ColorBase
	{
		scope=2;
    color="basic";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishhanger_co.paa"
		};
	};
  
  class IAT_Fishing_WoodenFishRack_Kit: IAT_Fishing_KitBase
	{
		scope=2;
		displayName="Wooden Fish Rack Kit";
		descriptionShort="This kit contains the required materials to build a large fish rack.";
    projectionTypename="IAT_Fishing_WoodenFishRack_Basic";
	};
  class IAT_Fishing_WoodenFishRack_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Wooden Fish Rack";
		descriptionShort="A wooden rack to hang a several fish.";
		model="IAT\Core\IAT_Fishing\camping\iat_woodenfishrack.p3d";    
		itemBehaviour=0;
    useEntityHierarchy="true";
		physLayer="item_large";		
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "IAT_Fish_Small1",
      "IAT_Fish_Small2",
      "IAT_Fish_Small3",
      "IAT_Fish_Small4",
      "IAT_Fish_Small5",
      "IAT_Fish_Small6",
      "IAT_Fish_Small7",
      "IAT_Fish_Small8",
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishrack_co.paa"
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
						{1.0,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishrack.rvmat"}},
						{0.69999999,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishrack.rvmat"}},
						{0.5,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishrack_damage.rvmat"}},
						{0.30000001,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishrack_damage.rvmat"}},
						{0.0,{"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishrack_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class IAT_Fishing_WoodenFishRack_Basic: IAT_Fishing_WoodenFishRack_ColorBase
	{
		scope=2;
    color="basic";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\camping\data\iat_woodenfishrack_co.paa"
		};
	};

  class IAT_Fishing_CanOfWorms_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Can of Worms";
		descriptionShort="A whole can of worms. Wriggly.";
		model="\dz\gear\food\food_can.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={2,2};
		rotationFlags=63;
    attachments[]={"IAT_WormCan"};
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
  class IAT_Fishing_CanOfWorms_Basic: IAT_Fishing_CanOfWorms_ColorBase
	{
		scope=2;
    color="basic";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
  };
  class IAT_Fishing_CanOfWorms_Dicks: IAT_Fishing_CanOfWorms_ColorBase
	{
		scope=2;
    color="dicks";
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