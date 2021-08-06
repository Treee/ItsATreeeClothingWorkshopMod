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
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,150,100,1,0};
					cooking_properties[]={70,55};
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
					cooking_properties[]={100,30};
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
			fullnessIndex=4;
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

};