class CfgPatches
{
	class SRP_Tree_ConsumableDrug
	{
    units[] = {
      "SRP_Naloxone",
      "SRP_ConsumableDrug_MethSmall",
      "SRP_ConsumableDrug_MethSmallTainted",
      "SRP_ConsumableDrug_MethMedium",
      "SRP_ConsumableDrug_MethLarge",
      "SRP_ConsumableDrug_BathSalts",
      "SRP_ConsumableDrug_BathSaltsTainted",
      "SRP_ConsumableDrug_SmileyAcid",
      "SRP_ConsumableDrug_SmileyAcidTainted",
      "SRP_ConsumableDrug_SkullAcid",
      "SRP_ConsumableDrug_SkullAcidTainted"
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};
class CfgVehicles
{
  class Edible_Base;
  class Epinephrine;

  class SRP_Naloxone: Epinephrine
  {
    scope=2;
    displayName="Naloxone";    
		descriptionShort="Treats narcotic overdoes in an emergency situation.";
    model="\dz\gear\medical\Epinephrine.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
    inventorySlot[]={};
  }

  class SRP_ConsumableDrug_Colorbase : Edible_Base
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
					hitpoints=49;
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

  class SRP_ConsumableDrug_MethSmall: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Small Jar of Blue Crystals";
		descriptionShort="This jar contains a few small blue crystals.";
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
      "SRP_Tree_Mods\data\methjar_ca.paa",
      "SRP_Tree_Mods\data\methjar_ca.paa"
    };
	};
  class SRP_ConsumableDrug_MethSmallTainted: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Small Jar of Blue Crystals";
		descriptionShort="This jar contains a few small blue crystals.";
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
      "SRP_Tree_Mods\data\methjar_ca.paa",
      "SRP_Tree_Mods\data\methjar_ca.paa"
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
      "SRP_Tree_Mods\data\methjar_ca.paa",
      "SRP_Tree_Mods\data\methjar_ca.paa"
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
      "SRP_Tree_Mods\data\methjar_ca.paa",
      "SRP_Tree_Mods\data\methjar_ca.paa"
    };
	};

  class SRP_ConsumableDrug_BathSalts: SRP_ConsumableDrug_Colorbase
	{
		scope=2;
		displayName="Jar of Bath Salts";
		descriptionShort="This jar contains many delicous bath salts. Copnsuming these shows you have no regard for your life.";
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
      "SRP_Tree_Mods\data\bathsalts_ca.paa",
      "SRP_Tree_Mods\data\bathsalts_ca.paa"
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
		displayName="Jar of Bath Salts";
		descriptionShort="This jar contains many delicous bath salts. Copnsuming these shows you have no regard for your life.";
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
      "SRP_Tree_Mods\data\bathsalts_ca.paa",
      "SRP_Tree_Mods\data\bathsalts_ca.paa"
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

  class SRP_ConsumableDrug_SmileyAcid: SRP_ConsumableDrug_Colorbase
  {
    scope=2;
		displayName="Smiley Acid (Photosensitivity warning)";
		descriptionShort="(Photosensitivity warning) Time to go on a road trip. Put on a smile.";
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
      "SRP_Tree_Mods\data\acid_paper_smiley_co.paa"
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
		descriptionShort="(Photosensitivity warning) Time to go on a road trip. Put on a smile.";
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
      "SRP_Tree_Mods\data\acid_paper_smiley_co.paa"
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
		descriptionShort="(Photosensitivity warning) Time to go on a road trip. Hold on. (Photosensitivity warning)";
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
      "SRP_Tree_Mods\data\acid_paper_skull_co.paa"
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
		descriptionShort="(Photosensitivity warning) Time to go on a road trip. Hold on. (Photosensitivity warning)";
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
      "SRP_Tree_Mods\data\acid_paper_skull_co.paa"
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