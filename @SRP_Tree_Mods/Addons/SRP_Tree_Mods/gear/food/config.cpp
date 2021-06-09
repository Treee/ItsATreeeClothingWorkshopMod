class CfgPatches
{
	class SRP_Tree_Food
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{	
  class Edible_Base;
  class MeatStageTransitions;

  class SRP_FoodCanRaw_Colorbase: Edible_Base 
  {		
		displayName="Raw Canned Food";
		descriptionShort="A can of food that is yet to be preserved from spoiling. Raw.";
		model="\dz\gear\food\food_can_open.p3d";
    rotationFlags=63;
		itemSize[]={2,2};
		weight=440;
		varQuantityInit=150;
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
    class Nutrition
		{
			fullnessIndex=5;
			energy=50;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
			agents=4;
		};
    class Food
		{
			class FoodStages
			{
				class Raw
				{
					nutrition_properties[]={5,160,70,1,0,4};
					cooking_properties[]={0,0}; // min food temp, time to cook, max food temp
				};
				class Rotten
				{
					nutrition_properties[]={2,120,35,1,0,"4+16"};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					nutrition_properties[]={5,50,50.5,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					nutrition_properties[]={5,50,50,1,0};
					cooking_properties[]={70,55};
				};
				class Burned
				{
					nutrition_properties[]={2,120,17.5,1,0,16};
					cooking_properties[]={100,30};
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
			"SRP_Tree_Mods\gear\food\data\emptycan_veggies_co.paa"
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
			"SRP_Tree_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
	};

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
			"SRP_Tree_Mods\gear\food\data\emptycan_veggies_co.paa"
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
			"SRP_Tree_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
	};

  class SRP_FoodCanPreserved_Opened_Colorbase: Edible_Base {
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
	class SRP_FoodCanPreserved_Veggies_Opened: SRP_FoodCanPreserved_Opened_Colorbase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP_Tree_Mods\gear\food\data\emptycan_veggies_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=10;
			energy=50;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class SRP_FoodCanPreserved_Meat_Opened: SRP_FoodCanPreserved_Opened_Colorbase
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
			fullnessIndex=10;
			energy=75;
			water=25;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

  class SRP_FoodCanPreserved_VeggieMeatCombo_Opened: SRP_FoodCanPreserved_Opened_Colorbase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP_Tree_Mods\gear\food\data\emptycan_veggiesmeatcombo_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=10;
			energy=50;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
}