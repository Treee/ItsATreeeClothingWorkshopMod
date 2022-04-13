class CfgPatches
{
	class Survivalists_Retextures_Characters_Headgear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Headgear",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class BaseballCap_ColorBase;
	class SantasHat;
	class NBCHoodBase;
	class BurlapSackCover;
	class Bandana_ColorBase;
	class Ushanka_ColorBase;
	class PrisonerCap;
	class BeanieHat_ColorBase;
	class BallisticHelmet_ColorBase;
	class Mich2001Helmet;
	class BoonieHat_ColorBase;
  class FlatCap_ColorBase;
	class SRP_BeanieHat_Turkey;
  class SRP_FaceMaskSkull_ColorBase;
  class SRP_FaceMask_ColorBase;
  class SRP_MouthCover_ColorBase;
  class SRP_Shroud_ColorBase;
  class SRP_Comtacs_ColorBase;
  class SRP_SlimHelmetFull;
  class SRP_Cowboy_Hat_Carl;
  class SRP_CombatHelmet;
  class SRP_CombatHelmetV2;
  class SRP_CombatHelmet6B47;
  class SRP_CombatHelmetHighCut;
  class SRP_CombatHelmetAltyn;
  class SRP_AltynHelmetVisor;
  class BaseballCap_MilitaryPatrolTan;
  class BaseballCap_MilitaryPatrolTan_Backwards;
  class SRP_EarProtection_ColorBase;


	class SRP_PoliceCap: BaseballCap_ColorBase
	{
		scope=2;
		heatIsolation=0.80000001;
		displayName="Sheriff Cap";
		descriptionShort="Hackcock Sheriffs Department Cap";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_policecap_co.paa",
			"Survivalists_Retextures\characters\headgear\data\srp_policecap_co.paa",
			"Survivalists_Retextures\characters\headgear\data\srp_policecap_co.paa"
		};
	};
	class SRP_BeanieHat_TurkeyPink: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="TurkeyPink";
		displayName="Pink Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeylove_co.paa"
		};
	};
	class SRP_BeanieHat_SkylarPink: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="SkylarPink";
		displayName="Pink Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeyskylar_co.paa"
		};
	};
	class SRP_BeanieHat_Green: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="Green";
		displayName="Green Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeybio_co.paa"
		};
	};
	class SRP_BeanieHat_Grey: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="Grey";
		displayName="Grey Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeygrey_co.paa"
		};
	};
	class SRP_BeanieHat_Purple: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="Purple";
		displayName="Purple Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeypurple_co.paa"
		};
	};
	class SRP_BeanieHat_Teal: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="Teal";
		displayName="Teal Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeyteal_co.paa"
		};
	};
	class SRP_BeanieHat_Yellow: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="Yellow";
		displayName="Yellow Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeysunny_co.paa"
		};
	};
	class SRP_BeanieHat_Light: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="Light";
		displayName="Light Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeylight_co.paa"
		};
	};
	class SRP_BeanieHat_Dark: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="Dark";
		displayName="Dark Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeydark_co.paa"
		};
	};
	class SRP_BeanieHat_Snowflake: SRP_BeanieHat_Turkey
	{
		scope=2;
		color="Snowflake";
		displayName="Snowflake Turkey Beanie";
		descriptionShort="Gobble gobble.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_turkeysnowflake_co.paa"
		};
	};
	class SantasHat_Elf: SantasHat
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
			"Survivalists_Retextures\characters\headgear\data\santashatelf_co.paa",
			"Survivalists_Retextures\characters\headgear\data\santashatelf_co.paa",
			"Survivalists_Retextures\characters\headgear\data\santashatelf_co.paa"
		};
	};
	class SRP_BallisticHelmet_Rain: BaseballCap_ColorBase
	{
		scope=2;
		color="Rain";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BPRainhelm.paa",
			"Survivalists_Retextures\characters\headgear\data\BPRainhelm.paa",
			"Survivalists_Retextures\characters\headgear\data\BPRainhelm.paa"
		};
	};
	class SRP_BaseballCap_Lisiy: BaseballCap_ColorBase
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
			"Survivalists_Retextures\characters\headgear\data\Lisiycap.paa",
			"Survivalists_Retextures\characters\headgear\data\Lisiycap.paa",
			"Survivalists_Retextures\characters\headgear\data\Lisiycap.paa"
		};
	};
	class SRP_NBCHood_Orange: NBCHoodBase
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
			"Survivalists_Retextures\characters\headgear\data\nbc_hood_orange_co.paa",
			"Survivalists_Retextures\characters\headgear\data\nbc_hood_orange_co.paa",
			"Survivalists_Retextures\characters\headgear\data\nbc_hood_orange_co.paa"
		};
	};
	class BurlapSackCover_Black: BurlapSackCover
	{
		scope=2;
    color="black";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\head_sack_black_co.paa",
			"Survivalists_Retextures\characters\headgear\data\head_sack_black_co.paa",
			"Survivalists_Retextures\characters\headgear\data\head_sack_black_co.paa"
		};
	};
	class BurlapSackCover_Skull: BurlapSackCover
	{
		scope=2;
    color="skull";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\head_sack_black_skull_co.paa",
			"Survivalists_Retextures\characters\headgear\data\head_sack_black_skull_co.paa",
			"Survivalists_Retextures\characters\headgear\data\head_sack_black_skull_co.paa"
		};
	};
	class BurlapSackCover_White: BurlapSackCover
	{
		scope=2;
    color="white";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\head_sack_white_co.paa",
			"Survivalists_Retextures\characters\headgear\data\head_sack_white_co.paa",
			"Survivalists_Retextures\characters\headgear\data\head_sack_white_co.paa"
		};
	};
	class SRP_Bandana_65Black: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65b.paa"
		};
	};
	class SRP_Bandana_65Desert: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65d.paa"
		};
	};
	class SRP_Bandana_65Tan: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_65t.paa"
		};
	};
	class SRP_Bandana_CheckBlue: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cb.paa"
		};
	};
	class SRP_Bandana_CheckBlueBright: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cbb.paa"
		};
	};
	class SRP_Bandana_CheckGreen: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cg.paa"
		};
	};
	class SRP_Bandana_CheckRed: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cr.paa"
		};
	};
	class SRP_Bandana_CheckWhite: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_cw.paa"
		};
	};
	class SRP_Bandana_Denim: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_denim.paa"
		};
	};
	class SRP_Bandana_Kamysh: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_kamysh.paa"
		};
	};
	class SRP_Bandana_USMC_D: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_d.paa"
		};
	};
	class SRP_Bandana_USMC_W: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Retextures\characters\headgear\data\bandanafhg_usmc_w.paa"
		};
	};
	class SRP_Ushanka_Denim: Ushanka_ColorBase
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
			"Survivalists_Retextures\characters\headgear\data\dencap.paa",
			"Survivalists_Retextures\characters\headgear\data\dencap.paa",
			"Survivalists_Retextures\characters\headgear\data\dencap.paa"
		};
	};
	class SRP_PrisonerCap_Brown: PrisonerCap
	{
		scope=2;
		displayName="Handmade Flat Cap";
		descriptionShort="A hand sewn flat cap.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\gordeycap.paa",
			"Survivalists_Retextures\characters\headgear\data\gordeycap.paa",
			"Survivalists_Retextures\characters\headgear\data\gordeycap.paa"
		};
	};
	class SRP_BaseballCap_MTP: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\baseball01.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball01.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball01.paa"
		};
	};
	class SRP_BaseballCap_ATAC: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\baseball04.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball04.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball04.paa"
		};
	};
	class SRP_BaseballCap_ATACSFG: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\baseball38.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball38.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball38.paa"
		};
	};
	class SRP_BaseballCap_USNAOR2: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\baseball09.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball09.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball09.paa"
		};
	};
	class SRP_BaseballCap_USNAOR1: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\baseball10.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball10.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball10.paa"
		};
	};
	class SRP_BaseballCap_SURPAT: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\baseball12.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball12.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball12.paa"
		};
	};
	class SRP_BaseballCap_MARPATWinter: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\baseball19.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball19.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball19.paa"
		};
	};
	class SRP_BaseballCap_EMP6: BaseballCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\baseball57.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball57.paa",
			"Survivalists_Retextures\characters\headgear\data\baseball57.paa"
		};
	};
	class SRP_Ushanka_MTP: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Ushanka01.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka01.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka01.paa"
		};
	};
	class SRP_Ushanka_ATAC: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Ushanka04.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka04.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka04.paa"
		};
	};
	class SRP_Ushanka_ATACSFG: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Ushanka38.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka38.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka38.paa"
		};
	};
	class SRP_Ushanka_USNAOR2: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Ushanka09.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka09.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka09.paa"
		};
	};
	class SRP_Ushanka_USNAOR1: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Ushanka10.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka10.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka10.paa"
		};
	};
	class SRP_Ushanka_SURPAT: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Ushanka12.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka12.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka12.paa"
		};
	};
	class SRP_Ushanka_MARPATWinter: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Ushanka19.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka19.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka19.paa"
		};
	};
	class SRP_Ushanka_EMP6: Ushanka_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Ushanka57.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka57.paa",
			"Survivalists_Retextures\characters\headgear\data\Ushanka57.paa"
		};
	};
	class SRP_BeanieHat_MTP: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BeanieHat03.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat03.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat03.paa"
		};
	};
	class SRP_BeanieHat_ATAC: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BeanieHat05.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat05.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat05.paa"
		};
	};
	class SRP_BeanieHat_ATACSFG: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BeanieHat39.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat39.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat39.paa"
		};
	};
	class SRP_BeanieHat_USNAOR2: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BeanieHat10.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat10.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat10.paa"
		};
	};
	class SRP_BeanieHat_USNAOR1: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BeanieHat11.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat11.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat11.paa"
		};
	};
	class SRP_BeanieHat_SURPAT: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BeanieHat13.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat13.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat13.paa"
		};
	};
	class SRP_BeanieHat_MARPATWinter: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BeanieHat20.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat20.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat20.paa"
		};
	};
	class SRP_BeanieHat_EMP6: BeanieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\BeanieHat58.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat58.paa",
			"Survivalists_Retextures\characters\headgear\data\BeanieHat58.paa"
		};
	};
	class SRP_BallisticH_MTP: BallisticHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\helmetmich01.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich01.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich01.paa"
		};
	};
	class SRP_BallisticH_ATAC: BallisticHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\helmetmich04.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich04.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich04.paa"
		};
	};
	class SRP_BallisticH_ATACSFG: BallisticHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\helmetmich38.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich38.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich38.paa"
		};
	};
	class SRP_BallisticH_USNAOR2: BallisticHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\helmetmich09.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich09.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich09.paa"
		};
	};
	class SRP_BallisticH_USNAOR1: BallisticHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\helmetmich10.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich10.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich10.paa"
		};
	};
	class SRP_BallisticH_SURPAT: BallisticHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\helmetmich12.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich12.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich12.paa"
		};
	};
	class SRP_BallisticH_MARPATWinter: BallisticHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\helmetmich19.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich19.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich19.paa"
		};
	};
	class SRP_BallisticH_EMP6: BallisticHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\helmetmich57.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich57.paa",
			"Survivalists_Retextures\characters\headgear\data\helmetmich57.paa"
		};
	};
	class SRP_Mich2001_MTP: Mich2001Helmet
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\mich2001_01.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_01.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_01.paa"
		};
	};
	class SRP_Mich2001_ATAC: Mich2001Helmet
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\mich2001_04.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_04.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_04.paa"
		};
	};
	class SRP_Mich2001_ATACSFG: Mich2001Helmet
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\mich2001_38.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_38.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_38.paa"
		};
	};
	class SRP_Mich2001_USNAOR2: Mich2001Helmet
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\mich2001_09.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_09.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_09.paa"
		};
	};
	class SRP_Mich2001_USNAOR1: Mich2001Helmet
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\mich2001_10.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_10.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_10.paa"
		};
	};
	class SRP_Mich2001_SURPAT: Mich2001Helmet
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\mich2001_12.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_12.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_12.paa"
		};
	};
	class SRP_Mich2001_MARPATWinter: Mich2001Helmet
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\mich2001_19.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_19.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_19.paa"
		};
	};
	class SRP_Mich2001_EMP6: Mich2001Helmet
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\mich2001_57.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_57.paa",
			"Survivalists_Retextures\characters\headgear\data\mich2001_57.paa"
		};
	};
	class SRP_BoonieHat_MTP: BoonieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\booniehat01.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat01.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat01.paa"
		};
	};
	class SRP_BoonieHat_ATAC: BoonieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\booniehat05.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat05.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat05.paa"
		};
	};
	class SRP_BoonieHat_ATACSFG: BoonieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\booniehat39.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat39.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat39.paa"
		};
	};
	class SRP_BoonieHat_USNAOR2: BoonieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\booniehat10.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat10.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat10.paa"
		};
	};
	class SRP_BoonieHat_USNAOR1: BoonieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\booniehat11.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat11.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat11.paa"
		};
	};
	class SRP_BoonieHat_SURPAT: BoonieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\booniehat13.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat13.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat13.paa"
		};
	};
	class SRP_BoonieHat_MARPATWinter: BoonieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\booniehat20.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat20.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat20.paa"
		};
	};
	class SRP_BoonieHat_EMP6: BoonieHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\booniehat58.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat58.paa",
			"Survivalists_Retextures\characters\headgear\data\booniehat58.paa"
		};
	};

	class SRP_BoonieHat_ERDL: BoonieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_erdl_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_erdl_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_erdl_co.paa"
		};
	};
	class SRP_BoonieHat_Snow: BoonieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_Snow_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_Snow_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_Snow_co.paa"
		};
	};
	class SRP_BoonieHat_Multicam: BoonieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_co.paa"
		};
	};
	class SRP_BoonieHat_MulticamTropic: BoonieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_Tropic_co.paa"
		};
	};
	class SRP_BoonieHat_MulticamBlack: BoonieHat_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_Black_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_Black_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_BoonieHat_MC_Black_co.paa"
		};
	};	

  class SRP_FlatCap_ERDL: FlatCap_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_erdl_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_erdl_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_erdl_co.paa"
    };
	};
	class SRP_FlatCap_Snow: FlatCap_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_Snow_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_Snow_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_Snow_co.paa"
    };
	};
	class SRP_FlatCap_Multicam: FlatCap_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_co.paa"
    };
	};
	class SRP_FlatCap_MulticamTropic: FlatCap_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_Tropic_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_Tropic_co.paa"
    };
	};
	class SRP_FlatCap_MulticamBlack: FlatCap_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_Black_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_Black_co.paa",
			"Survivalists_Retextures\characters\headgear\data\SRP_FlatCap_MC_Black_co.paa"
    };
	};

  class SRP_FaceMaskSkull_Wraith: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="Wraith Mask";
    color="wraith";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Wraith.paa",
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};
  class SRP_FaceMaskSkull_Black: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="Black Face Mask";
    color="black";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Black.paa",
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};
  class SRP_FaceMaskSkull_Snow: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="Snow Face Mask";
    color="snow";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Snow.paa",
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};
  class SRP_FaceMaskSkull_OD: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="OD Face Mask";
    color="od";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co.paa",
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};
  class SRP_FaceMaskSkull_Tan: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="Tan Face Mask";
    color="tan";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Tan.paa",
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};

	class SRP_FaceMask_OD: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co.paa",
		};
	};
	class SRP_FaceMask_Tan: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Tan.paa",
		};
	};
	class SRP_FaceMask_Black: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Black.paa",
		};
	};
	class SRP_FaceMask_Snow: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Snow.paa",
		};
	};
  class SRP_FaceMask_Wraith: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - Wraith";
    color="wraith";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Wraith.paa",
		};
	};

  class SRP_MouthCover_OD: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co.paa",
		};
	};
	class SRP_MouthCover_Tan: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Tan.paa",
		};
	};
	class SRP_MouthCover_Black: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Black.paa",
		};
	};
	class SRP_MouthCover_Snow: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Snow.paa",
		};
	};
  class SRP_MouthCover_Wraith: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - Wraith";
    color="wraith";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_facemask_co_Wraith.paa",
		};
	};

	class SRP_Shroud_OD: SRP_Shroud_ColorBase
	{
		scope=2;
		displayName="Head Shroud - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_shroud_co.paa"
		};
	};
	class SRP_Shroud_Tan: SRP_Shroud_ColorBase
	{
		scope=2;
		displayName="Head Shroud - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_shroud_co_Tan.paa"
		};
	};
	class SRP_Shroud_Black: SRP_Shroud_ColorBase
	{
		scope=2;
		displayName="Head Shroud - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_shroud_co_Black.paa"
		};
	};

  class SRP_Comtacs_OD: SRP_Comtacs_ColorBase
	{
		scope=2;
		displayName="Comtacs - OD";
		visibilityModifier=0.94999999;
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_comtacs_co.paa"
		};
	};
	class SRP_Comtacs_Tan: SRP_Comtacs_ColorBase
	{
		scope=2;
		displayName="Comtacs - Tan";
		visibilityModifier=0.94999999;
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_comtacs_co_Tan.paa"
		};
	};
	class SRP_Comtacs_Black: SRP_Comtacs_ColorBase
	{
		scope=2;
		displayName="Comtacs - Black";
		visibilityModifier=0.94999999;
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_comtacs_co_Black.paa"
		};
	};

  class SRP_EarProtection_OD: SRP_EarProtection_ColorBase
	{
		scope=2;
		displayName="Ear Protection - OD";
		visibilityModifier=0.94999999;
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_comtacs_co.paa"
		};
	};
	class SRP_EarProtection_Tan: SRP_EarProtection_ColorBase
	{
		scope=2;
		displayName="Ear Protection - Tan";
		visibilityModifier=0.94999999;
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_comtacs_co_Tan.paa"
		};
	};
	class SRP_EarProtection_Black: SRP_EarProtection_ColorBase
	{
		scope=2;
		displayName="Ear Protection - Black";
		visibilityModifier=0.94999999;
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_comtacs_co_Black.paa"
		};
	};

  class SRP_SlimHelmetFull_Kain: SRP_SlimHelmetFull
  {
    scope=2;
    displayName="Full Helmet";
    descriptionShort="A slim helmet that coveres the whole head";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_slimhelmet_kain_co.paa"
		};
  };

  class SRP_Cowboy_Hat_Carl_Brown: SRP_Cowboy_Hat_Carl
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\Cowboy_Carl_Brown_CO.paa"
		};
	};

  class SRP_CombatHelmet_Black: SRP_CombatHelmet
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmet_black_co.paa"
		};
  };
  class SRP_CombatHelmet_Tan: SRP_CombatHelmet
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmet_tan_co.paa"
		};
  };
  class SRP_CombatHelmetV2_Black: SRP_CombatHelmetV2
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmetv2_black_co.paa"
		};
  };
  class SRP_CombatHelmetV2_Tan: SRP_CombatHelmetV2
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmetv2_tan_co.paa"
		};
  };
  class SRP_CombatHelmet6B47_Black: SRP_CombatHelmet6B47
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmet6b47_black_co.paa"
		};
  };
  class SRP_CombatHelmet6B47_Tan: SRP_CombatHelmet6B47
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmet6b47_tan_co.paa"
		};
  };
  class SRP_CombatHelmetHighCut_Black: SRP_CombatHelmetHighCut
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmethighcut_black_co.paa"
		};
  };
  class SRP_CombatHelmetHighCut_Tan: SRP_CombatHelmetHighCut
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmethighcut_tan_co.paa"
		};
  };
  class SRP_CombatHelmetAltyn_Black: SRP_CombatHelmetAltyn
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmetaltyn_black_co.paa"
		};
  };
  class SRP_AltynHelmetVisor_Black: SRP_AltynHelmetVisor
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmetaltyn_black_co.paa"
		};
  };
  class SRP_CombatHelmetAltyn_Tan: SRP_CombatHelmetAltyn
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmetaltyn_tan_co.paa"
		};
  };
  class SRP_AltynHelmetVisor_Tan: SRP_AltynHelmetVisor
  {
    scope=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Retextures\characters\headgear\data\srp_combathelmetaltyn_tan_co.paa"
		};
  };

  class BaseballCap_MilitaryPatrolBlack: BaseballCap_MilitaryPatrolTan
	{
		scope=2;
		color="MilitaryPatrolBlack";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_patrolcap_black_co.paa"
		};
	};

  class BaseballCap_MilitaryPatrolBlack_Backwards: BaseballCap_MilitaryPatrolTan_Backwards
  {
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_patrolcap_black_co.paa"
		};
  };

  class BaseballCap_MilitaryPatrolGreen: BaseballCap_MilitaryPatrolTan
	{
		scope=2;
		color="MilitaryPatrolGreen";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_patrolcap_green_co.paa"
		};
	};

  class BaseballCap_MilitaryPatrolGreen_Backwards: BaseballCap_MilitaryPatrolTan_Backwards
  {
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\headgear\data\srp_patrolcap_green_co.paa"
		};
  };
};
