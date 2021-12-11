class CfgPatches
{
	class Survivalists_Retextures_Characters_Masks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Masks",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class SurgicalMask;
	class HockeyMask;
	class Balaclava3Holes_ColorBase;
	class BalaclavaMask_ColorBase;
	class SRP_SurgicalMask_Black: SurgicalMask
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
			"Survivalists_Retextures\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Retextures\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Retextures\characters\masks\data\bandanafhg_65b.paa"
		};
	};
	class SRP_HockeyMask_Steel: HockeyMask
	{
		scope=2;
		displayName="Steel Mask";
		descriptionShort="A steel mask fastened by leather strap";
		weight=1555;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\vinitagehockeym_co2907.paa",
			"Survivalists_Retextures\characters\masks\data\vinitagehockeym_co2907.paa",
			"Survivalists_Retextures\characters\masks\data\vinitagehockeym_co2907.paa"
		};
	};
	class SRP_Balaclava3H_MTP: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H01.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H01.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H01.paa"
		};
	};
	class SRP_Balaclava3H_ATAC: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H05.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H05.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H05.paa"
		};
	};
	class SRP_Balaclava3H_ATACSFG: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H39.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H39.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H39.paa"
		};
	};
	class SRP_Balaclava3H_USNAOR2: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H10.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H10.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H10.paa"
		};
	};
	class SRP_Balaclava3H_USNAOR1: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H11.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H11.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H11.paa"
		};
	};
	class SRP_Balaclava3H_SURPAT: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H13.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H13.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H13.paa"
		};
	};
	class SRP_Balaclava3H_MARPATWinter: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H20.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H20.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H20.paa"
		};
	};
	class SRP_Balaclava3H_EMP6: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H58.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H58.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H58.paa"
		};
	};
	class SRP_Balaclava_MTP: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava01.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava01.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava01.paa"
		};
	};
	class SRP_Balaclava_ATAC: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava05.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava05.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava05.paa"
		};
	};
	class SRP_Balaclava_ATACSFG: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava39.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava39.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava39.paa"
		};
	};
	class SRP_Balaclava_USNAOR2: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava10.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava10.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava10.paa"
		};
	};
	class SRP_Balaclava_USNAOR1: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava11.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava11.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava11.paa"
		};
	};
	class SRP_Balaclava_SURPAT: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava13.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava13.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava13.paa"
		};
	};
	class SRP_Balaclava_MARPATWinter: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava20.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava20.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava20.paa"
		};
	};
	class SRP_Balaclava_EMP6: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava58.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava58.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava58.paa"
		};
	};
};
