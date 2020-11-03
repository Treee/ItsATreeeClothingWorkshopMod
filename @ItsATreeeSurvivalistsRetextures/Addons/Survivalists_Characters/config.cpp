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
};