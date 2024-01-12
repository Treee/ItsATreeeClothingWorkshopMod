class CfgPatches
{
	class IAT_Fishing_Food
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Food",
      "IAT_Fishing"
		};
	};
};
class BaseFoodStageTransitions
{
	class Raw
	{
		class ToBaked
		{
			transition_to=2;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=3;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=4;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Rotten
	{
		class ToBurned
		{
			transition_to=5;
			cooking_method=1;
		};
	};
	class Baked
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Boiled
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Dried
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Burned
	{
	};
};
class MeatStageTransitions: BaseFoodStageTransitions{};
class FoodAnimationSources
{
	class CS_Raw
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Rotten
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Baked
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Boiled
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Dried
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Burned
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
};
class CfgVehicles
{
  class Edible_Base;

  class Bitterlings;
  class Carp;
  class Mackerel;
  class Sardines;

//======================================================== VANILLA FOOD
	class Worm: Edible_Base
  {    
    canBeSplit=1;
    varStackMax=1;
    varQuantityMax=100;
    inventorySlot[]+={"IAT_WormCan"};
  };  
//======================================================== VANILLA FISH (Saltwater)
  class Mackerel_Small: Mackerel
	{
		scope=2;
		itemSize[]={3,1};
		weight=1000;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
	};
  class Mackerel_Medium: Mackerel
	{
    scope=2;
		itemSize[]={4,2};
		weight=2000;
		varQuantityInit=1000;
		varQuantityMax=1000;
    stackedUnit="g";
  };
  class Mackerel_Large: Mackerel
	{
		scope=2;
		itemSize[]={5,2};
		weight=2500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    stackedUnit="g";
	};
  class Mackerel_Epic: Mackerel
	{
		scope=2;
		itemSize[]={5,3};
		weight=3000;
		varQuantityInit=2000;
		varQuantityMax=2000;
    stackedUnit="g";
	};

  class Sardines_Small: Sardines
	{
		scope=2;
		itemSize[]={1,1};
		weight=100;
		varQuantityInit=200;
		varQuantityMax=200;
    stackedUnit="g";
	};
  class Sardines_Medium: Sardines
	{
    scope=2;
		itemSize[]={2,1};
		weight=200;
		varQuantityInit=400;
		varQuantityMax=400;
    stackedUnit="g";
  };
  class Sardines_Large: Sardines
	{
		scope=2;
		itemSize[]={2,2};
		weight=300;
		varQuantityInit=600;
		varQuantityMax=600;
    stackedUnit="g";
	};
  class Sardines_Epic: Sardines
	{
		scope=2;
		itemSize[]={2,3};
		weight=400;
		varQuantityInit=800;
		varQuantityMax=800;
    stackedUnit="g";
	};
//======================================================== VANILLA FISH (Freshwater)
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
//======================================= CLAMS
  class IAT_Fishing_ClamFilletMeat: Edible_Base
	{
		scope=2;
		displayName="Clam Meat";
		descriptionShort="A large piece of clam meat.";
		model="IAT\Core\IAT_Fishing\food\iat_clam_tongue.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,1};
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
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
      "SmokingD",
      "IAT_ClamMeat"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_Fishing\food\data\iat_clam_co.paa",
			"dz\gear\food\data\carp_fillet_baked_CO.paa",
			"dz\gear\food\data\carp_fillet_boiled_CO.paa",
			"dz\gear\food\data\carp_fillet_dried_CO.paa",
			"dz\gear\food\data\carp_fillet_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IAT\Core\IAT_Fishing\food\data\iat_clam.rvmat",
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
						{1,{"IAT\Core\IAT_Fishing\food\data\iat_clam.rvmat"}},
						{0.69999999,{"IAT\Core\IAT_Fishing\food\data\iat_clam.rvmat"}},
						{0.5,{"IAT\Core\IAT_Fishing\food\data\iat_clam.rvmat"}},
						{0.30000001,{"IAT\Core\IAT_Fishing\food\data\iat_clam.rvmat"}},
						{0,{"IAT\Core\IAT_Fishing\food\data\iat_clam.rvmat"}}
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
					nutrition_properties[]={5,20,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						10,
						20,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,30,20,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,30,20,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,30,0,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,30,0,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
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
//======================================= SALTWATER FISH
  class IAT_Fishing_SaltWaterFishFilletMeat_Base: Edible_Base
	{
		scope=0;
		displayName="Salt Water Fish Fillet";
		descriptionShort="A fillet of a salt water fish.";
		model="\dz\gear\food\mackerel_fillet.p3d";
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
			"dz\gear\food\data\mackerel_fillet_raw_CO.paa",
			"dz\gear\food\data\mackerel_fillet_baked_CO.paa",
			"dz\gear\food\data\mackerel_fillet_boiled_CO.paa",
			"dz\gear\food\data\mackerel_fillet_dried_CO.paa",
			"dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mackerel_fillet_raw.rvmat",
			"dz\gear\food\data\mackerel_fillet_baked.rvmat",
			"dz\gear\food\data\mackerel_fillet_boiled.rvmat",
			"dz\gear\food\data\mackerel_fillet_dried.rvmat",
			"dz\gear\food\data\mackerel_fillet_burnt.rvmat",
			"dz\gear\food\data\mackerel_fillet_rotten.rvmat"
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
						{1,{}},						
						{0.69999999,{}},						
						{0.5,{}},						
						{0.30000001,{}},						
						{0,{}}
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
					nutrition_properties[]={5,20,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						10,
						20,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,240,40,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,160,160,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,120,0,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,30,0,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
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
  class IAT_Fishing_SaltWaterFishFilletMeat_CoralFish: IAT_Fishing_SaltWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Coral Fish Fillet";
		descriptionShort="A fillet of the coral salt water fish.";
  };
  class IAT_Fishing_SaltWaterFishFilletMeat_AngelFish: IAT_Fishing_SaltWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Angel Fish Fillet";
		descriptionShort="A fillet of the angel salt water fish.";
  };
  class IAT_Fishing_SaltWaterFishFilletMeat_SailFish: IAT_Fishing_SaltWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="SailFish Fillet";
		descriptionShort="A fillet of the salt water sailfish.";
  };
  class IAT_Fishing_SaltWaterFishFilletMeat_AnglerFish: IAT_Fishing_SaltWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Angler Fish Fillet";
		descriptionShort="A fillet of the salt water angler fish.";
  };
  class IAT_Fishing_SaltWaterFishFilletMeat_HammerHeadFish: IAT_Fishing_SaltWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Hammer Head Shark Fillet";
		descriptionShort="A fillet of the salt water hammerhead shark.";
  };
//======================================= FRESHWATER FISH
  class IAT_Fishing_FreshWaterFishFilletMeat_Base: Edible_Base
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
						{1,{}},
						{0.69999999,{}},
						{0.5,{}},
						{0.30000001,{}},
						{0,{}}
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
					nutrition_properties[]={5,30,60,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						15,
						30,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,180,60,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,150,150,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,120,0,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,30,0,1,0,16};
					cooking_properties[]={100,30};
				};
			};	
      class FoodStageTransitions: MeatStageTransitions
			{
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
  class IAT_Fishing_FreshWaterFishFilletMeat_TroutFish: IAT_Fishing_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Trout Fillet";
		descriptionShort="A fillet of the trout fresh water fish.";
  };
  class IAT_Fishing_FreshWaterFishFilletMeat_MutantFish: IAT_Fishing_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Mutant Fish Fillet";
		descriptionShort="A fillet of the mutant fresh water fish.";
  };
  class IAT_Fishing_FreshWaterFishFilletMeat_SplakeFish: IAT_Fishing_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Splake Fish Fillet";
		descriptionShort="A fillet of the splake fresh water fish.";
  };
  class IAT_Fishing_FreshWaterFishFilletMeat_PerchFish: IAT_Fishing_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Perch Fish Fillet";
		descriptionShort="A fillet of the perch fresh water fish.";
  };
  class IAT_Fishing_FreshWaterFishFilletMeat_TilapiaFish: IAT_Fishing_FreshWaterFishFilletMeat_Base
  {
    scope=2;
		displayName="Tilapia Fish Fillet";
		descriptionShort="A fillet of the tilapia fresh water fish.";
  };
//======================================= END
};