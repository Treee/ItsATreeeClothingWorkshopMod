class CfgPatches
{
	class Survivalists_Mods_Characters__Pants
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Pants",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{

  class ParamedicPants_ColorBase;
  class HunterPants_ColorBase;
  class PolicePantsOrel;
  class TrackSuitPants_ColorBase;
  class PrisonUniformPants;
  class CargoPants_ColorBase;
  class NBCPantsBase;

  //-------------------------------------BASE GAME REtextures

	class SRP_ParamedicPants_Black: ParamedicPants_ColorBase  // Medic_P_black
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
			"Survivalists_Mods\characters\pants\data\Paramedic_Pants_Black.paa",
			"Survivalists_Mods\characters\pants\data\Paramedic_Pants_Black.paa",
			"Survivalists_Mods\characters\pants\data\Paramedic_Pants_Black.paa"
		};
	};

	class SRP_HunterPants_Beliy: HunterPants_ColorBase  // BP1_Beliypants
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
			"Survivalists_Mods\characters\pants\data\Beliypants.paa",
			"Survivalists_Mods\characters\pants\data\Beliypants.paa",
			"Survivalists_Mods\characters\pants\data\Beliypants.paa"
		};
	};

  class SRP_HunterPants_Janek: HunterPants_ColorBase  // BP_Janek_Pants2
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
			"Survivalists_Mods\characters\pants\data\janekpants2.paa",
			"Survivalists_Mods\characters\pants\data\janekpants2.paa",
			"Survivalists_Mods\characters\pants\data\janekpants2.paa"
		};
	};

	class SRP_PolicePantsOrel_WKPants: PolicePantsOrel  // BP_wkpants
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
			"Survivalists_Mods\characters\pants\data\wkpants_co.paa",
			"Survivalists_Mods\characters\pants\data\wkpants_co.paa",
			"Survivalists_Mods\characters\pants\data\wkpants_co.paa"
		};
	};

  class SRP_TrackSuitPants_boj: TrackSuitPants_ColorBase  // BP2_TrackSuitPants_boj
	{
		scope=2;
    color="boj";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\pants\data\tracksuit_pants_boj.paa",
			"Survivalists_Mods\characters\pants\data\tracksuit_pants_boj.paa",
			"Survivalists_Mods\characters\pants\data\tracksuit_pants_boj.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\pants\data\tracksuit_pants_boj.rvmat",
			"Survivalists_Mods\characters\pants\data\tracksuit_pants_boj.rvmat",
			"Survivalists_Mods\characters\pants\data\tracksuit_pants_boj.rvmat"
		};
	};		
	
	class SRP_PrisonUniformPants_Beliy: PrisonUniformPants  // BP2_Beliyprison
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
			"Survivalists_Mods\characters\pants\data\beliypris.paa",
			"Survivalists_Mods\characters\pants\data\beliypris.paa",
			"Survivalists_Mods\characters\pants\data\beliypris.paa"
		};
	};
	class SRP_PrisonUniformPants_Blue: PrisonUniformPants  // BP2_PrisonBlue
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
			"Survivalists_Mods\characters\pants\data\prison_pants_blue_co.paa",
			"Survivalists_Mods\characters\pants\data\prison_pants_blue_co.paa",
			"Survivalists_Mods\characters\pants\data\prison_pants_blue_co.paa"
		};
	};

  class SRP_CargoPants_Janek: CargoPants_ColorBase  // BP_Janek_Pants
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
			"Survivalists_Mods\characters\pants\data\Janek_pants.paa",
			"Survivalists_Mods\characters\pants\data\Janek_pants.paa",
			"Survivalists_Mods\characters\pants\data\Janek_pants.paa"
		};
	};

	class SRP_CargoPants_Rain: CargoPants_ColorBase  // BP2_Rainpants
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
			"Survivalists_Mods\characters\pants\data\rainpants.paa",
			"Survivalists_Mods\characters\pants\data\rainpants.paa",
			"Survivalists_Mods\characters\pants\data\rainpants.paa"
		};
	};
	class SRP_CargoPants_Bandit: CargoPants_ColorBase  // BP2_Banditpants
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
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co2_2.paa",
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co2_2.paa",
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co2_2.paa"
		};
	};
	class SRP_CargoPants_Bandit1: CargoPants_ColorBase  // BP2_Banditpants1
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
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co3.paa",
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co3.paa",
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co3.paa"
		};
	};
	class SRP_CargoPants_Bandit2: CargoPants_ColorBase  // BP2_Banditpants2
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
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co4.paa",
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co4.paa",
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co4.paa"
		};
	};
	class SRP_CargoPants_Bandit3: CargoPants_ColorBase  // BP2_Banditpants3
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
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co5.paa",
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co5.paa",
			"Survivalists_Mods\characters\pants\data\cargopants_grey_co5.paa"
		};
	};
	class SRP_CargoPants_Denim: CargoPants_ColorBase  // BP2_Dencargo
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
			"Survivalists_Mods\characters\pants\data\dencarg.paa",
			"Survivalists_Mods\characters\pants\data\dencarg.paa",
			"Survivalists_Mods\characters\pants\data\dencarg.paa"
		};
	};

	class SRP_NBCPants_Orange: NBCPantsBase  // BP2_NBCP_Orange
	{
		scope=2;
		repairableWithKits[]={5,6}; // duct tape, tire repair kit
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\pants\data\nbc_pants_orange_co.paa",
			"Survivalists_Mods\characters\pants\data\nbc_pants_orange_co.paa",
			"Survivalists_Mods\characters\pants\data\nbc_pants_orange_co.paa"
		};
	};
};