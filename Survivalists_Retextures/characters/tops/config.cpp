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

  // modded classes
  class DUB_Monkrobe;

	class SRPPoliceJacket: PoliceJacket
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
	class SRP_PoliceJacket2: PoliceJacket
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
	class SRPBomberJacket_Police: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\srp_bomberjacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_bomberjacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_bomberjacket_co.paa"
		};
	};
	class SRP_ATF_BomberJacket_Blue: BomberJacket_ColorBase
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
	class SRP_ATF_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
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
	class SRP_ATF_M65Jacket_Black: M65Jacket_ColorBase
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
	class SRP_CIA_BomberJacket_Blue: BomberJacket_ColorBase
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
	class SRP_CIA_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
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
	class SRP_CIA_M65Jacket_Black: M65Jacket_ColorBase
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
	class SRP_FBI_BomberJacket_Blue: BomberJacket_ColorBase
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
	class SRP_FBI_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
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
	class SRP_FBI_M65Jacket_Black: M65Jacket_ColorBase
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
	class SRP_FieldMedic_M65Jacket_Black: M65Jacket_ColorBase
	{
		scope=2;
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_black_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_black_co.paa"
		};
	};
	class SRP_FieldMedic_M65Jacket_DpmDesert: M65Jacket_ColorBase
	{
		scope=2;
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_dpmdesert_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_dpmdesert_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_dpmdesert_co.paa"
		};
	};
	class SRP_FieldMedic_M65Jacket_Khaki: M65Jacket_ColorBase
	{
		scope=2;
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_khaki_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_khaki_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_khaki_co.paa"
		};
	};
	class SRP_FieldMedic_M65Jacket_Olive: M65Jacket_ColorBase
	{
		scope=2;
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_olive_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_olive_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_olive_co.paa"
		};
	};
	class SRP_FieldMedic_M65Jacket_Tan: M65Jacket_ColorBase
	{
		scope=2;
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_tan_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_tan_co.paa",
			"Survivalists_Retextures\characters\tops\data\medical_m65_jacket_tan_co.paa"
		};
	};
	class SRP_Labcoat_BGSD: LabCoat
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
	class SRP_Labcoat_BGSD_Carr: LabCoat
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
	class SRP_Labcoat_BGSD_Hansen: LabCoat
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
	class SRP_Shirt_PlainDenim: Shirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_denim_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_denim_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_denim_co.paa"
		};
	};
	class SRP_Shirt_PlainGrey: Shirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grey_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grey_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grey_co.paa"
		};
	};
	class SRP_Shirt_PlainBurgandy: Shirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_burgandy_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_burgandy_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_burgandy_co.paa"
		};
	};
  class SRP_Shirt_CatBlue: Shirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_catblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catblue_co.paa"
		};
	};
  class SRP_Shirt_CatLime: Shirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_catlime_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catlime_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catlime_co.paa"
		};
	};
  class SRP_Shirt_CatPink: Shirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_catpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catpink_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_catpink_co.paa"
		};
	};
	class SRP_Shirt_PlainGrape: Shirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grape_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grape_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_grape_co.paa"
		};
	};
	class SRP_Shirt_PlainPussy: Shirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\shirt_plain_pussy_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_pussy_co.paa",
			"Survivalists_Retextures\characters\tops\data\shirt_plain_pussy_co.paa"
		};
	};
	class SRP_Tshirt_PocketPals: TShirt_ColorBase
	{
		scope=2;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_pocketpals_co.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_pocketpals_co.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_pocketpals_co.paa"
		};
	};
	class Hawaiian_Shirt_MultiLeaf: PrisonUniformJacket
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
	class Hawaiian_Shirt_PalmLeaf: PrisonUniformJacket
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
	class Hawaiian_Shirt_Flowers: PrisonUniformJacket
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
	class SRP_TShirt_Mendel: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_Mendel.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_Mendel.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_Mendel.paa"
		};
	};
	class SRP_TShirt_white_rabbit: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_rabbit.paa"
		};
	};
	class SRP_TShirt_white_NY: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_NY.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_NY.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_NY.paa"
		};
	};
	class SRP_TShirt_white_milk: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_milk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_milk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_milk.paa"
		};
	};
	class SRP_TShirt_white_drims: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_drims.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_drims.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_drims.paa"
		};
	};
	class SRP_TShirt_white_dreams: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_dreams.paa"
		};
	};
	class SRP_TShirt_white_bayk: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_white_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_white_bayk.paa"
		};
	};
	class SRP_TShirt_redsun: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_redsun.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_redsun.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_redsun.paa"
		};
	};
	class SRP_TShirt_nirvana: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_nirvana.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_nirvana.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_nirvana.paa"
		};
	};
	class SRP_TShirt_ironmaiden: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_ironmaiden.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_ironmaiden.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_ironmaiden.paa"
		};
	};
	class SRP_TShirt_black_rabbit: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_rabbit.paa"
		};
	};
	class SRP_TShirt_black_NY: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_NY.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_NY.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_NY.paa"
		};
	};
	class SRP_TShirt_black_drims: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_drims.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_drims.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_drims.paa"
		};
	};
	class SRP_TShirt_black_dreams: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_dreams.paa"
		};
	};
	class SRP_TShirt_black_cars: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_cars.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_cars.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_cars.paa"
		};
	};
	class SRP_TShirt_black_bayk: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_bayk.paa"
		};
	};
	class SRP_TShirt_suicide: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_suicide.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_suicide.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_suicide.paa"
		};
	};
	class SRP_TShirt_scream: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_scream.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_scream.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_scream.paa"
		};
	};
	class SRP_TShirt_rock: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_rock.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_rock.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_rock.paa"
		};
	};
	class SRP_TShirt_misfits: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_misfits.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_misfits.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_misfits.paa"
		};
	};
	class SRP_TShirt_lavash: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_lavash.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_lavash.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_lavash.paa"
		};
	};
	class SRP_TShirt_alkash: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_alkash.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_alkash.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_alkash.paa"
		};
	};
	class SRP_TShirt_svin: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_svin.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_svin.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_svin.paa"
		};
	};
	class SRP_TShirt_pes_y: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_pes_y.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_pes_y.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_pes_y.paa"
		};
	};
	class SRP_TShirt_black_pes: TShirt_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\tshirt_black_pes.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_pes.paa",
			"Survivalists_Retextures\characters\tops\data\tshirt_black_pes.paa"
		};
	};
	class SRP_TacticalShirt_Yellow: TacticalShirt_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_yelo.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_yelo.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_yelo.paa"
		};
	};
	class SRP_TacticalShirt_Yellow1: TacticalShirt_ColorBase
	{
		scope=2;
		color="yellow1";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_black_yelo.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_black_yelo.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_black_yelo.paa"
		};
	};
	class SRP_TacticalShirt_Grin: TacticalShirt_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_grin.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_grin.paa",
			"Survivalists_Retextures\characters\tops\data\pcu5jacket_grin.paa"
		};
	};
	class SRP_TacticalShirt_Dentac: TacticalShirt_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\dentac.paa",
			"Survivalists_Retextures\characters\tops\data\dentac.paa",
			"Survivalists_Retextures\characters\tops\data\dentac.paa"
		};
	};
	class SRP_MiniDress_lather: MiniDress_ColorBase
	{
		scope=2;
		color="Lather";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
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
	class SRP_BomberJacket_ada: BomberJacket_ColorBase
	{
		scope=2;
		color="ada";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\bomberjacket_ada.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_ada.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_ada.paa"
		};
	};
	class SRP_BomberJacket_Black2: BomberJacket_ColorBase
	{
		scope=2;
		color="black2";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-2.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-2.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-2.paa"
		};
	};
	class SRP_BomberJacket_Black3: BomberJacket_ColorBase
	{
		scope=2;
		color="Black3";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-3.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-3.paa",
			"Survivalists_Retextures\characters\tops\data\bomberjacket_black_co-3.paa"
		};
	};
	class SRP_RidersJacket_Brown: RidersJacket_ColorBase
	{
		scope=2;
		color="Brown";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\ridejackb.paa",
			"Survivalists_Retextures\characters\tops\data\ridejackb.paa",
			"Survivalists_Retextures\characters\tops\data\ridejackb.paa"
		};
	};
	class SRP_RidersJacket_White: RidersJacket_ColorBase
	{
		scope=2;
		color="white";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\ridejackw.paa",
			"Survivalists_Retextures\characters\tops\data\ridejackw.paa",
			"Survivalists_Retextures\characters\tops\data\ridejackw.paa"
		};
	};
	class SRP_RidersJacket_Skull: RidersJacket_ColorBase
	{
		scope=2;
		color="skull";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_scalp.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_scalp.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_scalp.paa"
		};
	};
	class SRP_RidersJacket_Logo1: RidersJacket_ColorBase
	{
		scope=2;
		color="Logo1";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_terebonkay.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_terebonkay.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_terebonkay.paa"
		};
	};
	class SRP_RidersJacket_Yoda: RidersJacket_ColorBase
	{
		scope=2;
		color="yoda";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_yoda.paa",
			"Survivalists_Retextures\characters\tops\data\riders_yoda.paa",
			"Survivalists_Retextures\characters\tops\data\riders_yoda.paa"
		};
	};
	class SRP_RidersJacket_RedSun: RidersJacket_ColorBase
	{
		scope=2;
		color="redsun";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_redsun.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_redsun.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_redsun.paa"
		};
	};
	class SRP_RidersJacket_Rabbit: RidersJacket_ColorBase
	{
		scope=2;
		color="rabbit";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_rabbit.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_rabbit.paa"
		};
	};
	class SRP_RidersJacket_NY: RidersJacket_ColorBase
	{
		scope=2;
		color="ny";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_NY.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_NY.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_NY.paa"
		};
	};
	class SRP_RidersJacket_Nirvana: RidersJacket_ColorBase
	{
		scope=2;
		color="nirvana";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_nirvana.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_nirvana.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_nirvana.paa"
		};
	};
	class SRP_RidersJacket_Ironmaiden: RidersJacket_ColorBase
	{
		scope=2;
		color="ironmaiden";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_ironmaiden.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_ironmaiden.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_ironmaiden.paa"
		};
	};
	class SRP_RidersJacket_Drims: RidersJacket_ColorBase
	{
		scope=2;
		color="drims";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_drims.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_drims.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_drims.paa"
		};
	};
	class SRP_RidersJacket_Dreams: RidersJacket_ColorBase
	{
		scope=2;
		color="dreams";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_dreams.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_dreams.paa"
		};
	};
	class SRP_RidersJacket_Bayk: RidersJacket_ColorBase
	{
		scope=2;
		color="Bayk";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\riders_jacket_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_bayk.paa",
			"Survivalists_Retextures\characters\tops\data\riders_jacket_bayk.paa"
		};
	};
	class SRP_RidersJacket_Rop: RidersJacket_ColorBase
	{
		scope=2;
		color="rop";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\ridejacketROP.paa",
			"Survivalists_Retextures\characters\tops\data\ridejacketROP.paa",
			"Survivalists_Retextures\characters\tops\data\ridejacketROP.paa"
		};
	};
	class SRP_HuntingJacket_RainJacket: HuntingJacket_ColorBase
	{
		scope=2;
		color="RainJacket";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\rainjacket.paa",
			"Survivalists_Retextures\characters\tops\data\rainjacket.paa",
			"Survivalists_Retextures\characters\tops\data\rainjacket.paa"
		};
	};
	class SRP_HuntingJacket_Beliy: HuntingJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\beliyjacket.paa",
			"Survivalists_Retextures\characters\tops\data\beliyjacket.paa",
			"Survivalists_Retextures\characters\tops\data\beliyjacket.paa"
		};
	};
	class SRP_QuiltedJacket_Puffy: QuiltedJacket_ColorBase
	{
		scope=2;
		color="Puffy";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\beliypuh.paa",
			"Survivalists_Retextures\characters\tops\data\beliypuh.paa",
			"Survivalists_Retextures\characters\tops\data\beliypuh.paa"
		};
	};
	class SRP_QuiltedJacket_janekq: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\janekq.paa",
			"Survivalists_Retextures\characters\tops\data\janekq.paa",
			"Survivalists_Retextures\characters\tops\data\janekq.paa"
		};
	};
	class SRP_QuiltedJacket_Denim: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\denjacket.paa",
			"Survivalists_Retextures\characters\tops\data\denjacket.paa",
			"Survivalists_Retextures\characters\tops\data\denjacket.paa"
		};
	};
	class SRP_QuiltedJacket_Kurgan: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\kurganjacket.paa",
			"Survivalists_Retextures\characters\tops\data\kurganjacket.paa",
			"Survivalists_Retextures\characters\tops\data\kurganjacket.paa"
		};
	};
  class SRP_QuiltedJacket_Blarg: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_blarg_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_blarg_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_blarg_co.paa"
		};
	};
  class SRP_QuiltedJacket_BlueStripe: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_bluestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_bluestripe_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_bluestripe_co.paa"
		};
	};
  class SRP_QuiltedJacket_PinkPaw: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpaw_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpaw_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_pinkpaw_co.paa"
		};
	};
  class SRP_QuiltedJacket_SnowFancy: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowfancy_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowfancy_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_snowfancy_co.paa"
		};
	};
  class SRP_QuiltedJacket_HeartBlue: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartsblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartsblue_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartsblue_co.paa"
		};
	};
  class SRP_QuiltedJacket_HeartPink: QuiltedJacket_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspink_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspink_co.paa",
			"Survivalists_Retextures\characters\tops\data\quiltedjacket_heartspink_co.paa"
		};
	};
	class SRP_Sweater_SantaRL: Sweater_ColorBase
	{
		scope=2;
		color="santarl";
		itemsCargoSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\swrl0.paa",
			"Survivalists_Retextures\characters\tops\data\swrl0.paa",
			"Survivalists_Retextures\characters\tops\data\swrl0.paa"
		};
	};
	class SRP_Sweater_SantaBlueRL: Sweater_ColorBase
	{
		scope=2;
		color="santabluerl";
		itemsCargoSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\swrl1.paa",
			"Survivalists_Retextures\characters\tops\data\swrl1.paa",
			"Survivalists_Retextures\characters\tops\data\swrl1.paa"
		};
	};
	class SRP_Sweater_SantaRedGreenRL: Sweater_ColorBase
	{
		scope=2;
		itemsCargoSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\swrl2.paa",
			"Survivalists_Retextures\characters\tops\data\swrl2.paa",
			"Survivalists_Retextures\characters\tops\data\swrl2.paa"
		};
	};
	class SRP_Sweater_SantaRedBlueRL: Sweater_ColorBase
	{
		scope=2;
		color="SantaRedBlueRL";
		itemsCargoSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\swrl3.paa",
			"Survivalists_Retextures\characters\tops\data\swrl3.paa",
			"Survivalists_Retextures\characters\tops\data\swrl3.paa"
		};
	};
	class SRP_NBCJacket_Orange: NBCJacketBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"zbytek",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\nbc_jacket_g_orange_co.paa",
			"Survivalists_Retextures\characters\tops\data\nbc_jacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\nbc_jacket_co.paa",
			"Survivalists_Retextures\characters\tops\data\nbc_jacket_co.paa"
		};
	};
	class SRP_M65Jacket_Brown: M65Jacket_ColorBase
	{
		scope=2;
		color="Brown";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co5.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co5.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co5.paa"
		};
	};
	class SRP_M65Jacket_Grey: M65Jacket_ColorBase
	{
		scope=2;
		color="Grey";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co6.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co6.paa",
			"Survivalists_Retextures\characters\tops\data\m65_jacket_khaki_co6.paa"
		};
	};
	class SRP_M65Jacket_sndwch65: M65Jacket_ColorBase
	{
		scope=2;
		color="sndwch65";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\sndwch65.paa",
			"Survivalists_Retextures\characters\tops\data\sndwch65.paa",
			"Survivalists_Retextures\characters\tops\data\sndwch65.paa"
		};
	};
	class SRP_M65Jacket_janekm65: M65Jacket_ColorBase
	{
		scope=2;
		color="janekm65";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\janekm65.paa",
			"Survivalists_Retextures\characters\tops\data\janekm65.paa",
			"Survivalists_Retextures\characters\tops\data\janekm65.paa"
		};
	};
	class SRP_M65Jacket_Gordey: M65Jacket_ColorBase
	{
		scope=2;
		color="janekm65";
		displayName="Leather Jacket";
		descriptionShort="A large leather jacket";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		weight=1030;
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\gordeyjacket.paa",
			"Survivalists_Retextures\characters\tops\data\gordeyjacket.paa",
			"Survivalists_Retextures\characters\tops\data\gordeyjacket.paa"
		};
	};
	class SRP_M65Jacket_MTP: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket01.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket01.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket01.paa"
		};
	};
	class SRP_M65Jacket_ATAC: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket04.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket04.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket04.paa"
		};
	};
	class SRP_M65Jacket_ATACSFG: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket38.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket38.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket38.paa"
		};
	};
	class SRP_M65Jacket_USNAOR2: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket09.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket09.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket09.paa"
		};
	};
	class SRP_M65Jacket_USNAOR1: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket10.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket10.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket10.paa"
		};
	};
	class SRP_M65Jacket_SURPAT: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket12.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket12.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket12.paa"
		};
	};
	class SRP_M65Jacket_MARPATWinter: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket19.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket19.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket19.paa"
		};
	};
	class SRP_M65Jacket_EMP6: M65Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\M65_Jacket57.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket57.paa",
			"Survivalists_Retextures\characters\tops\data\M65_Jacket57.paa"
		};
	};
	class SRP_TrackSuitJacket_boj: TrackSuitJacket_ColorBase
	{
		scope=2;
		color="boj";
		weight=940;
		itemSize[]={3,3};
		itemsCargoSize[]={6,5};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
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
	class SRP_JGopTactMTP: TrackSuitJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J01.paa",
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J01.paa",
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J01.paa"
		};
	};
	class SRP_JGopTactATAC: TrackSuitJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J06.paa",
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J06.paa",
			"Survivalists_Retextures\characters\tops\data\TrackSuit_J06.paa"
		};
	};
	class SRP_Hoodie_Janek: Hoodie_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\Janek_hoodie.paa",
			"Survivalists_Retextures\characters\tops\data\Janek_hoodie.paa",
			"Survivalists_Retextures\characters\tops\data\Janek_hoodie.paa"
		};
	};
  class SRP_Hoodie_Grey: Hoodie_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\hoodie_grey_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_grey_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_grey_co.paa"
		};
	};
  class SRP_Hoodie_Brown: Hoodie_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\hoodie_brown_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_brown_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_brown_co.paa"
		};
	};
  class SRP_Hoodie_Blue: Hoodie_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\hoodie_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_blue_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_blue_co.paa"
		};
	};
  class SRP_Hoodie_Red: Hoodie_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\hoodie_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_red_co.paa"
		};
	};
  class SRP_Hoodie_Purple: Hoodie_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\hoodie_purple_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_purple_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_purple_co.paa"
		};
	};
  class SRP_Hoodie_Pink: Hoodie_ColorBase
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
			"Survivalists_Retextures\characters\tops\data\hoodie_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\hoodie_pink_co.paa"
		};
	};
	class SRP_ParamedicJacket_BlackMedic: ParamedicJacket_ColorBase
	{
		scope=2;
		color="blackmedic";
		weight=200;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Paramedic.paa",
			"Survivalists_Retextures\characters\tops\data\Paramedic.paa",
			"Survivalists_Retextures\characters\tops\data\Paramedic.paa"
		};
	};
	class SRP_PoliceJacketOrel_wktop: PoliceJacketOrel
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
			"Survivalists_Retextures\characters\tops\data\wktop_co.paa",
			"Survivalists_Retextures\characters\tops\data\wktop_co.paa",
			"Survivalists_Retextures\characters\tops\data\wktop_co.paa"
		};
	};
	class SRP_PoliceJacketOrel2: PoliceJacketOrel
	{
		scope=2;
		displayName="SWAT Jacket";
		descriptionShort="A jacket belonging to the Deer Isle SWAT team";
		heatIsolation=0.80000001;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\policejacket_swat_co.paa",
			"Survivalists_Retextures\characters\tops\data\policejacket_swat_co.paa",
			"Survivalists_Retextures\characters\tops\data\policejacket_swat_co.paa"
		};
	};
	class SRP_GorkaMTP_J: GorkaEJacket_ColorBase
	{
		scope=2;
		heatIsolation=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka04.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka04.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka04.paa"
		};
	};
	class SRP_GorkaATAC_J: GorkaEJacket_ColorBase
	{
		scope=2;
		heatIsolation=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka08.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka08.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka08.paa"
		};
	};
	class SRP_GorkaATACSFG_J: GorkaEJacket_ColorBase
	{
		scope=2;
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka42.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka42.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka42.paa"
		};
	};
	class SRP_GorkaUSNAOR2_J: GorkaEJacket_ColorBase
	{
		scope=2;
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka13.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka13.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka13.paa"
		};
	};
	class SRP_GorkaUSNAOR1_J: GorkaEJacket_ColorBase
	{
		scope=2;
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka14.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka14.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka14.paa"
		};
	};
	class SRP_GorkaSURPAT_J: GorkaEJacket_ColorBase
	{
		scope=2;
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka16.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka16.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka16.paa"
		};
	};
	class SRP_GorkaMARPATWinter_J: GorkaEJacket_ColorBase
	{
		scope=2;
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka23.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka23.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka23.paa"
		};
	};
	class SRP_GorkaEMP6_J: GorkaEJacket_ColorBase
	{
		scope=2;
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\jacket_gorka61.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka61.paa",
			"Survivalists_Retextures\characters\tops\data\jacket_gorka61.paa"
		};
	};
	class SRP_GorkaJacket_Erdl: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_erdl_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_erdl_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_erdl_co.paa"
		};
	};	
	class SRP_GorkaJacket_Snow: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_Snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_Snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_Snow_co.paa"
		};
	};
	class SRP_GorkaJacket_Multicam: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_co.paa"
		};
	};
	class SRP_GorkaJacket_MulticamTropic: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Tropic_co.paa"
		};
	};
	class SRP_GorkaJacket_MulticamBlack: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_GorkaJacket_MC_Black_co.paa"
		};
	};
	class SRP_HuntingJacket_MTP: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j01.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j01.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j01.paa"
		};
	};
	class SRP_HuntingJacket_ATAC: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j04.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j04.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j04.paa"
		};
	};
	class SRP_HuntingJacket_ATACSFG: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j38.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j38.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j38.paa"
		};
	};
	class SRP_HuntingJacket_USNAOR2: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j09.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j09.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j09.paa"
		};
	};
	class SRP_HuntingJacket_USNAOR1: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j10.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j10.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j10.paa"
		};
	};
	class SRP_HuntingJacket_SURPAT: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j12.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j12.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j12.paa"
		};
	};
	class SRP_HuntingJacket_MARPATWinter: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j19.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j19.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j19.paa"
		};
	};
	class SRP_HuntingJacket_EMP6: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\Hunting_j57.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j57.paa",
			"Survivalists_Retextures\characters\tops\data\Hunting_j57.paa"
		};
	};
  class SRP_HuntingJacket_Gold: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_gold_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_gold_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_gold_co.paa"
		};
	};
  class SRP_HuntingJacket_Grape: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_grape_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_grape_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_grape_co.paa"
		};
	};
  class SRP_HuntingJacket_Navy: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_navy_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_navy_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_navy_co.paa"
		};
	};
  class SRP_HuntingJacket_Red: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_red_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_red_co.paa"
		};
	};
  class SRP_HuntingJacket_Pink: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_pink_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_pink_co.paa"
		};
	};
	class SRP_TacticalShirt_MTP: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J01.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J01.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J01.paa"
		};
	};
	class SRP_TacticalShirt_ATAC: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J04.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J04.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J04.paa"
		};
	};
	class SRP_TacticalShirt_ATACSFG: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J38.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J38.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J38.paa"
		};
	};
	class SRP_TacticalShirt_USNAOR2: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J09.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J09.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J09.paa"
		};
	};
	class SRP_TacticalShirt_USNAOR1: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J10.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J10.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J10.paa"
		};
	};
	class SRP_TacticalShirt_SURPAT: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J12.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J12.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J12.paa"
		};
	};
	class SRP_TacticalShirt_MARPATWinter: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J19.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J19.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J19.paa"
		};
	};
	class SRP_TacticalShirt_EMP6: TacticalShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\PCU5J57.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J57.paa",
			"Survivalists_Retextures\characters\tops\data\PCU5J57.paa"
		};
	};
  class SRP_TacticalShirt_ERDL: TacticalShirt_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_erdl_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_erdl_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_erdl_co.paa"
		};
	};
	class SRP_TacticalShirt_Snow: TacticalShirt_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_Snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_Snow_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_Snow_co.paa"
		};
	};
	class SRP_TacticalShirt_Multicam: TacticalShirt_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_co.paa"
		};
	};	
	class SRP_TacticalShirt_MulticamTropic: TacticalShirt_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Tropic_co.paa"
		};
	};
	class SRP_TacticalShirt_MulticamBlack: TacticalShirt_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\SRP_jacket_MC_Black_co.paa"
		};
	};
  class SRP_TacticalShirt_Flecktarn: TacticalShirt_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\srp_jacket_Flecktarn_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_jacket_Flecktarn_co.paa",
			"Survivalists_Retextures\characters\tops\data\srp_jacket_Flecktarn_co.paa"
		};
	};
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


  // Leather Tops
  class SRP_Leather_Blouse: Blouse_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\blouse_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\blouse_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\blouse_Leather_co.paa"
		};
	};
  class SRP_Leather_BomberJacket: BomberJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
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
  class SRP_Leather_DenimJacket: DenimJacket
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Leather_co.paa"
		};
	};
  class SRP_Leather_M65Jacket: M65Jacket_ColorBase
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
  class SRP_Leather_PrisonTop: PrisonUniformJacket
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\prison_top_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\prison_top_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\prison_top_Leather_co.paa"
		};
	};
  class SRP_Leather_HuntingJacket: HuntingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_Leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\hunting_jacket_Leather_co.paa"
		};
	};
  class SRP_Leather_Raincoat: Raincoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
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
  class SRP_Leather_WoolCoat: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\woolcoat_leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\woolcoat_leather_co.paa",
			"Survivalists_Retextures\characters\tops\data\woolcoat_leather_co.paa"
		};
	};

  class SRP_GorkaJacket_Blue: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Blue.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Blue.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Blue.paa"
		};
	};
	class SRP_GorkaJacket_Tan: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Tan.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Tan.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Tan.paa"
		};
	};
	class SRP_GorkaJacket_Brown: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Brown.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Brown.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Brown.paa"
		};
	};
	class SRP_GorkaJacket_Olive: GorkaEJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Olive.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Olive.paa",
			"Survivalists_Retextures\characters\tops\data\bushcraft_top_Olive.paa"
		};
	};

  class SRP_DenimJacket_Black: DenimJacket
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Black_co.paa",
			"Survivalists_Retextures\characters\tops\data\denim_jacket_Black_co.paa"
		};
	};
};
