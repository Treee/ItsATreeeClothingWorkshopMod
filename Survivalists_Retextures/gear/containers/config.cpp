class CfgPatches
{
	class Survivalists_Retextures_Gear_Containers
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
  class Bear_ColorBase;
  class SmallProtectorCase;

  class SRP_LockerSingle_Colorbase;
  class SRP_LockerTriple_Colorbase;
  class SRP_LockerQuad_Colorbase;
  class SRP_LockerMilitary_Colorbase;
  
  class Bear_Blue: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_blue_co.paa"
		};
	};
  class Bear_Green: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_green_co.paa"
		};
	};
  class Bear_Grey: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_grey_co.paa"
		};
	};
  class Bear_Purple: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_purple_co.paa"
		};
	};
  class Bear_Red: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_red_co.paa"
		};
	};
  class Bear_Yellow: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_yellow_co.paa"
		};
	};
  class Bear_Arbi: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_Arbi_co.paa"
		};
	};
  class Bear_FrenchBread: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_FrenchBread_co.paa"
		};
	};
  class Bear_FryingPan: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_fryingpan_co.paa"
		};
	};
  class Bear_Gloomy: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_gloomy_co.paa"
		};
	};
  class Bear_Hat: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_hat_co.paa"
		};
	};
  class Bear_SaltyCougar: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_SaltyCougar_co.paa"
		};
	};
  class Bear_Voodoo: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_voodoo_co.paa"
		};
	};
  class Bear_Zombie: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_Zombie_co.paa"
		};
	};
  class Bear_Axe: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_axe_co.paa"
		};
	};
  class Bear_Guts: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_guts_co.paa"
		};
	};
  class Bear_Cheddar: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_cheddar_co.paa"
		};
	};
  class Bear_Maple: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_maple_co.paa"
		};
	};
  class Bear_Trippy: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\teddybear_Trippy_co.paa"
		};
	};

  class SRP_SmallProtectorCase_Woodland: SmallProtectorCase
  {
		scope=2;
		rotationFlags=17;
		weight=980;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\loot_protectorcase_woodland_co.paa"
		};
  };
  class SRP_SmallProtectorCase_Digital: SmallProtectorCase
  {
		scope=2;
		rotationFlags=17;
		weight=980;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\loot_protectorcase_digital_co.paa"
		};
  };
  class SRP_SmallProtectorCase_Winter: SmallProtectorCase
  {
		scope=2;
		rotationFlags=17;
		weight=980;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\loot_protectorcase_winter_co.paa"
		};
  };

  class SRP_SmallProtectorCase_Blue: SmallProtectorCase
  {
		scope=2;
		rotationFlags=17;
		weight=980;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\loot_protectorcaseblu_co.paa"
		};
  };
  class SRP_SmallProtectorCase_Blue2: SmallProtectorCase
  {
		scope=2;
		rotationFlags=17;
		weight=980;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\loot_protectorcaseblue_co.paa"
		};
  };
  class SRP_SmallProtectorCase_Pink: SmallProtectorCase
  {
		scope=2;
		rotationFlags=17;
		weight=980;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\loot_protectorcasepink_co.paa"
		};
  };
  class SRP_SmallProtectorCase_Purple: SmallProtectorCase
  {
		scope=2;
		rotationFlags=17;
		weight=980;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\containers\data\loot_protectorcasepurple_co.paa"
		};
  };


  // ============================================== LOCKERS
  
  class SRP_LockerSingle_Black: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="black";
    displayName="Storage Locker - Single - Black";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_black_co.paa"
    };
  };
  class SRP_LockerSingle_Blue: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="blue";
    displayName="Storage Locker - Single - Blue";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_blue_co.paa"
    };
  };
  class SRP_LockerSingle_Brown: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="brown";
    displayName="Storage Locker - Single - Brown";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_brown_co.paa"
    };
  };
  class SRP_LockerSingle_Gray: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="gray";
    displayName="Storage Locker - Single - Gray";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_gray_co.paa"
    };
  };
  class SRP_LockerSingle_Green: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="green";
    displayName="Storage Locker - Single - Green";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_green_co.paa"
    };
  };
  class SRP_LockerSingle_Orange: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="orange";
    displayName="Storage Locker - Single - Orange";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_orange_co.paa"
    };
  };
  class SRP_LockerSingle_Pink: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="pink";
    displayName="Storage Locker - Single - Pink";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_pink_co.paa"
    };
  };
  class SRP_LockerSingle_Purple: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="purple";
    displayName="Storage Locker - Single - Purple";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_purple_co.paa"
    };
  };
  class SRP_LockerSingle_Red: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="red";
    displayName="Storage Locker - Single - Red";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_red_co.paa"
    };
  };
  class SRP_LockerSingle_White: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="white";
    displayName="Storage Locker - Single - White";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_white_co.paa"
    };
  };
  class SRP_LockerSingle_Yellow: SRP_LockerSingle_Colorbase
  {
    scope=2;
    color="yellow";
    displayName="Storage Locker - Single - Yellow";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_yellow_co.paa"
    };
  };

  class SRP_LockerTriple_Black: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="black";
    displayName="Storage Locker - Triple - Black";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_black_co.paa"
    };
  };
  class SRP_LockerTriple_Blue: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="blue";
    displayName="Storage Locker - Triple - Blue";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_blue_co.paa"
    };
  };
  class SRP_LockerTriple_Brown: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="brown";
    displayName="Storage Locker - Triple - Brown";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_brown_co.paa"
    };
  };
  class SRP_LockerTriple_Gray: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="gray";
    displayName="Storage Locker - Triple - Gray";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_gray_co.paa"
    };
  };
  class SRP_LockerTriple_Green: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="green";
    displayName="Storage Locker - Triple - Green";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_green_co.paa"
    };
  };
  class SRP_LockerTriple_Orange: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="orange";
    displayName="Storage Locker - Triple - Orange";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_orange_co.paa"
    };
  };
  class SRP_LockerTriple_Pink: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="pink";
    displayName="Storage Locker - Triple - Pink";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_pink_co.paa"
    };
  };
  class SRP_LockerTriple_Purple: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="purple";
    displayName="Storage Locker - Triple - Purple";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_purple_co.paa"
    };
  };
  class SRP_LockerTriple_Red: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="red";
    displayName="Storage Locker - Triple - Red";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_red_co.paa"
    };
  };
  class SRP_LockerTriple_White: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="white";
    displayName="Storage Locker - Triple - White";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_white_co.paa"
    };
  };
  class SRP_LockerTriple_Yellow: SRP_LockerTriple_Colorbase
  {
    scope=2;
    color="yellow";
    displayName="Storage Locker - Triple - Yellow";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_single_yellow_co.paa"
    };
  };

  class SRP_LockerQuad_Black: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="black";
    displayName="Storage Locker - Quad - Black";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_black_co.paa"
    };
  };
  class SRP_LockerQuad_Blue: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="blue";
    displayName="Storage Locker - Quad - Blue";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_blue_co.paa"
    };
  };
  class SRP_LockerQuad_Brown: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="brown";
    displayName="Storage Locker - Quad - Brown";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_brown_co.paa"
    };
  };
  class SRP_LockerQuad_Gray: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="gray";
    displayName="Storage Locker - Quad - Gray";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_gray_co.paa"
    };
  };
  class SRP_LockerQuad_Green: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="green";
    displayName="Storage Locker - Quad - Green";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_green_co.paa"
    };
  };
  class SRP_LockerQuad_Orange: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="orange";
    displayName="Storage Locker - Quad - Orange";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_orange_co.paa"
    };
  };
  class SRP_LockerQuad_Pink: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="pink";
    displayName="Storage Locker - Quad - Pink";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_pink_co.paa"
    };
  };
  class SRP_LockerQuad_Purple: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="purple";
    displayName="Storage Locker - Quad - Purple";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_purple_co.paa"
    };
  };
  class SRP_LockerQuad_Red: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="red";
    displayName="Storage Locker - Quad - Red";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_red_co.paa"
    };
  };
  class SRP_LockerQuad_White: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="white";
    displayName="Storage Locker - Quad - White";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_white_co.paa"
    };
  };
  class SRP_LockerQuad_Yellow: SRP_LockerQuad_Colorbase
  {
    scope=2;
    color="yellow";
    displayName="Storage Locker - Quad - Yellow";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_quad_yellow_co.paa"
    };
  };


  class SRP_LockerMilitary_Green: SRP_LockerMilitary_Colorbase
  {
    scope=2;
    color="green";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_military_green_co.paa"
    };
  };
  class SRP_LockerMilitary_Black: SRP_LockerMilitary_Colorbase
  {
    scope=2;
    color="black";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_military_black_co.paa"
    };
  };
  class SRP_LockerMilitary_Gray: SRP_LockerMilitary_Colorbase
  {
    scope=2;
    color="gray";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_military_gray_co.paa"
    };
  };
  class SRP_LockerMilitary_Tan: SRP_LockerMilitary_Colorbase
  {
    scope=2;
    color="tan";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\containers\data\srp_locker_military_tan_co.paa"
    };
  };
};