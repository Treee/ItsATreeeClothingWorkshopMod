class CfgPatches
{
	class Survivalists_Retextures_Characters_Pants
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants",
			"Survivalists_Retextures"
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
	class PolicePants;
	class GorkaPants_ColorBase;
	class SRPPolicePants: PolicePants
	{
		scope=2;
		displayName="Sheriff Pants";
		descriptionShort="Hackcock Sheriffs Department Pants";
		heatIsolation=0.80000001;
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\srp_policepants_co.paa",
			"Survivalists_Retextures\characters\pants\data\srp_policepants_co.paa",
			"Survivalists_Retextures\characters\pants\data\srp_policepants_co.paa"
		};
	};
	class SRP_PolicePants2: PolicePants
	{
		scope=2;
		displayName="Sheriff Pants";
		descriptionShort="A pair of Deer Isle Sheriff department pants";
		heatIsolation=0.80000001;
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\policepants_DeerIsle_co.paa",
			"Survivalists_Retextures\characters\pants\data\policepants_DeerIsle_co.paa",
			"Survivalists_Retextures\characters\pants\data\policepants_DeerIsle_co.paa"
		};
	};
	class SRP_PolicePantsOre1_2: PolicePantsOrel
	{
		scope=2;
		displayName="SWAT Pants";
		descriptionShort="A pair of pants belonging to the Deer Isle SWAT team";
		heatIsolation=0.80000001;
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\policepants_Swat_co.paa",
			"Survivalists_Retextures\characters\pants\data\policepants_Swat_co.paa",
			"Survivalists_Retextures\characters\pants\data\policepants_Swat_co.paa"
		};
	};
	class SRP_ParamedicPants_Black: ParamedicPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\Paramedic_Pants_Black.paa",
			"Survivalists_Retextures\characters\pants\data\Paramedic_Pants_Black.paa",
			"Survivalists_Retextures\characters\pants\data\Paramedic_Pants_Black.paa"
		};
	};
	class SRP_HunterPants_Beliy: HunterPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\Beliypants.paa",
			"Survivalists_Retextures\characters\pants\data\Beliypants.paa",
			"Survivalists_Retextures\characters\pants\data\Beliypants.paa"
		};
	};
	class SRP_HunterPants_Janek: HunterPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\janekpants2.paa",
			"Survivalists_Retextures\characters\pants\data\janekpants2.paa",
			"Survivalists_Retextures\characters\pants\data\janekpants2.paa"
		};
	};
	class SRP_PolicePantsOrel_WKPants: PolicePantsOrel
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
			"Survivalists_Retextures\characters\pants\data\wkpants_co.paa",
			"Survivalists_Retextures\characters\pants\data\wkpants_co.paa",
			"Survivalists_Retextures\characters\pants\data\wkpants_co.paa"
		};
	};
	class SRP_TrackSuitPants_boj: TrackSuitPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\tracksuit_pants_boj.paa",
			"Survivalists_Retextures\characters\pants\data\tracksuit_pants_boj.paa",
			"Survivalists_Retextures\characters\pants\data\tracksuit_pants_boj.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\pants\data\tracksuit_pants_boj.rvmat",
			"Survivalists_Retextures\characters\pants\data\tracksuit_pants_boj.rvmat",
			"Survivalists_Retextures\characters\pants\data\tracksuit_pants_boj.rvmat"
		};
	};
	class SRP_PrisonUniformPants_Beliy: PrisonUniformPants
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
			"Survivalists_Retextures\characters\pants\data\beliypris.paa",
			"Survivalists_Retextures\characters\pants\data\beliypris.paa",
			"Survivalists_Retextures\characters\pants\data\beliypris.paa"
		};
	};
	class SRP_PrisonUniformPants_Blue: PrisonUniformPants
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
			"Survivalists_Retextures\characters\pants\data\prison_pants_blue_co.paa",
			"Survivalists_Retextures\characters\pants\data\prison_pants_blue_co.paa",
			"Survivalists_Retextures\characters\pants\data\prison_pants_blue_co.paa"
		};
	};
	class SRP_CargoPants_Janek: CargoPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\Janek_pants.paa",
			"Survivalists_Retextures\characters\pants\data\Janek_pants.paa",
			"Survivalists_Retextures\characters\pants\data\Janek_pants.paa"
		};
	};
	class SRP_CargoPants_Rain: CargoPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\rainpants.paa",
			"Survivalists_Retextures\characters\pants\data\rainpants.paa",
			"Survivalists_Retextures\characters\pants\data\rainpants.paa"
		};
	};
	class SRP_CargoPants_Bandit: CargoPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co2_2.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co2_2.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co2_2.paa"
		};
	};
	class SRP_CargoPants_Bandit1: CargoPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co3.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co3.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co3.paa"
		};
	};
	class SRP_CargoPants_Bandit2: CargoPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co4.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co4.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co4.paa"
		};
	};
	class SRP_CargoPants_Bandit3: CargoPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co5.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co5.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants_grey_co5.paa"
		};
	};
	class SRP_CargoPants_Denim: CargoPants_ColorBase
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
			"Survivalists_Retextures\characters\pants\data\dencarg.paa",
			"Survivalists_Retextures\characters\pants\data\dencarg.paa",
			"Survivalists_Retextures\characters\pants\data\dencarg.paa"
		};
	};
	class SRP_NBCPants_Orange: NBCPantsBase
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
			"Survivalists_Retextures\characters\pants\data\nbc_pants_orange_co.paa",
			"Survivalists_Retextures\characters\pants\data\nbc_pants_orange_co.paa",
			"Survivalists_Retextures\characters\pants\data\nbc_pants_orange_co.paa"
		};
	};
	class SRP_CargoPants_MTP: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\cargopants01.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants01.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants01.paa"
		};
	};
	class SRP_CargoPants_ATAC: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\cargopants04.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants04.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants04.paa"
		};
	};
	class SRP_CargoPants_ATACSFG: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\cargopants38.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants38.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants38.paa"
		};
	};
	class SRP_CargoPants_USNAOR2: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\cargopants09.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants09.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants09.paa"
		};
	};
	class SRP_CargoPants_USNAOR1: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\cargopants10.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants10.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants10.paa"
		};
	};
	class SRP_CargoPants_SUMRAK: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\cargopants13.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants13.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants13.paa"
		};
	};
	class SRP_CargoPants_MARPATWinter: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\cargopants19.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants19.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants19.paa"
		};
	};
	class SRP_CargoPants_EMP6: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\cargopants57.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants57.paa",
			"Survivalists_Retextures\characters\pants\data\cargopants57.paa"
		};
	};
	class SRP_PGopTactMTP: TrackSuitPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\TrackSuit_P01.paa",
			"Survivalists_Retextures\characters\pants\data\TrackSuit_P01.paa",
			"Survivalists_Retextures\characters\pants\data\TrackSuit_P01.paa"
		};
	};
	class SRP_PGopTactATAC: TrackSuitPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\TrackSuit_P06.paa",
			"Survivalists_Retextures\characters\pants\data\TrackSuit_P06.paa",
			"Survivalists_Retextures\characters\pants\data\TrackSuit_P06.paa"
		};
	};
	class SRP_GorkaMTP_Pants: GorkaPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\pant_gorka04.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka04.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka04.paa"
		};
	};
	class SRP_GorkaATAC_Pants: GorkaPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\pant_gorka08.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka08.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka08.paa"
		};
	};
	class SRP_GorkaATACSFG_Pants: GorkaPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\pant_gorka42.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka42.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka42.paa"
		};
	};
	class SRP_GorkaUSNAOR2_Pants: GorkaPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\pant_gorka13.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka13.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka13.paa"
		};
	};
	class SRP_GorkaUSNAOR1_Pants: GorkaPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\pant_gorka14.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka14.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka14.paa"
		};
	};
	class SRP_GorkaSURPAT_Pants: GorkaPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\pant_gorka16.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka16.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka16.paa"
		};
	};
	class SRP_GorkaMARPATWinter_Pants: GorkaPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\pant_gorka23.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka23.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka23.paa"
		};
	};
	class SRP_GorkaEMP6_Pants: GorkaPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\pant_gorka61.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka61.paa",
			"Survivalists_Retextures\characters\pants\data\pant_gorka61.paa"
		};
	};
	class SRP_HunterPants_MTP: HunterPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\HunterP01.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP01.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP01.paa"
		};
	};
	class SRP_HunterPants_ATAC: HunterPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\HunterP04.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP04.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP04.paa"
		};
	};
	class SRP_HunterPants_ATACSFG: HunterPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\HunterP38.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP38.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP38.paa"
		};
	};
	class SRP_HunterPants_USNAOR2: HunterPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\HunterP09.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP09.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP09.paa"
		};
	};
	class SRP_HunterPants_USNAOR1: HunterPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\HunterP10.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP10.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP10.paa"
		};
	};
	class SRP_HunterPants_SURPAT: HunterPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\HunterP12.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP12.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP12.paa"
		};
	};
	class SRP_HunterPants_MARPATWinter: HunterPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\HunterP19.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP19.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP19.paa"
		};
	};
	class SRP_HunterPants_EMP6: HunterPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\pants\data\HunterP57.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP57.paa",
			"Survivalists_Retextures\characters\pants\data\HunterP57.paa"
		};
	};
};
