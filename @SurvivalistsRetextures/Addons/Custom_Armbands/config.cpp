class CfgPatches
{
	class IAT_Custom_Armbands
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
  class Armband_ColorBase;

  class Collective_Armband_Blue: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\collective\collective_armbend_blue_co.paa",
			"IAT_Custom_Armbands\data\collective\collective_armbend_blue_co.paa",
			"IAT_Custom_Armbands\data\collective\collective_armbend_blue_co.paa",
			"IAT_Custom_Armbands\data\collective\collective_armbend_blue_co.paa",
			"IAT_Custom_Armbands\data\collective\collective_armbend_blue_co.paa"
		};
	};
  class Settlers_Of_Portland_Deer_Armband_Blue: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\settlers_of_portland\settlers_of_portland_armbend_blue_co.paa",
			"IAT_Custom_Armbands\data\settlers_of_portland\settlers_of_portland_armbend_blue_co.paa",
			"IAT_Custom_Armbands\data\settlers_of_portland\settlers_of_portland_armbend_blue_co.paa",
			"IAT_Custom_Armbands\data\settlers_of_portland\settlers_of_portland_armbend_blue_co.paa",
			"IAT_Custom_Armbands\data\settlers_of_portland\settlers_of_portland_armbend_blue_co.paa"
		};
	};
  class Reaperz_Squad_Armband_Purple: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="purple";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\reaperz_squad\reaperz_squad_armbend_co.paa",
			"IAT_Custom_Armbands\data\reaperz_squad\reaperz_squad_armbend_co.paa",
			"IAT_Custom_Armbands\data\reaperz_squad\reaperz_squad_armbend_co.paa",
			"IAT_Custom_Armbands\data\reaperz_squad\reaperz_squad_armbend_co.paa",
			"IAT_Custom_Armbands\data\reaperz_squad\reaperz_squad_armbend_co.paa"
		};
	};
  class Sundown_Armband_Black: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="blacks";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\sundown\sundown_armbend_co.paa",
			"IAT_Custom_Armbands\data\sundown\sundown_armbend_co.paa",
			"IAT_Custom_Armbands\data\sundown\sundown_armbend_co.paa",
			"IAT_Custom_Armbands\data\sundown\sundown_armbend_co.paa",
			"IAT_Custom_Armbands\data\sundown\sundown_armbend_co.paa"
		};
	};
};