class CfgPatches
{
	class Survivalists_Retextures_Characters_Gloves
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Gloves",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class OMNOGloves_ColorBase;
	class WorkingGloves_ColorBase;
	class NBCGloves_ColorBase;
	class TacticalGloves_ColorBase;
  class LeatherGloves_ColorBase;
  class SurgicalGloves_ColorBase;

  class SRP_BoxingGloves_Colorbase;

  class NBCGloves_Blue: NBCGloves_ColorBase
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
			"Survivalists_Retextures\characters\gloves\data\nbc_gloves_blue_co.paa",
			"Survivalists_Retextures\characters\gloves\data\nbc_gloves_blue_co.paa",
			"Survivalists_Retextures\characters\gloves\data\nbc_gloves_blue_co.paa"
		};
	};
  class NBCGloves_Gray: NBCGloves_ColorBase
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
			"\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa",
			"\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa",
			"\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa"
		};
	};
	class NBCGloves_Yellow: NBCGloves_ColorBase
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
			"Survivalists_Retextures\characters\gloves\data\nbc_gloves_yellow_co.paa",
			"Survivalists_Retextures\characters\gloves\data\nbc_gloves_yellow_co.paa",
			"Survivalists_Retextures\characters\gloves\data\nbc_gloves_yellow_co.paa"
		};
	};

  class OMNOGloves_Green: OMNOGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\Denglove_green.paa",
			"Survivalists_Retextures\characters\gloves\data\Denglove_green.paa",
			"Survivalists_Retextures\characters\gloves\data\Denglove_green.paa"
		};
	};
	class OMNOGloves_Black: OMNOGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\denglove.paa",
			"Survivalists_Retextures\characters\gloves\data\denglove.paa",
			"Survivalists_Retextures\characters\gloves\data\denglove.paa"
		};
	};

  class SRP_BoxingGloves_Red: SRP_BoxingGloves_Colorbase
  {
    scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_co.paa"
    };
  };
  class SRP_BoxingGloves_Blue: SRP_BoxingGloves_Colorbase
  {
    scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_blue_co.paa"
    };
  };
  class SRP_BoxingGloves_Green: SRP_BoxingGloves_Colorbase
  {
    scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_green_co.paa"
    };
  };
  class SRP_BoxingGloves_Grey: SRP_BoxingGloves_Colorbase
  {
    scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_grey_co.paa"
    };
  };
  class SRP_BoxingGloves_Pink: SRP_BoxingGloves_Colorbase
  {
    scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_pink_co.paa"
    };
  };

  class TacticalGloves_MTP: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG01.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG01.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG01.paa"
		};
	};
	class TacticalGloves_ATAC: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG04.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG04.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG04.paa"
		};
	};
	class TacticalGloves_ATACSFG: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG38.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG38.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG38.paa"
		};
	};
	class TacticalGloves_USNAOR2: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG09.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG09.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG09.paa"
		};
	};
	class TacticalGloves_USNAOR1: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG10.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG10.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG10.paa"
		};
	};
	class TacticalGloves_SURPAT: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG12.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG12.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG12.paa"
		};
	};
	class TacticalGloves_MARPATWinter: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG19.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG19.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG19.paa"
		};
	};
	class TacticalGloves_EMP6: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG57.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG57.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG57.paa"
		};
	};
  class TacticalGloves_Officer: TacticalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\Dillard_OfficerGloves_co.paa",
			"Survivalists_Retextures\characters\gloves\data\Dillard_OfficerGloves_co.paa",
			"Survivalists_Retextures\characters\gloves\data\Dillard_OfficerGloves_co.paa"
		};
	};

	class WorkingGloves_White: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\WorkingGloves_white_co.paa",
			"Survivalists_Retextures\characters\gloves\data\WorkingGloves_white_co.paa",
			"Survivalists_Retextures\characters\gloves\data\WorkingGloves_white_co.paa"
		};
	};
	class WorkingGloves_Red: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\WorkingGloves_red_co.paa",
			"Survivalists_Retextures\characters\gloves\data\WorkingGloves_red_co.paa",
			"Survivalists_Retextures\characters\gloves\data\WorkingGloves_red_co.paa"
		};
	};

  class LeatherGloves_Choco: LeatherGloves_ColorBase
	{
		scope=2;
    hiddenSelections[]={"camomale","camofemale","camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\leather_gloves_choco_co.paa"
		};
	};
  class LeatherGloves_Lime: LeatherGloves_ColorBase
	{
		scope=2;
    hiddenSelections[]={"camomale","camofemale","camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\leather_gloves_Lime_co.paa"
		};
	};
  class LeatherGloves_Orange: LeatherGloves_ColorBase
	{
		scope=2;
    hiddenSelections[]={"camomale","camofemale","camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\leather_gloves_Orange_co.paa"
		};
	};
  class LeatherGloves_Pink: LeatherGloves_ColorBase
	{
		scope=2;
    hiddenSelections[]={"camomale","camofemale","camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\leather_gloves_Pink_co.paa"
		};
	};
  class LeatherGloves_Purple: LeatherGloves_ColorBase
	{
		scope=2;
    hiddenSelections[]={"camomale","camofemale","camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\leather_gloves_Purple_co.paa"
		};
	};
  class LeatherGloves_Storm: LeatherGloves_ColorBase
	{
		scope=2;
    hiddenSelections[]={"camomale","camofemale","camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\leather_gloves_Storm_co.paa"
		};
	};
  class LeatherGloves_Yellow: LeatherGloves_ColorBase
	{
		scope=2;
    hiddenSelections[]={"camomale","camofemale","camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\leather_gloves_Yellow_co.paa"
		};
	};

  class SurgicalGloves_SkyBlue: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_blue_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_blue_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_blue_co.paa"
		};
	};
  class SurgicalGloves_Coal: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_coal_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_coal_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_coal_co.paa"
		};
	};
  class SurgicalGloves_Lime: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_green_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_green_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_green_co.paa"
		};
	};
  class SurgicalGloves_LightGreen: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_lime_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_lime_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_lime_co.paa"
		};
	};
  class SurgicalGloves_Orange: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_orange_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_orange_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_orange_co.paa"
		};
	};
  class SurgicalGloves_Pink: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_pink_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_pink_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_pink_co.paa"
		};
	};
  class SurgicalGloves_Purple: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_purple_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_purple_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_purple_co.paa"
		};
	};
  class SurgicalGloves_Red: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_red_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_red_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_red_co.paa"
		};
	};
  class SurgicalGloves_Yellow: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_yellow_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_yellow_co.paa",
			"Survivalists_Retextures\characters\gloves\data\surgical_gloves_yellow_co.paa"
		};
	};

























  //================================ REMOVE THESE EVENTUALLY
	class SRP_NBCGloves_Blue: NBCGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		colr="blue";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};

	class SRP_OMNOGloves_Green: OMNOGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		color="green";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_OMNOGloves_Black: OMNOGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		color="black";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_TacticalGloves_MTP: TacticalGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_TacticalGloves_ATAC: TacticalGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_TacticalGloves_ATACSFG: TacticalGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_TacticalGloves_USNAOR2: TacticalGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_TacticalGloves_USNAOR1: TacticalGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_TacticalGloves_SURPAT: TacticalGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_TacticalGloves_MARPATWinter: TacticalGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
	class SRP_TacticalGloves_EMP6: TacticalGloves_ColorBase
	{
		scope=2;
    descriptionShort="(Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket) (Deprecated. Make a ticket)";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
};
