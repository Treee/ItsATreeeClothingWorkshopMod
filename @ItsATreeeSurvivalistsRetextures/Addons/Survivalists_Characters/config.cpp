class CfgPatches
{
	class DZ_Characters_Glasses
	{
		units[]=
		{
			"SunGlasses",
      "MaleHands",
			"FemaleHands"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Gear_Optics"
		};
	};
};
class CfgVehicles
{
  // glasses
  class SportGlasses_Black; // joeyx
  class SportGlasses_Blue; // joeyx
  class SportGlasses_Green; // joeyx
  class SportGlasses_Orange; // joeyx
  class DesignerGlasses;
  class TacticalGoggles;
  class ThickFramesGlasses;
  class ThinFramesGlasses;

  // gloves
  class WorkingGloves_ColorBase;
  class TacticalGloves_ColorBase;
  class SurgicalGloves_ColorBase;
  class OMNOGloves_ColorBase;
  class NBCGloves_ColorBase;

  // headgear
  class ZmijovkaCap_ColorBase;
  class Ushanka_ColorBase;
  class TankerHelmet;
  class SantasHat;
  class Ssh68Helmet;
  class RadarCap_ColorBase;
  class SkateHelmet_ColorBase;
  class NBCHoodGray;
  class OfficerHat;
  class PoliceCap;
  class PilotkaCap;
  class PrisonerCap;
  class DirtBikeHelmet_ColorBase;
  class MotoHelmet_ColorBase;
  class DarkMotoHelmet_ColorBase;
  class Mich2001Helmet;
  class MedicalScrubsHat_ColorBase;
  class GorkaHelmet;
  class HockeyHelmet_ColorBase;
  class BallisticHelmet_ColorBase;
  class Headtorch_ColorBase;
  class GreatHelm;
  class LeatherHat_ColorBase;
  class BurlapSackCover;
  class FlatCap_ColorBase;
  class FirefightersHelmet_ColorBase;
  class CowboyHat_ColorBase;
  class ConstructionHelmet_ColorBase;
  class BoonieHat_ColorBase;
  class BeanieHat_ColorBase;
  class BaseballCap_ColorBase;
  class Bandana_ColorBase;
  class BandanaHead_ColorBase;

  class ItsATreee_Survivalists_Brand_SportGlasses_Black: SportGlasses_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_joeyx_black_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_joeyx_black_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_joeyx_black_ca.paa"   // female
		};
	};
  class ItsATreee_Survivalists_Stencil_SportGlasses_Black: SportGlasses_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_joeyx_black_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_stencil_joeyx_black_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_stencil_joeyx_black_ca.paa"   // female
		};
	};
  class ItsATreee_Survivalists_Brand_SportGlasses_Blue: SportGlasses_Blue
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_joeyx_blue_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_joeyx_blue_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_joeyx_blue_ca.paa"   // female
		};
	};
  class ItsATreee_Survivalists_Stencil_SportGlasses_Blue: SportGlasses_Blue
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_joeyx_blue_ca.paa",
			"Survivalists_Characters\data\survivalists_stencil_joeyx_blue_ca.paa",
			"Survivalists_Characters\data\survivalists_stencil_joeyx_blue_ca.paa"
		};
	};
  class ItsATreee_Survivalists_Brand_SportGlasses_Green: SportGlasses_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_joeyx_green_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_joeyx_green_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_joeyx_green_ca.paa"   // female
		};
	};
  class ItsATreee_Survivalists_Stencil_SportGlasses_Green: SportGlasses_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_joeyx_green_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_stencil_joeyx_green_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_stencil_joeyx_green_ca.paa"   // female
		};
	};
  class ItsATreee_Survivalists_Brand_SportGlasses_Orange: SportGlasses_Orange
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_joeyx_yellowred_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_joeyx_yellowred_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_joeyx_yellowred_ca.paa"   // female
		};
	};
  class ItsATreee_Survivalists_Stencil_SportGlasses_Orange: SportGlasses_Orange
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_joeyx_yellowred_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_stencil_joeyx_yellowred_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_stencil_joeyx_yellowred_ca.paa"   // female
		};
	};
  class ItsATreee_Survivalists_Brand_DesignerGlasses: DesignerGlasses
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
			"Survivalists_Characters\data\survivalists_branding_sunglass_designer_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_sunglass_designer_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_sunglass_designer_ca.paa"   // female
		};
  };
  class ItsATreee_Survivalists_Stencil_DesignerGlasses: DesignerGlasses
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
			"Survivalists_Characters\data\survivalists_stencil_sunglass_designer_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_stencil_sunglass_designer_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_stencil_sunglass_designer_ca.paa"   // female
		};
  };  
  class ItsATreee_Survivalists_Brand_TacticalGoggles: TacticalGoggles
  {
		scope=2;
    hiddenSelections[]=
    {
      "camoGround"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_tacgoggles_co.paa"  // camo ground
		};
  };
  class ItsATreee_Survivalists_Stencil_TacticalGoggles: TacticalGoggles
  {
		scope=2;
    hiddenSelections[]=
    {
      "camoGround"
    };    
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_tacgoggles_co.paa" // camo ground
    };
  };  
  class ItsATreee_Survivalists_Stencil_ThickFramesGlasses: ThickFramesGlasses
  {
		scope=2;
    hiddenSelections[]=
    {
      "camoMale",
      "camoFemale",
      "camoGround"
    };    
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_thickframeglasses_co.paa",
      "Survivalists_Characters\data\survivalists_stencil_thickframeglasses_co.paa",
      "Survivalists_Characters\data\survivalists_stencil_thickframeglasses_co.paa"
    };
  };
  class ItsATreee_Survivalists_Stencil_Eye_ThickFramesGlasses: ThickFramesGlasses
  {
		scope=2;
    hiddenSelections[]=
    {
      "camoMale",
      "camoFemale",
      "camoGround"
    };    
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_eye_thickframeglasses_co.paa",
      "Survivalists_Characters\data\survivalists_stencil_eye_thickframeglasses_co.paa",
      "Survivalists_Characters\data\survivalists_stencil_eye_thickframeglasses_co.paa"
    };
  };
  class ItsATreee_Survivalists_Brand_ThinFramesGlasses: ThinFramesGlasses
  {
		scope=2;
    hiddenSelections[]=
    {
      "camoMale",
      "camoFemale",
      "camoGround"
    };    
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_thinframeglasses_co.paa",
      "Survivalists_Characters\data\survivalists_branding_thinframeglasses_co.paa",
      "Survivalists_Characters\data\survivalists_branding_thinframeglasses_co.paa"
    };
  };
  class ItsATreee_Survivalists_Stencil_WorkingGloves_ColorBase_Black: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_WorkingGloves_ColorBase_Beige: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_beige_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_beige_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_beige_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_WorkingGloves_ColorBase_Brown: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_WorkingGloves_ColorBase_Yellow: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_workinggloves_yellow_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_TacticalGloves_Beige: TacticalGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_beige_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_beige_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_beige_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_TacticalGloves_Black: TacticalGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_TacticalGloves_Green: TacticalGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_tacticalgloves_green_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Stencil_SurgicalGloves_Blue: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_SurgicalGloves_Green: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_SurgicalGloves_Light_Blue: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_light_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_light_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_light_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_SurgicalGloves_White: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_white_co.paa"
		};
	};      
	class ItsATreee_Survivalists_Stencil_OMNOGloves_Gray: OMNOGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_omno_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_omno_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_omno_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_OMNOGloves_Brown: OMNOGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_omno_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_omno_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_omno_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_NBCGlovesGray: NBCGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_nbc_gloves_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_nbc_gloves_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_nbc_gloves_grey_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_ZmijovkaCap_Black: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_ZmijovkaCap_Blue: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_ZmijovkaCap_Brown: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_ZmijovkaCap_Green: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_ZmijovkaCap_Red: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_Ushanka_Black: Ushanka_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ushanka_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ushanka_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ushanka_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_Ushanka_Black: Ushanka_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_ushanka_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_ushanka_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_ushanka_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_Ushanka_Blue: Ushanka_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ushanka_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ushanka_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ushanka_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_Ushanka_Blue: Ushanka_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_ushanka_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_ushanka_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_ushanka_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_Ushanka_Green: Ushanka_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ushanka_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ushanka_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ushanka_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_Ushanka_Green: Ushanka_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_ushanka_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_ushanka_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_ushanka_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_TankerHelmet_Black: TankerHelmet
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_tankerhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_tankerhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_tankerhelmet_black_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_SantasHat: SantasHat
	{
		scope=2;
		visibilityModifier=1;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_santashat_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_santashat_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_santashat_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_Ssh68Helmet: Ssh68Helmet
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_ssh68helmet_olive_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_ssh68helmet_olive_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_ssh68helmet_olive_co.paa"
		};
  };
  class ItsATreee_Survivalists_Logo_RadarCap_Black: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_radarcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_RadarCap_Black: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_radarcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_RadarCap_Blue: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_radarcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_RadarCap_Blue: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_radarcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_RadarCap_Brown: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_radarcap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_RadarCap_Brown: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_radarcap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_RadarCap_Green: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_radarcap_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_RadarCap_Green: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_radarcap_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_RadarCap_Red: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_radarcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_radarcap_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_RadarCap_Red: RadarCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_radarcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_radarcap_red_co.paa"
		};
	};      
  class ItsATreee_Survivalists_Logo_SkateHelmet_Black: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_SkateHelmet_Black: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_SkateHelmet_Blue: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_SkateHelmet_Blue: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_SkateHelmet_Gray: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_gray_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_gray_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_gray_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_SkateHelmet_Gray: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_gray_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_gray_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_gray_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_SkateHelmet_Green: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_SkateHelmet_Green: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_SkateHelmet_Red: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_protecskatehelmet2_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_SkateHelmet_Red: SkateHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_protecskatehelmet2_red_co.paa"
		};
	};        
	class ItsATreee_Survivalists_Logo_NBCHoodGray: NBCHoodGray
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_nbc_hood_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_hood_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_hood_grey_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_NBCHoodGray: NBCHoodGray
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_nbc_hood_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_nbc_hood_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_nbc_hood_grey_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_OfficerHat: OfficerHat
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_officerhat_co.paa",
			"Survivalists_Characters\data\survivalists_logo_officerhat_co.paa",
			"Survivalists_Characters\data\survivalists_logo_officerhat_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_PilotkaCap: PilotkaCap
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pilotka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pilotka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pilotka_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_PilotkaCap: PilotkaCap
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_pilotka_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_pilotka_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_pilotka_co.paa"
		};
	};   
  class ItsATreee_Survivalists_Logo_PoliceCap: PoliceCap
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_policecap_co.paa",
			"Survivalists_Characters\data\survivalists_logo_policecap_co.paa",
			"Survivalists_Characters\data\survivalists_logo_policecap_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_PoliceCap: PoliceCap
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_policecap_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_policecap_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_policecap_co.paa"
		};
	};  
	class ItsATreee_Survivalists_Logo_PrisonerCap: PrisonerCap
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_prison_cap_co.paa",
			"Survivalists_Characters\data\survivalists_logo_prison_cap_co.paa",
			"Survivalists_Characters\data\survivalists_logo_prison_cap_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_PrisonerCap: PrisonerCap
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_prison_cap_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_prison_cap_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_prison_cap_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_DirtBikeHelmet_Black: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_black_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_DirtBikeHelmet_Black: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_mxhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_mxhelmet_black_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Logo_DirtBikeHelmet_Khaki: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_khaki_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_DirtBikeHelmet_Khaki: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_mxhelmet_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_mxhelmet_khaki_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_DirtBikeHelmet_Police: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_police_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_police_co.paa"
		};
	};
	class ItsATreee_Survivalists_Branding_DirtBikeHelmet_Police: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_mxhelmet_police_co.paa",
			"Survivalists_Characters\data\survivalists_branding_mxhelmet_police_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_MotoHelmet_Black: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_black_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_DarkMotoHelmet_Black: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_black_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_MotoHelmet_Black: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_black_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class ItsATreee_Survivalists_Stencil_DarkMotoHelmet_Black: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_black_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
  class ItsATreee_Survivalists_Logo_MotoHelmet_Blue: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_blue_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_DarkMotoHelmet_Blue: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_blue_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_MotoHelmet_Blue: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_blue_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class ItsATreee_Survivalists_Stencil_DarkMotoHelmet_Blue: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_blue_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class ItsATreee_Survivalists_Logo_MotoHelmet_Green: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_green_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_DarkMotoHelmet_Green: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_green_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_MotoHelmet_Green: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_green_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class ItsATreee_Survivalists_Stencil_DarkMotoHelmet_Green: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_green_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class ItsATreee_Survivalists_Logo_MotoHelmet_Green2: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_green2_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_DarkMotoHelmet_Green2: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_green2_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_MotoHelmet_Green2: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_green2_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class ItsATreee_Survivalists_Stencil_DarkMotoHelmet_Green2: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_green2_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class ItsATreee_Survivalists_Logo_MotoHelmet_Grey: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_grey_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_DarkMotoHelmet_Grey: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_grey_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_MotoHelmet_Grey: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_grey_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class ItsATreee_Survivalists_Stencil_DarkMotoHelmet_Grey: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_grey_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class ItsATreee_Survivalists_Logo_MotoHelmet_Red: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_red_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_DarkMotoHelmet_Red: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_red_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_MotoHelmet_Red: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_red_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class ItsATreee_Survivalists_Stencil_DarkMotoHelmet_Red: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_red_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class ItsATreee_Survivalists_Logo_MotoHelmet_White: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_white_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_DarkMotoHelmet_White: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_white_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_MotoHelmet_White: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_white_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class ItsATreee_Survivalists_Stencil_DarkMotoHelmet_White: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_white_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class ItsATreee_Survivalists_Logo_Mich2001Helmet: Mich2001Helmet
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_mich2001_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mich2001_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mich2001_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_Mich2001Helmet: Mich2001Helmet
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_mich2001_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_mich2001_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_mich2001_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Logo_MedicalScrubsHat_Blue: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_MedicalScrubsHat_Blue: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_MedicalScrubsHat_Green: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_MedicalScrubsHat_Green: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_MedicalScrubsHat_White: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_MedicalScrubsHat_White: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_GorkaHelmet_Black: GorkaHelmet
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_maska_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_maska_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_maska_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_GorkaHelmet_Black: GorkaHelmet
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_maska_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_maska_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_maska_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_GorkaHelmet_Green: GorkaHelmet
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_maska_co.paa",
			"Survivalists_Characters\data\survivalists_logo_maska_co.paa",
			"Survivalists_Characters\data\survivalists_logo_maska_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_GorkaHelmet_Green: GorkaHelmet
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_maska_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_maska_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_maska_co.paa"
		};
	};  
	class ItsATreee_Survivalists_Logo_HockeyHelmet_Black: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_HockeyHelmet_Black: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_HockeyHelmet_Blue: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_HockeyHelmet_Blue: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_HockeyHelmet_Red: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_HockeyHelmet_Red: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_HockeyHelmet_White: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hockey_helmet_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_HockeyHelmet_White: HockeyHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_hockey_helmet_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_BallisticHelmet_Black: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_helmetmich_bk_co.paa",
			"Survivalists_Characters\data\survivalists_logo_helmetmich_bk_co.paa",
			"Survivalists_Characters\data\survivalists_logo_helmetmich_bk_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BallisticHelmet_Black: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_bk_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_bk_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_bk_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_BallisticHelmet_Green: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_helmetmich_co.paa",
			"Survivalists_Characters\data\survivalists_logo_helmetmich_co.paa",
			"Survivalists_Characters\data\survivalists_logo_helmetmich_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BallisticHelmet_Green: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_BallisticHelmet_UN: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_helmetmich_un_co.paa",
			"Survivalists_Characters\data\survivalists_logo_helmetmich_un_co.paa",
			"Survivalists_Characters\data\survivalists_logo_helmetmich_un_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BallisticHelmet_UN: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_un_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_un_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_un_co.paa"
		};
	}; 
  class ItsATreee_Survivalists_Logo_BallisticHelmet_Epic: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_helmetmich_epic_co.paa",
			"Survivalists_Characters\data\survivalists_logo_helmetmich_epic_co.paa",
			"Survivalists_Characters\data\survivalists_logo_helmetmich_epic_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BallisticHelmet_Epic: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_epic_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_epic_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_helmetmich_epic_co.paa"
		};
	}; 
  class ItsATreee_Survivalists_Logo_Headtorch_Black: Headtorch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_headtorch_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_headtorch_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_headtorch_black_co.paa",
			"dz\data\data\light_flare2_ca.paa",
			"Survivalists_Characters\data\survivalists_logo_headtorch_black_co.paa",
			"#(argb,8,8,3)color(0.0745098,0.141176,0.184314,0.3,ca)",
			"Survivalists_Characters\data\survivalists_logo_headtorch_black_co.paa"
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.1,0.1,1};
				brightness=8;
				radius=25;
				angle=130;
				angleInnerRatio=0.25;
				dayLight=1;
				flareAngleBias=40;
				position="beamStart";
				direction="beamEnd";
				hitpoint="bulb";
				selection="bulb";
			};
		};
	};
  class ItsATreee_Survivalists_Logo_Headtorch_Grey: Headtorch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_headtorch_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_headtorch_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_headtorch_grey_co.paa",
			"dz\data\data\light_flare2_ca.paa",
			"Survivalists_Characters\data\survivalists_logo_headtorch_grey_co.paa",
			"#(argb,8,8,3)color(0.0745098,0.141176,0.184314,0.3,ca)",
			"Survivalists_Characters\data\survivalists_logo_headtorch_grey_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_GreatHelm: GreatHelm
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_greathelm_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_LeatherHat_ColorBase: LeatherHat_ColorBase
	{
    scope=2;
    visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hat_leather_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hat_leather_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hat_leather_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_BurlapSackCover: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_head_sack_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BurlapSackCover: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_head_sack_co.paa"
		};
	};
  class ItsATreee_Survivalists_BurlapSackCover_Black: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_black_head_sack_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_BurlapSackCover_Black: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_black_head_sack_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BurlapSackCover_Black: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_black_head_sack_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_FlatCap_Black: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_flatcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FlatCap_Black: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_flatcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FlatCap_Blue: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_flatcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FlatCap_Blue: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_flatcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FlatCap_Red: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_flatcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FlatCap_Red: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_flatcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FlatCap_Brown: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_flatcap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FlatCap_Brown: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_flatcap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FlatCap_Grey: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_flatcap_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_grey_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FlatCap_Grey: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_flatcap_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_grey_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FlatCap_Black_Check: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_flatcap_black_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_black_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_black_check_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FlatCap_Black_Check: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_flatcap_black_check_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_black_check_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_black_check_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FlatCap_Brown_Check: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_flatcap_brown_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_brown_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_brown_check_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FlatCap_Brown_Check: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_flatcap_brown_check_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_brown_check_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_brown_check_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FlatCap_Grey_Check: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_flatcap_grey_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_grey_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_flatcap_grey_check_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FlatCap_Grey_Check: FlatCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_flatcap_grey_check_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_grey_check_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_flatcap_grey_check_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FirefightersHelmet_Black: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firehelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FirefightersHelmet_Black: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FirefightersHelmet_Red: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firehelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FirefightersHelmet_Red: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FirefightersHelmet_White: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firehelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FirefightersHelmet_White: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_FirefightersHelmet_Yellow: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firehelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_yellow_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_FirefightersHelmet_Yellow: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_yellow_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_CowboyHat_Black: CowboyHat_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_CowboyHat_Black: CowboyHat_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_CowboyHat_Brown: CowboyHat_ColorBase
	{
		scope=2;
		color="brown";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_CowboyHat_Brown: CowboyHat_ColorBase
	{
		scope=2;
		color="brown";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_brown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_brown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_CowboyHat_DarkBrown: CowboyHat_ColorBase
	{
		scope=2;
		color="DarkBrown";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_darkbrown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_darkbrown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_darkbrown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_CowboyHat_DarkBrown: CowboyHat_ColorBase
	{
		scope=2;
		color="DarkBrown";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_darkbrown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_darkbrown_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_darkbrown_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_CowboyHat_Green: CowboyHat_ColorBase
	{
		scope=2;
		color="Green";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_CowboyHat_Green: CowboyHat_ColorBase
	{
		scope=2;
		color="Green";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_CowboyHat_Grey: CowboyHat_ColorBase
	{
		scope=2;
		color="Grey";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_grey_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_CowboyHat_Grey: CowboyHat_ColorBase
	{
		scope=2;
		color="Grey";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_grey_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_CowboyHat_White: CowboyHat_ColorBase
	{
		scope=2;
		color="White";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cowboyhat_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_CowboyHat_White: CowboyHat_ColorBase
	{
		scope=2;
		color="White";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_cowboyhat_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_ConstructionHelmet_Black: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_ConstructionHelmet_Black: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_ConstructionHelmet_Blue: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_ConstructionHelmet_Blue: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_blue_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Logo_ConstructionHelmet_Green: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_green_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_ConstructionHelmet_Green: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_green_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Logo_ConstructionHelmet_Lime: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_lime_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_lime_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_lime_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_ConstructionHelmet_Lime: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_lime_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_lime_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_lime_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Logo_ConstructionHelmet_Orange: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_orange_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_ConstructionHelmet_Orange: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_orange_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_orange_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_orange_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Logo_ConstructionHelmet_Red: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_ConstructionHelmet_Red: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_red_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Logo_ConstructionHelmet_White: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_white_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_ConstructionHelmet_White: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_white_co.paa"
		};
	};  
  class ItsATreee_Survivalists_Logo_ConstructionHelmet_Yellow: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_yellow_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_ConstructionHelmet_Yellow: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_yellow_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_BoonieHat_Black: BoonieHat_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BoonieHat_Black: BoonieHat_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_BoonieHat_Blue: BoonieHat_ColorBase
	{
		scope=2;
		color="Blue";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BoonieHat_Blue: BoonieHat_ColorBase
	{
		scope=2;
		color="Blue";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_blue_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BoonieHat_DPM: BoonieHat_ColorBase
	{
		scope=2;
		color="DPM";
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_dpm_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_dpm_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_dpm_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BoonieHat_DPM: BoonieHat_ColorBase
	{
		scope=2;
		color="DPM";
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_dpm_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_dpm_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_dpm_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BoonieHat_Dubok: BoonieHat_ColorBase
	{
		scope=2;
		color="dubok";
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_dubok_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_dubok_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_dubok_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BoonieHat_Dubok: BoonieHat_ColorBase
	{
		scope=2;
		color="dubok";
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_dubok_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_dubok_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_dubok_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_BoonieHat_Flecktran: BoonieHat_ColorBase
	{
		scope=2;
		color="flecktran";
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_flecktran_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_flecktran_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_flecktran_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_BoonieHat_Flecktran: BoonieHat_ColorBase
	{
		scope=2;
		color="flecktran";
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_flecktran_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_flecktran_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_flecktran_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BoonieHat_NavyBlue: BoonieHat_ColorBase
	{
		scope=2;
		color="NavyBlue";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_navyblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_navyblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_navyblue_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_BoonieHat_NavyBlue: BoonieHat_ColorBase
	{
		scope=2;
		color="NavyBlue";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_navyblue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_navyblue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_navyblue_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BoonieHat_Olive: BoonieHat_ColorBase
	{
		scope=2;
		color="olive";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_olive_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_BoonieHat_Olive: BoonieHat_ColorBase
	{
		scope=2;
		color="olive";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_olive_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_olive_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_olive_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BoonieHat_Orange: BoonieHat_ColorBase
	{
		scope=2;
		color="orange";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_orange_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_BoonieHat_Orange: BoonieHat_ColorBase
	{
		scope=2;
		color="orange";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_orange_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_orange_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_orange_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BoonieHat_Red: BoonieHat_ColorBase
	{
		scope=2;
		color="red";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_red_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_BoonieHat_Red: BoonieHat_ColorBase
	{
		scope=2;
		color="red";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_red_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BoonieHat_Tan: BoonieHat_ColorBase
	{
		scope=2;
		color="Tan";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_booniehat_tan_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_tan_co.paa",
			"Survivalists_Characters\data\survivalists_logo_booniehat_tan_co.paa"
		};
	};
	class ItsATreee_Survivalists_Stencil_BoonieHat_Tan: BoonieHat_ColorBase
	{
		scope=2;
		color="Tan";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_booniehat_tan_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_tan_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_booniehat_tan_co.paa"
		};
	};  
	class ItsATreee_Survivalists_Logo_BeanieHat_Beige: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_beaniehat_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_beige_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BeanieHat_Black: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_beaniehat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BeanieHat_Black: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_beaniehat_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_beaniehat_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_beaniehat_black_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BeanieHat_Blue: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_beaniehat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_blue_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BeanieHat_Brown: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
    {
			"Survivalists_Characters\data\survivalists_logo_beaniehatbBrown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehatbBrown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_Brown_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BeanieHat_Green: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_beaniehat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_green_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BeanieHat_Grey: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_beaniehat_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_grey_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BeanieHat_Pink: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_beaniehat_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_pink_co.paa"
		};
	};          
	class ItsATreee_Survivalists_Logo_BeanieHat_Red: BeanieHat_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_beaniehat_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_beaniehat_red_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BaseballCap_WD: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_baseballcap_wd_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_wd_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_wd_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BaseballCap_WD: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_wd_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_wd_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_wd_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BaseballCap_Beige: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_baseballcap_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_beige_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BaseballCap_Beige: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_beige_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_beige_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_beige_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BaseballCap_Black: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_baseballcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_black_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BaseballCap_Black: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_black_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BaseballCap_Blue: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_baseballcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BaseballCap_Blue: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_blue_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BaseballCap_Camo: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_baseballcap_camo_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_camo_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_camo_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BaseballCap_Camo: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_camo_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_camo_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_camo_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BaseballCap_Olive: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_baseballcap_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_olive_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BaseballCap_Olive: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_olive_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_olive_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_olive_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BaseballCap_Pink: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_baseballcap_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_pink_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BaseballCap_Pink: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_pink_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_pink_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_pink_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BaseballCap_Red: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_baseballcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_baseballcap_red_co.paa"
		};
	};
  class ItsATreee_Survivalists_Stencil_BaseballCap_Red: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_baseballcap_red_co.paa"
		};
	};              
  
	class ItsATreee_Survivalists_Logo_Bandana_BlackPattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanafh_g_blackpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blackpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_blackpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blackpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_blackpattern_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BandanaHead_BlackPattern: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		color="blackpattern";
		ChangeIntoOnAttach[]=
		{
			"",
			"ItsATreee_Survivalists_Logo_BandanaHead_BlackPattern"
		};
		ChangeIntoOnDetach="ItsATreee_Survivalists_Logo_Bandana_BlackPattern";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_blackpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blackpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blackpattern_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_Bandana_Blue: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanafh_g_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_blue_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BandanaHead_Blue: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		color="bluepattern";
		ChangeIntoOnAttach[]=
		{
			"",
			"ItsATreee_Survivalists_Logo_BandanaHead_Blue"
		};
		ChangeIntoOnDetach="ItsATreee_Survivalists_Logo_Bandana_Blue";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blue_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_Bandana_PolkaPattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanafh_g_karkulka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_karkulka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_karkulka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_karkulka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_karkulka_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BandanaHead_PolkaPattern: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		color="polkapattern";
		ChangeIntoOnAttach[]=
		{
			"",
			"ItsATreee_Survivalists_Logo_BandanaHead_PolkaPattern"
		};
		ChangeIntoOnDetach="ItsATreee_Survivalists_Logo_Bandana_PolkaPattern";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_karkulka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_karkulka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_karkulka_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_Bandana_Pink: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanafh_g_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_pink_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BandanaHead_Pink: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		ChangeIntoOnAttach[]=
		{
			"",
			"ItsATreee_Survivalists_Logo_BandanaHead_Pink"
		};
		ChangeIntoOnDetach="ItsATreee_Survivalists_Logo_Bandana_Pink";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_pink_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_Bandana_Red: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanafh_g_redpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_redpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_redpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_redpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_redpattern_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BandanaHead_Red: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		ChangeIntoOnAttach[]=
		{
			"",
			"ItsATreee_Survivalists_Logo_BandanaHead_Red"
		};
		ChangeIntoOnDetach="ItsATreee_Survivalists_Logo_Bandana_Red";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_redpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_redpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_redpattern_co.paa"
		};
	};
  class ItsATreee_Survivalists_Logo_Bandana_Yellow: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanafh_g_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_yellow_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BandanaHead_Yellow: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		ChangeIntoOnAttach[]=
		{
			"",
			"ItsATreee_Survivalists_Logo_BandanaHead_Yellow"
		};
		ChangeIntoOnDetach="ItsATreee_Survivalists_Logo_Bandana_Yellow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_yellow_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_Bandana_GreenPattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanafh_g_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_olive_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BandanaHead_GreenPattern: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		ChangeIntoOnAttach[]=
		{
			"",
			"ItsATreee_Survivalists_Logo_BandanaHead_GreenPattern"
		};
		ChangeIntoOnDetach="ItsATreee_Survivalists_Logo_Bandana_GreenPattern";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_olive_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_Bandana_CamoPattern: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanafh_g_ttsko_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_ttsko_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_ttsko_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_ttsko_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanaf_ttsko_co.paa"
		};
	};
	class ItsATreee_Survivalists_Logo_BandanaHead_CamoPattern: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="camopattern";
		ChangeIntoOnAttach[]=
		{
			"",
			"ItsATreee_Survivalists_Logo_BandanaHead_CamoPattern"
		};
		ChangeIntoOnDetach="ItsATreee_Survivalists_Logo_Bandana_CamoPattern";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_ttsko_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_ttsko_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_ttsko_co.paa"
		};
	};


};