class CfgPatches
{
	class Survivalists_Mods_Gear_Drugs
	{
    units[] = { };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{
      "DZ_Data", 
      "DZ_Gear_Food",
      "DZ_Characters",
      "Survivalists_Mods"
    };
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Edible_Base;
  class DryBag_ColorBase; // for the cocaine bag

  class SRP_SmokingPipe: Inventory_Base
  {
		scope=2;
    displayName="Smoking Pipe";
		descriptionShort="A well preserved smoking pipe of the old world.";
    model="Survivalists_Mods\gear\drugs\smokingpipe.p3d";
    itemSize[]={1,2};
    varQuantityInit=30;
		varQuantityMin=0;
		varQuantityMax=30;
    varTemperatureMax=100;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
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
    class ClothingTypes
		{
			male="Survivalists_Mods\gear\drugs\smokingpipe_m.p3d";
			female="Survivalists_Mods\gear\drugs\smokingpipe_m.p3d";
		};
  };

  class SRP_CigaretteCase: Inventory_Base
	{
    scope=2;
		displayName="Cigarette Case";
		descriptionShort="An old luxurious case for holding cigarettes";
		model="Survivalists_Mods\gear\drugs\cigarettecase.p3d";
		destroyOnEmpty=0;
		attachments[]={
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
		weight=100;
    varTemperatureMax=100;
		itemSize[]={3,2};
		itemBehaviour=1;
		allowOwnedCargoManipulation=0;
		class DamageSystem
		{
      class GlobalHealth
      {
        class Health
        {
          hitpoints=50;
        };
      };
      class GlobalArmor
      {
        class FragGrenade
        {
          class Health{damage=8;};
          class Blood{damage=8;};
          class Shock{damage=8;};
        };
      };
		};
		class Cargo
		{
      itemsCargoSize[]={2,1};
      openable=1;
      allowOwnedCargoManipulation=0;
		};
		class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
      class cigarettecase_proxy1
			{
        source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
      class SoundWeapon
      {
        class open
				{
					soundSet="compass_open_SoundSet";
					id=204;
				};
				class close
				{
					soundSet="compass_close_SoundSet";
					id=205;
				};
      };
		};
	};

  class SRP_LabTube_Colorbase : Inventory_Base
  {		
		displayName="Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
		model="Survivalists_Mods\gear\drugs\testtube.p3d";
    color="default";
    itemSize[]={1,3};
    varTemperatureMax=100;
		weight=15;
    inventorySlot[]=
    {
      "TestTube1",
      "TestTube2",
      "TestTube3",
      "TestTube4",
      "TestTube5",
      "TestTube6"
    };
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\drugs\data\testtube_ca.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\drugs\data\testtube.rvmat"
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

  class SRP_LabTube_Clear : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Clear Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="clear";
  };
  class SRP_LabTube_Blue : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Blue Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="blue";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\drugs\data\testtube_blue.rvmat"
    };
  };
  class SRP_LabTube_Red : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Red Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="red";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\drugs\data\testtube_red.rvmat"
    };
  };
  class SRP_LabTube_Green : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Green Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="green";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\drugs\data\testtube_green.rvmat"
    };
  };
  class SRP_LabTube_Yellow : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Yellow Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="yellow";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\drugs\data\testtube_yellow.rvmat"
    };
  };

  class SRP_LabTube_MutantLiquid : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Distilled Mutant Ichor";
		descriptionShort="A single test tube. Contains some mutant ichor. What are you doing with this?";
    color="mutantliquid";
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=200;
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\drugs\data\testtube_red.rvmat"
    };
  };

  class SRP_LabTubeRack : Inventory_Base
  {
		scope=2;
		displayName="Test Tube Rack";
		descriptionShort="A rack that holds multiple test tubes";
		model="Survivalists_Mods\gear\drugs\testtubeholder.p3d";		
    attachments[]={
      "TestTube1",
      "TestTube2",
      "TestTube3",
      "TestTube4",
      "TestTube5",
      "TestTube6"
    };
		itemSize[]={3,3};
		weight=15;
  };

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

  //--------------------------------- DRUG BENCH

	class SRP_Drug_Blueprint_Meth: Inventory_Base
	{
		scope=2;
		displayName="Meth Recipe";
		descriptionShort="Jebediah's secret family recipe for meth.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot[]={"MethRecipe"};
		itemSize[]={1,3};
		weight=5;
	};
  class SRP_Drug_Blueprint_BathSalts: Inventory_Base
	{
		scope=2;
		displayName="BathSalts Recipe";
		descriptionShort="Jebediah's secret family recipe for BathSalts.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot[]={"BathSaltsRecipe"};
		itemSize[]={1,3};
		weight=5;
	};
  class SRP_Drug_Blueprint_Acid: Inventory_Base
	{
		scope=2;
		displayName="Acid Recipe";
		descriptionShort="Jebediah's secret family recipe for Acid.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot[]={"AcidRecipe"};
		itemSize[]={1,3};
		weight=5;
	};

  class SRP_DrugWorkbench: Inventory_Base
	{
    scope=2;
		color="DrugBench";
		displayName="Drug Tub";
		descriptionShort="A workbench used for brewing the highest quality drugs in the apocalypse.";
		model="Survivalists_Mods\gear\drugs\Methtub.p3d";
		weight=1000;    
		itemSize[]={12,12};
    itemBehaviour=0;
    isTakeable=0;
    carveNavmesh=1;
    physLayer="item_large";
    attachments[]=
		{
			"MethRecipe",
			"BathSaltsRecipe",
			"AcidRecipe",
			"GasCanister",
			"LargeBattery", //CarBattery and TruckBattery fill this (do script check?)
			"LightBulb",
      "Disinfectant",
      "Chemlight",
			"Material_MetalSheets",
      "Material_MetalWire"
		};
    class Cargo
		{
      itemsCargoSize[]={8,8};
      openable=1;
      allowOwnedCargoManipulation=0;
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
            {1,{"Survivalists_Mods\gear\drugs\data\Methtub.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\drugs\data\Methtub.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\drugs\data\Methtub.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\drugs\data\Methtub.rvmat"}},
            {0,{"Survivalists_Mods\gear\drugs\data\Methtub.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
			class Recipes
			{
				name="Recipe Book";
				description="";
				attachmentSlots[]=
				{
					"MethRecipe",
					"BathSaltsRecipe",
					"AcidRecipe"
				};
				icon="set:dayz_inventory image:book";
			};
			class Material
			{
				name="Raw Materials";
				description="";
				attachmentSlots[]=
				{
          "GasCanister",
          "LargeBattery", //CarBattery and TruckBattery fill this (do script check?)
          "LightBulb",
          "Disinfectant",
          "Chemlight",
          "Material_MetalSheets",
          "Material_MetalWire"
				};
				icon="set:dayz_inventory image:disinfectant";
			};
		};	
	};

  //-----------------------------METH

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
      "Survivalists_Mods\gear\drugs\data\methjar_ca.paa",
      "Survivalists_Mods\gear\drugs\data\methjar_ca.paa"
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
      "Survivalists_Mods\gear\drugs\data\methjar_ca.paa",
      "Survivalists_Mods\gear\drugs\data\methjar_ca.paa"
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
      "Survivalists_Mods\gear\drugs\data\methjar_ca.paa",
      "Survivalists_Mods\gear\drugs\data\methjar_ca.paa"
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
      "Survivalists_Mods\gear\drugs\data\methjar_ca.paa",
      "Survivalists_Mods\gear\drugs\data\methjar_ca.paa"
    };
	};

  // ---------------------------------- SALTS
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
      "Survivalists_Mods\gear\drugs\data\bathsalts_ca.paa",
      "Survivalists_Mods\gear\drugs\data\bathsalts_ca.paa"
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
      "Survivalists_Mods\gear\drugs\data\bathsalts_ca.paa",
      "Survivalists_Mods\gear\drugs\data\bathsalts_ca.paa"
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

  ///-------------------------------------- ACID
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
      "Survivalists_Mods\gear\drugs\data\acid_paper_smiley_co.paa"
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
      "Survivalists_Mods\gear\drugs\data\acid_paper_smiley_co.paa"
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
      "Survivalists_Mods\gear\drugs\data\acid_paper_skull_co.paa"
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
      "Survivalists_Mods\gear\drugs\data\acid_paper_skull_co.paa"
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

  //----------------------------------- Weed
  class SRP_Smokable_ColorBase: Edible_Base
  {
    displayName="SRP_Smokable_ColorBase";
		descriptionShort="Smokable Drugs";
    model="Survivalists_Mods\gear\drugs\cigarette_g.p3d";
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
  class SRP_Smokable_ZWeed: SRP_Smokable_ColorBase
  {
    scope=2;
    displayName="ZWeed Joint";
    color="ZWeed";
    model="Survivalists_Mods\gear\drugs\cigarette_g.p3d";
    hiddenSelections[]= {"zbytek"};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drugs\data\joint_co.paa",
		};
		descriptionShort="A joint for smoking...and getting baked";
    class ClothingTypes
		{
			male="Survivalists_Mods\gear\drugs\cigarette_m.p3d";
			female="Survivalists_Mods\gear\drugs\cigarette_m.p3d";
		};
  };
  class SRP_Smokable_Cigarette: SRP_Smokable_ColorBase
  {
    scope=2;
    displayName="Cigarette";
    color="Cigarette";
    model="Survivalists_Mods\gear\drugs\cigarette_g.p3d";
		descriptionShort="Relieve that stress... ahhhhh";
    class ClothingTypes
		{
			male="Survivalists_Mods\gear\drugs\cigarette_m.p3d";
			female="Survivalists_Mods\gear\drugs\cigarette_m.p3d";
		};
  };
  class SRP_Smokable_Cigar: SRP_Smokable_ColorBase
  {
    scope=2;
    displayName="Cigar";
    color="Cigar";
    model="Survivalists_Mods\gear\drugs\cigar_g.p3d";
		descriptionShort="A finely wrapped tobacco cigar. A rare luxury.";
    inventorySlot[]={};
    class ClothingTypes
		{
			male="Survivalists_Mods\gear\drugs\cigar_m.p3d";
			female="Survivalists_Mods\gear\drugs\cigar_m.p3d";
		};
  }

  class SRP_Smokable_Test: SRP_Smokable_ColorBase
  {
    displayName="Test Modifier";
    color="Test";
    model="Survivalists_Mods\gear\drugs\cigar_g.p3d";
		descriptionShort="Test modifier";
    inventorySlot[]={};
    class ClothingTypes
		{
			male="Survivalists_Mods\gear\drugs\cigar_m.p3d";
			female="Survivalists_Mods\gear\drugs\cigar_m.p3d";
		};
  }

  class SRP_DrugPack_ColorBase: Inventory_Base
  {
    model="\dz\gear\medical\cigarette_pack.p3d";
    itemSize[]={2,2};
    weight=25;
    varTemperatureMax=100;
    quantityBar=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		stackedUnit="";
    hiddenSelections[]= {"camoGround","zbytek"};
    attachments[]=
    {
      "CigaretteCase1",
      "CigaretteCase2",
      "CigaretteCase3",
      "CigaretteCase4",
      "CigaretteCase5", 
      "CigaretteCase6",
      "CigaretteCase7",
      "CigaretteCase8"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=21;
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

  class SRP_DrugPack_ZWeed: SRP_DrugPack_ColorBase
	{
    scope=2;
    color="ZWeed";
		displayName="Pack of ZWeed Joints";
    descriptionShort="Just looking at one of these gives you a contact high.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drugs\data\pack_of_z_weed_co.paa",
			"Survivalists_Mods\gear\drugs\data\pack_of_z_weed_co.paa"
		};
	};

  class SRP_DrugPack_Cigarette: SRP_DrugPack_ColorBase
	{
    scope=2;
    color="Cigarette";
		displayName="Pack of Cigarettes";
    descriptionShort="Just looking at these is giving you cancer.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drugs\data\pack_of_cigs_karlsons_co.paa",
			"Survivalists_Mods\gear\drugs\data\pack_of_cigs_karlsons_co.paa"
		};
	};

  class SRP_DrugCarton_ColorBase : Inventory_Base 
  {
		model="\dz\gear\tools\cleaning_kit_wood.p3d";
    attachments[]={};
    rotationFlags=17;
    quantityBar=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		stackedUnit="";
    varTemperatureMax=100;
    itemSize[]={6, 2};
    itemsCargoSize[]={10,4};
    hiddenSelections[]= {"zbytek"};
  };

  class SRP_DrugCarton_ZWeed: SRP_DrugCarton_ColorBase
	{
		scope=2;
    color="ZWeed";
    displayName="Carton of ZWeed Packs";
    descriptionShort="A big carton of joint packs!";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drugs\data\carton_of_joints_co.paa"
		};
	};

  class SRP_DrugCarton_Cigarette: SRP_DrugCarton_ColorBase
	{
		scope=2;
    color="Cigarette";
    displayName="Carton of Cigarette Packs";
    descriptionShort="A big carton of cigarette packs!";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drugs\data\carton_of_cigarettes_co.paa"
		};
	};

  class SRP_DrugCarton_Cigar: SRP_DrugCarton_ColorBase
	{
		scope=2;
    color="Cigar";
    displayName="Cigar Box";
    descriptionShort="A box of finely wrapped cigars.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drugs\data\carton_of_cigars_co.paa"
		};
	};

  //--------------------------- Cocaine
  class SRP_ConsumableDrug_Cocaine: SRP_ConsumableDrug_Colorbase
  {
		scope=2;
    displayName="Cocaine Bag";
		descriptionShort="A baggie of what looks like white powder.";
    model="Survivalists_Mods\gear\drugs\cocainebag.p3d";
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
    model="Survivalists_Mods\gear\drugs\cocainebag.p3d";
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

  class SRP_DrugBrick_Cocaine : Inventory_Base 
  {
    scope=2;
    displayName="Brick of Cocaine";
    descriptionShort="A white powder packed into a brick shape.";
		model="Survivalists_Mods\gear\drugs\cocainebrick.p3d";    
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
			"Survivalists_Mods\gear\drugs\data\cocainebrick_co.paa"
		};
  };

  class SRP_DrugBrick_CocaineTainted : SRP_DrugBrick_Cocaine 
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
      "Survivalists_Mods\gear\drugs\data\cocainepaste_ca.paa",
      "Survivalists_Mods\gear\drugs\data\cocainepaste_ca.paa"
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

};