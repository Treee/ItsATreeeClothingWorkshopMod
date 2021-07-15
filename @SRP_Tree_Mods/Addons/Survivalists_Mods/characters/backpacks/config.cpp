class CfgPatches
{
	class Survivalists_Mods_Characters_Backpacks
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Backpacks",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Container_Base;
  class HuntingBag;
  class CourierBag;
  class MountainBag_ColorBase;
  class AssaultBag_ColorBase;
  class TaloonBag_ColorBase;
  class AliceBag_ColorBase;


  //--------------------------------- MOD OVERRIDE
	class MassNBC_Bag: Container_Base
	{
		scope=2;
		displayName="NBC Bag";
		descriptionShort="A yellow bag meant to contain the NBC set, Gas mask not included. 'Mass' Thanks to BaconAndDoritos for his quick maffs";
		itemsize[]={6,6};
		itemsCargoSize[]={9,6}; // increase to account for gas mask
		Model="MassTextures\bag\medbag\cannister.p3d";
		inventorySlot[]=
		{
			"NBC"
		};
		weight=75;
		allowOwnedCargoManipulation=1;
	};



  //------------------------------------ BASE GAME Retextures

  class SRP_HuntingBag_Black: HuntingBag  // BP1_HuntingBag_black
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\hunting_black.paa",
			"Survivalists_Mods\characters\backpacks\data\hunting_black.paa",
			"Survivalists_Mods\characters\backpacks\data\hunting_black.paa"
		};
	};
	class SRP_HuntingBag_Gorka: HuntingBag  // BP1_HuntingBag_Gorka
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\hunting_gorka.paa",
			"Survivalists_Mods\characters\backpacks\data\hunting_gorka.paa",
			"Survivalists_Mods\characters\backpacks\data\hunting_gorka.paa"
		};
	};

  class SRP_CourierBag_Black: CourierBag  // BP1_CourierBag
	{
		scope=2;
		itemsCargoSize[]={7,7};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\impcourierbag_black.paa",
			"Survivalists_Mods\characters\backpacks\data\impcourierbag_black.paa",
			"Survivalists_Mods\characters\backpacks\data\impcourierbag_black.paa"
		};
	};

  class SRP_MountainBag_Black: MountainBag_ColorBase  // BP1_MountainBag_Black
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\mon_black.paa",
			"Survivalists_Mods\characters\backpacks\data\mon_black.paa",
			"Survivalists_Mods\characters\backpacks\data\mon_black.paa"
		};
	};

  class SRP_AssaultBag_Denim: AssaultBag_ColorBase  // BP_Denbag
	{
		scope=2;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"CookingEquipment"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\denbp.paa",
			"Survivalists_Mods\characters\backpacks\data\denbp.paa",
			"Survivalists_Mods\characters\backpacks\data\denbp.paa"
		};
	};

	class SRP_TaloonBag_Black1: TaloonBag_ColorBase  // BP1_Taloon_bl
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\taloon_bl.paa",
			"Survivalists_Mods\characters\backpacks\data\taloon_bl.paa",
			"Survivalists_Mods\characters\backpacks\data\taloon_bl.paa"
		};
	};
	class SRP_TaloonBag_Black2: TaloonBag_ColorBase  // BP1_Taloon_Bl2
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\taloon_bl1.paa",
			"Survivalists_Mods\characters\backpacks\data\taloon_bl1.paa",
			"Survivalists_Mods\characters\backpacks\data\taloon_bl1.paa"
		};
	};

  //--------------------------------- CUSTOM STUFF

  class SRP_LeatherBackpack_Default: HuntingBag  // BP_Huntbackpack
	{
		scope=2;
		model="Survivalists_Mods\characters\backpacks\leatherbackpack_g.p3d";
		itemsCargoSize[]={8,8};
		attachments[]=
		{
			"carman1",
			"BPAxe",
			"Belt_Back",
			"carman2"
		};
    hiddenSelections[]=
		{
			"zbytek",
      "cloth",
      "pouches",
      "straps"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_base_co.paa",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth_co.paa",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches_co.paa",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack.rvmat",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth.rvmat",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches.rvmat",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps.rvmat"
    };
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\leatherbackpack_m.p3d";
			female="Survivalists_Mods\characters\backpacks\leatherbackpack_m.p3d";
		};
	};

  class SRP_SurvivalBackpack_Default: HuntingBag  // new
	{
		scope=2;
		model="Survivalists_Mods\characters\backpacks\survivalbackpack_g.p3d";
		itemsCargoSize[]={8,8};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\survivalbackpack_co.paa",
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\characters\backpacks\data\survivalbackpack.rvmat",
    };
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\survivalbackpack_m.p3d";
			female="Survivalists_Mods\characters\backpacks\survivalbackpack_m.p3d";
		};
	};

  class SRP_SlingBackpack_Default: AliceBag_ColorBase  // new
	{
		scope=2;
		model="Survivalists_Mods\characters\backpacks\shoulderslingbackpack_g.p3d";
		itemsCargoSize[]={8,8};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack_tan_co.paa",
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack.rvmat",
    };
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\shoulderslingbackpack_m.p3d";
			female="Survivalists_Mods\characters\backpacks\shoulderslingbackpack_m.p3d";
		};
	};
  class SRP_SlingBackpack_Red: SRP_SlingBackpack_Default  // new
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack_red_co.paa",
		};
	};
  

};