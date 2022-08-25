class CfgMods
{
	class Survivalists_Food
	{
		type="mod";
		author="ItsATreee | Mar";
		name="Survivalists_Food";
		dir="Survivalists_Food";
		dependencies[]={"Game","World","Mission"};
    class defs
		{
			class gameScriptModule
			{
				value="";
				files[]={"Survivalists_Food/scripts/3_game"};
			};
			class worldScriptModule
			{
				value="";
				files[]={"Survivalists_Food/scripts/4_world"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"Survivalists_Food/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class Survivalists_Food
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts",
      "DZ_Gear_Food"  
    };
  };
};
class CfgVehicles
{
  class BreadStageTransitions
  {
    class Raw
    {
      class ToBaked
      {
        transition_to=2;
        cooking_method=1;
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
    };
    class Dried
    {
    };
    class Burned
    {
    };
  };
  class FoodAnimationSources;
  class MeatStageTransitions;
	class Edible_Base;
  class HumanSteakMeat;

	class Honey;
	class Chips;
  class BakedBeansCan;
  class BakedBeansCan_Opened;
  class BoxCerealCrunchin;
  class Snack_ColorBase;
	class Zagorky_ColorBase;	

//================================== CUSTOM STUFF
  class SRPdonut: Edible_Base
	{
		scope=2;
		displayName="Donut";
		descriptionShort="It's a donut. How is this thing not stale yet? Oh well.";
		model="Survivalists_Food\food\donut.p3d";
		itemSize[]={2,2};
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=100;
			water=10;
			nutritionalIndex=1;
			toxicity=0;
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
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
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
  class srpChickenleg: Edible_Base
	{
		scope=2;
		displayName="Chicken leg";
		descriptionShort="It's a leg from a chicken.";
		model="Survivalists_Food\food\chickenleg.p3d";
		rotationFlags=17;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		varQuantityInit=110;
		varQuantityMin=0;
		varQuantityMax=110;
		itemSize[]={2,1};
		inventorySlot[]={"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD"};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]={"cs_raw"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\chicken_raw_co.paa","Survivalists_Food\food\data\chicken_rotten_co.paa","Survivalists_Food\food\data\chicken_baked_co.paa","Survivalists_Food\food\data\chicken_boiled_co.paa","Survivalists_Food\food\data\chicken_boiled_co.paa","Survivalists_Food\food\data\chicken_burnt_co.paa",};
		hiddenSelectionsMaterials[]={"Survivalists_Food\food\data\chicken.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}}};
				};
			};
		};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,80,70,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,1,0};
					nutrition_properties[]={2,80,35,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,2,0};
					nutrition_properties[]={3.5,110,52.5,1,0};
					cooking_properties[]={70,250};
				};
				class Boiled
				{
					visual_properties[]={0,3,0};
					nutrition_properties[]={3,100,75,1,0};
					cooking_properties[]={70,250};
				};
				class Dried
				{
					visual_properties[]={0,4,0};
					nutrition_properties[]={0.75,110,7,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,5,0};
					nutrition_properties[]={2,80,17.5,1,0,16};
					cooking_properties[]={100,360};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
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
  class srpSausage: Edible_Base
	{
		scope=2;
		displayName="Homemade Sausage";
		descriptionShort="Ground meat inside animal casing. What meats are inside?";
		model="Survivalists_Food\food\sausage.p3d";
		rotationFlags=17;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		varQuantityInit=110;
		varQuantityMin=0;
		varQuantityMax=110;
		itemSize[]={2,1};
		inventorySlot[]={"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD"};
		hiddenSelections[]={"cs_raw"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\sausage_raw_co.paa","Survivalists_Food\food\data\sausage_baked_co.paa","Survivalists_Food\food\data\sausage_boiled_co.paa","Survivalists_Food\food\data\sausage_dried_co.paa","Survivalists_Food\food\data\sausage_burnt_co.paa","Survivalists_Food\food\data\sausage_rotten_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_Food\food\data\sausage.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}}};
				};
			};
		};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,80,70,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,5,-1};
					nutrition_properties[]={2,80,35,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,-1};
					nutrition_properties[]={3.5,110,52.5,1,0};
					cooking_properties[]={70,250};
				};
				class Boiled
				{
					visual_properties[]={0,2,-1};
					nutrition_properties[]={3,100,75,1,0};
					cooking_properties[]={70,250};
				};
				class Dried
				{
					visual_properties[]={0,3,-1};
					nutrition_properties[]={0.75,110,7,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,4,-1};
					nutrition_properties[]={2,80,17.5,1,0,16};
					cooking_properties[]={100,360};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
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
	class srpSausage_Human: Edible_Base
	{
		scope=2;
		displayName="Homemade Sausage";
		descriptionShort="Ground meat inside animal casing. What meats are inside? Smells funny.";
		model="Survivalists_Food\food\sausage.p3d";
		rotationFlags=17;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		varQuantityInit=110;
		varQuantityMin=0;
		varQuantityMax=110;
		itemSize[]={2,1};
		inventorySlot[]={"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD"};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]={"cs_raw"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\sausage_raw_co.paa","Survivalists_Food\food\data\sausage_baked_co.paa","Survivalists_Food\food\data\sausage_boiled_co.paa","Survivalists_Food\food\data\sausage_dried_co.paa","Survivalists_Food\food\data\sausage_burnt_co.paa","Survivalists_Food\food\data\sausage_rotten_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_Food\food\data\sausage.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}}};
				};
			};
		};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,80,70,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,5,-1};
					nutrition_properties[]={2,80,35,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,-1};
					nutrition_properties[]={3.5,110,52.5,1,0};
					cooking_properties[]={70,250};
				};
				class Boiled
				{
					visual_properties[]={0,2,-1};
					nutrition_properties[]={3,100,75,1,0};
					cooking_properties[]={70,250};
				};
				class Dried
				{
					visual_properties[]={0,3,-1};
					nutrition_properties[]={0.75,110,7,1,0};
					cooking_properties[]={70,250,80};
				};
				class Burned
				{
					visual_properties[]={0,4,-1};
					nutrition_properties[]={2,80,17.5,1,0,16};
					cooking_properties[]={100,300};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
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
  class srpHotdog: Edible_Base
	{
		scope=2;
		displayName="Hotdog";
		descriptionShort="Homemade hotdog.";
		model="Survivalists_Food\food\hotdog.p3d";
		rotationFlags=17;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		itemSize[]={2,1};
		inventorySlot[]={};
		isMeleeWeapon=1;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\SRPHotdog_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_Food\food\data\srphotdog.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{"Survivalists_Food\food\data\srphotdog.rvmat"}},{0.7,{"Survivalists_Food\food\data\srphotdog.rvmat"}},{0.5,{"Survivalists_Food\food\data\srphotdog.rvmat"}},{0.3,{"Survivalists_Food\food\data\srphotdog.rvmat"}},{0,{"Survivalists_Food\food\data\srphotdog.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=250;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
  class SRPsushi: Edible_Base
	{
		scope=2;
		displayName="Sushi";
		descriptionShort="Homemade sushi. It looks and smells exactly how you think it does.";
		model="Survivalists_Food\food\sushi.p3d";
		rotationFlags=17;
		weight=0;
		interactionWeight=1;
		varQuantityInit=75;
		varQuantityMin=0;
		varQuantityMax=75;
		itemSize[]={2,1};
		inventorySlot[]={"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD"};
		isMeleeWeapon=1;
		hiddenSelections[]={"cs_raw"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\sushi_raw_co.paa","Survivalists_Food\food\data\sushi_burnt_co.paa","Survivalists_Food\food\data\sushi_burnt_co.paa","Survivalists_Food\food\data\sushi_raw_co.paa","Survivalists_Food\food\data\sushi_burnt_co.paa","Survivalists_Food\food\data\sushi_burnt_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_Food\food\data\sushi.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.7,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.5,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.3,{"Survivalists_Food\food\data\sushi.rvmat"}},{0,{"Survivalists_Food\food\data\sushi.rvmat"}}};
				};
			};
		};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,70,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,5,-1};
					nutrition_properties[]={2,120,35,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,-1};
					nutrition_properties[]={3.5,190,52.5,1,"4 +     16"};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,-1};
					nutrition_properties[]={3,137,75,1,"4 +     16"};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,-1};
					nutrition_properties[]={0.75,160,7,1,"4 +     16"};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,-1};
					nutrition_properties[]={2,100,17.5,1,0,"4 +     16"};
					cooking_properties[]={100,60};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
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

  class srpStew_Base: Edible_Base
	{
    scope=0;
		model="Survivalists_Food\food\SrpStewBowl.p3d";
		weight=0;
		canBeSplit=1;
		interactionWeight=1;
		quantityBar=0;
		varQuantityInit=275;
		varQuantityMin=0;
		varQuantityMax=300;
		itemSize[]={2,3};
		inventorySlot[]={"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD"};
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Food\food\data\srpStewMeat_co.paa"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,-1};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,-1};
					nutrition_properties[]={10,25,25,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={-1,-1,-1};
					nutrition_properties[]={2,250,50,1,0};
					cooking_properties[]={70,300};
				};
				class Boiled
				{
					visual_properties[]={-1,-1,-1};
					nutrition_properties[]={2,200,150,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={-1,-1,-1};
					nutrition_properties[]={3,200,0,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={-1,-1,-1};
					nutrition_properties[]={5,50,0,1,0,16};
					cooking_properties[]={100,660};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}}};
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
	class srpStew_Meat: srpStew_Base
	{
		scope=2;
		displayName="Meat Stew";
		descriptionShort="A hearty stew made of various meats.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\srpStewMeat_co.paa"};
	};
	class srpStew_Mix: srpStew_Base
	{
		scope=2;
		displayName="Mixed Stew";
		descriptionShort="A hearty stew made of various veggies and meats.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\srpStewMix_co.paa"};
	};
	class srpStew_Veggie: srpStew_Base
	{
		scope=2;
		displayName="Vegetable Stew";
		descriptionShort="A hearty stew made of various veggies.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\srpStewVeg_co.paa"};
	};

  class srpBreadFlatDough: Edible_Base
	{
		scope=2;
		displayName="Simple Round Dough";
		descriptionShort="A round, plain dough. Should be baked before consuming... but I guess no one can stop you if you don't.";
		model="Survivalists_Food\food\flatbread.p3d";
		interactionWeight=1;
		quantityBar=1;
		canBeSplit=1;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		itemSize[]={2,3};
		inventorySlot[]={"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC"};
		hiddenSelections[]={"cs_raw"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\flatbread_raw_co.paa","Survivalists_Food\food\data\flatbread_baked_co.paa","Survivalists_Food\food\data\flatbread_burnt_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_Food\food\data\flatbread.rvmat"};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}}};
				};
			};
		};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,160,70,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,3,-1};
					nutrition_properties[]={2,120,35,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,-1};
					nutrition_properties[]={1.75,280,52.5,1,0};
					cooking_properties[]={70,600};
				};
				class Burned
				{
					visual_properties[]={0,2,-1};
					nutrition_properties[]={2,100,17.5,1,0,16};
					cooking_properties[]={100,660};
				};
			};
			class FoodStageTransitions: BreadStageTransitions{};
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
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
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
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class srpBreadLoaf: Edible_Base
	{
		scope=2;
		displayName="Simple Bread Loaf";
		descriptionShort="A loaf of white bread. Should be baked before consuming... but I guess no one can stop you if you don't.";
		model="Survivalists_Food\food\loafbread.p3d";
		rotationFlags=17;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		canBeSplit=1;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		itemSize[]={2,3};
		inventorySlot[]={"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC"};
		hiddenSelections[]={"cs_raw"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\loafbread_raw_co.paa","Survivalists_Food\food\data\loafbread_baked_co.paa","Survivalists_Food\food\data\loafbread_burnt_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_Food\food\data\loafbread.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}}};
				};
			};
		};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,160,70,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,3,-1};
					nutrition_properties[]={2,120,35,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,-1};
					nutrition_properties[]={1.75,280,52.5,1,0};
					cooking_properties[]={70,600};
				};
				class Burned
				{
					visual_properties[]={0,2,-1};
					nutrition_properties[]={2,100,17.5,1,0,16};
					cooking_properties[]={100,660};
				};
			};
			class FoodStageTransitions: BreadStageTransitions{};
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
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
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
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class srpBreadRoundDough: Edible_Base
	{
		scope=2;
		displayName="Simple Round Dough";
		descriptionShort="A round, plain dough. Should be baked before consuming... but I guess no one can stop you if you don't.";
		model="Survivalists_Food\food\rounddough.p3d";
		rotationFlags=17;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		canBeSplit=1;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		itemSize[]={2,3};
		inventorySlot[]={"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC"};
		hiddenSelections[]={"cs_raw"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\rounddough_raw_co.paa","Survivalists_Food\food\data\rounddough_baked_co.paa","Survivalists_Food\food\data\rounddough_burnt_co.paa","Survivalists_Food\food\data\rounddough_rotten_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_Food\food\data\rounddough.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}}};
				};
			};
		};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,160,70,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,3,-1};
					nutrition_properties[]={2,120,35,1,0,"4 +     16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,-1};
					nutrition_properties[]={1.75,280,52.5,1,0};
					cooking_properties[]={70,600};
				};
				class Burned
				{
					visual_properties[]={0,2,-1};
					nutrition_properties[]={2,100,17.5,1,0,16};
					cooking_properties[]={100,660};
				};
			};
			class FoodStageTransitions: BreadStageTransitions{};
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
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
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
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};

//============================== FUNCTIONAL RETEXTURES
  class BoxCerealCrunchin_FlakedCorn: BoxCerealCrunchin
	{
		scope=2;
		displayName="Flaked Corn";
		descriptionShort="Flaked corn - used in brewing of alcohol. Adds fermentable sugars without adding color, body or malt flavors.";
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\cereal_box_flakedcorn_co.paa"};
		itemSize[]={5,6};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=365;
			water=1;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
  class BoxCerealCrunchin_Flour: BoxCerealCrunchin
	{
		scope=2;
		displayName="Flour";
		descriptionShort="All Purpose Flour. Used for baking. Flour doesn't expire... does it? eh... probably still good.";
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\cereal_box_flour_co.paa"};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=100;
			water=-200;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class Honey_Yeast: Honey
	{
		scope=2;
		displayName="Yeast";
		descriptionShort="Yeast. Used for baking and stuff.";
		itemSize[]={2,2};
		class Nutrition
		{
			fullnessIndex=1;
			energy=50;
			water=10;
			nutritionalIndex=1;
			toxicity=0;
		};
		hiddenSelections[]={"camoGround","zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\yeast_co.paa","Survivalists_Food\food\data\yeast_co.paa","Survivalists_Food\food\data\yeast_co.paa"};
	};


  class Snack_DonutPack: Snack_ColorBase
	{
		scope=2;
    model="\DZ\gear\food\salty_chips.p3d";
		displayName="Packaged donuts.";
		descriptionShort="A pack of sugary sweet donuts. This one seems to have pink frosting.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Food\food\data\snacks_donuts_co.paa"
		};
	};

//============================ PURE RETEXUTRES
	class Zagorky_Snickers: Zagorky_ColorBase
	{
		scope=2;
		displayName="Snicker Bar";
		descriptionShort="Good old fashioned snicker bar, get some nuts!";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\zagorky_snickers_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
  class Zagorky_Wonderbar: Zagorky_ColorBase
	{
		scope=2;
		displayName="Oldies Wonderbar";
		descriptionShort="Old chocolate bar, expriry reads 'Best Before 1964'. You probably shouldn't eat it, but we all know you're going to.";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\zagorky_wonderbar_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Zagorky_Twix: Zagorky_ColorBase
	{
		scope=2;
		displayName="Twix Chocolate";
		descriptionShort="It's rather old but still preserved and delicious.";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\zagorky_twix_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Zagorky_Reeces: Zagorky_ColorBase
	{
		scope=2;
		displayName="Reece's Cups";
		descriptionShort="2 peanut-butter chocolate covered cups, rather high in sugar but also high in deliciousness.";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\zagorky_reeces_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Zagorky_Unknown: Zagorky_ColorBase
	{
		scope=2;
		displayName="Unknown Snack Bar";
		descriptionShort="The wrapper has been worn, you can't read it at all, no idea what it is.";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\zagorky_unknown_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Chips_Potato: Chips
	{
		scope=2;
		displayName="Potato Chips";
		descriptionShort="Some very bland, and somewhat stale potato chips.";
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\potato_chips_co.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=100;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Chips_SpicyPopcorn: Chips
	{
		scope=2;
		displayName="Spicy Popcorn";
		descriptionShort="Overly spicy, they are almost as hot as your mom.";
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\popcorn_spicy_co.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=150;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Chips_Jerky: Chips
	{
		scope=2;
		displayName="Beef Jerky";
		descriptionShort="Perfectly spiced and cooked beef jerky, best served with a nice can of soda.";
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\beef_jerky_co.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=150;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Honey_Marshmellow: Honey
	{
		scope=2;
		displayName="Marshmellow Fluff";
		descriptionShort="Just a jar of marshmellow fluff, very good with your favourite chocolate.";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\marshmellow_fluff_ca.paa","Survivalists_Food\food\data\marshmellow_fluff_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=400;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};	
	class Honey_Marmite: Honey
	{
		scope=2;
		displayName="Marmite";
		descriptionShort="Uck";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\jar_marmite_ca.paa","Survivalists_Food\food\data\jar_marmite_ca.paa"};
	};
	class Honey_PeanutButter: Honey
	{
		scope=2;
		displayName="Peanut-Butter";
		descriptionShort="Smooth peanut-butter, use some jam for a great snack.";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\jar_peanutbutter_ca.paa","Survivalists_Food\food\data\jar_peanutbutter_ca.paa"};
	};
	class Honey_AppleSauce: Honey
	{
		scope=2;
		displayName="Apple Sauce";
		descriptionShort="Grandma's own brand apple sauce.";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\jar_applesauce_ca.paa","Survivalists_Food\food\data\jar_applesauce_ca.paa"};
	};
  class Honey_Pickles: Honey
	{
		scope=2;
		displayName="Jar of Pickles";
		descriptionShort="A jar of unopened pickles.";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\marmalade_pickles_ca.paa","Survivalists_Food\food\data\marmalade_pickles_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=400;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};	
  class BoxCerealCrunchin_Frosties: BoxCerealCrunchin
	{
		scope=2;
		displayName="Frosted Flakes";
		descriptionShort="They're Great!";
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\cerealbox_frosties_co.paa"};
	};

  class Boyaredeez: BakedBeansCan
	{
		displayName="Canned Pasta and Meatballs";
		descriptionShort="A can of pasta and meatballs. Just like grandma used to make.";
		scope=2;
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\Boyaredeez_co.paa"};
	};
	class Boyardeez_Opened: BakedBeansCan_Opened
	{
		displayName="Canned Pasta and Meatballs";
		descriptionShort="A can of pasta and meatballs. Just like grandma used to make.";
		scope=2;
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\Boyaredeez_co.paa"};
	};
	class NinjaCan: BakedBeansCan
	{
		displayName="Canned Spaghetti - Ninja Turtles";
		descriptionShort="It's like normal spaghetti in a can but way waaayy cooler.";
		scope=2;
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\Ninja_co.paa"};
	};
	class NinjaCan_Opened: BakedBeansCan_Opened
	{
		displayName="Canned Spaghetti - Ninja Turtles";
		descriptionShort="It's like normal spaghetti in a can but way waaayy cooler.";
		scope=2;
		hiddenSelections[]={"camoGround"};
		hiddenSelectionsTextures[]={"Survivalists_Food\food\data\Ninja_co.paa"};
	};

};
