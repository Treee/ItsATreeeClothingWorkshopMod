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
  class Inventory_Base;
  class DryBag_ColorBase;

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
    attachments[]={};
    itemSize[]={6,6};
    itemsCargoSize[]={6,6};
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