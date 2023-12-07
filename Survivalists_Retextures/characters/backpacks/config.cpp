class CfgPatches
{
	class Survivalists_Retextures_Characters_Backpacks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class CourierBag;
	class DryBag_ColorBase;
	class GhillieBushrag_ColorBase;
	class GhillieTop_ColorBase;
	class GhillieSuit_ColorBase;
	class HuntingBag;
	class SmershBag;
	class MountainBag_ColorBase;
	class AssaultBag_ColorBase;
	class TaloonBag_ColorBase;
	class AssaultBag_Ttsko;
	class TortillaBag;
	class AliceBag_ColorBase;
  class CanvasBag_ColorBase;
  class ArmyPouch_ColorBase;

  class SRP_SlingBackpack_Default;
  class SRP_Small_Military_Pack_Tan;
  class SRP_Big_Military_Pack_Tan;
  class SRP_Rifle_Bag_Green;
  class SRP_MessengerBag_Leather;
  class SRP_Trader_Backpack_ColorBase;

  class DUB_Monsterv2;
  class ALV_MV_Slingbag_Colorbase;

  class AliceBag_MTP: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb01_co.paa"
		};
	};
	class AliceBag_ATAC: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb04_co.paa"
		};
	};
	class AliceBag_ATACSFG: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb38_co.paa"
		};
	};
	class AliceBag_USNAOR2: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb09_co.paa"
		};
	};
	class AliceBag_USNAOR1: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb10_co.paa"
		};
	};
	class AliceBag_SURPAT: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb12_co.paa"
		};
	};
	class AliceBag_MARPATWinter: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb19_co.paa"
		};
	};
	class AliceBag_EMP6: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb57_co.paa"
		};
	};
  class AliceBag_Camo1: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\alicebackpack_bdu_camo_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\alicebackpack_bdu_camo_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\alicebackpack_bdu_camo_co.paa"
		};
	};

	class AssaultBag_Denim: AssaultBag_ColorBase
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
			"Survivalists_Retextures\characters\backpacks\data\denbp_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\denbp_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\denbp_co.paa"
		};
	};
	class AssaultBag_MTP: AssaultBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_01_co.paa"
		};
	};
	class AssaultBag_ATAC: AssaultBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_04_co.paa"
		};
	};
	class AssaultBag_ATACSFG: AssaultBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_38_co.paa"
		};
	};
	class AssaultBag_USNAOR2: AssaultBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_09_co.paa"
		};
	};
	class AssaultBag_USNAOR1: AssaultBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_10_co.paa"
		};
	};
	class AssaultBag_SURPAT: AssaultBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_12_co.paa"
		};
	};
	class AssaultBag_MARPATWinter: AssaultBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_19_co.paa"
		};
	};
	class AssaultBag_EMP6: AssaultBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_57_co.paa"
		};
	};

  class CourierBag_Black: CourierBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\impcourierbag_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\impcourierbag_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\impcourierbag_black_co.paa"
		};
	};

	class DryBag_Pink: DryBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\drybag_Pink_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\drybag_Pink_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\drybag_Pink_co.paa"
		};
	};
	class DryBag_MintBlue: DryBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\drybag_mintblue_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\drybag_mintblue_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\drybag_mintblue_co.paa"
		};
	};
  class DryBag_Espen: DryBag_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\drybag_Espen_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_Espen_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_Espen_co.paa"
    };
  };
  class DryBag_Camo: DryBag_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\drybag_camo_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_camo_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_camo_co.paa"
    };
  };
  class DryBag_ChernaRussian: DryBag_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\drybag_chernarussian_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_chernarussian_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_chernarussian_co.paa"
    };
  };
  class DryBag_NordicStripe: DryBag_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\drybag_nordic_stripe_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_nordic_stripe_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_nordic_stripe_co.paa"
    };
  };
  class DryBag_Soviet: DryBag_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\drybag_soviet_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_soviet_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_soviet_co.paa"
    };
  };
  class DryBag_UnionJack: DryBag_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\drybag_unionjack_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_unionjack_co.paa",
      "Survivalists_Retextures\characters\backpacks\data\drybag_unionjack_co.paa"
    };
  };

  class GhillieBushrag_White: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa"
		};
	};
	class GhillieBushrag_Black: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa"
		};
	};
	class GhillieTop_White: GhillieTop_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa"
		};
	};
	class GhillieTop_Black: GhillieTop_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa"
		};
	};
	class GhillieSuit_White: GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa"
		};
	};
	class GhillieSuit_Black: GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa"
		};
	};

  class MountainBag_Black: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mon_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mon_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mon_black_co.paa"
		};
	};
	class MountainBag_MTP: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_01_co.paa"
		};
	};
	class MountainBag_ATAC: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_04_co.paa"
		};
	};
	class MountainBag_ATACSFG: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_38_co.paa"
		};
	};
	class MountainBag_USNAOR2: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_09_co.paa"
		};
	};
	class MountainBag_USNAOR1: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_10_co.paa"
		};
	};
	class MountainBag_SURPAT: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_12_co.paa"
		};
	};
	class MountainBag_MARPATWinter: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_19_co.paa"
		};
	};
	class MountainBag_EMP6: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_57_co.paa"
		};
	};
  class SmershBag_White: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_white_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_white_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_white_co.paa"
		};
	};
  class SmershBag_Black: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_black_co.paa"
		};
	};
  class SmershBag_Green: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_green_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_green_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_green_co.paa"
		};
	};
  class SmershBag_Tan: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_tan_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_tan_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_tan_co.paa"
		};
	};
  class SmershBag_NBC: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\Smersh_NBC_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_NBC_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_NBC_CO.paa"
		};
	};
  class SmershBag_Red: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Red_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Red_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Red_CO.paa"
		};
	};
  class SmershBag_Purple: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Purple_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Purple_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Purple_CO.paa"
		};
	};
  class SmershBag_Blue: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Blue_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Blue_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Blue_CO.paa"
		};
	};
  class SmershBag_Pink: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Pink_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Pink_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Pink_CO.paa"
		};
	};
  class SmershBag_Olive: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Olive_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Olive_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Olive_CO.paa"
		};
	};
  class SmershBag_Storm: SmershBag
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
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Storm_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Storm_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_Storm_CO.paa"
		};
	};
  class TaloonBag_Black1: TaloonBag_ColorBase
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
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl_co.paa"
		};
	};
	class TaloonBag_Black2: TaloonBag_ColorBase
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
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl1_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl1_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl1_co.paa"
		};
	};
    
  class TortillaBag_MTP: TortillaBag
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
			"Survivalists_Retextures\characters\backpacks\data\tortila01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila01_co.paa"
		};
	};
	class TortillaBag_ATAC: TortillaBag
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
			"Survivalists_Retextures\characters\backpacks\data\tortila04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila04_co.paa"
		};
	};
	class TortillaBag_ATACSFG: TortillaBag
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
			"Survivalists_Retextures\characters\backpacks\data\tortila38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila38_co.paa"
		};
	};
	class TortillaBag_USNAOR2: TortillaBag
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
			"Survivalists_Retextures\characters\backpacks\data\tortila09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila09_co.paa"
		};
	};
	class TortillaBag_USNAOR1: TortillaBag
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
			"Survivalists_Retextures\characters\backpacks\data\tortila10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila10_co.paa"
		};
	};
	class TortillaBag_SURPAT: TortillaBag
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
			"Survivalists_Retextures\characters\backpacks\data\tortila12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila12_co.paa"
		};
	};
	class TortillaBag_MARPATWinter: TortillaBag
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
			"Survivalists_Retextures\characters\backpacks\data\tortila19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila19_co.paa"
		};
	};
	class TortillaBag_EMP6: TortillaBag
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
			"Survivalists_Retextures\characters\backpacks\data\tortila57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila57_co.paa"
		};
	};

  class HuntingBag_Mawlee: HuntingBag
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
			"Survivalists_Retextures\characters\backpacks\data\hunting_mawlee_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_mawlee_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_mawlee_co.paa"
		};
	};
	class HuntingBag_Black: HuntingBag
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
			"Survivalists_Retextures\characters\backpacks\data\hunting_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_black_co.paa"
		};
	};
	class HuntingBag_Gorka: HuntingBag
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
			"Survivalists_Retextures\characters\backpacks\data\hunting_gorka_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_gorka_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_gorka_co.paa"
		};
	};
  class HuntingBag_MTP: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB01_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB01_co.paa"
		};
	};
	class HuntingBag_ATAC: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB04_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB04_co.paa"
		};
	};
	class HuntingBag_ATACSFG: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB38_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB38_co.paa"
		};
	};
	class HuntingBag_USNAOR2: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB09_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB09_co.paa"
		};
	};
	class HuntingBag_USNAOR1: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB10_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB10_co.paa"
		};
	};
	class HuntingBag_SURPAT: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB12_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB12_co.paa"
		};
	};
	class HuntingBag_MARPATWinter: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB19_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB19_co.paa"
		};
	};
	class HuntingBag_EMP6: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB57_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB57_co.paa"
		};
	};

  class HuntingBag_Blue: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_blu_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_blu_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_blu_co.paa"
		};
	};
  class HuntingBag_Red: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_red_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_red_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_red_co.paa"
		};
	};
  class HuntingBag_Yellow: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_yellow_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_yellow_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_fjallraven_yellow_co.paa"
		};
	};
  class HuntingBag_Travel: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_travel_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_travel_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_bag_travel_co.paa"
		};
	};

  class CanvasBag_WaldoRescue: CanvasBag_ColorBase
	{
		scope=2;
		descriptionShort="Bag for the search and rescue personnel";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\CanvasBag_Rescue_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\CanvasBag_Rescue_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\CanvasBag_Rescue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\CanvasBag_medical.rvmat",
			"dz\characters\backpacks\data\CanvasBag_medical.rvmat",
			"dz\characters\backpacks\data\CanvasBag_medical.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{						
						{1,{"DZ\Characters\backpacks\data\CanvasBag.rvmat"}},						
						{0.69999999,{"DZ\Characters\backpacks\data\CanvasBag_medical.rvmat"}},						
						{0.5,{"DZ\Characters\backpacks\data\CanvasBag_medical_damage.rvmat"}},						
						{0.30000001,{"DZ\Characters\backpacks\data\CanvasBag_medical_damage.rvmat"}},						
						{0,{"DZ\Characters\backpacks\data\CanvasBag_medical_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class ArmyPouch_Drugs: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\armypouch_drugs_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_drugs_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_drugs_co.paa"
		};
	};
  class ArmyPouch_Grenade: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\armypouch_granade_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_granade_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_granade_co.paa"
		};
	};
  class ArmyPouch_Kitty: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\armypouch_Kitty_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_Kitty_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_Kitty_co.paa"
		};
	};
  class ArmyPouch_Meat: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\armypouch_meat_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_meat_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_meat_co.paa"
		};
	};
  class ArmyPouch_Tomato: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\armypouch_tomato_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_tomato_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\armypouch_tomato_co.paa"
		};
	};

  class SRP_SlingBackpack_Red: SRP_SlingBackpack_Default 
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\shoulderslingbackpack_red_co.paa",
		};
	};
  class SRP_Small_Military_Pack_Black: SRP_Small_Military_Pack_Tan 
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_Black_CO.paa"
		};
	};
  class SRP_Small_Military_Pack_Green: SRP_Small_Military_Pack_Tan 
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_Green_CO.paa"
		};
	};
  class SRP_Small_Military_Pack_MC_Black: SRP_Small_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_MC_Black_CO.paa"};
	};
	class SRP_Small_Military_Pack_CAD: SRP_Small_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_CAD_CO.paa"};
	};
	class SRP_Small_Military_Pack_ChocChip: SRP_Small_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_ChocChip_CO.paa"};
	};
	class SRP_Small_Military_Pack_ERDL: SRP_Small_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_ERDL_CO.paa"};
	};
	class SRP_Small_Military_Pack_M05: SRP_Small_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_M05_CO.paa"};
	};
	class SRP_Small_Military_Pack_MARPAT: SRP_Small_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_MPat_wood_CO.paa"};
	};

  class SRP_Big_Military_Pack_Green: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Green_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Black: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Black_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Blue: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Blue_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Coco: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Coco_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Lavender: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Lavender_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Orange: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Orange_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Pink: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Pink_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Red: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Red_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Storm: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Storm_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Sunny: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Sunny_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Teal: SRP_Big_Military_Pack_Tan
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Teal_CO.paa"
		};
	};

  class SRP_Rifle_Bag_Tan: SRP_Rifle_Bag_Green
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\Rifle_Bag_Tan_CO.paa"
    };
  };
  class SRP_Rifle_Bag_Black: SRP_Rifle_Bag_Green
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\Rifle_Bag_Black_CO.paa"
    };
  };


  class DUB_Monsterv2_Chip: DUB_Monsterv2
	{
		scope=2;
		displayName="Chip";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
  class DUB_Monsterv2_Coffee: DUB_Monsterv2
	{
		scope=2;
		displayName="Coffee";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Coffee_co.paa"
		};
	};
  class DUB_Monsterv2_Fanta: DUB_Monsterv2
	{
		scope=2;
		displayName="Fanta";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Fanta_co.paa"
		};
	};
  class DUB_Monsterv2_Skylar: DUB_Monsterv2
	{
		scope=2;
		displayName="Skylar";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Skylar_co.paa"
		};
	};
  class DUB_Monsterv2_Teal: DUB_Monsterv2
	{
		scope=2;
		displayName="Teal";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Teal_co.paa"
		};
	};
  class DUB_Monsterv2_Professor: DUB_Monsterv2
	{
		scope=2;
		displayName="Professor";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Professor_co.paa"
		};
	};
  class DUB_Monsterv2_TheQueen: DUB_Monsterv2
	{
		scope=2;
		displayName="The Queen";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_DarkQueen_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000;
					healthLevels[] = {};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.1;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0.1;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.15;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.15;
					};
				};
			};
		};
	};
  class DUB_Monsterv2_Graylight: DUB_Monsterv2
	{
		scope=2;
		displayName="Graylight";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_graylight_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.1;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0.1;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.15;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.15;
					};
				};
			};
		};
	};

	class SRP_MessengerBag_Tan: SRP_MessengerBag_Leather
	{	
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Leather_Satchel_Tan_CO.paa"
		};
	};
	class SRP_MessengerBag_Brown: SRP_MessengerBag_Leather
	{	
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Leather_Satchel_Brown_CO.paa"
		};
	};
	class SRP_MessengerBag_Pink: SRP_MessengerBag_Leather
	{	
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Leather_Satchel_Pink_CO.paa"
		};
	};
	class SRP_MessengerBag_Blue: SRP_MessengerBag_Leather
	{	
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Leather_Satchel_Blue_CO.paa"
		};
	};
  class SRP_Trader_Backpack_Leather: SRP_Trader_Backpack_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\SRP_Trader_Backpack_CO.paa",
		};
	};

  class ALV_MV_Slingbag_CAD: ALV_MV_Slingbag_Colorbase
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\backpacks\data\MV_Slingbag_CAD_CO.paa"};
		hiddenSelectionsMaterials[] = {"alv_tac_gear\characters\Backpacks\data\MV_Slingbag.rvmat"};
	};
	class ALV_MV_Slingbag_ChocoChip: ALV_MV_Slingbag_Colorbase
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\backpacks\data\MV_Slingbag_CHOC_CO.paa"};
		hiddenSelectionsMaterials[] = {"alv_tac_gear\characters\Backpacks\data\MV_Slingbag.rvmat"};
	};
	class ALV_MV_Slingbag_ERDL: ALV_MV_Slingbag_Colorbase
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\backpacks\data\MV_Slingbag_ERDL_CO.paa"};
		hiddenSelectionsMaterials[] = {"alv_tac_gear\characters\Backpacks\data\MV_Slingbag.rvmat"};
	};
	class ALV_MV_Slingbag_M05: ALV_MV_Slingbag_Colorbase
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\backpacks\data\MV_Slingbag_M05_CO.paa"};
		hiddenSelectionsMaterials[] = {"alv_tac_gear\characters\Backpacks\data\MV_Slingbag.rvmat"};
	};
	class ALV_MV_Slingbag_Marpat: ALV_MV_Slingbag_Colorbase
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\backpacks\data\MV_Slingbag_MPat_CO.paa"};
		hiddenSelectionsMaterials[] = {"alv_tac_gear\characters\Backpacks\data\MV_Slingbag.rvmat"};
	};
	class ALV_MV_Slingbag_MC_Black: ALV_MV_Slingbag_Colorbase
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\backpacks\data\MV_Slingbag_MCBlack_CO.paa"};
		hiddenSelectionsMaterials[] = {"alv_tac_gear\characters\Backpacks\data\MV_Slingbag.rvmat"};
	};
	class ALV_MV_Slingbag_TigerStripe: ALV_MV_Slingbag_Colorbase
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\backpacks\data\MV_Slingbag_TS_CO.paa"};
		hiddenSelectionsMaterials[] = {"alv_tac_gear\characters\Backpacks\data\MV_Slingbag.rvmat"};
	};
};
