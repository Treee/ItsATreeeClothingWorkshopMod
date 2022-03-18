class CfgPatches
{
  class Survivalists_Fishing_Fish_FreshWater
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Gear_Food",
      "Survivalists_Fishing"
    };
  };
};
class CfgVehicles
{
  class Edible_Base;
  class FoodAnimationSources;
  class MeatStageTransitions;
  class NotCookable;

  class Bitterlings;
	class Carp;
  
  //======================================================== VANILLA FISH
  class Bitterlings_Small: Bitterlings
	{
		scope=2;
		itemSize[]={1,1};
		weight=125;
		varQuantityInit=250;
		varQuantityMax=250;
    stackedUnit="percentage";
	};
  class Bitterlings_Medium: Bitterlings
	{
    scope=2;
		itemSize[]={2,1};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="percentage";
  };
  class Bitterlings_Large: Bitterlings
	{
		scope=2;
		itemSize[]={2,2};
		weight=375;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="percentage";
	};
  class Bitterlings_Epic: Bitterlings
	{
		scope=2;
		itemSize[]={2,3};
		weight=500;
		varQuantityInit=1000;
		varQuantityMax=1000;
    stackedUnit="percentage";
	};


  class Carp_Small: Carp
	{
		scope=2;
		itemSize[]={1,2};
		weight=1000;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="percentage";
	};
  class Carp_Medium: Carp
	{
    scope=2;
		itemSize[]={1,3};
		weight=2000;
		varQuantityInit=1000;
		varQuantityMax=1000;
    stackedUnit="percentage";
  };
  class Carp_Large: Carp
	{
		scope=2;
		itemSize[]={2,3};
		weight=2500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    stackedUnit="percentage";
	};
  class Carp_Epic: Carp
	{
		scope=2;
		itemSize[]={2,4};
		weight=3000;
		varQuantityInit=2000;
		varQuantityMax=2000;
    stackedUnit="percentage";
	};

  //======================================================== CUSTOM FISH
	class SRP_FreshWaterFish_Base: Edible_Base
	{
    scope=0;
    displayName="Fresh Water Fish";
    descriptionShort="A fish found in fresh water.";
    color="base";
		model="\dz\gear\food\carp_live.p3d";
		debug_ItemCategory=6;
		rotationFlags=16;
		weight=1000;
		itemSize[]={4,2};
		stackedUnit="g";
		quantityBar=1;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
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
							0,
							{}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		inventorySlot[]=
		{
			"TrapPrey_1",
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
			"dz\gear\food\data\carp_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\carp_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
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

  class SRP_FreshWaterFishFilletMeat_Base: Edible_Base
	{
		scope=0;
		displayName="Fresh Water Fish Fillet";
		descriptionShort="A fillet of a fresh water fish.";
		model="\dz\gear\food\carp_fillet.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={3,1};
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
    inventorySlot[]=
		{
			"Ingredient",
			"Ingredient1",
			"Ingredient2",
			"Ingredient3",
			"Ingredient4",
			"Ingredient5",
			"Ingredient6",
			"Ingredient7",
			"Ingredient8",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
      "SmokingD"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\carp_fillet_raw_CO.paa",
			"dz\gear\food\data\carp_fillet_baked_CO.paa",
			"dz\gear\food\data\carp_fillet_boiled_CO.paa",
			"dz\gear\food\data\carp_fillet_dried_CO.paa",
			"dz\gear\food\data\carp_fillet_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\carp_fillet_raw.rvmat",
			"dz\gear\food\data\carp_fillet_baked.rvmat",
			"dz\gear\food\data\carp_fillet_boiled.rvmat",
			"dz\gear\food\data\carp_fillet_dried.rvmat",
			"dz\gear\food\data\carp_fillet_burnt.rvmat",
			"dz\gear\food\data\carp_fillet_rotten.rvmat"
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
						
						{
							1,
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
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,100,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						50,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,600,100,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,400,400,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,400,130,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16};
					cooking_properties[]={100,300};
				};
			};			
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
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

  //======================================= Trout FISH
  class TroutFish_ColorBase: SRP_FreshWaterFish_Base
  {
    scope=0;
    displayName="Trout";
    descriptionShort="A fish found in fresh water.";
    model="Survivalists_Fishing\fish\freshwater\trout.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_co.paa"
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
						
						{1,{"Survivalists_Fishing\fish\freshwater\data\trout.rvmat"}},						
						{0.69999999,{"Survivalists_Fishing\fish\freshwater\data\trout.rvmat"}},						
						{0.5,{"Survivalists_Fishing\fish\freshwater\data\trout.rvmat"}},						
						{0.30000001,{"Survivalists_Fishing\fish\freshwater\data\trout.rvmat"}},						
						{0,{"Survivalists_Fishing\fish\freshwater\data\trout.rvmat"}}
				  };
				};
			};
		};
  };

  class SRP_FreshWaterFishFilletMeat_Trout: SRP_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Trout Fillet";
		descriptionShort="A fillet of the trout fresh water fish.";
  };

  // brown
  class TroutFish_Brown_Small: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_co.paa"
    };
  };
  class TroutFish_Brown_Medium: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_co.paa"
    };
  };
  class TroutFish_Brown_Large: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_co.paa"
    };
  };
  class TroutFish_Brown_Epic: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_co.paa"
    };
  };
  // blue
  class TroutFish_Blue_Small: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_blue_co.paa"
    };
  };
  class TroutFish_Blue_Medium: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_blue_co.paa"
    };
  };
  class TroutFish_Blue_Large: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_blue_co.paa"
    };
  };
  class TroutFish_Blue_Epic: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_blue_co.paa"
    };
  };  
  // red
  class TroutFish_Red_Small: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_red_co.paa"
    };
  };
  class TroutFish_Red_Medium: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_red_co.paa"
    };
  };
  class TroutFish_Red_Large: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_red_co.paa"
    };
  };
  class TroutFish_Red_Epic: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_red_co.paa"
    };
  };
  // yellow
  class TroutFish_Yellow_Small: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_yellow_co.paa"
    };
  };
  class TroutFish_Yellow_Medium: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_yellow_co.paa"
    };
  };
  class TroutFish_Yellow_Large: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_yellow_co.paa"
    };
  };
  class TroutFish_Yellow_Epic: TroutFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\trout_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\trout_yellow_co.paa"
    };
  };

  //======================================= Mutant FISH
  class MutantFish_ColorBase: SRP_FreshWaterFish_Base
  {
    scope=0;
    displayName="Mutant Fish";
    descriptionShort="A mutant fish found in fresh water.";
    model="Survivalists_Fishing\fish\freshwater\mutantfish.p3d";
    hiddenSelections[]={"zbytek"};
    rotationFlags=64;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_co.paa"
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
						
						{1,{"Survivalists_Fishing\fish\freshwater\data\mutantfish.rvmat"}},						
						{0.69999999,{"Survivalists_Fishing\fish\freshwater\data\mutantfish.rvmat"}},						
						{0.5,{"Survivalists_Fishing\fish\freshwater\data\mutantfish.rvmat"}},						
						{0.30000001,{"Survivalists_Fishing\fish\freshwater\data\mutantfish.rvmat"}},						
						{0,{"Survivalists_Fishing\fish\freshwater\data\mutantfish.rvmat"}}
				  };
				};
			};
		};
  };

  class SRP_FreshWaterFishFilletMeat_MutantFish: SRP_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Mutant Fish Fillet";
		descriptionShort="A fillet of the mutant fresh water fish.";
  };

  // Red
  class MutantFish_Red_Small: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_co.paa"
    };
  };
  class MutantFish_Red_Medium: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_co.paa"
    };
  };
  class MutantFish_Red_Large: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_co.paa"
    };
  };
  class MutantFish_Red_Epic: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_co.paa"
    };
  };
  // blue
  class MutantFish_Blue_Small: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_blue_co.paa"
    };
  };
  class MutantFish_Blue_Medium: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_blue_co.paa"
    };
  };
  class MutantFish_Blue_Large: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_blue_co.paa"
    };
  };
  class MutantFish_Blue_Epic: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_blue_co.paa"
    };
  };  
  // Green
  class MutantFish_Green_Small: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_green_co.paa"
    };
  };
  class MutantFish_Green_Medium: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_green_co.paa"
    };
  };
  class MutantFish_Green_Large: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_green_co.paa"
    };
  };
  class MutantFish_Green_Epic: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_green_co.paa"
    };
  };
  // yellow
  class MutantFish_Yellow_Small: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_yellow_co.paa"
    };
  };
  class MutantFish_Yellow_Medium: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_yellow_co.paa"
    };
  };
  class MutantFish_Yellow_Large: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_yellow_co.paa"
    };
  };
  class MutantFish_Yellow_Epic: MutantFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\mutantfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\mutantfish_yellow_co.paa"
    };
  };

  //======================================= SPLAKE FISH
  class SplakeFish_ColorBase: SRP_FreshWaterFish_Base
  {
    scope=0;
    displayName="Splake";
    descriptionShort="A fish found in fresh water. Sometimes referred to as a Wendigo";
    model="Survivalists_Fishing\fish\freshwater\splake.p3d";
    hiddenSelections[]={"zbytek"};    
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_co.paa"
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
						
						{1,{"Survivalists_Fishing\fish\freshwater\data\splake.rvmat"}},						
						{0.69999999,{"Survivalists_Fishing\fish\freshwater\data\splake.rvmat"}},						
						{0.5,{"Survivalists_Fishing\fish\freshwater\data\splake.rvmat"}},						
						{0.30000001,{"Survivalists_Fishing\fish\freshwater\data\splake.rvmat"}},						
						{0,{"Survivalists_Fishing\fish\freshwater\data\splake.rvmat"}}
				  };
				};
			};
		};
  };

  class SRP_FreshWaterFishFilletMeat_Splake: SRP_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Splake Fish Fillet";
		descriptionShort="A fillet of the splake fresh water fish.";
  };

  // Red
  class SplakeFish_Red_Small: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_co.paa"
    };
  };
  class SplakeFish_Red_Medium: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_co.paa"
    };
  };
  class SplakeFish_Red_Large: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_co.paa"
    };
  };
  class SplakeFish_Red_Epic: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_co.paa"
    };
  };
  // blue
  class SplakeFish_Blue_Small: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_blue_co.paa"
    };
  };
  class SplakeFish_Blue_Medium: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_blue_co.paa"
    };
  };
  class SplakeFish_Blue_Large: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_blue_co.paa"
    };
  };
  class SplakeFish_Blue_Epic: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_blue_co.paa"
    };
  };  
  // Green
  class SplakeFish_Green_Small: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_green_co.paa"
    };
  };
  class SplakeFish_Green_Medium: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_green_co.paa"
    };
  };
  class SplakeFish_Green_Large: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_green_co.paa"
    };
  };
  class SplakeFish_Green_Epic: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_green_co.paa"
    };
  };
  // yellow
  class SplakeFish_Yellow_Small: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_yellow_co.paa"
    };
  };
  class SplakeFish_Yellow_Medium: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_yellow_co.paa"
    };
  };
  class SplakeFish_Yellow_Large: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_yellow_co.paa"
    };
  };
  class SplakeFish_Yellow_Epic: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_yellow_co.paa"
    };
  };
  // Purple
  class SplakeFish_Purple_Small: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_purple_co.paa"
    };
  };
  class SplakeFish_Purple_Medium: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_purple_co.paa"
    };
  };
  class SplakeFish_Purple_Large: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_purple_co.paa"
    };
  };
  class SplakeFish_Purple_Epic: SplakeFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\splake_purple_co.paa"
    };
  };

  //======================================= PERCH FISH
  class PerchFish_ColorBase: SRP_FreshWaterFish_Base
  {
    scope=0;
    displayName="Perch";
    descriptionShort="A fish found in fresh water.";
    model="Survivalists_Fishing\fish\freshwater\perch.p3d";
    hiddenSelections[]={"zbytek"};    
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_co.paa"
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
						
						{1,{"Survivalists_Fishing\fish\freshwater\data\perch.rvmat"}},						
						{0.69999999,{"Survivalists_Fishing\fish\freshwater\data\perch.rvmat"}},						
						{0.5,{"Survivalists_Fishing\fish\freshwater\data\perch.rvmat"}},						
						{0.30000001,{"Survivalists_Fishing\fish\freshwater\data\perch.rvmat"}},						
						{0,{"Survivalists_Fishing\fish\freshwater\data\perch.rvmat"}}
				  };
				};
			};
		};
  };

  class SRP_FreshWaterFishFilletMeat_Perch: SRP_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Perch Fish Fillet";
		descriptionShort="A fillet of the perch fresh water fish.";
  };

  // Red
  class PerchFish_Red_Small: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_co.paa"
    };
  };
  class PerchFish_Red_Medium: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_co.paa"
    };
  };
  class PerchFish_Red_Large: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_co.paa"
    };
  };
  class PerchFish_Red_Epic: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_co.paa"
    };
  };
  // blue
  class PerchFish_Blue_Small: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_blue_co.paa"
    };
  };
  class PerchFish_Blue_Medium: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_blue_co.paa"
    };
  };
  class PerchFish_Blue_Large: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_blue_co.paa"
    };
  };
  class PerchFish_Blue_Epic: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_blue_co.paa"
    };
  };  
  // Green
  class PerchFish_Green_Small: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_green_co.paa"
    };
  };
  class PerchFish_Green_Medium: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_green_co.paa"
    };
  };
  class PerchFish_Green_Large: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_green_co.paa"
    };
  };
  class PerchFish_Green_Epic: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_green_co.paa"
    };
  };
  // yellow
  class PerchFish_Yellow_Small: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_yellow_co.paa"
    };
  };
  class PerchFish_Yellow_Medium: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_yellow_co.paa"
    };
  };
  class PerchFish_Yellow_Large: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_yellow_co.paa"
    };
  };
  class PerchFish_Yellow_Epic: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_yellow_co.paa"
    };
  };
  // Silver
  class PerchFish_Silver_Small: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_silver_co.paa"
    };
  };
  class PerchFish_Silver_Medium: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_silver_co.paa"
    };
  };
  class PerchFish_Silver_Large: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_silver_co.paa"
    };
  };
  class PerchFish_Silver_Epic: PerchFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\perch_silver_co.paa"
    };
  };

  //======================================= TILAPIA FISH
  class TilapiaFish_ColorBase: SRP_FreshWaterFish_Base
  {
    scope=0;
    displayName="Tilapia";
    descriptionShort="A fish found in fresh water.";
    model="Survivalists_Fishing\fish\freshwater\tilapia.p3d";
    hiddenSelections[]={"zbytek"};    
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_co.paa"
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
						
						{1,{"Survivalists_Fishing\fish\freshwater\data\tilapia.rvmat"}},						
						{0.69999999,{"Survivalists_Fishing\fish\freshwater\data\tilapia.rvmat"}},						
						{0.5,{"Survivalists_Fishing\fish\freshwater\data\tilapia.rvmat"}},						
						{0.30000001,{"Survivalists_Fishing\fish\freshwater\data\tilapia.rvmat"}},						
						{0,{"Survivalists_Fishing\fish\freshwater\data\tilapia.rvmat"}}
				  };
				};
			};
		};
  };

  class SRP_FreshWaterFishFilletMeat_Tilapia: SRP_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Tilapia Fish Fillet";
		descriptionShort="A fillet of the tilapia fresh water fish.";
  };

  // blue
  class TilapiaFish_Blue_Small: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_co.paa"
    };
  };
  class TilapiaFish_Blue_Medium: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_co.paa"
    };
  };
  class TilapiaFish_Blue_Large: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_co.paa"
    };
  };
  class TilapiaFish_Blue_Epic: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_co.paa"
    };
  };
  // Red
  class TilapiaFish_Red_Small: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_red_co.paa"
    };
  };
  class TilapiaFish_Red_Medium: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_red_co.paa"
    };
  };
  class TilapiaFish_Red_Large: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_red_co.paa"
    };
  };
  class TilapiaFish_Red_Epic: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_red_co.paa"
    };
  };

  // Green
  class TilapiaFish_Green_Small: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_green_co.paa"
    };
  };
  class TilapiaFish_Green_Medium: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_green_co.paa"
    };
  };
  class TilapiaFish_Green_Large: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_green_co.paa"
    };
  };
  class TilapiaFish_Green_Epic: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_green_co.paa"
    };
  };
  // yellow
  class TilapiaFish_Yellow_Small: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_yellow_co.paa"
    };
  };
  class TilapiaFish_Yellow_Medium: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_yellow_co.paa"
    };
  };
  class TilapiaFish_Yellow_Large: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_yellow_co.paa"
    };
  };
  class TilapiaFish_Yellow_Epic: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_yellow_co.paa"
    };
  };
  // Silver
  class TilapiaFish_Silver_Small: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_silver_co.paa"
    };
  };
  class TilapiaFish_Silver_Medium: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_silver_co.paa"
    };
  };
  class TilapiaFish_Silver_Large: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_silver_co.paa"
    };
  };
  class TilapiaFish_Silver_Epic: TilapiaFish_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\freshwater\data\tilapia_silver_co.paa"
    };
  };

};
