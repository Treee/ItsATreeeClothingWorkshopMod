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
  }
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
  }
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
  }

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
  }
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
  }
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
  }
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
  }
};