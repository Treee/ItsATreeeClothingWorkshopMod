class CfgPatches
{
	class Survivalists_Fishing_Lures
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Consumables",
      "Survivalists_Fishing"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
  class SRP_Fishing_KitBase;

  class SRP_FishingLureMetal_Kit: SRP_Fishing_KitBase
	{
		scope=2;
		displayName="Metal Fishing Lure Kit";
		descriptionShort="This kit contains the things needed to make a metal fishing lure.";
	};
  class SRP_FishingLureWood_Kit: SRP_Fishing_KitBase
	{
		scope=2;
		displayName="Wooden Fishing Lure Kit";
		descriptionShort="This kit contains the things needed to make a wooden fishing lure.";
	};


  // base fishing lure, not meant to be spawned into the game
	class SRP_FishingLure_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Fishing Lure";
		descriptionShort="A fishing lure. Used to entice fish to your bait.";
		model="Survivalists_Fishing\lures\fishinglure1.p3d";
		rotationFlags=64;
		weight=1;
		absorbency=0.80000001;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"SRP_FishingLure", // fishing rod slot
      "SRP_FishingLure1", // rest are tackle box proxy
      "SRP_FishingLure2",
      "SRP_FishingLure3",
      "SRP_FishingLure4",
      "SRP_FishingLure5",
      "SRP_FishingLure6",
      "SRP_FishingLure7",
      "SRP_FishingLure8",
      "SRP_FishingLure9",
      "SRP_FishingLure10",
      "SRP_FishingLure11",
      "SRP_FishingLure12",
      "SRP_FishingLure13",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
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
						{1.0,{"Survivalists_Fishing\lures\data\fishinglures.rvmat"}},						
						{0.69999999,{"Survivalists_Fishing\lures\data\fishinglures.rvmat"}},						
						{0.5,{"Survivalists_Fishing\lures\data\fishinglures.rvmat"}},						
						{0.30000001,{"Survivalists_Fishing\lures\data\fishinglures.rvmat"}},						
						{0.0,{"Survivalists_Fishing\lures\data\fishinglures.rvmat"}}					
          };
				};
			};
		};
	};

  class SRP_FishingLure_Flat1_1: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat1_2: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures1_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat1_3: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures2_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat1_4: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };

  class SRP_FishingLure_Flat2_1: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat2_2: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures1_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat2_3: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures2_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat2_4: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };

  class SRP_FishingLure_Flat3_1: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat3_2: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures1_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat3_3: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures2_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };
  class SRP_FishingLure_Flat3_4: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglure3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishinglures.rvmat"
		};
  };

  class SRP_FishingLure_Fish1_1: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish1_2: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish1_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish1_3: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish2_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish1_4: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };

  class SRP_FishingLure_Fish2_1: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish2_2: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish1_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish2_3: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish2_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish2_4: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };

  class SRP_FishingLure_Fish3_1: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish3_2: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish1_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish3_3: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish2_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };
  class SRP_FishingLure_Fish3_4: SRP_FishingLure_ColorBase
  {
    scope=2;
    model="Survivalists_Fishing\lures\fishinglurefish3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\lures\data\fishingluresfish.rvmat"
		};
  };

};