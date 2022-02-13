class CfgPatches
{
	class Survivalists_Narcotics_Gear_Crafting
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Crafting",
      "Survivalists_Narcotics"
		};
	};
};

class CfgVehicles
{
  class crafting_Base;
  class Inventory_Base;

  //================================================ DRUG WORKBENCH RECIPE ATTACHEMNTS
  class SRP_Drug_Blueprint_Meth: Inventory_Base
	{
		scope=2;
		displayName="Meth Recipe";
		descriptionShort="Jebediah's secret family recipe for meth. Combine with a drug tub.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot[]={"MethRecipe"};
		itemSize[]={1,3};
		weight=5;
	};
  class SRP_Drug_Blueprint_BathSalts: Inventory_Base
	{
		scope=2;
		displayName="BathSalts Recipe";
		descriptionShort="Jebediah's secret family recipe for BathSalts. Combine with a drug tub.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot[]={"BathSaltsRecipe"};
		itemSize[]={1,3};
		weight=5;
	};
  class SRP_Drug_Blueprint_Acid: Inventory_Base
	{
		scope=2;
		displayName="Acid Recipe";
		descriptionShort="Jebediah's secret family recipe for Acid. Combine with a drug tub.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot[]={"AcidRecipe"};
		itemSize[]={1,3};
		weight=5;
	};

  //=================================================== DRUG LAB TUBES
  class SRP_LabTube_Colorbase: Inventory_Base
  {
		displayName="Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
		model="Survivalists_Narcotics\gear\crafting\testtube.p3d";
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
      "Survivalists_Narcotics\gear\crafting\data\testtube_ca.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Narcotics\gear\crafting\data\testtube.rvmat"
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
  class SRP_LabTube_Clear: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Clear Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="clear";
  };
  class SRP_LabTube_Blue: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Blue Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="blue";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Narcotics\gear\crafting\data\testtube_blue.rvmat"
    };
  };
  class SRP_LabTube_Red: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Red Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="red";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Narcotics\gear\crafting\data\testtube_red.rvmat"
    };
  };
  class SRP_LabTube_Green: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Green Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="green";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Narcotics\gear\crafting\data\testtube_green.rvmat"
    };
  };
  class SRP_LabTube_Yellow: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Yellow Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="yellow";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Narcotics\gear\crafting\data\testtube_yellow.rvmat"
    };
  };

  //========================================================== MUTANT LAB TUBES
  class SRP_LabTube_MutantLiquid: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Distilled Ichor";
		descriptionShort="A single test tube. Contains some ichor. What are you doing with this?";
    color="mutantliquid";
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=50;
    stackedUnit="ml";
    canBeSplit=1;
		hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Narcotics\gear\crafting\data\testtube_red.rvmat"
    };
  };
  class SRP_LabTube_MutantLiquidDisinfected: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Disinfected Ichor";
		descriptionShort="A single test tube. Contains some disinfected ichor. What are you doing with this?";
    color="mutantliquiddisinfected";
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=50;
    stackedUnit="ml";
    canBeSplit=1;
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Narcotics\gear\crafting\data\testtube_red.rvmat"
    };
  };
  class SRP_LabTube_MutantLiquidAntibiotic: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Treated Ichor";
		descriptionShort="A single test tube. Contains some treated ichor. What are you doing with this?";
    color="mutantliquidantibiotic";
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=50;
    stackedUnit="ml";
    canBeSplit=1;
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "Survivalists_Narcotics\gear\crafting\data\testtube_red.rvmat"
    };
  };
  class SRP_LabTube_MutantLiquidSterilized: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Sterilized Ichor";
		descriptionShort="A single test tube. Contains some sterilized ichor. What are you doing with this?";
    color="mutantliquidsterilized";
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=50;
    stackedUnit="ml";
    canBeSplit=1;
		hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Narcotics\gear\crafting\data\testtube_red.rvmat"
    };
  };
  class SRP_LabTube_MutantLiquidSterilizedIrradiated: SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Irradiated Ichor";
		descriptionShort="A single test tube. Contains some irradiated ichor. What are you doing with this?";
    color="mutantliquidsterilizedirradiated";
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=200;
    stackedUnit="ml";
    canBeSplit=1;
		hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Narcotics\gear\crafting\data\testtube_red.rvmat"
    };
  };

};