class CfgPatches
{
	class IAT_Fishing_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Consumables",
      "IAT_Fishing"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
//======================================= PEARLS
  class IAT_Fishing_Pearl_ColorBase: Inventory_Base
  {
    scope=0;
    displayName="Pearl";
    descriptionShort="A pearl cultivated in the mouth of a clam over its lifetime.";
    model="IAT\Core\IAT_Fishing\consumables\iat_pearl.p3d";
    isMeleeWeapon=1;
    weight=2;
    absorbency=0;
    itemSize[]={1,1};
    itemsCargoSize[]={0,0};
    inventorySlot[]=
    {
      "IAT_ClamPearl"
    };
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_pearl_ca.paa"};
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints=35;
          healthLevels[]=
          {
            {1.0,	{	"IAT\Core\IAT_Fishing\consumables\data\iat_pearl.rvmat"}},
            {0.69999999,	{	"IAT\Core\IAT_Fishing\consumables\data\iat_pearl.rvmat"}},
            {0.5,	{	"IAT\Core\IAT_Fishing\consumables\data\iat_pearl.rvmat"}},
            {0.30000001,	{	"IAT\Core\IAT_Fishing\consumables\data\iat_pearl.rvmat"}},
            {0.0,	{	"IAT\Core\IAT_Fishing\consumables\data\iat_pearl.rvmat"}}
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
          soundSet="pickUpPaper_SoundSet";
          id=797;
        };
      };
    };
  };
  class IAT_Fishing_Pearl_Default: IAT_Fishing_Pearl_ColorBase
	{
		scope=2;
    color="default";
    displayName="Freshwater Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_pearl_ca.paa"};
	};
  class IAT_Fishing_Pearl_Teal: IAT_Fishing_Pearl_ColorBase // rare
	{
		scope=2;
    color="teal";
    displayName="Mabe Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_pearl_teal_ca.paa"};
	};
  class IAT_Fishing_Pearl_Silver: IAT_Fishing_Pearl_ColorBase
	{
		scope=2;
    color="silver";
    displayName="Tahitian Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_pearl_silver_ca.paa"};
	};
  class IAT_Fishing_Pearl_Rose: IAT_Fishing_Pearl_ColorBase
	{
		scope=2;
    color="rose";
    displayName="Edison Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_pearl_rose_ca.paa"};
	};
  class IAT_Fishing_Pearl_Gold: IAT_Fishing_Pearl_ColorBase // rare
	{
		scope=2;
    displayName="South Sea Golden Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_pearl_gold_ca.paa"};
	};
//======================================= CLAMS
	class IAT_Fishing_Clam_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Clam";
		descriptionShort="A closed clam. Pry it open with your bare hands!";
		model="IAT\Core\IAT_Fishing\consumables\iat_clam.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_clam_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						{1,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}},
            {0.69999999,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}},
            {0.5,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}},
            {0.30000001,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}},
            {0,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}}
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
	class IAT_Fishing_Clam_ColorBase_Opened: Inventory_Base
	{
		scope=2;
		displayName="Opened Clam";
		descriptionShort="The clam has been opened and the contents revealed.";
		model="IAT\Core\IAT_Fishing\consumables\iat_clam_opened.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
    attachments[]=
    {
      "IAT_Fishing_ClamPearl",
      "IAT_Fishing_ClamMeat"
    };
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_clam_co.paa"
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
						{1.0,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}},
						{0.69999999,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}},
						{0.5,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}},
						{0.30000001,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}},
						{0.0,{"IAT\Core\IAT_Fishing\consumables\data\iat_clam.rvmat"}}
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
  class IAT_Fishing_Clam_Blue: IAT_Fishing_Clam_ColorBase
	{
		scope=2;
    color="blue";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_clam_blue_co.paa"};
	};
	class IAT_Fishing_Clam_Blue_Opened: IAT_Fishing_Clam_ColorBase_Opened
	{
		scope=2;
    color="blue_opened";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_clam_blue_co.paa"};
	};
  class IAT_Fishing_Clam_Red: IAT_Fishing_Clam_ColorBase
	{
		scope=2;
    color="red";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_clam_red_co.paa"};
	};
	class IAT_Fishing_Clam_Red_Opened: IAT_Fishing_Clam_ColorBase_Opened
	{
		scope=2;
    color="red_opened";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_clam_red_co.paa"};
	};
  class IAT_Fishing_Clam_Silver: IAT_Fishing_Clam_ColorBase
	{
		scope=2;
    color="silver";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_clam_silver_co.paa"};
	};
	class IAT_Fishing_Clam_Silver_Opened: IAT_Fishing_Clam_ColorBase_Opened
	{
		scope=2;
    color="silver_opened";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_clam_silver_co.paa"};
	};
//======================================= LURES
  class IAT_Fishing_MetalLure_Kit: Inventory_Base
	{
		scope=2;
		displayName="Metal Lure Fishing Kit";
		descriptionShort="This kit is ready to be turned into a metal lure with pliers.";
		model="\dz\gear\tools\sewing_kit.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=210;
		weightPerQuantityUnit=0.2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{1,{"DZ\gear\tools\data\sewing_kit.rvmat"}},
						{0.69999999,{"DZ\gear\tools\data\sewing_kit.rvmat"}},
						{0.5,{"DZ\gear\tools\data\sewing_kit_damage.rvmat"}},
						{0.30000001,{"DZ\gear\tools\data\sewing_kit_damage.rvmat"}},
						{0,{"DZ\gear\tools\data\sewing_kit_destruct.rvmat"}}
					};
				};
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class IAT_Fishing_WoodenLure_Kit: Inventory_Base
	{
		scope=2;
		displayName="Wooden Lure Fishing Kit";
		descriptionShort="This stick is ready to be carved into a wooden lure with a knife.";
		model="\dz\gear\crafting\bp_wooden_stick.p3d";
		absorbency=0.89999998;
		weight=220;
		isMeleeWeapon=1;
    itemSize[]={3,1};
		soundImpactType="wood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{						
						{1,{"DZ\gear\crafting\data\bp_wooden_stick.rvmat"}},						
						{0.69999999,{"DZ\gear\crafting\data\bp_wooden_stick.rvmat"}},						
						{0.5,{"DZ\gear\crafting\data\bp_wooden_stick_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\crafting\data\bp_wooden_stick_damage.rvmat"}},						
						{0,{"DZ\gear\crafting\data\bp_wooden_stick_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntStick";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeBluntStick_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeBluntStick_Heavy";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class TorchKindle
				{
					soundSet="Torch_kindle_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class woodenlog_drop
				{
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  // colorbase
  class IAT_Fishing_Lure_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Fishing Lure";
		descriptionShort="A fishing lure. Used to entice fish to your bait.";
		model="IAT\Core\IAT_Fishing\consumables\iat_fishinglure1.p3d";
		rotationFlags=64;
		weight=1;
		absorbency=0.80000001;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"IAT_FishingLure", // fishing rod slot
      "IAT_FishingLure1", // rest are tackle box proxy
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
			"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures.rvmat"
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
						{1.0,{"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures.rvmat"}},						
						{0.0,{"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures.rvmat"}}					
          };
				};
			};
		};
	};
  class IAT_Fishing_Lure_Metal1_ColorBase: IAT_Fishing_Lure_ColorBase
  {
    scope=0;
		model="IAT\Core\IAT_Fishing\consumables\iat_fishinglure1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures1_ca.paa"
		};
  };
  class IAT_Fishing_Lure_Metal2_ColorBase: IAT_Fishing_Lure_ColorBase
  {
    scope=0;
		model="IAT\Core\IAT_Fishing\consumables\iat_fishinglure2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures2_ca.paa"
		};
  };
  class IAT_Fishing_Lure_Metal3_ColorBase: IAT_Fishing_Lure_ColorBase
  {
    scope=0;
		model="IAT\Core\IAT_Fishing\consumables\iat_fishinglure3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures3_ca.paa"
		};
  };
  class IAT_Fishing_Lure_WoodenFish1_ColorBase: IAT_Fishing_Lure_ColorBase
  {
    scope=0;
		model="IAT\Core\IAT_Fishing\consumables\iat_fishinglurefish1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_fishingluresfish1_ca.paa"
		};
  };
  class IAT_Fishing_Lure_WoodenFish2_ColorBase: IAT_Fishing_Lure_ColorBase
  {
    scope=0;
		model="IAT\Core\IAT_Fishing\consumables\iat_fishinglurefish2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_fishingluresfish2_ca.paa"
		};
  };
  class IAT_Fishing_Lure_WoodenFish3_ColorBase: IAT_Fishing_Lure_ColorBase
  {
    scope=0;
		model="IAT\Core\IAT_Fishing\consumables\iat_fishinglurefish3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\consumables\data\iat_fishingluresfish3_ca.paa"
		};
  };
  // concrete
  class IAT_Fishing_Lure_Metal1_1: IAT_Fishing_Lure_Metal1_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal1_2: IAT_Fishing_Lure_Metal1_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures1_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal1_3: IAT_Fishing_Lure_Metal1_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures2_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal1_4: IAT_Fishing_Lure_Metal1_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures3_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal2_1: IAT_Fishing_Lure_Metal2_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal2_2: IAT_Fishing_Lure_Metal2_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures1_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal2_3: IAT_Fishing_Lure_Metal2_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures2_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal2_4: IAT_Fishing_Lure_Metal2_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures3_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal3_1: IAT_Fishing_Lure_Metal3_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal3_2: IAT_Fishing_Lure_Metal3_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures1_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal3_3: IAT_Fishing_Lure_Metal3_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures2_ca.paa"};
  };
  class IAT_Fishing_Lure_Metal3_4: IAT_Fishing_Lure_Metal3_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures3_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish1_1: IAT_Fishing_Lure_WoodenFish1_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish1_2: IAT_Fishing_Lure_WoodenFish1_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures1_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish1_3: IAT_Fishing_Lure_WoodenFish1_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures2_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish1_4: IAT_Fishing_Lure_WoodenFish1_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures3_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish2_1: IAT_Fishing_Lure_WoodenFish2_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish2_2: IAT_Fishing_Lure_WoodenFish2_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures1_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish2_3: IAT_Fishing_Lure_WoodenFish2_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures2_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish2_4: IAT_Fishing_Lure_WoodenFish2_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures3_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish3_1: IAT_Fishing_Lure_WoodenFish3_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish3_2: IAT_Fishing_Lure_WoodenFish3_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures1_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish3_3: IAT_Fishing_Lure_WoodenFish3_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures2_ca.paa"};
  };
  class IAT_Fishing_Lure_WoodenFish3_4: IAT_Fishing_Lure_WoodenFish3_ColorBase
  {
    scope=2;
    color="1";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"IAT\Core\IAT_Fishing\consumables\data\iat_fishinglures3_ca.paa"};
  };
//======================================= END
};