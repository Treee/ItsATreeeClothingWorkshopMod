class CfgPatches
{
	class Survivalists_Retextures_Characters_Tops
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class PoliceJacket;
	class BomberJacket_ColorBase;
	class JumpsuitJacket_ColorBase;
	class M65Jacket_ColorBase;
	class Shirt_ColorBase;
	class TShirt_ColorBase;
	class PrisonUniformJacket;
	class LabCoat;
	class TacticalShirt_ColorBase;
	class MiniDress_ColorBase;
  class LeatherShirt_ColorBase;
	class HuntingJacket_ColorBase;
	class RidersJacket_ColorBase;
	class QuiltedJacket_ColorBase;
	class Sweater_ColorBase;
	class Hoodie_ColorBase;
	class TrackSuitJacket_ColorBase;
	class ParamedicJacket_ColorBase;
	class PoliceJacketOrel;
	class NBCJacketBase;
	class GorkaEJacket_ColorBase;
  class NurseDress_ColorBase;
  class Blouse_ColorBase;
	class DenimJacket;
	class Raincoat_ColorBase;
	class WoolCoat_ColorBase;
  class SRP_Rolled_Shirt_ColorBase;
  class SRP_ESPG3_TacShirt_Colorbase;
  class SRP_Bowtie_ColorBase;

  // modded classes
  class DUB_Monkrobe;
  class SRP_Sweater_ColorBase;
  class DUB_Duster;

  class NBCJacketBase_Gray: NBCJacketBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\Data\NBC_Jacket_g_grey_co.paa",
			"\dz\characters\tops\Data\NBC_Jacket_grey_co.paa",
			"\dz\characters\tops\Data\NBC_Jacket_grey_co.paa"
		};
	};
	class NBCJacketBase_Yellow: NBCJacketBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\Data\NBC_Jacket_g_yellow_co.paa",
			"\dz\characters\tops\Data\NBC_Jacket_yellow_co.paa",
			"\dz\characters\tops\Data\NBC_Jacket_yellow_co.paa"
		};
	};
	class NBCJacketBase_Orange: NBCJacketBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nbc_jacket_g_orange_co.paa",
			"Survivalists_Retextures\characters\tops\data\nbc_jacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\nbc_jacket_co.paa",
		};
	};
	class Sweater_SantaRL: Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\swrl0.paa",
			"Survivalists_Retextures\characters\tops\data\swrl0.paa",
			"Survivalists_Retextures\characters\tops\data\swrl0.paa"
		};
	};
	class Sweater_SantaBlueRL: Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\swrl1.paa",
			"Survivalists_Retextures\characters\tops\data\swrl1.paa",
			"Survivalists_Retextures\characters\tops\data\swrl1.paa"
		};
	};
	class Sweater_SantaRedGreenRL: Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\swrl2.paa",
			"Survivalists_Retextures\characters\tops\data\swrl2.paa",
			"Survivalists_Retextures\characters\tops\data\swrl2.paa"
		};
	};
	class Sweater_SantaRedBlueRL: Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\swrl3.paa",
			"Survivalists_Retextures\characters\tops\data\swrl3.paa",
			"Survivalists_Retextures\characters\tops\data\swrl3.paa"
		};
	};
	class Shirt_PlainDenim: Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_denim_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_denim_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_denim_co.paa"
		};
	};
	class Shirt_PlainGrey: Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grey_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grey_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grey_co.paa"
		};
	};
	class Shirt_PlainBurgandy: Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_burgandy_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_burgandy_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_burgandy_co.paa"
		};
	};
  class Shirt_CatBlue: Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_catblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catblue_co.paa"
		};
	};
  class Shirt_CatLime: Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_catlime_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catlime_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catlime_co.paa"
		};
	};
  class Shirt_CatPink: Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_catpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catpink_co.paa"
		};
	};
	class Shirt_PlainGrape: Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grape_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grape_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grape_co.paa"
		};
	};
	class Shirt_PlainCat: Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_pussy_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_pussy_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_pussy_co.paa"
		};
	};
  class TShirt_PocketPals: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_pocketpals_co.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_pocketpals_co.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_pocketpals_co.paa"
		};
	};
	class TShirt_Mendel: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_Mendel.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_Mendel.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_Mendel.paa"
		};
	};
	class TShirt_whiterabbit: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_rabbit.paa"
		};
	};
	class TShirt_whiteNY: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_NY.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_NY.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_NY.paa"
		};
	};
	class TShirt_gotmilk: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_milk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_milk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_milk.paa"
		};
	};
	class TShirt_whiteunicorn: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_drims.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_drims.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_drims.paa"
		};
	};
	class TShirt_whitedreams: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_dreams.paa"
		};
	};
	class TShirt_whitepunk: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_bayk.paa"
		};
	};
	class TShirt_redsun: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_redsun.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_redsun.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_redsun.paa"
		};
	};
	class TShirt_nirvana: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_nirvana.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_nirvana.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_nirvana.paa"
		};
	};
	class TShirt_ironmaiden: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_ironmaiden.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_ironmaiden.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_ironmaiden.paa"
		};
	};
	class TShirt_blackrabbit: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_rabbit.paa"
		};
	};
	class TShirt_blackNY: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_NY.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_NY.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_NY.paa"
		};
	};
	class TShirt_blackunicorn: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_drims.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_drims.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_drims.paa"
		};
	};
	class TShirt_blackdreams: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_dreams.paa"
		};
	};
	class TShirt_blackcars: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_cars.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_cars.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_cars.paa"
		};
	};
	class TShirt_blackpunk: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_bayk.paa"
		};
	};
	class TShirt_music: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_suicide.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_suicide.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_suicide.paa"
		};
	};
	class TShirt_scream: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_scream.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_scream.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_scream.paa"
		};
	};
	class TShirt_rock: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_rock.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_rock.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_rock.paa"
		};
	};
	class TShirt_misfits: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_misfits.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_misfits.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_misfits.paa"
		};
	};
	class TShirt_smiley: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_lavash.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_lavash.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_lavash.paa"
		};
	};
	class TShirt_kids: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_alkash.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_alkash.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_alkash.paa"
		};
	};
	class TShirt_Piggy: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_svin.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_svin.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_svin.paa"
		};
	};
	class TShirt_Catdog: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_pes_y.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_pes_y.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_pes_y.paa"
		};
	};
	class TShirt_BlackCatdog: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_pes.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_pes.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_pes.paa"
		};
	};
  class TShirt_Black: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_planeblack_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_planeblack_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_planeblack_co.paa"
		};
	};
  class TShirt_ThirstDevil: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\TTD_shirt_co.paa",
			"Survivalists_Retextures\characters\tops\data\TTD_shirt_co.paa",
			"Survivalists_Retextures\characters\tops\data\TTD_shirt_co.paa"
		};
	};
  class TShirt_Espen: TShirt_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\shirt_Espen_co.paa",
      "Survivalists_Retextures\characters\tops\data\shirt_Espen_co.paa",
      "Survivalists_Retextures\characters\tops\data\shirt_Espen_co.paa"
    };
  };
  class TShirt_RedStag: TShirt_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\tshirt_red_stag_co.paa",
      "Survivalists_Retextures\characters\tops\data\tshirt_red_stag_co.paa",
      "Survivalists_Retextures\characters\tops\data\tshirt_red_stag_co.paa"
    };
  };
  class TShirt_EspenBold: TShirt_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\tshirt_white_espen_co.paa",
      "Survivalists_Retextures\characters\tops\data\tshirt_white_espen_co.paa",
      "Survivalists_Retextures\characters\tops\data\tshirt_white_espen_co.paa"
    };
  };
  class TShirt_Stag: TShirt_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\tshirt_white_stag_co.paa",
      "Survivalists_Retextures\characters\tops\data\tshirt_white_stag_co.paa",
      "Survivalists_Retextures\characters\tops\data\tshirt_white_stag_co.paa"
    };
  };
	class Hoodie_Orange: Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Janek_hoodie.paa",
			"Survivalists_Retextures\characters\tops\data\Janek_hoodie.paa",
			"Survivalists_Retextures\characters\tops\data\Janek_hoodie.paa"
		};
	};
  class Hoodie_Grey1: Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hoodie_grey_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_grey_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_grey_co.paa"
		};
	};
  class Hoodie_Brown1: Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hoodie_brown_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_brown_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_brown_co.paa"
		};
	};
  class Hoodie_Blue1: Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hoodie_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_blue_co.paa"
		};
	};
  class Hoodie_Red1: Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hoodie_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_red_co.paa"
		};
	};
  class Hoodie_Purple: Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hoodie_purple_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_purple_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_purple_co.paa"
		};
	};
  class Hoodie_Pink: Hoodie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hoodie_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_pink_co.paa"
		};
	};
	class TacticalShirt_Yellow: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_yelo.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_yelo.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_yelo.paa"
		};
	};
	class TacticalShirt_Yellow1: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_black_yelo.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_black_yelo.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_black_yelo.paa"
		};
	};
	class TacticalShirt_Lime: TacticalShirt_ColorBase
	{
		scope=2;
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_grin.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_grin.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_grin.paa"
		};
	};
	class TacticalShirt_Green: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\dentac.paa",
			"Survivalists_Retextures\characters\tops\data\dentac.paa",
			"Survivalists_Retextures\characters\tops\data\dentac.paa"
		};
	};
	class TacticalShirt_MTP: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J01.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J01.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J01.paa"
		};
	};
	class TacticalShirt_ATAC: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J04.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J04.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J04.paa"
		};
	};
	class TacticalShirt_ATACSFG: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J38.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J38.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J38.paa"
		};
	};
	class TacticalShirt_USNAOR2: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J09.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J09.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J09.paa"
		};
	};
	class TacticalShirt_USNAOR1: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J10.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J10.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J10.paa"
		};
	};
	class TacticalShirt_SURPAT: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J12.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J12.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J12.paa"
		};
	};
	class TacticalShirt_MARPATWinter: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J19.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J19.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J19.paa"
		};
	};
	class TacticalShirt_EMP6: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J57.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J57.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J57.paa"
		};
	};
  class TacticalShirt_ERDL: TacticalShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_erdl_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_erdl_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_erdl_co.paa"
		};
	};
	class TacticalShirt_Snow: TacticalShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_Snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_Snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_Snow_co.paa"
		};
	};
	class TacticalShirt_Multicam: TacticalShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_co.paa"
		};
	};	
	class TacticalShirt_MulticamTropic: TacticalShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Tropic_co.paa"
		};
	};
	class TacticalShirt_MulticamBlack: TacticalShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Black_co.paa"
		};
	};
  class TacticalShirt_Flecktarn: TacticalShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\srp_jacket_Flecktarn_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_jacket_Flecktarn_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_jacket_Flecktarn_co.paa"
		};
	};
  class TacticalShirt_Officer: TacticalShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\officerJacket_dillard_co.paa",
			"Survivalists_Retextures\characters\tops\data\officerJacket_dillard_co.paa",
			"Survivalists_Retextures\characters\tops\data\officerJacket_dillard_co.paa"
		};
	};
  class TacticalShirt_Olive: TacticalShirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_olive_co.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_olive_co.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_olive_co.paa"
		};
	};
  class Raincoat_Leather: Raincoat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\raincoat_leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\raincoat_leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\raincoat_leather_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\tops\data\raincoat_Leather.rvmat",
			"Survivalists_Retextures\characters\tops\data\raincoat_Leather.rvmat",
			"Survivalists_Retextures\characters\tops\data\raincoat_Leather.rvmat"
		};
	};
  class M65Jacket_ATFBlack: M65Jacket_ColorBase
	{
		scope=2;
		displayName="ATF M65 Jacket";
		descriptionShort="A jacket with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\atf_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\atf_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\atf_m65_jacket_black_co.paa"
		};
	};
  class M65Jacket_CIABlack: M65Jacket_ColorBase
	{
		scope=2;
		displayName="CIA M65 Jacket";
		descriptionShort="A jacket with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\cia_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\cia_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\cia_m65_jacket_black_co.paa"
		};
	};
	class M65Jacket_FBIBlack: M65Jacket_ColorBase
	{
		scope=2;
		displayName="FBI M65 Jacket";
		descriptionShort="A jacket with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\fbi_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\fbi_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\fbi_m65_jacket_black_co.paa"
		};
	};
	class M65Jacket_MedicalBlack: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_black_co.paa"
		};
	};
	class M65Jacket_MedicalDpmDesert: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_dpmdesert_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_dpmdesert_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_dpmdesert_co.paa"
		};
	};
	class M65Jacket_MedicalKhaki: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_khaki_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_khaki_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_khaki_co.paa"
		};
	};
	class M65Jacket_MedicalOlive: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_olive_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_olive_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_olive_co.paa"
		};
	};
	class M65Jacket_MedicalTan: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_tan_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_tan_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_tan_co.paa"
		};
	};
	class M65Jacket_Brown: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co5.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co5.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co5.paa"
		};
	};
	class M65Jacket_Grey: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co6.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co6.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co6.paa"
		};
	};
	class M65Jacket_RedPatches: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\sndwch65.paa",
			"Survivalists_Retextures\characters\tops\data\sndwch65.paa",
			"Survivalists_Retextures\characters\tops\data\sndwch65.paa"
		};
	};
	class M65Jacket_RedFaded: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\janekm65.paa",
			"Survivalists_Retextures\characters\tops\data\janekm65.paa",
			"Survivalists_Retextures\characters\tops\data\janekm65.paa"
		};
	};
	class M65Jacket_Leather: M65Jacket_ColorBase
	{
		scope=2;
		displayName="Leather Jacket";
		descriptionShort="A large leather jacket";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\gordeyjacket.paa",
			"Survivalists_Retextures\characters\tops\data\gordeyjacket.paa",
			"Survivalists_Retextures\characters\tops\data\gordeyjacket.paa"
		};
	};
	class M65Jacket_MTP: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket01.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket01.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket01.paa"
		};
	};
	class M65Jacket_ATAC: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket04.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket04.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket04.paa"
		};
	};
	class M65Jacket_ATACSFG: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket38.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket38.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket38.paa"
		};
	};
	class M65Jacket_USNAOR2: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket09.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket09.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket09.paa"
		};
	};
	class M65Jacket_USNAOR1: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket10.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket10.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket10.paa"
		};
	};
	class M65Jacket_SURPAT: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket12.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket12.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket12.paa"
		};
	};
	class M65Jacket_MARPATWinter: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket19.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket19.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket19.paa"
		};
	};
	class M65Jacket_EMP6: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket57.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket57.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket57.paa"
		};
	};
  class M65Jacket_Leather1: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\m65_jacket_leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_leather_co.paa"
		};
	};
  class M65Jacket_MadhatterNavy: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\m65_jacket_Madhatter_navy_co.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_Madhatter_navy_co.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_Madhatter_navy_co.paa"
		};
	};
	class GorkaEJacket_MTP: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka04.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka04.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka04.paa"
		};
	};
	class GorkaEJacket_ATAC: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka08.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka08.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka08.paa"
		};
	};
	class GorkaEJacket_ATACSFG: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka42.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka42.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka42.paa"
		};
	};
	class GorkaEJacket_USNAOR2: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka13.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka13.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka13.paa"
		};
	};
	class GorkaEJacket_USNAOR1: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka14.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka14.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka14.paa"
		};
	};
	class GorkaEJacket_SURPAT: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka16.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka16.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka16.paa"
		};
	};
	class GorkaEJacket_MARPATWinter: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka23.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka23.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka23.paa"
		};
	};
	class GorkaEJacket_EMP6: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka61.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka61.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka61.paa"
		};
	};
	class GorkaEJacket_Erdl: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_erdl_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_erdl_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_erdl_co.paa"
		};
	};	
	class GorkaEJacket_Snow: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_Snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_Snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_Snow_co.paa"
		};
	};
	class GorkaEJacket_Multicam: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_co.paa"
		};
	};
	class GorkaEJacket_MulticamTropic: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Tropic_co.paa"
		};
	};
	class GorkaEJacket_MulticamBlack: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Black_co.paa"
		};
	};
  class GorkaEJacket_Blue: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Blue.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Blue.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Blue.paa"
		};
	};
	class GorkaEJacket_Tan: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Tan.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Tan.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Tan.paa"
		};
	};
	class GorkaEJacket_Brown: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Brown.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Brown.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Brown.paa"
		};
	};
	class GorkaEJacket_Olive: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Olive.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Olive.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Olive.paa"
		};
	};
	class RidersJacket_Brown: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\ridejackb.paa",
			"Survivalists_Retextures\characters\tops\data\ridejackb.paa",
			"Survivalists_Retextures\characters\tops\data\ridejackb.paa"
		};
	};
	class RidersJacket_White: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\ridejackw.paa",
			"Survivalists_Retextures\characters\tops\data\ridejackw.paa",
			"Survivalists_Retextures\characters\tops\data\ridejackw.paa"
		};
	};
	class RidersJacket_Skull: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_scalp.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_scalp.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_scalp.paa"
		};
	};
	class RidersJacket_Heart: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_terebonkay.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_terebonkay.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_terebonkay.paa"
		};
	};
	class RidersJacket_Yoda: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_yoda.paa",
			"Survivalists_Retextures\characters\tops\data\riders_yoda.paa",
			"Survivalists_Retextures\characters\tops\data\riders_yoda.paa"
		};
	};
	class RidersJacket_RedSun: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_redsun.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_redsun.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_redsun.paa"
		};
	};
	class RidersJacket_Rabbit: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_rabbit.paa"
		};
	};
	class RidersJacket_NY: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_NY.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_NY.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_NY.paa"
		};
	};
	class RidersJacket_Nirvana: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_nirvana.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_nirvana.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_nirvana.paa"
		};
	};
	class RidersJacket_Ironmaiden: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_ironmaiden.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_ironmaiden.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_ironmaiden.paa"
		};
	};
	class RidersJacket_Unicorn: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_drims.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_drims.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_drims.paa"
		};
	};
	class RidersJacket_Dreams: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_dreams.paa"
		};
	};
	class RidersJacket_Punk: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_bayk.paa"
		};
	};
  
  class RidersJacket_UpInSmoke: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_upInsmoke_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_upInsmoke_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_upInsmoke_co.paa"
		};
	};
  class RidersJacket_CheechNChong: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_cheechChong_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_cheechChong_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_cheechChong_co.paa"
		};
	};
  class RidersJacket_Exploited: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_exploited_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_exploited_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_exploited_co.paa"
		};
	};
  class RidersJacket_FlashGordon: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_flashgordon_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_flashgordon_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_flashgordon_co.paa"
		};
	};
  class RidersJacket_FuckYou: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_Fu_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_Fu_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_Fu_co.paa"
		};
	};
  class RidersJacket_Smiley1: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_haveANiceDay_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_haveANiceDay_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_haveANiceDay_co.paa"
		};
	};
  class RidersJacket_Heart1: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_heart_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_heart_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_heart_co.paa"
		};
	};
  class RidersJacket_Schrodinger: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_helloSchrodinger_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_helloSchrodinger_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_helloSchrodinger_co.paa"
		};
	};
  class RidersJacket_Rainbow: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_rainbow_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_rainbow_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_rainbow_co.paa"
		};
	};
  class RidersJacket_SmileBeatles: RidersJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_smileBeatles_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_smileBeatles_co.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_black_smileBeatles_co.paa"
		};
	};
  class WoolCoat_Leather: WoolCoat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\woolcoat_leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\woolcoat_leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\woolcoat_leather_co.paa"
		};
	};
  class TrackSuitJacket_Montana: TrackSuitJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tracksuit_jacket_boj.paa",
			"Survivalists_Retextures\characters\tops\data\tracksuit_jacket_boj.paa",
			"Survivalists_Retextures\characters\tops\data\tracksuit_jacket_boj.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\tops\data\tracksuit_jacket_boj.rvmat",
			"Survivalists_Retextures\characters\tops\data\tracksuit_jacket_boj.rvmat",
			"Survivalists_Retextures\characters\tops\data\tracksuit_jacket_boj.rvmat"
		};
	};
	class TrackSuitJacket_MTP: TrackSuitJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J01.paa",
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J01.paa",
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J01.paa"
		};
	};
	class TrackSuitJacket_ATAC: TrackSuitJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J06.paa",
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J06.paa",
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J06.paa"
		};
	};
	class PoliceJacket_Sheriff: PoliceJacket
	{
		scope=2;
		displayName="Sheriff Jacket";
		descriptionShort="Hackcock Sheriffs Department Jacket";
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_policejacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_policejacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_policejacket_co.paa"
		};
	};
	class PoliceJacket_Sheriff1: PoliceJacket
	{
		scope=2;
		displayName="Sheriff Jacket";
		descriptionShort="A Deer Isle sheriff jacket";
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\policejacket_Deerisle_co.paa",
			"Survivalists_Retextures\characters\tops\data\policejacket_Deerisle_co.paa",
			"Survivalists_Retextures\characters\tops\data\policejacket_Deerisle_co.paa"
		};
	};
	class PoliceJacketOrel_WinterCamo: PoliceJacketOrel
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\wktop_co.paa",
			"Survivalists_Retextures\characters\tops\data\wktop_co.paa",
			"Survivalists_Retextures\characters\tops\data\wktop_co.paa"
		};
	};
	class PoliceJacketOrel_Swat: PoliceJacketOrel
	{
		scope=2;
		displayName="SWAT Jacket";
		descriptionShort="A jacket belonging to the Deer Isle SWAT team";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\policejacket_swat_co.paa",
			"Survivalists_Retextures\characters\tops\data\policejacket_swat_co.paa",
			"Survivalists_Retextures\characters\tops\data\policejacket_swat_co.paa"
		};
	};
	class ParamedicJacket_BlackMedic: ParamedicJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Paramedic.paa",
			"Survivalists_Retextures\characters\tops\data\Paramedic.paa",
			"Survivalists_Retextures\characters\tops\data\Paramedic.paa"
		};
	};
	class PrisonUniformJacket_HawaiianMultiLeaf: PrisonUniformJacket
	{
		scope=2;
		displayName="Hawaiian Shirt";
		descriptionShort="A tropical Hawaiian shirt, often worn untucked, but can also be worn tucked into the waist of trousers.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_multileaf.paa",
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_multileaf.paa",
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_multileaf.paa"
		};
	};
	class PrisonUniformJacket_HawaiianPalmLeaf: PrisonUniformJacket
	{
		scope=2;
		displayName="Hawaiian Shirt";
		descriptionShort="A tropical Hawaiian shirt, often worn untucked, but can also be worn tucked into the waist of trousers.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_palmleaf.paa",
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_palmleaf.paa",
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_palmleaf.paa"
		};
	};
	class PrisonUniformJacket_HawaiianFlowers: PrisonUniformJacket
	{
		scope=2;
		displayName="Hawaiian Shirt";
		descriptionShort="A tropical Hawaiian shirt, often worn untucked, but can also be worn tucked into the waist of trousers.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_flowers.paa",
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_flowers.paa",
			"Survivalists_Retextures\characters\tops\data\hawaiian_shirt_flowers.paa"
		};
	};
  class PrisonUniformJacket_Leather: PrisonUniformJacket
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\prison_top_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\prison_top_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\prison_top_Leather_co.paa"
		};
	};  
  class MiniDress_Leather: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\minidress_lather.paa",
			"Survivalists_Retextures\characters\tops\data\minidress_lather.paa",
			"Survivalists_Retextures\characters\tops\data\minidress_lather.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\tops\data\minidress_later1.rvmat",
			"Survivalists_Retextures\characters\tops\data\minidress_later1.rvmat",
			"Survivalists_Retextures\characters\tops\data\minidress_later1.rvmat"
		};
	};
	class QuiltedJacket_Puffy: QuiltedJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\beliypuh.paa",
			"Survivalists_Retextures\characters\tops\data\beliypuh.paa",
			"Survivalists_Retextures\characters\tops\data\beliypuh.paa"
		};
	};
	class QuiltedJacket_Brown: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\janekq.paa",
			"Survivalists_Retextures\characters\tops\data\janekq.paa",
			"Survivalists_Retextures\characters\tops\data\janekq.paa"
		};
	};
	class QuiltedJacket_Denim: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\denjacket.paa",
			"Survivalists_Retextures\characters\tops\data\denjacket.paa",
			"Survivalists_Retextures\characters\tops\data\denjacket.paa"
		};
	};
	class QuiltedJacket_White: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\kurganjacket.paa",
			"Survivalists_Retextures\characters\tops\data\kurganjacket.paa",
			"Survivalists_Retextures\characters\tops\data\kurganjacket.paa"
		};
	};
  class QuiltedJacket_Blarg: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_blarg_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_blarg_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_blarg_co.paa"
		};
	};
  class QuiltedJacket_BlueStripe: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_bluestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_bluestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_bluestripe_co.paa"
		};
	};
  class QuiltedJacket_PinkPaw: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpaw_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpaw_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpaw_co.paa"
		};
	};
  class QuiltedJacket_SnowFancy: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowfancy_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowfancy_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowfancy_co.paa"
		};
	};
  class QuiltedJacket_HeartBlue: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartsblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartsblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartsblue_co.paa"
		};
	};
  class QuiltedJacket_HeartPink: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspink_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspink_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspink_co.paa"
		};
	};
  class QuiltedJacket_DarkBlueStripe: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_darkbluestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_darkbluestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_darkbluestripe_co.paa"
		};
	};
  class QuiltedJacket_DarkPurpleStripe: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_darkpurplestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_darkpurplestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_darkpurplestripe_co.paa"
		};
	};
  class QuiltedJacket_GreyStripe: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_greystripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_greystripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_greystripe_co.paa"
		};
	};
  class QuiltedJacket_HeartPurple: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspurple_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspurple_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspurple_co.paa"
		};
	};
  class QuiltedJacket_LimeStripe: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_limestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_limestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_limestripe_co.paa"
		};
	};
  class QuiltedJacket_PinkPinkStripe: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpinkstripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpinkstripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpinkstripe_co.paa"
		};
	};
  class QuiltedJacket_Rose: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_rose_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_rose_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_rose_co.paa"
		};
	};
  class QuiltedJacket_SnowPink: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowpink_co.paa"
		};
	};
  class QuiltedJacket_SnowWhite: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowwhite_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowwhite_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowwhite_co.paa"
		};
	};
  class QuiltedJacket_TealYellowStripe: QuiltedJacket_ColorBase
	{
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_tealyellowstripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_tealyellowstripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_tealyellowstripe_co.paa"
		};
	};
	class BomberJacket_Police: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_bomberjacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_bomberjacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_bomberjacket_co.paa"
		};
	};
	class BomberJacket_ATFBlue: BomberJacket_ColorBase
	{
		scope=2;
		displayName="ATF Bomber Jacket";
		descriptionShort="A jacket with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\atf_bomberjacket_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\atf_bomberjacket_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\atf_bomberjacket_blue_co.paa"
		};
	};
  class BomberJacket_CIABlue: BomberJacket_ColorBase
	{
		scope=2;
		displayName="CIA Bomber Jacket";
		descriptionShort="A jacket with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\cia_bomberjacket_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\cia_bomberjacket_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\cia_bomberjacket_blue_co.paa"
		};
	};
  class BomberJacket_FBIBlue: BomberJacket_ColorBase
	{
		scope=2;
		displayName="FBI Bomber Jacket";
		descriptionShort="A jacket with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\fbi_bomberjacket_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\fbi_bomberjacket_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\fbi_bomberjacket_blue_co.paa"
		};
	};
	class BomberJacket_Devil: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\bomberjacket_ada.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_ada.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_ada.paa"
		};
	};
	class BomberJacket_Black2: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-2.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-2.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-2.paa"
		};
	};
	class BomberJacket_Black3: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-3.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-3.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-3.paa"
		};
	};
  class BomberJacket_BomberJacket: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\bomberjacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_Leather_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\tops\data\bomberjacket_Leather.rvmat",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_Leather.rvmat",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_Leather.rvmat"
		};
	};
	class HuntingJacket_RainJacket: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\rainjacket.paa",
			"Survivalists_Retextures\characters\tops\data\rainjacket.paa",
			"Survivalists_Retextures\characters\tops\data\rainjacket.paa"
		};
	};
	class HuntingJacket_Black: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\beliyjacket.paa",
			"Survivalists_Retextures\characters\tops\data\beliyjacket.paa",
			"Survivalists_Retextures\characters\tops\data\beliyjacket.paa"
		};
	};
	class HuntingJacket_MTP: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j01.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j01.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j01.paa"
		};
	};
	class HuntingJacket_ATAC: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j04.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j04.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j04.paa"
		};
	};
	class HuntingJacket_ATACSFG: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j38.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j38.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j38.paa"
		};
	};
	class HuntingJacket_USNAOR2: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j09.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j09.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j09.paa"
		};
	};
	class HuntingJacket_USNAOR1: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j10.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j10.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j10.paa"
		};
	};
	class HuntingJacket_SURPAT: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j12.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j12.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j12.paa"
		};
	};
	class HuntingJacket_MARPATWinter: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j19.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j19.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j19.paa"
		};
	};
	class HuntingJacket_EMP6: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j57.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j57.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j57.paa"
		};
	};
  class HuntingJacket_Gold: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_gold_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_gold_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_gold_co.paa"
		};
	};
  class HuntingJacket_Grape: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_grape_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_grape_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_grape_co.paa"
		};
	};
  class HuntingJacket_Navy: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_navy_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_navy_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_navy_co.paa"
		};
	};
  class HuntingJacket_Red: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_red_co.paa"
		};
	};
  class HuntingJacket_Pink: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_pink_co.paa"
		};
	};
  class HuntingJacket_Leather: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_Leather_co.paa"
		};
	};
  class HuntingJacket_GreenCamo: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo1_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo1_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo1_co.paa"
		};
	};
  class HuntingJacket_BrownCamo: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo2_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo2_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo2_co.paa"
		};
	};
  class HuntingJacket_PurpleCamo: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo3_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo3_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo3_co.paa"
		};
	};
  class HuntingJacket_BlueCamo: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo4_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo4_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo4_co.paa"
		};
	};
  class HuntingJacket_DarkGreenCamo: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo4_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo4_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo4_co.paa"
		};
	};
  class HuntingJacket_RedCamo: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo5_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo5_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_camo5_co.paa"
		};
	};  
  class HuntingJacket_WhiteSkull: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull1_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull1_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull1_co.paa"
		};
	};
  class HuntingJacket_TanSkull: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull3_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull3_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull3_co.paa"
		};
	};
  class HuntingJacket_PurpleSkull: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull4_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull4_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull4_co.paa"
		};
	};
  class HuntingJacket_BlueSkull: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull5_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull5_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull5_co.paa"
		};
	};
  class HuntingJacket_BlackSkull: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull6_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull6_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_spring_skull6_co.paa"
		};
	};
  class LabCoat_BGSD: LabCoat
	{
		scope=2;
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\labcoat_bgsd_co.paa",
			"Survivalists_Retextures\characters\tops\data\labcoat_bgsd_co.paa",
			"Survivalists_Retextures\characters\tops\data\labcoat_bgsd_co.paa"
		};
	};
	class LabCoat_BGSD_Carr: LabCoat
  {
    displayName="Dr. Carr's Ladcoat";
    descriptionShort="A BGSD branded labcoat which belongs to Doctor Richard Carr of the BGFSD";
    scope=2;
    heatIsolation=1;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\labcoat_bgsd_carr_co.paa",
      "Survivalists_Retextures\characters\tops\data\labcoat_bgsd_carr_co.paa",
      "Survivalists_Retextures\characters\tops\data\labcoat_bgsd_carr_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Retextures\characters\tops\data\labcoat_BGSD.rvmat",
      "Survivalists_Retextures\characters\tops\data\labcoat_BGSD.rvmat",
      "Survivalists_Retextures\characters\tops\data\labcoat_BGSD.rvmat"
    };
  };
	class LabCoat_BGSD_Hansen: LabCoat
	{
		scope=2;
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\labcoat_bgsd_hansen_co.paa",
			"Survivalists_Retextures\characters\tops\data\labcoat_bgsd_hansen_co.paa",
			"Survivalists_Retextures\characters\tops\data\labcoat_bgsd_hansen_co.paa"
		};
	};
  class NurseDress_BlackGrape: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blackgrape_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackgrape_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackgrape_co.paa"
		};
	};
  class NurseDress_BlackGreen: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blackgreen_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackgreen_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackgreen_co.paa"
		};
	};
  class NurseDress_BlackMint: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blackmint_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackmint_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackmint_co.paa"
		};
	};
  class NurseDress_BlackOcean: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blackocean_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackocean_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackocean_co.paa"
		};
	};
  class NurseDress_BlackPink: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blackpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackpink_co.paa"
		};
	};
  class NurseDress_BlackRed: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blackred_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackred_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackred_co.paa"
		};
	};
  class NurseDress_BlackSnow: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blacksnow_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blacksnow_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blacksnow_co.paa"
		};
	};
  class NurseDress_BlackStorm: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blackstorm_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackstorm_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blackstorm_co.paa"
		};
	};
  class NurseDress_BlackSunny: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blacksunny_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blacksunny_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blacksunny_co.paa"
		};
	};
  class NurseDress_BlueWhite: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_bluewhite_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_bluewhite_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_bluewhite_co.paa"
		};
	};
  class NurseDress_BlueYellow: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_blueyellow_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blueyellow_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_blueyellow_co.paa"
		};
	};
  class NurseDress_GreenBlack: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_greenblack_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_greenblack_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_greenblack_co.paa"
		};
	};
  class NurseDress_GreenBlackBow: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_greenblackbow_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_greenblackbow_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_greenblackbow_co.paa"
		};
	};
  class NurseDress_PinkWhite: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_pinkwhite_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_pinkwhite_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_pinkwhite_co.paa"
		};
	};
  class NurseDress_WhiteBowBlue: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowblue_co.paa"
		};
	};
  class NurseDress_WhiteBowGreen: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowgreen_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowgreen_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowgreen_co.paa"
		};
	};
  class NurseDress_WhiteBowPink: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\nursedress_whitebowpink_co.paa"
		};
	};
  class Blouse_Leather: Blouse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\blouse_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\blouse_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\blouse_Leather_co.paa"
		};
	};  
  class DenimJacket_Leather: DenimJacket
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Leather_co.paa"
		};
	};
  class DenimJacket_Black: DenimJacket
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Black_co.paa"
		};
	};
	class JumpsuitJacket_ATFBlue: JumpsuitJacket_ColorBase
	{
		scope=2;
		displayName="ATF Jumpsuit Jacket";
		descriptionShort="A jacket with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\atf_jumpsuit_top_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\atf_jumpsuit_top_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\atf_jumpsuit_top_blue_co.paa"
		};
	};	
	class JumpsuitJacket_CIABlue: JumpsuitJacket_ColorBase
	{
		scope=2;
		displayName="CIA Jumpsuit Jacket";
		descriptionShort="A jacket with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\cia_jumpsuit_top_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\cia_jumpsuit_top_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\cia_jumpsuit_top_blue_co.paa"
		};
	};	
	class JumpsuitJacket_FBIBlue: JumpsuitJacket_ColorBase
	{
		scope=2;
		displayName="FBI Jumpsuit Jacket";
		descriptionShort="A jacket with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\fbi_jumpsuit_top_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\fbi_jumpsuit_top_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\fbi_jumpsuit_top_blue_co.paa"
		};
	};
  class JumpsuitJacket_Officer: JumpsuitJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jumpsuit_top_officer_co.paa",
			"Survivalists_Retextures\characters\tops\data\jumpsuit_top_officer_co.paa",
			"Survivalists_Retextures\characters\tops\data\jumpsuit_top_officer_co.paa"
		};
	};

  class LeatherShirt_Choco: LeatherShirt_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\long_sleeve_shirt_choco_co.paa"
		};
	};
  class LeatherShirt_Lime: LeatherShirt_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\long_sleeve_shirt_Lime_co.paa"
		};
	};
  class LeatherShirt_Orange: LeatherShirt_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\long_sleeve_shirt_Orange_co.paa"
		};
	};
  class LeatherShirt_Pink: LeatherShirt_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\long_sleeve_shirt_Pink_co.paa"
		};
	};
  class LeatherShirt_Purple: LeatherShirt_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\long_sleeve_shirt_Purple_co.paa"
		};
	};
  class LeatherShirt_Storm: LeatherShirt_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\long_sleeve_shirt_Storm_co.paa"
		};
	};
  class LeatherShirt_Yellow: LeatherShirt_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\long_sleeve_shirt_Yellow_co.paa"
		};
	};

  //==============MODDED
  class DUB_Monkrobe_blue: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_blue_co.paa",
		};
  };
  class DUB_Monkrobe_burg: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_burg_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_burg_co.paa",
		};
  };
  class DUB_Monkrobe_coal: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_coal_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_coal_co.paa",
		};
  };
  class DUB_Monkrobe_forest: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_forest_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_forest_co.paa",
		};
  };
  class DUB_Monkrobe_lav: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_lav_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_lav_co.paa",
		};
  };
  class DUB_Monkrobe_olive: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_olive_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_olive_co.paa",
		};
  };
  class DUB_Monkrobe_pink: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_pink_co.paa",
		};
  };
  class DUB_Monkrobe_purp: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_purp_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_purp_co.paa",
		};
  };
  class DUB_Monkrobe_red: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_red_co.paa",
		};
  };
  class DUB_Monkrobe_salmon: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_salmon_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_salmon_co.paa",
		};
  };
  class DUB_Monkrobe_snow: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_snow_co.paa",
		};
  };
  class DUB_Monkrobe_teal: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_teal_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_teal_co.paa",
		};
  };
  class DUB_Monkrobe_toast: DUB_Monkrobe
  {
    scope=2;
    hiddenSelections[]=
    {
      "robe",
      "rope"
    };
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\monkrobe_toast_co.paa",
			"Survivalists_Retextures\characters\tops\data\monkrope_toast_co.paa",
		};
  };

  //===================== CUSTOM
  class SRP_Sweater_Orange: SRP_Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_Sweater_CO.paa"
		};
	};
	class SRP_Sweater_Mustard: SRP_Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_Sweater_Mustard_CO.paa"
		};
	};
	class SRP_Sweater_Blue: SRP_Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_Sweater_Blue_CO.paa"
		};
	};
	class SRP_Sweater_Grey: SRP_Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_Sweater_Grey_CO.paa"
		};
	};
	class SRP_Sweater_Green: SRP_Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_Sweater_Green_CO.paa"
		};
	};
  class SRP_Sweater_Cream: SRP_Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_Sweater_Cream_CO.paa"
		};
	};
  class SRP_Sweater_Burgundy: SRP_Sweater_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_Sweater_Burgundy_CO.paa"
		};
	};
  class SRP_Rolled_Shirt_Gray_Plaid: SRP_Rolled_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\SRP_Rolled_Gray_Plaid_co.paa"
		};
	};
	class SRP_Rolled_Shirt_Green_Plaid: SRP_Rolled_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\SRP_Rolled_Shirt_Green_Plaid_co.paa"
		};
	};
	class SRP_Rolled_Shirt_Red_Plaid: SRP_Rolled_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\SRP_Rolled_Shirt_Red_Plaid_co.paa"
		};
	};
	class SRP_Rolled_Shirt_Pink_Plaid: SRP_Rolled_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\SRP_Rolled_Pink_Plaid_co.paa"
		};
	};
	class SRP_Rolled_Shirt_Tan: SRP_Rolled_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\SRP_Rolled_Shirt_Tan_co.paa"
		};
	};
	class SRP_Rolled_Shirt_Pink: SRP_Rolled_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\SRP_Rolled_Shirt_Pink_co.paa"
		};
	};
	class SRP_Rolled_Shirt_Green: SRP_Rolled_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\SRP_Rolled_Shirt_Green_co.paa"
		};
	};
	class SRP_Rolled_Shirt_Blue: SRP_Rolled_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\SRP_Rolled_Shirt_Blue_co.paa"
		};
	};

  class DUB_Duster_Cow: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_cow_co.paa"
    };
	};
  class DUB_Duster_Python: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_Python_co.paa"
    };
	};
  class DUB_Duster_OD: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_od_co.paa"
    };
	};
  class DUB_Duster_Pink: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_pink_co.paa"
    };
	};
  class DUB_Duster_Pink1: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_pink1_co.paa"
    };
	};
  class DUB_Duster_Chocolate: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_Chocolate_co.paa"
    };
	};
  class DUB_Duster_Forest: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_forest_co.paa"
    };
	};
  class DUB_Duster_Lavender: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_Lavender_co.paa"
    };
	};
  class DUB_Duster_Navy: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_Navy_co.paa"
    };
	};
  class DUB_Duster_Red: DUB_Duster
	{
		scope = 2;
    hiddenSelections[]={"jacket"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\Duster_Red_co.paa"
    };
	};

  class SRP_ESPG3_TacShirt_Black : SRP_ESPG3_TacShirt_Colorbase
  {
    scope=2;
  };
  class SRP_ESPG3_TacShirt_Tan : SRP_ESPG3_TacShirt_Colorbase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\ESP_G3_TacShirt_Tan_CO.paa"
    };
  };
  class SRP_ESPG3_TacShirt_Green : SRP_ESPG3_TacShirt_Colorbase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\tops\data\ESP_G3_TacShirt_Green_CO.paa"
    };
  };

  class SRP_Bowtie_BlackWhiteDot: SRP_Bowtie_ColorBase
	{
    scope=2;
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\tops\data\srp_bowtie_co.paa"};
  };
  class SRP_Bowtie_Black: SRP_Bowtie_ColorBase
	{
    scope=2;
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\tops\data\srp_bowtie_black_co.paa"};
  };
  class SRP_Bowtie_Blue: SRP_Bowtie_ColorBase
	{
    scope=2;
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\tops\data\srp_bowtie_blue_co.paa"};
  };
  class SRP_Bowtie_Gold: SRP_Bowtie_ColorBase
	{
    scope=2;
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\tops\data\srp_bowtie_gold_co.paa"};
  };
  class SRP_Bowtie_Purple: SRP_Bowtie_ColorBase
	{
    scope=2;
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\tops\data\srp_bowtie_purple_co.paa"};
  };
  class SRP_Bowtie_Red: SRP_Bowtie_ColorBase
	{
    scope=2;
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\tops\data\srp_bowtie_red_co.paa"};
  };
  class SRP_Bowtie_Yellow: SRP_Bowtie_ColorBase
	{
    scope=2;
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Retextures\characters\tops\data\srp_bowtie_yellow_co.paa"};
  };
};