class CfgPatches
{
	class DZ_Characters_Glasses
	{
		units[]=
		{
			"SunGlasses"
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
};