class CfgPatches
{
	class SRP_Tree_Smokables
	{
    units[] = {
      "SRP_Smokable_ZWeed",
      "SRP_Smokable_Cigarette",
      "SRP_Smokable_Cigar",
      "SRP_Smokable_Test",
      "SRP_SmokingPipe",
      "SRP_DrugPack_ZWeed",
      "SRP_DrugPack_Cigarette",
      "SRP_DrugCarton_ZWeed",
      "SRP_DrugCarton_Cigarette",
      "SRP_DrugCarton_Cigar"
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class Edible_Base;
  class Inventory_Base;
  
  class SRP_Smokable_ColorBase: Edible_Base
  {
    displayName="SRP_Smokable_ColorBase";
		descriptionShort="Smokable Drugs";
    model="SRP_Tree_Mods\drugs\accessories\cigarette\cigarette_g.p3d";
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
    destroyOnEmpty=0;
		varQuantityDestroyOnMin=1;
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
    displayName="ZWeed Joint";
    color="ZWeed";
    model="SRP_Tree_Mods\drugs\accessories\cigarette\cigarette_g.p3d";
    hiddenSelections[]= {"zbytek"};
    hiddenSelectionsTextures[]=
		{
			"SRP_Tree_Mods\drugs\accessories\cigarette\data\joint_co.paa",
		};
		descriptionShort="A joint for smoking...and getting baked";
    class ClothingTypes
		{
			male="SRP_Tree_Mods\drugs\accessories\cigarette\cigarette_m.p3d";
			female="SRP_Tree_Mods\drugs\accessories\cigarette\cigarette_m.p3d";
		};
  };
  class SRP_Smokable_Cigarette: SRP_Smokable_ColorBase
  {
    displayName="Cigarette";
    color="Cigarette";
    model="SRP_Tree_Mods\drugs\accessories\cigarette\cigarette_g.p3d";
		descriptionShort="Relieve that stress... ahhhhh";
    class ClothingTypes
		{
			male="SRP_Tree_Mods\drugs\accessories\cigarette\cigarette_m.p3d";
			female="SRP_Tree_Mods\drugs\accessories\cigarette\cigarette_m.p3d";
		};
  };
  class SRP_Smokable_Cigar: SRP_Smokable_ColorBase
  {
    displayName="Cigar";
    color="Cigar";
    model="SRP_Tree_Mods\drugs\accessories\cigar\cigar_g.p3d";
		descriptionShort="A finely wrapped tobacco cigar. A rare luxury.";
    inventorySlot[]={};
    class ClothingTypes
		{
			male="SRP_Tree_Mods\drugs\accessories\cigar\cigar_m.p3d";
			female="SRP_Tree_Mods\drugs\accessories\cigar\cigar_m.p3d";
		};
  }

  class SRP_Smokable_Test: SRP_Smokable_ColorBase
  {
    displayName="Test Modifier";
    color="Test";
    model="SRP_Tree_Mods\drugs\accessories\cigar\cigar_g.p3d";
		descriptionShort="Test modifier";
    inventorySlot[]={};
    class ClothingTypes
		{
			male="SRP_Tree_Mods\drugs\accessories\cigar\cigar_m.p3d";
			female="SRP_Tree_Mods\drugs\accessories\cigar\cigar_m.p3d";
		};
  }

  class SRP_SmokingPipe: Inventory_Base
  {
		scope=2;
    displayName="Smoking Pipe";
		descriptionShort="A well preserved smoking pipe of the old world.";
    model="SRP_Tree_Mods\drugs\accessories\smokingpipe\smokingpipe.p3d";
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
			male="SRP_Tree_Mods\drugs\accessories\smokingpipe\smokingpipe_m.p3d";
			female="SRP_Tree_Mods\drugs\accessories\smokingpipe\smokingpipe_m.p3d";
		};
  };

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
    color="ZWeed";
		displayName="Pack of ZWeed Joints";
    descriptionShort="Just looking at one of these gives you a contact high.";
		hiddenSelectionsTextures[]=
		{
			"SRP_Tree_Mods\data\pack_of_z_weed_co.paa",
			"SRP_Tree_Mods\data\pack_of_z_weed_co.paa"
		};
	};

  class SRP_DrugPack_Cigarette: SRP_DrugPack_ColorBase
	{
    color="Cigarette";
		displayName="Pack of Cigarette's";
    descriptionShort="Just looking at these is giving you cancer.";
		hiddenSelectionsTextures[]=
		{
			"SRP_Tree_Mods\data\pack_of_cigs_karlsons_co.paa",
			"SRP_Tree_Mods\data\pack_of_cigs_karlsons_co.paa"
		};
	};

  class SRP_DrugCarton_ColorBase : Inventory_Base {
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
			"SRP_Tree_Mods\data\carton_of_joints_co.paa"
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
			"SRP_Tree_Mods\data\carton_of_cigarettes_co.paa"
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
			"SRP_Tree_Mods\data\carton_of_cigars_co.paa"
		};
	};
};