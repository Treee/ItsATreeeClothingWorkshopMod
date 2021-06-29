class CfgPatches
{
	class Survivalists_Mods_Characters_Masks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Masks"
		};
	};
};
class CfgVehicles
{
  class SurgicalMask;
  class BandanaMask_ColorBase;
  class HockeyMask;


  class SRP_SurgicalMask_Black: SurgicalMask  // JanekMasks
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa"
		};
	};
  class SRP_SurgicalMask_FaceScar: SurgicalMask  // BP_Scar1
	{
		scope=2;
		displayName="Face Scar";
		model="Survivalists_Mods\characters\masks\ScarL_m.p3d";
		inventorySlot="Armband";
		heatIsolation=1;
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\ScarL_m.p3d";
			female="Survivalists_Mods\characters\masks\ScarL_m.p3d";
		};
	};

	class SRP_BandanaMask_65Black: BandanaMask_ColorBase  // BandanaMask_65Black
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa"
		};
	};
	class SRP_BandanaMask_65Desert: BandanaMask_ColorBase  // BandanaMask_65Desert
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65d.paa"
		};
	};
	class SRP_BandanaMask_65Tan: BandanaMask_ColorBase  // BandanaMask_65Tan
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65t.paa"
		};
	};
	class SRP_BandanaMask_CheckBlue: BandanaMask_ColorBase  // BandanaMask_CheckBlue
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cb.paa"
		};
	};
	class SRP_BandanaMask_CheckBlueBright: BandanaMask_ColorBase  // BandanaMask_CheckBlueBright
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cbb.paa"
		};
	};
	class SRP_BandanaMask_CheckGreen: BandanaMask_ColorBase  // BandanaMask_CheckGreen
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cg.paa"
		};
	};
	class SRP_BandanaMask_CheckRed: BandanaMask_ColorBase  // BandanaMask_CheckRed
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cr.paa"
		};
	};
	class SRP_BandanaMask_CheckWhite: BandanaMask_ColorBase  // BandanaMask_CheckWhite
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cw.paa"
		};
	};
	class SRP_BandanaMask_Denim: BandanaMask_ColorBase  // BandanaMask_Denim
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_denim.paa"
		};
	};
	class SRP_BandanaMask_Kamysh: BandanaMask_ColorBase  // BandanaMask_Kamysh
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_kamysh.paa"
		};
	};
	class SRP_BandanaMask_USMC_D: BandanaMask_ColorBase  // BandanaMask_USMC_D
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_d.paa"
		};
	};
	class SRP_BandanaMask_USMC_W: BandanaMask_ColorBase  // BandanaMask_USMC_W
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_w.paa"
		};
	};

	class SRP_HockeyMask_Steel: HockeyMask  // BP_SteelMask
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
			"Survivalists_Mods\characters\masks\data\vinitagehockeym_co2907.paa",
			"Survivalists_Mods\characters\masks\data\vinitagehockeym_co2907.paa",
			"Survivalists_Mods\characters\masks\data\vinitagehockeym_co2907.paa"
		};
	};	
};