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

  //--------------------------------- CUSTOM STUFF
  
  class SRP_HuntingPouch_Small: Container_Base  // BP_HuntingCarman
	{
		scope=2;
		displayName="Small Pouch";
		descriptionShort="A small bag with convenient fittings, can be attatched to some bags instead of a canteen.";
		model="Survivalists_Mods\characters\backpacks\carman.p3d";
		weight=130;
		itemSize[]={2,3};
		itemsCargoSize[]={2,3};
		inventorySlot[]=
		{
			"Belt_Left",
			"carman1",
			"carman2"
		};
		allowOwnedCargoManipulation=1;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\huntingpack.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
            {1.01,{	"Survivalists_Mods\characters\backpacks\huntingpack.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\characters\backpacks\huntingpack.rvmat"}},
            {0.5,{	"Survivalists_Mods\characters\backpacks\huntingpack_damaged.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\characters\backpacks\huntingpack_damaged.rvmat"}},
            {0.0099999998,{	"Survivalists_Mods\characters\backpacks\huntingpack_destroyed.rvmat"}}
					};
				};
			};
		};
	};

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
  class SRP_HuntingBag_Kvadratniyrykzak: HuntingBag  // BP_Kvadratniyrykzak
	{
		scope=2;
		displayName="Compact Assault Backpack";
		descriptionShort="If you are looking for a small bag in which you can put everything you need, but do not want to load yourself with a bulky backpack.";
		model="Survivalists_Mods\characters\backpacks\Kvadrat_g.p3d";
		repairableWithKits[]={5,3};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"camomale",
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\AF_06_D.paa",
			"Survivalists_Mods\characters\backpacks\data\AF_06_D.paa",
			"Survivalists_Mods\characters\backpacks\data\AF_06_D.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\data\Kvadrat_m.p3d";
			female="Survivalists_Mods\characters\backpacks\data\Kvadrat_m.p3d";
		};
	};
  class SRP_HuntingBag_Hunt: HuntingBag  // BP_Huntbackpack
	{
		scope=2;
		model="Survivalists_Mods\characters\backpacks\huntingpack_g.p3d";
		attachments[]=
		{
			"carman1",
			"BPAxe",
			"Belt_Back",
			"carman2"
		};
		itemsCargoSize[]={8,8};
		soundAttType="Outdoor";
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\huntingpack_m.p3d";
			female="Survivalists_Mods\characters\backpacks\huntingpack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1.01,{	"Survivalists_Mods\characters\backpacks\data\huntingpack.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\characters\backpacks\data\huntingpack.rvmat"}},
            {0.5,{	"Survivalists_Mods\characters\backpacks\data\huntingpack_damaged.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\characters\backpacks\data\huntingpack_damaged.rvmat"}},
            {0.0099999998,{	"Survivalists_Mods\characters\backpacks\data\huntingpack_destroyed.rvmat"}}
					};
				};
			};
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

	class SRP_TaloonBag_Sidor: TaloonBag_ColorBase  // BP_Sidor
	{
		scope=2;
		displayName="Sidor";
		descriptionShort="An old war backpack";
		model="Survivalists_Mods\characters\backpacks\sidor_g.p3d";
		attachments[]=
		{
			"Chemlight",
			"binocular",
			"Hatchet",
			"WalkieTalkie"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\ranetc_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\sidor_m.p3d";
			female="Survivalists_Mods\characters\backpacks\sidor_f.p3d";
		};		
	};

	class SRP_TaloonBag_Sidor1: TaloonBag_ColorBase  // BP_SidorBl
	{
		scope=2;
		displayName="Sidor";
		descriptionShort="An old war backpack";
		model="Survivalists_Mods\characters\backpacks\sidor_g.p3d";
		attachments[]=
		{
			"Chemlight",
			"binocular",
			"Hatchet",
			"WalkieTalkie"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\ranetc_b_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_b_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_b_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\sidor_m.p3d";
			female="Survivalists_Mods\characters\backpacks\sidor_f.p3d";
		};		
	};

	class SRP_TaloonBag_TacBag: TaloonBag_ColorBase  // BP_TacBag
	{
		scope=2;
		displayName="$STR_cfgVehicles_AssaultBag_ColorBase0";
		descriptionShort="$STR_cfgVehicles_AssaultBag_ColorBase1";
		model="Survivalists_Mods\characters\backpacks\TacBag_g.p3d";
		attachments[]=
		{
			"Chemlight",
			"binocular",
			"Hatchet",
			"WalkieTalkie"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\ranetc_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\TacBag_m.p3d";
			female="Survivalists_Mods\characters\backpacks\TacBag_f.p3d";
		};
	};

	class SRP_TaloonBag_TacBag1: TaloonBag_ColorBase  // BP_TacBagBl
	{
		scope=2;
		model="Survivalists_Mods\characters\backpacks\TacBag_g.p3d";
		attachments[]=
		{
			"Chemlight",
			"binocular",
			"Hatchet",
			"WalkieTalkie"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\ranetc_b_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_b_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_b_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\TacBag_m.p3d";
			female="Survivalists_Mods\characters\backpacks\TacBag_f.p3d";
		};
	};

	class SRP_TaloonBag_RanecMedical: TaloonBag_ColorBase  // BP_ranec_med
	{
		scope=2;
    descriptionShort="A lightly coloured medical satchel";
		model="Survivalists_Mods\characters\backpacks\ranec_g.p3d";
		rotationFlags=0;
		itemSize[]={5,5};
		itemsCargoSize[]={9,7};
		attachments[]=
		{
			"firstaidkit",
			"WalkieTalkie",
      "binocular",
		};
    hiddenSelections[]=
		{
			"zbytek",
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\ranetc_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\ranec_m.p3d";
			female="Survivalists_Mods\characters\backpacks\ranec_m.p3d";
		};
	};

	class SRP_TaloonBag_RanecBlack: TaloonBag_ColorBase  // BP_ranec_bl
	{
		scope=2;
		descriptionShort="A Medical satchel";
		model="Survivalists_Mods\characters\backpacks\ranec_bl_g.p3d";
    rotationFlags=0;
		itemSize[]={5,5};
		itemsCargoSize[]={9,7};
		attachments[]=
		{
			"binocular",
			"walkietalkie"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\ranetc_b_co.paa",
			"Survivalists_Mods\characters\backpacks\data\ranetc_b_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\ranec_m.p3d";
			female="Survivalists_Mods\characters\backpacks\ranec_m.p3d";
		};
	};
};