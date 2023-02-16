class CfgPatches
{
	class Survivalists_Narcotics_Gear_Containers
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Survivalists_Narcotics"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;

  //================================================ DRUG RELATED CONTAINERS
  class SRP_CigaretteCase: Inventory_Base
	{
    scope=2;
		displayName="Cigarette Case";
		descriptionShort="An old luxurious case for holding cigarettes";
		model="Survivalists_Narcotics\gear\container\cigarettecase.p3d";
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

  class SRP_DrugWorkbench: Inventory_Base
	{
    scope=2;
		color="DrugBench";
		displayName="Drug Tub";
		descriptionShort="A workbench used for brewing the highest quality drugs in the apocalypse.";
		model="Survivalists_Narcotics\gear\container\Methtub.p3d";
		weight=1000;    
		itemSize[]={12,12};
    itemBehaviour=0;
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
      "Material_MetalWire",
      "TestTube1",
      "TestTube2",
      "TestTube3",
      "TestTube4",
      "TestTube5",
      "TestTube6"
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
					hitpoints=1000;
					healthLevels[]=
					{
            {1,{"Survivalists_Narcotics\gear\container\data\Methtub.rvmat"}},
            {0.69999999,{"Survivalists_Narcotics\gear\container\data\Methtub.rvmat"}},
            {0.5,{"Survivalists_Narcotics\gear\container\data\Methtub.rvmat"}},
            {0.30000001,{"Survivalists_Narcotics\gear\container\data\Methtub.rvmat"}},
            {0,{"Survivalists_Narcotics\gear\container\data\Methtub.rvmat"}}
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
      class LabTubes
			{
				name="Lab tubes";
				description="";
				attachmentSlots[]=
				{
          "TestTube1",
          "TestTube2",
          "TestTube3",
          "TestTube4",
          "TestTube5",
          "TestTube6"
				};
				icon="set:dayz_inventory image:woodenlog";
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

  class SRP_LabTubeRack: Inventory_Base
  {
		scope=2;
		displayName="Test Tube Rack";
		descriptionShort="A rack that holds multiple test tubes";
		model="Survivalists_Narcotics\gear\container\testtubeholder.p3d";		
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

  //=================================================== BASE CLASSES
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
    inventorySlot[]=
    {
      "Smokes1",
      "Smokes2",
      "Smokes3",
      "Smokes4",
      "Smokes5",
      "Smokes6",
      "Smokes7",
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
    itemSize[]={4,2};
    itemsCargoSize[]={0,0};
    hiddenSelections[]= {"zbytek"};
  };
  //================================================= PACKS OF SMOKES

  class SRP_DrugPack_ZWeed: SRP_DrugPack_ColorBase
	{
    scope=2;
    color="ZWeed";
		displayName="Pack of ZWeed Joints";
    descriptionShort="Just looking at one of these gives you a contact high.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\container\data\pack_of_z_weed_co.paa",
			"Survivalists_Narcotics\gear\container\data\pack_of_z_weed_co.paa"
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
			"Survivalists_Narcotics\gear\container\data\pack_of_cigs_karlsons_co.paa",
			"Survivalists_Narcotics\gear\container\data\pack_of_cigs_karlsons_co.paa"
		};
	};

  
  //================================================= CARTON OF SMOKES
  class SRP_DrugCarton_ZWeed: SRP_DrugCarton_ColorBase
	{
		scope=2;
    color="ZWeed";
    displayName="Carton of ZWeed Packs";
    descriptionShort="A big carton of joint packs!";
    attachments[]=
    {
      "Smokes1",
      "Smokes2",
      "Smokes3",
      "Smokes4",
      "Smokes5",
      "Smokes6",
      "Smokes7",
    };
    itemsCargoSize[]={0,0};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\container\data\carton_of_joints_co.paa"
		};
	};

  class SRP_DrugCarton_Cigarette: SRP_DrugCarton_ColorBase
	{
		scope=2;
    color="Cigarette";
    displayName="Carton of Cigarette Packs";
    descriptionShort="A big carton of cigarette packs!";  
    attachments[]=
    {
      "Smokes1",
      "Smokes2",
      "Smokes3",
      "Smokes4",
      "Smokes5",
      "Smokes6",
      "Smokes7",
    };
    itemsCargoSize[]={0,0};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\container\data\carton_of_cigarettes_co.paa"
		};
	};

  class SRP_DrugCarton_Cigar: SRP_DrugCarton_ColorBase
	{
		scope=2;
    color="Cigar";
    displayName="Cigar Box";
    descriptionShort="A box of finely wrapped cigars.";
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "Cigar1",
      "Cigar2",
      "Cigar3",
      "Cigar4",
      "Cigar5",
      "Cigar6",
      "Cigar7",
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\container\data\carton_of_cigars_co.paa"
		};
	};

};