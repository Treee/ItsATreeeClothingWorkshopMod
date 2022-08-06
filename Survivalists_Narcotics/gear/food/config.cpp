class CfgPatches
{
	class Survivalists_Narcotics_Gear_Food
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Food",
      "Survivalists_Narcotics"
		};
	};
};
class CfgVehicles
{
  class Edible_Base;
  class FoodAnimationSources;
  class FruitStageTransitions;
  class NotCookable;
  class Inventory_Base;
  class DryBag_ColorBase;


  // ================= VANILLA
  class Cannabis_Irradiated: Edible_Base
	{
		scope=2;
    displayName="Cannabis";
		descriptionShort="Cannabis harvested from a cannabis plant. Oddly feels warm to the touch.";
		model="\dz\gear\food\cannabis_seedman.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		itemSize[]={1,1};
		stackedUnit="g";
		absorbency=0.2;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		quantityBar=1;
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
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\cannabis_seedman_raw_CO.paa",
			"dz\gear\food\data\cannabis_seedman_baked_CO.paa",
			"dz\gear\food\data\cannabis_seedman_raw_CO.paa",
			"dz\gear\food\data\cannabis_seedman_raw_CO.paa",
			"dz\gear\food\data\cannabis_seedman_baked_CO.paa"
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
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
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,20,40,10,1};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
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
  class Pumpkin_Irradiated: Edible_Base
	{
		scope=2;
		displayName="Pumpkin";
		descriptionShort="Pumpkin harvested from a pumpkin plant. Oddly feels warm to the touch.";
		model="\dz\gear\food\Pumpkin_fresh.p3d";
		debug_ItemCategory=6;
		weight=0;
		itemSize[]={2,2};
		stackedUnit="g";
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		quantityBar=1;
		absorbency=0.2;
		inventorySlot[]=
		{
			"Ingredient"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_rotten"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\pumpkin_fresh_CO.paa",
			"dz\gear\food\data\pumpkin_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\pumpkin_fresh.rvmat",
			"dz\gear\food\data\pumpkin_rotten.rvmat"
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
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,20,40,10,1};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
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
  class SlicedPumpkin_Irradiated: Edible_Base
	{
		scope=2;
		displayName="Sliced Pumpkin";
		descriptionShort="Pumkpins slices. Oddly hot to the touch.";
		model="\dz\gear\food\pumpkin_sliced.p3d";
		debug_ItemCategory=6;
		rotationFlags=2;
		weight=0;
		itemSize[]={2,2};
		stackedUnit="g";
		varQuantityInit=5;
		varQuantityMin=0;
		varQuantityMax=5;
		quantityBar=1;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_baked",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\pumpkin_sliced_raw_CO.paa",
			"dz\gear\food\data\pumpkin_sliced_baked_CO.paa",
			"dz\gear\food\data\pumpkin_sliced_baked_CO.paa",
			"dz\gear\food\data\pumpkin_sliced_dried_CO.paa",
			"dz\gear\food\data\pumpkin_sliced_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\pumpkin_sliced_raw.rvmat",
			"dz\gear\food\data\pumpkin_sliced_boiled.rvmat",
			"dz\gear\food\data\pumpkin_sliced_baked.rvmat",
			"dz\gear\food\data\pumpkin_sliced_dried.rvmat",
			"dz\gear\food\data\pumpkin_sliced_burnt.rvmat",
			"dz\gear\food\data\pumpkin_sliced_rotten.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
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
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,20,40,10,1};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
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

  // ============================================= BASE EDIBLE DRUGS
  class SRP_ConsumableDrug_Colorbase: Edible_Base
  {
		displayName="SRP_ConsumableDrug_Colorbase";
		descriptionShort="Oral Consumable Drugs";
		model="\dz\gear\food\Honey.p3d";
    varTemperatureMax=100;
		rotationFlags=16;
		itemSize[]={3,3};
		weight=120;
    absorbency=0.89999998;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
            {1,{	"DZ\gear\food\data\honey_jar.rvmat"}},
            {0.69999999,{	"DZ\gear\food\data\honey_jar.rvmat"}},
            {0.5,{	"DZ\gear\food\data\honey_jar_damage.rvmat"}},
            {0.30000001,{	"DZ\gear\food\data\honey_jar_damage.rvmat"}},
            {0,{	"DZ\gear\food\data\honey_jar_destruct.rvmat"}}
					};
				};
			};
		};
    class Nutrition
		{
			fullnessIndex=0;
			energy=0;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Marmalade_pickup_SoundSet";
					id=797;
				};
			};
		};
  };

  class SRP_Smokable_ColorBase: Edible_Base
  {
    displayName="SRP_Smokable_ColorBase";
		descriptionShort="Smokable Drugs";
    model="Survivalists_Narcotics\gear\food\cigarette_g.p3d";
    inventorySlot[]=
    {
      "CigaretteCase1",
      "CigaretteCase2",
      "CigaretteCase3",
      "CigaretteCase4",
      "CigaretteCase5", 
      "CigaretteCase6",
      "CigaretteCase7",
      "CigaretteCase8",
      "CigaretteCase9",
      "CigaretteCase10",
      "CigaretteCase11",
      "CigaretteCase12", 
      "CigaretteCase13",
      "CigaretteCase14"
    };
    varTemperatureMax=100;
    weight=100;
    itemSize[]={1,2};
    rotationFlags=16;
    destroyOnEmpty=1;	
    varQuantityInit=5;
		varQuantityMin=0;
		varQuantityMax=5;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
            {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
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
    class Nutrition
		{
			fullnessIndex=0;
			energy=0;
			water=-100;
			nutritionalIndex=1;
			toxicity=10;
		};
  };

  // ============================================= CONCRETE CLASSES
  class SRP_Smokable_Test: SRP_Smokable_ColorBase
  {
    displayName="Test Modifier";
    color="Test";
    model="Survivalists_Narcotics\gear\food\cigar_g.p3d";
		descriptionShort="Test modifier";
    inventorySlot[]={"Mask"};
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\food\cigar_m.p3d";
			female="Survivalists_Narcotics\gear\food\cigar_m.p3d";
		};
  };
  // ================== WEED
  class SRP_Smokable_ZWeed: SRP_Smokable_ColorBase
  {
    scope=2;
    displayName="ZWeed Joint";
    color="ZWeed";
    model="Survivalists_Narcotics\gear\food\cigarette_g.p3d";
    hiddenSelections[]= {"zbytek"};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\food\data\joint_co.paa",
		};
		descriptionShort="A joint for smoking...and getting baked";
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
			female="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
		};
  };
  class SRP_Smokable_ZWeedIrradiated: SRP_Smokable_ColorBase
  {
    scope=2;
    displayName="ZWeed Joint - Irradiated";
    color="ZWeedIrradiated";
    model="Survivalists_Narcotics\gear\food\cigarette_g.p3d";
    hiddenSelections[]= {"zbytek"};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\food\data\joint_co.paa",
		};
		descriptionShort="A joint for smoking...and getting baked. Oddly feels warm to the touch.";
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
			female="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
		};
  };

  // ================== TOBACCO
  class SRP_Smokable_Cigarette: SRP_Smokable_ColorBase
  {
    scope=2;
    displayName="Cigarette";
    color="Cigarette";
    model="Survivalists_Narcotics\gear\food\cigarette_g.p3d";
		descriptionShort="Relieve that stress... ahhhhh";
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
			female="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
		};
  };
  class SRP_Smokable_Cigar: SRP_Smokable_ColorBase
  {
    scope=2;
    displayName="Cigar";
    color="Cigar";
    model="Survivalists_Narcotics\gear\food\cigar_g.p3d";
		descriptionShort="A finely wrapped tobacco cigar. A rare luxury.";
    inventorySlot[]={};
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\food\cigar_m.p3d";
			female="Survivalists_Narcotics\gear\food\cigar_m.p3d";
		};
  };

  //========================= COCAINE
  class SRP_ConsumableDrug_Cocaine: SRP_ConsumableDrug_Colorbase
  {
		scope=2;
    displayName="Cocaine Bag";
		descriptionShort="A baggie of what looks like white powder.";
    model="Survivalists_Narcotics\gear\food\cocainebag.p3d";
    color="Cocaine";
    itemSize[]={1,2};
    varQuantityInit=30;
		varQuantityMin=0;
		varQuantityMax=30;
    varTemperatureMax=100;
    class Nutrition
		{
			fullnessIndex=2;
			energy=100;
			water=100;
      blood=100;
			nutritionalIndex=2;
			toxicity=0;
		};
  };
  class SRP_ConsumableDrug_CocaineTainted: SRP_ConsumableDrug_Colorbase
  {
		scope=2;
    displayName="Cocaine Bag";
		descriptionShort="A baggie of what looks like white powder.";
    model="Survivalists_Narcotics\gear\food\cocainebag.p3d";
    color="CocaineTainted";
    itemSize[]={1,2};
    varQuantityInit=30;
		varQuantityMin=0;
		varQuantityMax=30;
    varTemperatureMax=100;
    class Nutrition
		{
			fullnessIndex=2;
			energy=-500;
			water=-500;
      blood=-500;
			nutritionalIndex=2;
			toxicity=20;
		};
  };

  class SRP_DrugBrick_Cocaine: Inventory_Base 
  {
    scope=2;
    displayName="Brick of Cocaine";
    descriptionShort="A white powder packed into a brick shape.";
		model="Survivalists_Narcotics\gear\food\cocainebrick.p3d";    
    attachments[]={};
    rotationFlags=17;
    quantityBar=0;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		stackedUnit="";
    varTemperatureMax=100;
    itemSize[]={4,5};
    hiddenSelections[]= {"zbytek"};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\food\data\cocainebrick_co.paa"
		};
  };

  class SRP_DrugBrick_CocaineTainted: SRP_DrugBrick_Cocaine 
  {
    scope=2;
    displayName="Brick of Cocaine";
    descriptionShort="A white powder packed into a brick shape.";
  };

  class SRP_DrugCraft_CocaineStarter: DryBag_ColorBase
	{
		scope=2;
    displayName="Cocaine Plant Material";
    descriptionShort="Holds cocaine plant material. You can see remnant of processing.";
    inventorySlot[]={};
    attachments[]=
    {
      "PlantMaterial1",
      "PlantMaterial2",
      "PlantMaterial3",
      "PlantMaterial4",
      "PlantMaterial5",
      "PlantMaterial6",
      "PlantMaterial7",
      "PlantMaterial8",
      "PlantMaterial9",
      "PlantMaterial10",
    };
    itemSize[]={6,6};
    itemsCargoSize[]={4,4};
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa",
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa",
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa"
		};
	};

  class SRP_ConsumableDrug_CocainePaste: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Jar of Cocaine Paste";
		descriptionShort="This jar contains cocaine paste. Thick and bitter tasting but packs a punch.";
		model="\dz\gear\food\Honey.p3d";
    color="CocainePaste";
		itemSize[]={4,4};
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    hiddenSelections[]={
      "zbytek",
      "camoground"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\cocainepaste_ca.paa",
      "Survivalists_Narcotics\gear\food\data\cocainepaste_ca.paa"
    };
    class Nutrition
		{
			fullnessIndex=2;
			energy=-1000;
			water=-1000;
      blood=-1000;
			nutritionalIndex=2;
			toxicity=10;
		};
	};

  //========================= METH

  class SRP_ConsumableDrug_MethSmall: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Small Jar of Blue Crystals";
		descriptionShort="This jar contains a few small blue crystals. Do not force consumption (Photosensitivity warning).";
		model="\dz\gear\food\Honey.p3d";	
    color="MethSmall";
		itemSize[]={2,1};
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    hiddenSelections[]={
      "zbytek",    
      "camoground"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\methjar_ca.paa",
      "Survivalists_Narcotics\gear\food\data\methjar_ca.paa"
    };
	};
  class SRP_ConsumableDrug_MethSmallTainted: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Small Jar of Blue Crystals";
		descriptionShort="This jar contains a few small blue crystals. Do not force consumption (Photosensitivity warning).";
		model="\dz\gear\food\Honey.p3d";	
    color="MethSmallTainted";
		itemSize[]={2,1};
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    hiddenSelections[]={
      "zbytek",    
      "camoground"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\methjar_ca.paa",
      "Survivalists_Narcotics\gear\food\data\methjar_ca.paa"
    };
    class Nutrition
		{
			fullnessIndex=2;
			energy=-300;
			water=-500;
      blood=-300;
			nutritionalIndex=2;
			toxicity=400;
		};
	};
  class SRP_ConsumableDrug_MethMedium: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Medium Jar of Blue Crystals";
		descriptionShort="This jar contains a few blue crystals.";
		model="\dz\gear\food\Honey.p3d";	
    color="MethMedium";
		itemSize[]={2,2};
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
    hiddenSelections[]={
      "zbytek",    
      "camoground"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\methjar_ca.paa",
      "Survivalists_Narcotics\gear\food\data\methjar_ca.paa"
    };
	};
  class SRP_ConsumableDrug_MethLarge: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Large Jar of Blue Crystals";
		descriptionShort="This jar contains a ton blue crystals.";
		model="\dz\gear\food\Honey.p3d";	
    color="MethLarge";
		itemSize[]={2,4};
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
    hiddenSelections[]={
      "zbytek",    
      "camoground"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\methjar_ca.paa",
      "Survivalists_Narcotics\gear\food\data\methjar_ca.paa"
    };
	};

  //========================= SALTS
  class SRP_ConsumableDrug_BathSalts: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Jar of Bath Salts (Photosensitivity Warning!!)";
		descriptionShort="(Photosensitivity Warning!!) This jar contains many delicous bath salts. Consuming these shows you have no regard for your life. Do not force consumption (Photosensitivity warning).";
		model="\dz\gear\food\Honey.p3d";
    color="BathSalts";
		itemSize[]={2,2};
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
    hiddenSelections[]={
      "zbytek",
      "camoground"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\bathsalts_ca.paa",
      "Survivalists_Narcotics\gear\food\data\bathsalts_ca.paa"
    };
    class Nutrition
		{
			fullnessIndex=2;
			energy=-100;
			water=-100;
      blood=-100;
			nutritionalIndex=2;
			toxicity=100;
		};
	};
  class SRP_ConsumableDrug_BathSaltsTainted: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Jar of Bath Salts (Photosensitivity Warning!!)";
		descriptionShort="(Photosensitivity Warning!!) This jar contains many delicous bath salts. Consuming these shows you have no regard for your life. Do not force consumption (Photosensitivity warning).";
		model="\dz\gear\food\Honey.p3d";
    color="BathSaltsTainted";
		itemSize[]={2,2};
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
    hiddenSelections[]={
      "zbytek",
      "camoground"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\bathsalts_ca.paa",
      "Survivalists_Narcotics\gear\food\data\bathsalts_ca.paa"
    };
    class Nutrition
		{
			fullnessIndex=2;
			energy=-400;
			water=-500;
      blood=-500;
			nutritionalIndex=2;
			toxicity=500;
		};
	};

  //========================= ACID
  class SRP_ConsumableDrug_SmileyAcid: SRP_ConsumableDrug_Colorbase
  {
    scope=2;
		displayName="Smiley Acid (Photosensitivity warning)";
		descriptionShort="(Photosensitivity warning) Time to go on a road trip. Put on a smile. Do not force consumption (Photosensitivity warning).";
		model="\dz\gear\consumables\Paper.p3d";
    color="SmileyAcid";    
    rotationFlags=16;
		itemSize[]={1,1};
		weight=10;
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\acid_paper_smiley_co.paa"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
            {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
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
  class SRP_ConsumableDrug_SmileyAcidTainted: SRP_ConsumableDrug_Colorbase
  {
    scope=2;
		displayName="Smiley Acid (Photosensitivity warning)";
		descriptionShort="(Photosensitivity warning) Time to go on a road trip. Put on a smile. Do not force consumption (Photosensitivity warning).";
		model="\dz\gear\consumables\Paper.p3d";
    color="SmileyAcidTainted";    
    rotationFlags=16;
		itemSize[]={1,1};
		weight=10;
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\acid_paper_smiley_co.paa"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
            {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
			    };
				};
			};
    };
    class Nutrition
		{
			fullnessIndex=2;
			energy=-3000;
			water=-5000;
      blood=-3000;
			nutritionalIndex=2;
			toxicity=4000;
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
  class SRP_ConsumableDrug_SkullAcid: SRP_ConsumableDrug_Colorbase
  {
    scope=2;
		displayName="Skull Acid (Photosensitivity warning)";
		descriptionShort="(Photosensitivity warning) Time to go on a road trip. Hold on. (Photosensitivity warning). Do not force consumption (Photosensitivity warning).";
		model="\dz\gear\consumables\Paper.p3d";
    color="SkullAcid";    
    rotationFlags=16;
		itemSize[]={1,1};
		weight=10;
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\acid_paper_skull_co.paa"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
            {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
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
  class SRP_ConsumableDrug_SkullAcidTainted: SRP_ConsumableDrug_Colorbase
  {
    scope=2;
		displayName="Skull Acid (Photosensitivity warning)";
		descriptionShort="(Photosensitivity warning) Time to go on a road trip. Hold on. (Photosensitivity warning). Do not force consumption (Photosensitivity warning).";
		model="\dz\gear\consumables\Paper.p3d";
    color="SkullAcidTainted";    
    rotationFlags=16;
		itemSize[]={1,1};
		weight=10;
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Narcotics\gear\food\data\acid_paper_skull_co.paa"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
            {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
			    };
				};
			};
    };
    class Nutrition
		{
			fullnessIndex=2;
			energy=-3000;
			water=-5000;
      blood=-3000;
			nutritionalIndex=2;
			toxicity=4000;
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
};