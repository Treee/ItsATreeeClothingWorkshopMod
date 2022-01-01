class CfgPatches
{
	class Survivalists_Mods_Gear_Food
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Food",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class SmallGuts;
  class PowderedMilk;
  class Edible_Base;
  class TacticalBaconCan;
  class TacticalBaconCan_Opened;
  class Marmalade;
  class Worm;
  class MeatStageTransitions;
  class FoodAnimationSources;
  class BaseFoodStageTransitions;

  // ----------------------  BASE GAME OVERRIDES
  class BoxCerealCrunchin: Edible_Base
  {
    canBeSplit=1;
  };

  class Lard: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={7,100,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						50,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={4,300,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={4,250,100,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={5,250,0,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={7,100,0,1,0,16};
					cooking_properties[]={100,330};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
				class Baked
				{
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
						transition_to=2;
						cooking_method=1;
					};
					class ToBoiled
					{
						transition_to=3;
						cooking_method=2;
					};
				};
			};
		};
	};
	class BearSteakMeat: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,400,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,350,150,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,350,0,1,0};
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
	};
	class CowSteakMeat: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,300,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,250,100,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,250,0,1,0};
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
	};
	class WolfSteakMeat: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,200,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,150,150,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,150,0,1,0};
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
	};
	class GoatSteakMeat: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,250,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,200,150,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,200,0,1,0};
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
	};
	class DeerSteakMeat: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,350,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,300,100,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,300,0,1,0};
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
	};
	class ChickenBreastMeat: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,200,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,150,100,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,150,0,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class SheepSteakMeat: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,250,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,200,100,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,200,0,1,0};
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
	};
	class PigSteakMeat: Edible_Base
	{
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,300,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,250,150,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,250,0,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,50,1,0,16};
					cooking_properties[]={100,300};
				};
			};			
		};
	};
	class HumanSteakMeat: Edible_Base
	{
		scope=2;
		displayName="Steak";
		descriptionShort="A weird smelling meat";
		model="\dz\gear\food\meat_steak.p3d";
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		absorbency=0.30000001;
		itemSize[]={1,3};
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
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
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={7,50,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						25,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={4,200,50,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={4,150,150,1,0};
					cooking_properties[]={70,120};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={5,150,0,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={7,50,0,1,0,16};
					cooking_properties[]={100,180};
				};
			};			
		};
	};
	class CarpFilletMeat: Edible_Base
	{
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
					nutrition_properties[]={2,300,100,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,250,250,1,0};
					cooking_properties[]={70,120};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,200,0,1,0};
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
	};
	class MackerelFilletMeat: Edible_Base
	{
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
	};

  // ----------------------- CUSTOM STUFF
  class SRP_CandyCane: Worm  // new
	{
		scope=2;
		displayName="Candy Cane";
		descriptionShort="A single candy cane";
		model="Survivalists_Mods\gear\food\candycane.p3d";
    rotationFlags=1;
		weight=0;
		itemSize[]={1,3};
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\candycane_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\food\data\candycane.rvmat"
		};
    class Nutrition
		{
			fullnessIndex=2;
			energy=150;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
		class Food{};
	};

  class SRP_CandyCane1: SRP_CandyCane  // new
	{
		scope=2;
		displayName="Candy Cane";
		descriptionShort="A single candy cane. Made from sugar.";
		model="Survivalists_Mods\gear\food\candycane1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\candycane1_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\food\data\candycane1.rvmat"
		};
	};

	class SRP_Brain: SmallGuts  // new
	{
		scope=2;
		displayName="Brain";
		descriptionShort="A full sized brain.";
		model="Survivalists_Mods\gear\food\srpbrain.p3d";
    rotationFlags=1;
		weight=0;
		itemSize[]={2,2};
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
	};

  class SRP_BrainPiece: Worm  // Bp_piece_of_brain
	{
		scope=2;
		displayName="A piece of brain";
		descriptionShort="A small chunk of a brain";
		model="Survivalists_Mods\gear\food\srpbrainchunk.p3d";
		rotationFlags=1;
		weight=0;
		itemSize[]={1,1};
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
	};


	class SRP_BoxCerealCrunchinBase: BoxCerealCrunchin // new
	{
		scope=0;
		inventorySlot[]=
		{
			"Food4",
			"Food5",
			"Food6"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\CerealBox_01_CO.paa"
		};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=399;
			water=3;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class SRP_BoxCerealCrunchin_Crisps: SRP_BoxCerealCrunchinBase // BP1_Food_box
	{
		scope=2;
    displayName="Bland Cereal Crips";
		descriptionShort="A box filled with stale and bland breakfast cereal";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\CerealBox_01_CO.paa"
		};
	};

	class SRP_BoxCerealCrunchin_Kids: SRP_BoxCerealCrunchinBase // BP1_Food_box_Nes
	{
		scope=2;
		displayName="Kids cereal";
		descriptionShort="A box filled with chocolate flavoured breakfast cereal";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\nes.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=330;
			water=-350;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_BoxCerealCrunchin_Monstar: SRP_BoxCerealCrunchinBase  // BP1_Food_box_Kos
	{
		scope=2;
		displayName="Kosmostar cereal";
		descriptionShort="A box filled with kosmostar breakfast cereal";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\Kos.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=330;
			water=-250;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class SRP_FoodCanBase: TacticalBaconCan // new
  {
    scope=0; // base class do not spawn
    displayName="Base class do not spawn.";
		descriptionShort="Base class do not spawn.";
    inventorySlot[]=
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
  };

  class SRP_FoodCanBase_Opened: TacticalBaconCan_Opened // new
  {
    scope=0; // base class do not spawn
    displayName="Base class do not spawn.";
		descriptionShort="Base class do not spawn.";
    class Nutrition
		{
			fullnessIndex=2;
			energy=348;
			water=33.5;
			nutritionalIndex=1;
			toxicity=0;
		};
  };  

  class SRP_FoodCanPeas: SRP_FoodCanBase  // BP1_Food_ban_base
	{
		scope=2;
		displayName="Canned Peas";
		descriptionShort="A can filled with peas";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_gorosek.paa"
		};
	};
	class SRP_FoodCanPeas_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_base_Opened
	{
		scope=2;
		displayName="Canned Peas";
		descriptionShort="A can filled with peas";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_gorosek.paa"
		};

	};

	class SRP_FoodCanMushrooms: SRP_FoodCanBase  // BP1_Food_ban_gribi
	{
		scope=2;
		displayName="Canned Mushrooms";
		descriptionShort="A can filled with mushrooms";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_gribi.paa"
		};
	};
	class SRP_FoodCanMushrooms_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_gribi_Opened
	{
		scope=2;
		displayName="Canned Mushrooms";
		descriptionShort="A can full of mushrooms";
		model="\dz\gear\food\food_can_open.p3d";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_gribi.paa"
		};
	};

	class SRP_FoodCanFishEggs: SRP_FoodCanBase  // BP1_Food_ban_ikra
	{
		scope=2;
		displayName="Canned Caviar";
		descriptionShort="A can of cheap smelling caviar";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_ikra.paa"
		};
	};
	class SRP_FoodCanFishEggs_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_ikra_Opened
	{
		scope=2;
		displayName="Canned Caviar";
		descriptionShort="A can of cheap smelling caviar";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_ikra.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=298;
			water=43.5;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_FoodCanOats: SRP_FoodCanBase  // BP1_Food_ban_kasa
	{
		scope=2;
		displayName="Canned Oats";
		descriptionShort="A can of ready to eat porridge oats";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_kasa.paa"
		};
	};
	class SRP_FoodCanOats_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_kasa_Opened
	{
		scope=2;
		displayName="Canned Oats";
		descriptionShort="A can of ready to eat porridge oats";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_kasa.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=558;
			water=23.5;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_FoodCanCondensedMilk: SRP_FoodCanBase  // BP1_Food_ban_sgushenka
	{
		scope=2;
		displayName="Condensed Milk";
		descriptionShort="A can of condensed milk";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_sgushenka.paa"
		};
	};
	class SRP_FoodCanCondensedMilk_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_sgushenka_Opened
	{
		scope=2;
		displayName="Condensed Milk";
		descriptionShort="A can of condensed milk";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_sgushenka.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=300;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class SRP_FoodCanBeef: SRP_FoodCanBase  // BP1_Food_ban_tusonka
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka.paa"
		};
	};
	class SRP_FoodCanBeef_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_tusonka_Opened
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=1000;
			water=50.5;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_FoodCanBeef1: SRP_FoodCanBase  // BP1_Food_ban_tusonka2
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka2.paa"
		};
	};
	class SRP_FoodCanBeef1_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_tusonka2_Opened
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka2.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=800;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_FoodCanBeef2: SRP_FoodCanBase  // BP1_Food_ban_tusonka3
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of Beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka3.paa"
		};
	};
	class SRP_FoodCanBeef2_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_tusonka3_Opened
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of Beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka3.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=1200;
			water=-43.5;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_FoodCanBeef3: SRP_FoodCanBase  // BP1_Food_ban_tusonka4
	{
    scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of Beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka4.paa"
		};
	};
	class SRP_FoodCanBeef3_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_tusonka4_Opened
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of Beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka4.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=400;
			water=300;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_FoodCanBeef4: SRP_FoodCanBase  // BP1_Food_ban_tusonka5
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of Beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka5.paa"
		};
	};
	class SRP_FoodCanBeef4_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_tusonka5_Opened
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of Beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka5.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=618;
			water=23.5;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_FoodCanBeef5: SRP_FoodCanBase  // BP1_Food_ban_tusonka6
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of Beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka6.paa"
		};
	};
	class SRP_FoodCanBeef5_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_tusonka6_Opened
	{
		scope=2;
		displayName="Canned Beef";
		descriptionShort="A can of Beef";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_tusonka6.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=518;
			water=43.5;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_FoodCanSweetCorn: SRP_FoodCanBase  // BP1_Food_ban_Kukuruza
	{
		scope=2;
		displayName="Canned Sweetcorn";
		descriptionShort="A can of sweetcorn";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_Kukuruza.paa"
		};
	};
	class SRP_FoodCanSweetCorn_Opened: SRP_FoodCanBase_Opened  // BP1_Food_ban_Kukuruza
	{
		scope=2;
		displayName="Canned Sweetcorn";
		descriptionShort="A can of sweetcorn";
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\ban_Kukuruza.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=348;
			water=33.5;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class SRP_DriedNoodles: PowderedMilk  // BP1_Food_MU_Rollton
	{
		scope=2;
		displayName="Dried Noodles";
		descriptionShort="A packet of instant noodles.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\MU_rollton.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=192;
			water=-400;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class SRP_DriedNoodles1: PowderedMilk  // BP1_Food_MU_DOSHIRAK
	{
		scope=2;
		displayName="Dried Noodles";
		descriptionShort="A packet of instant noodles.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\MU_dosh.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=192;
			water=-400;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class SRP_SpiceyPeppers: PowderedMilk // BP1_Food_MU_Perec
	{
		scope=2;
		displayName="Spicey Peppers";
		descriptionShort="A packet of deadly peppers. The warning label on the back reads 'Not for consumption'";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\MU_Perec.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=-1000;
			water=-3000;
			blood=-1500;
			nutritionalIndex=2;
			toxicity=1200;
		};
	};
	class SRP_SpiceyPeppers1: PowderedMilk  // BP1_Food_MU_Perec1
	{
		scope=2;
		displayName="Spicey Peppers";
		descriptionShort="A packet of deadly peppers. The warning label on the back reads 'Not for consumption'";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\MU_Perec1.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=-1000;
			water=-3000;
			blood=-1500;
			nutritionalIndex=2;
			toxicity=1200;
		};
	};


  //---------------------------------------- Raw Cookable Cans
  class SRP_FoodCanRaw_Colorbase: Edible_Base 
  {
		displayName="Raw Canned Food";
		descriptionShort="A can of food that is yet to be preserved from spoiling. Raw.";
		model="\dz\gear\food\food_can_open.p3d";
    rotationFlags=63;
		itemSize[]={2,2};
		weight=440;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=600;
    canBeSplit=1;
		isMeleeWeapon=1;
    inventorySlot[]=
		{
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
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
					nutrition_properties[]={7,160,70,1,0,4};
					cooking_properties[]={0,0}; // min food temp, time to cook, max food temp
				};
				class Rotten
				{
					nutrition_properties[]={10,75,35,1,0,"4+16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					nutrition_properties[]={3,500,50,1,0};
					cooking_properties[]={70,290};
				};
				class Boiled
				{
					nutrition_properties[]={3,450,50,1,0};
					cooking_properties[]={100,600};
				};
        class Dried
				{
					nutrition_properties[]={3,450,0,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					nutrition_properties[]={7,120,17.5,1,0,16};
					cooking_properties[]={100,320};
				};
			};
      class FoodStageTransitions: MeatStageTransitions
			{
			};
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
						{1,	{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999, {"DZ\gear\food\data\food_can.rvmat"}},
            {0.5, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,	{"DZ\gear\food\data\food_can_destruct.rvmat"}}
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

  class SRP_FoodCanRaw_Veggies: SRP_FoodCanRaw_Colorbase
	{
		scope=2;
    color="Veggies";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{

			"Survivalists_Mods\gear\food\data\emptycan_veggies_co.paa"
		};
	};

  class SRP_FoodCanRaw_Meat: SRP_FoodCanRaw_Colorbase
	{
		scope=2;
    color="Meat";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
	};

  class SRP_FoodCanRaw_HumanMeat: SRP_FoodCanRaw_Colorbase
	{
		scope=2;
    color="HumanMeat";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					nutrition_properties[]={7,160,70,1,0,8};
					cooking_properties[]={0,0}; // min food temp, time to cook, max food temp
				};
				class Rotten
				{
					nutrition_properties[]={10,75,35,1,0,"8+16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					nutrition_properties[]={3,500,50.5,1,2,8};
					cooking_properties[]={70,290};
				};
				class Boiled
				{
					nutrition_properties[]={3,450,50,1,2,8};
					cooking_properties[]={100,600};
				};
        class Dried
				{
					nutrition_properties[]={3,450,0,1,2,8};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					nutrition_properties[]={7,120,17.5,1,0,"8 + 16"};
					cooking_properties[]={100,320};
				};
			};
      class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
	};

  class SRP_FoodCanRaw_VeggieMeatCombo: SRP_FoodCanRaw_Colorbase
	{
		scope=2;
    color="VeggieMeatCombo";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
	};

  class SRP_FoodCanRaw_VeggieHumanMeatCombo: SRP_FoodCanRaw_Colorbase
	{
		scope=2;
    color="VeggieHumanMeatCombo";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					nutrition_properties[]={7,160,70,1,0,4};
					cooking_properties[]={0,0}; // min food temp, time to cook, max food temp
				};
				class Rotten
				{
					nutrition_properties[]={10,75,35,1,0,"4+16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					nutrition_properties[]={3,200,400,1,0};
					cooking_properties[]={70,290};
				};
				class Boiled
				{
					nutrition_properties[]={3,200,450,1,0};
					cooking_properties[]={100,600};
				};
        class Dried
				{
					nutrition_properties[]={3,200,200,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					nutrition_properties[]={7,120,17.5,1,0,16};
					cooking_properties[]={100,320};
				};
			};
      class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
	};

  //----------------------------------------- Sealed Cans
  class SRP_FoodCanPreserved_Colorbase: Edible_Base
  {
		displayName="Preserved Canned Food";
		descriptionShort="A can of food that is preserved from spoiling.";
		model="\dz\gear\food\food_can.p3d";
    rotationFlags=63;
		itemSize[]={2,2};
		weight=440;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=600;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,	{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999, {"DZ\gear\food\data\food_can.rvmat"}},
            {0.5, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,	{"DZ\gear\food\data\food_can_destruct.rvmat"}}
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

  class SRP_FoodCanPreserved_Veggies: SRP_FoodCanPreserved_Colorbase
	{
		scope=2;
    color="Veggies";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\emptycan_veggies_co.paa"
		};
	};

  class SRP_FoodCanPreserved_Meat: SRP_FoodCanPreserved_Colorbase
	{
		scope=2;
    color="Meat";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
	};

  class SRP_FoodCanPreserved_HumanMeat: SRP_FoodCanPreserved_Colorbase
	{
		scope=2;
    color="HumanMeat";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
	};

  class SRP_FoodCanPreserved_VeggieMeatCombo: SRP_FoodCanPreserved_Colorbase
	{
		scope=2;
    color="VeggieMeatCombo";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
	};

  class SRP_FoodCanPreserved_VeggieHumanMeatCombo: SRP_FoodCanPreserved_Colorbase
	{
		scope=2;
    color="VeggieHumanMeatCombo";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
	};
  
  //----------------------------------------- Opened Cans
  class SRP_FoodCanPreserved_Opened: Edible_Base 
  {
		displayName="Preserved Canned Food Open";
		descriptionShort="An opened can of preserved food. Who knows how long it has been in there.";
		model="\dz\gear\food\food_can_open.p3d";
    itemSize[]={2,2};
		weight=40;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=600;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,	{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999, {"DZ\gear\food\data\food_can.rvmat"}},
            {0.5, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,	{"DZ\gear\food\data\food_can_destruct.rvmat"}}
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

	class SRP_FoodCanPreserved_Veggies_Opened: SRP_FoodCanPreserved_Opened
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\emptycan_veggies_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=200;
			water=350;
			nutritionalIndex=1;
			toxicity=0;      
		};
	};

  class SRP_FoodCanPreserved_Meat_Opened: SRP_FoodCanPreserved_Opened
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
		class Nutrition
		{
			fullnessIndex=2;
			energy=450;
			water=150;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class SRP_FoodCanPreserved_HumanMeat_Opened: SRP_FoodCanPreserved_Opened
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
		class Nutrition
		{
			fullnessIndex=2;
			energy=450;
			water=150;
			nutritionalIndex=1;
			toxicity=0;
      digestibility=2;
      agents=8;
		};
	};

  class SRP_FoodCanPreserved_VeggieMeatCombo_Opened: SRP_FoodCanPreserved_Opened
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=150;
			water=150;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class SRP_FoodCanPreserved_VeggieHumanMeatCombo_Opened: SRP_FoodCanPreserved_Opened
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=150;
			water=150;
			nutritionalIndex=1;
			toxicity=0;
      digestibility=2;
      agents=8;
		};
	};


  // ----------------- CUSTOM DRUGS 
  class Cannabis: Edible_Base
	{
    displayName="Cannabis";
		descriptionShort="Cannabis harvested from a cannabis plant.";
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
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,284,293,30,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={1,100,293,10,1,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,45};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,20,40,10,1};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: BaseFoodStageTransitions
			{
			};
		};
	};
  class SRP_PlantHerbEdible_Colorbase: Edible_Base
	{
		scope=0;
		displayName="Edible Plant Material";
		descriptionShort="Harvested material from a plant.";
    model="\dz\gear\cultivation\plant_material.p3d";
    color="base";
		rotationFlags=34;
		weight=0;
		itemSize[]={2,2};
		stackedUnit="g";
		absorbency=0.2;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		quantityBar=1;
    canBeSplit=1;
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
      "SRP_Flower1",
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
            {	1,{}},
            {	0.69999999,{}},
            {	0.5,{}},
            {	0.30000001,{}},
            {	0,{}}
					};
				};
			};
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,284,293,30,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={1,100,293,10,1,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,45};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,20,40,10,1};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: BaseFoodStageTransitions
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

  class Tobacco: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Tobacco";
		descriptionShort="Tobacco harvested from a tobacco plant.";
		model="\dz\gear\food\cannabis_seedman.p3d";
    color="tobacco";
		itemSize[]={1,1};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\tobacco_seedman_raw_co.paa",
			"Survivalists_Mods\gear\cultivation\data\tobacco_seedman_baked_co.paa",
			"Survivalists_Mods\gear\cultivation\data\tobacco_seedman_raw_co.paa",
			"Survivalists_Mods\gear\cultivation\data\tobacco_seedman_raw_co.paa",
			"Survivalists_Mods\gear\cultivation\data\tobacco_seedman_baked_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\cannabis_seedman_raw.rvmat",
			"dz\gear\food\data\cannabis_seedman_baked.rvmat",
			"dz\gear\food\data\cannabis_seedman_raw.rvmat",
			"dz\gear\food\data\cannabis_seedman_dried.rvmat",
			"dz\gear\food\data\cannabis_seedman_burnt.rvmat",
			"dz\gear\food\data\cannabis_seedman_rotten.rvmat"
		};
	};
  class Cocaine: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Cocaine Plant Material";
		descriptionShort="A harvested branch from the cocaine bush.";
    color="cocaine";
	};
  class Brookmint: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Brookmint Plant Material";
		descriptionShort="A harvested branch from the brookmint herb.";
    model="Survivalists_Mods\gear\food\food_brookmint.p3d";
    color="brookmint";
	};
  class Dock: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Dock Plant Material";
		descriptionShort="A harvested branch from the dock herb.";
    model="Survivalists_Mods\gear\food\food_dock.p3d";
    color="dock";
	};
  class Valerian: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Valerian Plant Material";
		descriptionShort="A harvested branch from the valerian herb.";
    model="Survivalists_Mods\gear\food\food_valerian.p3d";
    color="valerian";
	};
  class Ribwort: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Ribwort Plant Material";
		descriptionShort="A harvested branch from the ribwort herb.";
    model="Survivalists_Mods\gear\food\food_ribwort.p3d";
    color="ribwort";
	};
  class Rosemary: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Rosemary Plant Material";
		descriptionShort="A harvested branch from the rosemary herb.";
    model="Survivalists_Mods\gear\food\food_rosemary.p3d";
    color="rosemary";
	};
  class GreenAmanita: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Green Amanita Plant Material";
		descriptionShort="A harvested cap from the Green Amanita mushroom.";
    model="Survivalists_Mods\gear\food\food_greenamanita.p3d";
    color="greenamanita";
	};
  class Yarrow: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Yarrow Plant Material";
		descriptionShort="A harvested branch from the Yarrow herb.";
    model="Survivalists_Mods\gear\food\food_yarrow.p3d";
    color="yarrow";
	};
  class Mint: SRP_PlantHerbEdible_Colorbase
	{
		scope=2;
		displayName="Mint Plant Material";
		descriptionShort="A harvested branch from the Mint herb.";
    model="Survivalists_Mods\gear\food\food_mint.p3d";
    color="mint";
	};

  class SRP_CrushedHerb_Colorbase: Edible_Base
  {
    scope=0;
    displayName="Crushed Herbs";
		descriptionShort="Herbs that have been pulverized by a mortar and pestle.";
    model="Survivalists_Mods\gear\food\srp_crushedherb.p3d";
    color="base";
    weight=0;
		itemSize[]={1,1};
		stackedUnit="g";
		absorbency=0.2;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=200;
    canBeSplit=1;
    inventorySlot[]=
    {
      "SRP_Flower1",
      "SRP_CrushedPowder1",
      "SRP_CrushedPowder2",
      "SRP_CrushedPowder3",
      "SRP_CrushedPowder4",
      "SRP_CrushedPowder5",
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_co.paa"
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
            {	1.0,{"Survivalists_Mods\gear\food\data\srp_crushedherb.rvmat"}},
            {	0.69999999,{"Survivalists_Mods\gear\food\data\srp_crushedherb.rvmat"}},
            {	0.5,{"Survivalists_Mods\gear\food\data\srp_crushedherb_damage.rvmat"}},
            {	0.30000001,{"Survivalists_Mods\gear\food\data\srp_crushedherb_damage.rvmat"}},
            {	0.0,{"Survivalists_Mods\gear\food\data\srp_crushedherb_damage.rvmat"}}
					};
				};
			};
		};
  };
  class SRP_CrushedHerb_Brookmint: SRP_CrushedHerb_Colorbase
  {
    scope=2;
    displayName="Crushed Herbs - Brookmint";
    color="brookmint";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_brookmint_co.paa"
    };
  };
  class SRP_CrushedHerb_Dock: SRP_CrushedHerb_Colorbase
  {
    scope=2;
    displayName="Crushed Herbs - Dock";
    color="dock";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_dock_co.paa"
    };
  };
  class SRP_CrushedHerb_GreenAmanita: SRP_CrushedHerb_Colorbase
  {
    scope=2;
    displayName="Crushed Herbs - Green Amanita";
    color="greenamanita";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_greenamanita_co.paa"
    };
  };
  class SRP_CrushedHerb_Mint: SRP_CrushedHerb_Colorbase
  {
    scope=2;
    displayName="Crushed Herbs - Mint";
    color="mint";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_mint_co.paa"
    };
  };
  class SRP_CrushedHerb_Ribwort: SRP_CrushedHerb_Colorbase
  {
    scope=2;
    displayName="Crushed Herbs - Ribwort";
    color="ribwort";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_ribwort_co.paa"
    };
  };
  class SRP_CrushedHerb_Rosemary: SRP_CrushedHerb_Colorbase
  {
    scope=2;
    displayName="Crushed Herbs - Rosemary";
    color="rosemary";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_rosemary_co.paa"
    };
  };
  class SRP_CrushedHerb_Valerian: SRP_CrushedHerb_Colorbase
  {
    scope=2;
    displayName="Crushed Herbs - Valerian";
    color="valerian";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_valerian_co.paa"
    };
  };
  class SRP_CrushedHerb_Yarrow: SRP_CrushedHerb_Colorbase
  {
    scope=2;
    displayName="Crushed Herbs - Yarrow";
    color="yarrow";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\food\data\srp_crushedherb_yarrow_co.paa"
    };
  };

};