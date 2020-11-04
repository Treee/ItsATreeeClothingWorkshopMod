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
};