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
	class TacticalGloves_Black;
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
	class SRP_NBCGloves_Blue: NBCGloves_ColorBase
	{
		scope=2;
		colr="blue";
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
	class SRP_OMNOGloves_Green: OMNOGloves_ColorBase
	{
		scope=2;
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
			"Survivalists_Retextures\characters\gloves\data\Denglove_green.paa",
			"Survivalists_Retextures\characters\gloves\data\Denglove_green.paa",
			"Survivalists_Retextures\characters\gloves\data\Denglove_green.paa"
		};
	};
	class SRP_OMNOGloves_Black: OMNOGloves_ColorBase
	{
		scope=2;
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
			"Survivalists_Retextures\characters\gloves\data\denglove.paa",
			"Survivalists_Retextures\characters\gloves\data\denglove.paa",
			"Survivalists_Retextures\characters\gloves\data\denglove.paa"
		};
	};
	class SRP_TacticalGloves_MTP: TacticalGloves_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG01.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG01.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG01.paa"
		};
	};
	class SRP_TacticalGloves_ATAC: TacticalGloves_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG04.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG04.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG04.paa"
		};
	};
	class SRP_TacticalGloves_ATACSFG: TacticalGloves_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG38.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG38.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG38.paa"
		};
	};
	class SRP_TacticalGloves_USNAOR2: TacticalGloves_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG09.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG09.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG09.paa"
		};
	};
	class SRP_TacticalGloves_USNAOR1: TacticalGloves_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG10.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG10.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG10.paa"
		};
	};
	class SRP_TacticalGloves_SURPAT: TacticalGloves_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG12.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG12.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG12.paa"
		};
	};
	class SRP_TacticalGloves_MARPATWinter: TacticalGloves_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG19.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG19.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG19.paa"
		};
	};
	class SRP_TacticalGloves_EMP6: TacticalGloves_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\gloves\data\TacticalG57.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG57.paa",
			"Survivalists_Retextures\characters\gloves\data\TacticalG57.paa"
		};
	};
};
