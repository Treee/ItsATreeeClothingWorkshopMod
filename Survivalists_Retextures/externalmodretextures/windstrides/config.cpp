class CfgPatches
{
	class Survivalists_Retextures_ExternalModRetextures_Windstride
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
	class Ragged_Eyepatch;
	class Shemagh_ColorBase;
	class Shemagh_Scarf_ColorBase;
	class Shemagh_Facemask_ColorBase;
	class Shemagh_Bandit_ColorBase;
	class Winter_Parka_Base;
	class Kneepads_Jeans_Base;
	class Layered_Shirt_Base;
	class Layered_Shirt_Cheburashka: Layered_Shirt_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\layered_shirt_redacted_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\layered_shirt_redacted_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\layered_shirt_redacted_co.paa"
		};
	};
	class Kneepads_Jeans_Olive: Kneepads_Jeans_Base
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\kneepads_jeans_olive_co.paa"
		};
	};
	class SRP_Winter_Parka_Black: Winter_Parka_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_black_co.paa"
		};
	};
	class SRP_Ragged_Eyepatchbblack: Ragged_Eyepatch
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\ragged_eyepatchblack_co.paa"
		};
	};
	class SRP_Ragged_Eyepatcheye: Ragged_Eyepatch
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\ragged_eyepatcheye_co.paa"
		};
	};
	class SRP_Ragged_Eyepatchbrown: Ragged_Eyepatch
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\ragged_eyepatchbrown_co.paa"
		};
	};
	class Shemagh_Checkered_Black_color: Shemagh_ColorBase
	{
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_black_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_black_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_black_co.paa"
		};
	};
	class Shemagh_Black: Shemagh_Checkered_Black_color
	{
		scope=2;
		color="black";
	};
	class Shemagh_Checkered_Pink_color: Shemagh_ColorBase
	{
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_pink_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_pink_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_pink_co.paa"
		};
	};
	class Shemagh_Pink: Shemagh_Checkered_Pink_color
	{
		scope=2;
		color="pink";
	};
	class Shemagh_Scarf_Checkered_Black_color: Shemagh_Scarf_ColorBase
	{
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_black_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_black_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_black_co.paa"
		};
	};
	class Shemagh_Scarf_Black: Shemagh_Scarf_Checkered_Black_color
	{
		scope=2;
		color="black";
	};
	class Shemagh_Scarf_Checkered_Pink_color: Shemagh_Scarf_ColorBase
	{
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_pink_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_pink_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_pink_co.paa"
		};
	};
	class Shemagh_Scarf_Pink: Shemagh_Scarf_Checkered_Pink_color
	{
		scope=2;
		color="pink";
	};
	class Shemagh_Facemask_Checkered_Black_color: Shemagh_Facemask_ColorBase
	{
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_black_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_black_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_black_co.paa"
		};
	};
	class Shemagh_Facemask_Black: Shemagh_Facemask_Checkered_Black_color
	{
		scope=2;
		color="black";
	};
	class Shemagh_Facemask_Checkered_Pink_color: Shemagh_Facemask_ColorBase
	{
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_pink_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_pink_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_pink_co.paa"
		};
	};
	class Shemagh_Facemask_Pink: Shemagh_Facemask_Checkered_Pink_color
	{
		scope=2;
		color="pink";
	};
	class Shemagh_Bandit_Checkered_Black_color: Shemagh_Bandit_ColorBase
	{
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_black_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_black_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_black_co.paa"
		};
	};
	class Shemagh_Bandit_Black: Shemagh_Bandit_Checkered_Black_color
	{
		scope=2;
		color="black";
	};
	class Shemagh_Bandit_Checkered_Pink_color: Shemagh_Bandit_ColorBase
	{
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_pink_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_pink_co.paa",
			"Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_pink_co.paa"
		};
	};
	class Shemagh_Bandit_Pink: Shemagh_Bandit_Checkered_Pink_color
	{
		scope=2;
		color="pink";
	};
};
