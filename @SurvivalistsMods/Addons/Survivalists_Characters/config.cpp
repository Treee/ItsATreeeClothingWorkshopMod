class CfgPatches
{
	class Survivalists_Characters
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
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

  //masks
  class AirborneMask;
  class BalaclavaMask_ColorBase;
  class Balaclava3Holes_ColorBase;
  class GasMask;
  class GP5GasMask;
  class MouthRag;
  class NioshFaceMask;
  class SantasBeard;
  class SurgicalMask;
  class HockeyMask;
  class WeldingMask;

  // pants
  class USMCPants_ColorBase;
  class TrackSuitPants_ColorBase;
  class TTSKOPants;
  class SlacksPants_ColorBase;
  class Skirt_ColorBase;
  class ShortJeans_ColorBase;
  class PrisonUniformPants;
  class PolicePants;
  class NBCPantsBase;
  class ParamedicPants_ColorBase;
  class MedicalScrubsPants_ColorBase;
  class LeatherPants_ColorBase;
  class JumpsuitPants_ColorBase;
  class Jeans_ColorBase;
  class HunterPants_ColorBase;
  class GorkaPants_ColorBase;
  class FirefightersPants_ColorBase;
  class CargoPants_ColorBase;
  class CanvasPants_ColorBase;
  class BDUPants;
  class Breeches_ColorBase;

  // shoes
  class WorkingBoots_ColorBase;
  class Wellies_ColorBase;
  class TTSKOBoots;
  class LeatherShoes_ColorBase;
  class NBCBootsBase;
  class Sneakers_ColorBase;
  class MilitaryBoots_ColorBase;
	class JungleBoots_ColorBase;
  class JoggingShoes_ColorBase;
  class HikingBoots_ColorBase;
  class HikingBootsLow_ColorBase;
  class CombatBoots_ColorBase;
  class Ballerinas_ColorBase;
  class AthleticShoes_ColorBase;

  //tops
  class WoolCoat_ColorBase;
  class WomanSuit_ColorBase;
  class USMCJacket_ColorBase;
  class TTsKOJacket_ColorBase;
  class TShirt_ColorBase;
  class TrackSuitJacket_ColorBase;
  class TelnyashkaShirt;
  class Sweater_ColorBase;
  class Shirt_ColorBase;
  class RidersJacket_ColorBase;
  class Raincoat_ColorBase;
  class QuiltedJacket_ColorBase;
  class PrisonUniformJacket;
  class PoliceJacket;
  class PoliceJacketOrel;
  class HikingJacket_ColorBase;
  class ParamedicJacket_ColorBase;
  class NBCJacketBase;
  class NurseDress_ColorBase;
  class MiniDress_ColorBase;
  class MedicalScrubsShirt_ColorBase;
  class ManSuit_ColorBase;
  class M65Jacket_ColorBase;
  class LeatherShirt_ColorBase;
  class LabCoat;
  class JumpsuitJacket_ColorBase;
  class HuntingJacket_ColorBase;
  class Hoodie_ColorBase;
  class GorkaEJacket_ColorBase;
  class FirefighterJacket_ColorBase;
  class DenimJacket;
  class ChernarusSportShirt;
  class BomberJacket_ColorBase;
  class Blouse_ColorBase;
  class BDUJacket;
  class Armband_ColorBase;

  // naming convention
  // IAT -> ItsATreee
  // S   -> Survivalists

  class IAT_S_Brand_SportGlasses_Black: SportGlasses_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_joeyx_black_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_joeyx_black_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_joeyx_black_ca.paa"   // female
		};
	};
  class IAT_S_Stencil_SportGlasses_Black: SportGlasses_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_joeyx_black_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_stencil_joeyx_black_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_stencil_joeyx_black_ca.paa"   // female
		};
	};
  class IAT_S_Brand_SportGlasses_Blue: SportGlasses_Blue
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_joeyx_blue_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_joeyx_blue_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_joeyx_blue_ca.paa"   // female
		};
	};
  class IAT_S_Stencil_SportGlasses_Blue: SportGlasses_Blue
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_joeyx_blue_ca.paa",
			"Survivalists_Characters\data\survivalists_stencil_joeyx_blue_ca.paa",
			"Survivalists_Characters\data\survivalists_stencil_joeyx_blue_ca.paa"
		};
	};
  class IAT_S_Brand_SportGlasses_Green: SportGlasses_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_joeyx_green_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_joeyx_green_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_joeyx_green_ca.paa"   // female
		};
	};
  class IAT_S_Stencil_SportGlasses_Green: SportGlasses_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_joeyx_green_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_stencil_joeyx_green_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_stencil_joeyx_green_ca.paa"   // female
		};
	};
  class IAT_S_Brand_SportGlasses_Orange: SportGlasses_Orange
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_joeyx_yellowred_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_branding_joeyx_yellowred_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_branding_joeyx_yellowred_ca.paa"   // female
		};
	};
  class IAT_S_Stencil_SportGlasses_Orange: SportGlasses_Orange
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_joeyx_yellowred_ca.paa",  // camo ground
			"Survivalists_Characters\data\survivalists_stencil_joeyx_yellowred_ca.paa",  // male
			"Survivalists_Characters\data\survivalists_stencil_joeyx_yellowred_ca.paa"   // female
		};
	};
  class IAT_S_Brand_DesignerGlasses: DesignerGlasses
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
  class IAT_S_Stencil_DesignerGlasses: DesignerGlasses
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
  class IAT_S_Brand_TacticalGoggles: TacticalGoggles
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
  class IAT_S_Stencil_TacticalGoggles: TacticalGoggles
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
  class IAT_S_Stencil_ThickFramesGlasses: ThickFramesGlasses
  {
		scope=2;
    hiddenSelections[]=
    {
      "camoMale",
      "camoFemale",
      "camoGround"
    };
    // we need to find the alphal ayer on the glasses so they are transparent
    // hiddenSelectionsMaterials[]=
		// {
		// 	"\dz\characters\glasses\data\thickframeglasses.rvmat",
		// 	"\dz\characters\glasses\data\gasmask_glass.rvmat",
    //   ""
		// };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_thickframeglasses_co.paa",
      "Survivalists_Characters\data\survivalists_stencil_thickframeglasses_co.paa",
      "Survivalists_Characters\data\survivalists_stencil_thickframeglasses_co.paa"
    };
  };
  class IAT_S_Stencil_Eye_ThickFramesGlasses: ThickFramesGlasses
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
  class IAT_S_Brand_ThinFramesGlasses: ThinFramesGlasses
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
  class IAT_S_Stencil_WorkingGloves_ColorBase_Black: WorkingGloves_ColorBase
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
  class IAT_S_Stencil_WorkingGloves_ColorBase_Beige: WorkingGloves_ColorBase
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
  class IAT_S_Stencil_WorkingGloves_ColorBase_Brown: WorkingGloves_ColorBase
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
  class IAT_S_Stencil_WorkingGloves_ColorBase_Yellow: WorkingGloves_ColorBase
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
  class IAT_S_Stencil_TacticalGloves_Beige: TacticalGloves_ColorBase
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
  class IAT_S_Stencil_TacticalGloves_Black: TacticalGloves_ColorBase
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
  class IAT_S_Stencil_TacticalGloves_Green: TacticalGloves_ColorBase
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
  class IAT_S_Stencil_SurgicalGloves_Blue: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_blue_co.paa"
		};
	};
  class IAT_S_Stencil_SurgicalGloves_Green: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_green_co.paa"
		};
	};
  class IAT_S_Stencil_SurgicalGloves_Light_Blue: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_light_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_light_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_light_blue_co.paa"
		};
	};
  class IAT_S_Stencil_SurgicalGloves_White: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_gloves_white_co.paa"
		};
	};      
	class IAT_S_Stencil_OMNOGloves_Gray: OMNOGloves_ColorBase
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
  class IAT_S_Stencil_OMNOGloves_Brown: OMNOGloves_ColorBase
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
  class IAT_S_Stencil_NBCGlovesGray: NBCGloves_ColorBase
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
  class IAT_S_Logo_ZmijovkaCap_Black: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_black_co.paa"
		};
	};
  class IAT_S_Logo_ZmijovkaCap_Blue: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_blue_co.paa"
		};
	};
  class IAT_S_Logo_ZmijovkaCap_Brown: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_brown_co.paa"
		};
	};
  class IAT_S_Logo_ZmijovkaCap_Green: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_green_co.paa"
		};
	};
  class IAT_S_Logo_ZmijovkaCap_Red: ZmijovkaCap_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_zmijovkacap_red_co.paa"
		};
	};
  class IAT_S_Logo_Ushanka_Black: Ushanka_ColorBase
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
  class IAT_S_Stencil_Ushanka_Black: Ushanka_ColorBase
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
  class IAT_S_Logo_Ushanka_Blue: Ushanka_ColorBase
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
  class IAT_S_Stencil_Ushanka_Blue: Ushanka_ColorBase
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
  class IAT_S_Logo_Ushanka_Green: Ushanka_ColorBase
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
  class IAT_S_Stencil_Ushanka_Green: Ushanka_ColorBase
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
  class IAT_S_Stencil_TankerHelmet_Black: TankerHelmet
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
	class IAT_S_Stencil_SantasHat: SantasHat
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
  class IAT_S_Stencil_Ssh68Helmet: Ssh68Helmet
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
  class IAT_S_Logo_RadarCap_Black: RadarCap_ColorBase
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
  class IAT_S_Stencil_RadarCap_Black: RadarCap_ColorBase
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
  class IAT_S_Logo_RadarCap_Blue: RadarCap_ColorBase
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
  class IAT_S_Stencil_RadarCap_Blue: RadarCap_ColorBase
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
  class IAT_S_Logo_RadarCap_Brown: RadarCap_ColorBase
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
  class IAT_S_Stencil_RadarCap_Brown: RadarCap_ColorBase
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
  class IAT_S_Logo_RadarCap_Green: RadarCap_ColorBase
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
  class IAT_S_Stencil_RadarCap_Green: RadarCap_ColorBase
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
  class IAT_S_Logo_RadarCap_Red: RadarCap_ColorBase
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
  class IAT_S_Stencil_RadarCap_Red: RadarCap_ColorBase
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
  class IAT_S_Logo_SkateHelmet_Black: SkateHelmet_ColorBase
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
  class IAT_S_Stencil_SkateHelmet_Black: SkateHelmet_ColorBase
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
  class IAT_S_Logo_SkateHelmet_Blue: SkateHelmet_ColorBase
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
  class IAT_S_Stencil_SkateHelmet_Blue: SkateHelmet_ColorBase
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
  class IAT_S_Logo_SkateHelmet_Gray: SkateHelmet_ColorBase
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
  class IAT_S_Stencil_SkateHelmet_Gray: SkateHelmet_ColorBase
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
  class IAT_S_Logo_SkateHelmet_Green: SkateHelmet_ColorBase
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
  class IAT_S_Stencil_SkateHelmet_Green: SkateHelmet_ColorBase
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
  class IAT_S_Logo_SkateHelmet_Red: SkateHelmet_ColorBase
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
  class IAT_S_Stencil_SkateHelmet_Red: SkateHelmet_ColorBase
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
	class IAT_S_Logo_NBCHoodGray: NBCHoodGray
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_nbc_hood_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_hood_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_hood_grey_co.paa"
		};
	};
  class IAT_S_Stencil_NBCHoodGray: NBCHoodGray
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_nbc_hood_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_nbc_hood_grey_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_nbc_hood_grey_co.paa"
		};
	};
	class IAT_S_Logo_OfficerHat: OfficerHat
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
	class IAT_S_Logo_PilotkaCap: PilotkaCap
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
	class IAT_S_Stencil_PilotkaCap: PilotkaCap
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
  class IAT_S_Logo_PoliceCap: PoliceCap
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
  class IAT_S_Stencil_PoliceCap: PoliceCap
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
	class IAT_S_Logo_PrisonerCap: PrisonerCap
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_prison_cap_co.paa",
			"Survivalists_Characters\data\survivalists_logo_prison_cap_co.paa",
			"Survivalists_Characters\data\survivalists_logo_prison_cap_co.paa"
		};
	};
  class IAT_S_Stencil_PrisonerCap: PrisonerCap
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_prison_cap_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_prison_cap_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_prison_cap_co.paa"
		};
	};
	class IAT_S_Logo_DirtBikeHelmet_Black: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_black_co.paa"
		};
	};
	class IAT_S_Stencil_DirtBikeHelmet_Black: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_mxhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_mxhelmet_black_co.paa"
		};
	};  
  class IAT_S_Logo_DirtBikeHelmet_Khaki: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_khaki_co.paa"
		};
	};
	class IAT_S_Stencil_DirtBikeHelmet_Khaki: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_mxhelmet_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_mxhelmet_khaki_co.paa"
		};
	};
  class IAT_S_Logo_DirtBikeHelmet_Police: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_police_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mxhelmet_police_co.paa"
		};
	};
	class IAT_S_Branding_DirtBikeHelmet_Police: DirtBikeHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_mxhelmet_police_co.paa",
			"Survivalists_Characters\data\survivalists_branding_mxhelmet_police_co.paa"
		};
	};
	class IAT_S_Logo_MotoHelmet_Black: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_black_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class IAT_S_Logo_DarkMotoHelmet_Black: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_black_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class IAT_S_Stencil_MotoHelmet_Black: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_black_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class IAT_S_Stencil_DarkMotoHelmet_Black: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_black_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
  class IAT_S_Logo_MotoHelmet_Blue: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_blue_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class IAT_S_Logo_DarkMotoHelmet_Blue: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_blue_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class IAT_S_Stencil_MotoHelmet_Blue: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_blue_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class IAT_S_Stencil_DarkMotoHelmet_Blue: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_blue_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class IAT_S_Logo_MotoHelmet_Green: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_green_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class IAT_S_Logo_DarkMotoHelmet_Green: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_green_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class IAT_S_Stencil_MotoHelmet_Green: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_green_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class IAT_S_Stencil_DarkMotoHelmet_Green: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_green_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class IAT_S_Logo_MotoHelmet_Green2: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_green2_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class IAT_S_Logo_DarkMotoHelmet_Green2: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_green2_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class IAT_S_Stencil_MotoHelmet_Green2: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_green2_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class IAT_S_Stencil_DarkMotoHelmet_Green2: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_green2_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class IAT_S_Logo_MotoHelmet_Grey: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_grey_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class IAT_S_Logo_DarkMotoHelmet_Grey: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_grey_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class IAT_S_Stencil_MotoHelmet_Grey: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_grey_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class IAT_S_Stencil_DarkMotoHelmet_Grey: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_grey_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class IAT_S_Logo_MotoHelmet_Red: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_red_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class IAT_S_Logo_DarkMotoHelmet_Red: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_red_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class IAT_S_Stencil_MotoHelmet_Red: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_red_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class IAT_S_Stencil_DarkMotoHelmet_Red: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_red_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class IAT_S_Logo_MotoHelmet_White: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_white_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};
  class IAT_S_Logo_DarkMotoHelmet_White: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_motohelmet_white_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	};
	class IAT_S_Stencil_MotoHelmet_White: MotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_white_co.paa",
			"Survivalists_Characters\data\MotoHelmetVisor_ca.paa"
		};
	};  
  class IAT_S_Stencil_DarkMotoHelmet_White: DarkMotoHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_motohelmet_white_co.paa",
			"dz\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
	}; 
	class IAT_S_Logo_Mich2001Helmet: Mich2001Helmet
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
	class IAT_S_Stencil_Mich2001Helmet: Mich2001Helmet
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
  class IAT_S_Logo_MedicalScrubsHat_Blue: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_blue_co.paa"
		};
	};
  class IAT_S_Stencil_MedicalScrubsHat_Blue: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_blue_co.paa"
		};
	};
  class IAT_S_Logo_MedicalScrubsHat_Green: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_green_co.paa"
		};
	};
  class IAT_S_Stencil_MedicalScrubsHat_Green: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_green_co.paa"
		};
	};
  class IAT_S_Logo_MedicalScrubsHat_White: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_hat_white_co.paa"
		};
	};
  class IAT_S_Stencil_MedicalScrubsHat_White: MedicalScrubsHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_medicalscrubs_hat_white_co.paa"
		};
	};
  class IAT_S_Logo_GorkaHelmet_Black: GorkaHelmet
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
  class IAT_S_Stencil_GorkaHelmet_Black: GorkaHelmet
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
  class IAT_S_Logo_GorkaHelmet_Green: GorkaHelmet
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
  class IAT_S_Stencil_GorkaHelmet_Green: GorkaHelmet
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
	class IAT_S_Logo_HockeyHelmet_Black: HockeyHelmet_ColorBase
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
  class IAT_S_Stencil_HockeyHelmet_Black: HockeyHelmet_ColorBase
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
  class IAT_S_Logo_HockeyHelmet_Blue: HockeyHelmet_ColorBase
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
  class IAT_S_Stencil_HockeyHelmet_Blue: HockeyHelmet_ColorBase
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
  class IAT_S_Logo_HockeyHelmet_Red: HockeyHelmet_ColorBase
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
  class IAT_S_Stencil_HockeyHelmet_Red: HockeyHelmet_ColorBase
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
  class IAT_S_Logo_HockeyHelmet_White: HockeyHelmet_ColorBase
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
  class IAT_S_Stencil_HockeyHelmet_White: HockeyHelmet_ColorBase
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
  class IAT_S_Logo_BallisticHelmet_Black: BallisticHelmet_ColorBase
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
  class IAT_S_Stencil_BallisticHelmet_Black: BallisticHelmet_ColorBase
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
  class IAT_S_Logo_BallisticHelmet_Green: BallisticHelmet_ColorBase
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
  class IAT_S_Stencil_BallisticHelmet_Green: BallisticHelmet_ColorBase
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
  class IAT_S_Logo_BallisticHelmet_UN: BallisticHelmet_ColorBase
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
  class IAT_S_Stencil_BallisticHelmet_UN: BallisticHelmet_ColorBase
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
  class IAT_S_Logo_BallisticHelmet_Epic: BallisticHelmet_ColorBase
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
  class IAT_S_Stencil_BallisticHelmet_Epic: BallisticHelmet_ColorBase
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
  class IAT_S_Logo_Headtorch_Black: Headtorch_ColorBase
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
  class IAT_S_Logo_Headtorch_Grey: Headtorch_ColorBase
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
  class IAT_S_Logo_GreatHelm: GreatHelm
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_greathelm_co.paa"
		};
	};
  class IAT_S_Logo_LeatherHat_ColorBase: LeatherHat_ColorBase
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
  class IAT_S_Logo_BurlapSackCover: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_head_sack_co.paa"
		};
	};
  class IAT_S_Stencil_BurlapSackCover: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_head_sack_co.paa"
		};
	};
  class IAT_S_BurlapSackCover_Black: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_black_head_sack_co.paa"
		};
	};
  class IAT_S_Logo_BurlapSackCover_Black: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_black_head_sack_co.paa"
		};
	};
  class IAT_S_Stencil_BurlapSackCover_Black: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_black_head_sack_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_black_head_sack_co.paa"
		};
	};
	class IAT_S_Logo_FlatCap_Black: FlatCap_ColorBase
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
  class IAT_S_Stencil_FlatCap_Black: FlatCap_ColorBase
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
  class IAT_S_Logo_FlatCap_Blue: FlatCap_ColorBase
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
  class IAT_S_Stencil_FlatCap_Blue: FlatCap_ColorBase
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
  class IAT_S_Logo_FlatCap_Red: FlatCap_ColorBase
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
  class IAT_S_Stencil_FlatCap_Red: FlatCap_ColorBase
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
  class IAT_S_Logo_FlatCap_Brown: FlatCap_ColorBase
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
  class IAT_S_Stencil_FlatCap_Brown: FlatCap_ColorBase
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
  class IAT_S_Logo_FlatCap_Grey: FlatCap_ColorBase
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
  class IAT_S_Stencil_FlatCap_Grey: FlatCap_ColorBase
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
  class IAT_S_Logo_FlatCap_Black_Check: FlatCap_ColorBase
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
  class IAT_S_Stencil_FlatCap_Black_Check: FlatCap_ColorBase
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
  class IAT_S_Logo_FlatCap_Brown_Check: FlatCap_ColorBase
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
  class IAT_S_Stencil_FlatCap_Brown_Check: FlatCap_ColorBase
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
  class IAT_S_Logo_FlatCap_Grey_Check: FlatCap_ColorBase
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
  class IAT_S_Stencil_FlatCap_Grey_Check: FlatCap_ColorBase
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
  class IAT_S_Logo_FirefightersHelmet_Black: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firehelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_black_co.paa"
		};
	};
  class IAT_S_Stencil_FirefightersHelmet_Black: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_black_co.paa"
		};
	};
  class IAT_S_Logo_FirefightersHelmet_Red: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firehelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_red_co.paa"
		};
	};
  class IAT_S_Stencil_FirefightersHelmet_Red: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_red_co.paa"
		};
	};
  class IAT_S_Logo_FirefightersHelmet_White: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firehelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_white_co.paa"
		};
	};
  class IAT_S_Stencil_FirefightersHelmet_White: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_white_co.paa"
		};
	};
  class IAT_S_Logo_FirefightersHelmet_Yellow: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firehelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firehelmet_yellow_co.paa"
		};
	};
  class IAT_S_Stencil_FirefightersHelmet_Yellow: FirefightersHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_firehelmet_yellow_co.paa"
		};
	};
	class IAT_S_Logo_CowboyHat_Black: CowboyHat_ColorBase
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
  class IAT_S_Stencil_CowboyHat_Black: CowboyHat_ColorBase
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
  class IAT_S_Logo_CowboyHat_Brown: CowboyHat_ColorBase
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
  class IAT_S_Stencil_CowboyHat_Brown: CowboyHat_ColorBase
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
  class IAT_S_Logo_CowboyHat_DarkBrown: CowboyHat_ColorBase
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
  class IAT_S_Stencil_CowboyHat_DarkBrown: CowboyHat_ColorBase
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
  class IAT_S_Logo_CowboyHat_Green: CowboyHat_ColorBase
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
  class IAT_S_Stencil_CowboyHat_Green: CowboyHat_ColorBase
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
  class IAT_S_Logo_CowboyHat_Grey: CowboyHat_ColorBase
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
  class IAT_S_Stencil_CowboyHat_Grey: CowboyHat_ColorBase
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
  class IAT_S_Logo_CowboyHat_White: CowboyHat_ColorBase
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
  class IAT_S_Stencil_CowboyHat_White: CowboyHat_ColorBase
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
  class IAT_S_Logo_ConstructionHelmet_Black: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_black_co.paa"
		};
	};
  class IAT_S_Stencil_ConstructionHelmet_Black: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_black_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_black_co.paa"
		};
	};
  class IAT_S_Logo_ConstructionHelmet_Blue: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_blue_co.paa"
		};
	};
  class IAT_S_Stencil_ConstructionHelmet_Blue: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_blue_co.paa"
		};
	};  
  class IAT_S_Logo_ConstructionHelmet_Green: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_green_co.paa"
		};
	};
  class IAT_S_Stencil_ConstructionHelmet_Green: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_green_co.paa"
		};
	};  
  class IAT_S_Logo_ConstructionHelmet_Lime: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_lime_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_lime_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_lime_co.paa"
		};
	};
  class IAT_S_Stencil_ConstructionHelmet_Lime: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_lime_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_lime_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_lime_co.paa"
		};
	};  
  class IAT_S_Logo_ConstructionHelmet_Orange: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_orange_co.paa"
		};
	};
  class IAT_S_Stencil_ConstructionHelmet_Orange: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_orange_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_orange_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_orange_co.paa"
		};
	};  
  class IAT_S_Logo_ConstructionHelmet_Red: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_red_co.paa"
		};
	};
  class IAT_S_Stencil_ConstructionHelmet_Red: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_red_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_red_co.paa"
		};
	};  
  class IAT_S_Logo_ConstructionHelmet_White: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_white_co.paa"
		};
	};
  class IAT_S_Stencil_ConstructionHelmet_White: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_white_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_white_co.paa"
		};
	};  
  class IAT_S_Logo_ConstructionHelmet_Yellow: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_constructionhelmet_yellow_co.paa"
		};
	};
  class IAT_S_Stencil_ConstructionHelmet_Yellow: ConstructionHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_constructionhelmet_yellow_co.paa"
		};
	};
  class IAT_S_Logo_BoonieHat_Black: BoonieHat_ColorBase
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
  class IAT_S_Stencil_BoonieHat_Black: BoonieHat_ColorBase
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
  class IAT_S_Logo_BoonieHat_Blue: BoonieHat_ColorBase
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
  class IAT_S_Stencil_BoonieHat_Blue: BoonieHat_ColorBase
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
	class IAT_S_Logo_BoonieHat_DPM: BoonieHat_ColorBase
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
  class IAT_S_Stencil_BoonieHat_DPM: BoonieHat_ColorBase
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
	class IAT_S_Logo_BoonieHat_Dubok: BoonieHat_ColorBase
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
  class IAT_S_Stencil_BoonieHat_Dubok: BoonieHat_ColorBase
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
  class IAT_S_Logo_BoonieHat_Flecktran: BoonieHat_ColorBase
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
	class IAT_S_Stencil_BoonieHat_Flecktran: BoonieHat_ColorBase
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
	class IAT_S_Logo_BoonieHat_NavyBlue: BoonieHat_ColorBase
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
	class IAT_S_Stencil_BoonieHat_NavyBlue: BoonieHat_ColorBase
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
	class IAT_S_Logo_BoonieHat_Olive: BoonieHat_ColorBase
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
	class IAT_S_Stencil_BoonieHat_Olive: BoonieHat_ColorBase
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
	class IAT_S_Logo_BoonieHat_Orange: BoonieHat_ColorBase
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
	class IAT_S_Stencil_BoonieHat_Orange: BoonieHat_ColorBase
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
	class IAT_S_Logo_BoonieHat_Red: BoonieHat_ColorBase
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
	class IAT_S_Stencil_BoonieHat_Red: BoonieHat_ColorBase
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
	class IAT_S_Logo_BoonieHat_Tan: BoonieHat_ColorBase
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
	class IAT_S_Stencil_BoonieHat_Tan: BoonieHat_ColorBase
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
	class IAT_S_Logo_BeanieHat_Beige: BeanieHat_ColorBase
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
	class IAT_S_Logo_BeanieHat_Black: BeanieHat_ColorBase
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
  class IAT_S_Stencil_BeanieHat_Black: BeanieHat_ColorBase
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
	class IAT_S_Logo_BeanieHat_Blue: BeanieHat_ColorBase
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
	class IAT_S_Logo_BeanieHat_Brown: BeanieHat_ColorBase
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
	class IAT_S_Logo_BeanieHat_Green: BeanieHat_ColorBase
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
	class IAT_S_Logo_BeanieHat_Grey: BeanieHat_ColorBase
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
	class IAT_S_Logo_BeanieHat_Pink: BeanieHat_ColorBase
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
	class IAT_S_Logo_BeanieHat_Red: BeanieHat_ColorBase
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
	class IAT_S_Logo_BaseballCap_WD: BaseballCap_ColorBase
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
  class IAT_S_Stencil_BaseballCap_WD: BaseballCap_ColorBase
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
	class IAT_S_Logo_BaseballCap_Beige: BaseballCap_ColorBase
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
  class IAT_S_Stencil_BaseballCap_Beige: BaseballCap_ColorBase
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
	class IAT_S_Logo_BaseballCap_Black: BaseballCap_ColorBase
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
  class IAT_S_Stencil_BaseballCap_Black: BaseballCap_ColorBase
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
	class IAT_S_Logo_BaseballCap_Blue: BaseballCap_ColorBase
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
  class IAT_S_Stencil_BaseballCap_Blue: BaseballCap_ColorBase
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
	class IAT_S_Logo_BaseballCap_Camo: BaseballCap_ColorBase
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
  class IAT_S_Stencil_BaseballCap_Camo: BaseballCap_ColorBase
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
	class IAT_S_Logo_BaseballCap_Olive: BaseballCap_ColorBase
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
  class IAT_S_Stencil_BaseballCap_Olive: BaseballCap_ColorBase
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
	class IAT_S_Logo_BaseballCap_Pink: BaseballCap_ColorBase
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
  class IAT_S_Stencil_BaseballCap_Pink: BaseballCap_ColorBase
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
	class IAT_S_Logo_BaseballCap_Red: BaseballCap_ColorBase
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
  class IAT_S_Stencil_BaseballCap_Red: BaseballCap_ColorBase
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
	class IAT_S_Logo_Bandana_BlackPattern: Bandana_ColorBase
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
	class IAT_S_Logo_BandanaHead_BlackPattern: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		color="blackpattern";
		ChangeIntoOnAttach[]=
		{
			"",
			"IAT_S_Logo_BandanaHead_BlackPattern"
		};
		ChangeIntoOnDetach="IAT_S_Logo_Bandana_BlackPattern";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_blackpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blackpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blackpattern_co.paa"
		};
	};
  class IAT_S_Logo_Bandana_Blue: Bandana_ColorBase
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
	class IAT_S_Logo_BandanaHead_Blue: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		color="bluepattern";
		ChangeIntoOnAttach[]=
		{
			"",
			"IAT_S_Logo_BandanaHead_Blue"
		};
		ChangeIntoOnDetach="IAT_S_Logo_Bandana_Blue";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_blue_co.paa"
		};
	};
  class IAT_S_Logo_Bandana_PolkaPattern: Bandana_ColorBase
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
	class IAT_S_Logo_BandanaHead_PolkaPattern: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		color="polkapattern";
		ChangeIntoOnAttach[]=
		{
			"",
			"IAT_S_Logo_BandanaHead_PolkaPattern"
		};
		ChangeIntoOnDetach="IAT_S_Logo_Bandana_PolkaPattern";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_karkulka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_karkulka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_karkulka_co.paa"
		};
	};
  class IAT_S_Logo_Bandana_Pink: Bandana_ColorBase
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
	class IAT_S_Logo_BandanaHead_Pink: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		ChangeIntoOnAttach[]=
		{
			"",
			"IAT_S_Logo_BandanaHead_Pink"
		};
		ChangeIntoOnDetach="IAT_S_Logo_Bandana_Pink";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_pink_co.paa"
		};
	};
  class IAT_S_Logo_Bandana_Red: Bandana_ColorBase
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
	class IAT_S_Logo_BandanaHead_Red: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		ChangeIntoOnAttach[]=
		{
			"",
			"IAT_S_Logo_BandanaHead_Red"
		};
		ChangeIntoOnDetach="IAT_S_Logo_Bandana_Red";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_redpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_redpattern_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_redpattern_co.paa"
		};
	};
  class IAT_S_Logo_Bandana_Yellow: Bandana_ColorBase
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
	class IAT_S_Logo_BandanaHead_Yellow: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		ChangeIntoOnAttach[]=
		{
			"",
			"IAT_S_Logo_BandanaHead_Yellow"
		};
		ChangeIntoOnDetach="IAT_S_Logo_Bandana_Yellow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_yellow_co.paa"
		};
	};
	class IAT_S_Logo_Bandana_GreenPattern: Bandana_ColorBase
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
	class IAT_S_Logo_BandanaHead_GreenPattern: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		ChangeIntoOnAttach[]=
		{
			"",
			"IAT_S_Logo_BandanaHead_GreenPattern"
		};
		ChangeIntoOnDetach="IAT_S_Logo_Bandana_GreenPattern";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_olive_co.paa"
		};
	};
	class IAT_S_Logo_Bandana_CamoPattern: Bandana_ColorBase
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
	class IAT_S_Logo_BandanaHead_CamoPattern: BandanaHead_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="camopattern";
		ChangeIntoOnAttach[]=
		{
			"",
			"IAT_S_Logo_BandanaHead_CamoPattern"
		};
		ChangeIntoOnDetach="IAT_S_Logo_Bandana_CamoPattern";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bandanah_ttsko_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_ttsko_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bandanah_ttsko_co.paa"
		};
	};
	class IAT_S_Logo_AirborneMask: AirborneMask
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_airborne_mask_co.paa",
			"Survivalists_Characters\data\survivalists_logo_airborne_mask_co.paa",
			"Survivalists_Characters\data\survivalists_logo_airborne_mask_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gp5gasmask_white_co.paa",
			"Survivalists_Characters\data\survivalists_airborne_mask_glass_ca.paa"
		};
  };
	class IAT_S_Logo_BalaclavaMask_Beige: BalaclavaMask_ColorBase
	{
		scope=2;
		color="beige";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaclava_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_beige_co.paa"
		};
	};
	class IAT_S_Logo_BalaclavaMask_Black: BalaclavaMask_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaclava_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_black_co.paa"
		};
	}; 
	class IAT_S_Stencil_BalaclavaMask_BlackSkull: BalaclavaMask_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_balaclava_blackskull_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaclava_blackskull_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaclava_blackskull_co.paa"
		};
	};   
	class IAT_S_Logo_BalaclavaMask_Blue: BalaclavaMask_ColorBase
	{
		scope=2;
		color="blue";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaclava_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_blue_co.paa"
		};
	}; 
	class IAT_S_Logo_BalaclavaMask_Green: BalaclavaMask_ColorBase
	{
		scope=2;
		color="green";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaclava_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_green_co.paa"
		};
	}; 
	class IAT_S_Logo_BalaclavaMask_Pink: BalaclavaMask_ColorBase
	{
		scope=2;
		color="pink";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaclava_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_pink_co.paa"
		};
	};         
	class IAT_S_Logo_BalaclavaMask_White: BalaclavaMask_ColorBase
	{
		scope=2;
		color="white";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaclava_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaclava_white_co.paa"
		};
	};   
	class IAT_S_Logo_Balaclava3Holes_Black: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_co.paa"
		};
	};
  class IAT_S_Stencil_Balaclava3Holes_Black: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_co.paa"
		};
	};  
	class IAT_S_Logo_Balaclava3Holes_Beige: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_beige_co.paa"
		};
	};
  class IAT_S_Stencil_Balaclava3Holes_Beige: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_beige_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_beige_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_beige_co.paa"
		};
	};  
	class IAT_S_Logo_Balaclava3Holes_Blue: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_blue_co.paa"
		};
	};
  class IAT_S_Stencil_Balaclava3Holes_Blue: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_blue_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_blue_co.paa"
		};
	};  
	class IAT_S_Logo_Balaclava3Holes_Green: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_balaklava_3holes_green_co.paa"
		};
	};
  class IAT_S_Stencil_Balaclava3Holes_Green: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_green_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_balaklava_3holes_green_co.paa"
		};
	};        
	class IAT_S_Logo_GasMask: GasMask
	{
		scope=2;
		visibilityModifier=0.89999998;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gasmask_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gasmask_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gasmask_co.paa"
		};
	};
	class IAT_S_Stencil_GasMask: GasMask
	{
		scope=2;
		visibilityModifier=0.89999998;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_gasmask_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_gasmask_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_gasmask_co.paa"
		};
	};  
  class IAT_S_Logo_GP5GasMask: GP5GasMask
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gp5gasmask_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gp5gasmask_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gp5gasmask_white_co.paa"
		};
	};
  class IAT_S_Branding_GP5GasMask: GP5GasMask
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_gp5gasmask_white_co.paa",
			"Survivalists_Characters\data\survivalists_branding_gp5gasmask_white_co.paa",
			"Survivalists_Characters\data\survivalists_branding_gp5gasmask_white_co.paa"
		};
	};
  class IAT_S_Logo_MouthRag: MouthRag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_mouth_rags_co.paa",
			"Survivalists_Characters\data\survivalists_logo_mouth_rags_co.paa"
		};
	};  
  class IAT_S_Branding_MouthRag: MouthRag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_mouth_rags_co.paa",
			"Survivalists_Characters\data\survivalists_branding_mouth_rags_co.paa"
		};
	};
	class IAT_S_Logo_NioshFaceMask: NioshFaceMask
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_nioshfacemask_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nioshfacemask_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nioshfacemask_co.paa"
		};
	};
  class IAT_S_Stencil_NioshFaceMask: NioshFaceMask
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_nioshfacemask_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_nioshfacemask_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_nioshfacemask_co.paa"
		};
	};
	class IAT_S_Logo_SurgicalMask: SurgicalMask
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_surgical_mask_ground_co.paa",
			"Survivalists_Characters\data\survivalists_logo_surgical_mask_co.paa",
			"Survivalists_Characters\data\survivalists_logo_surgical_mask_co.paa"
		};
	};
  class IAT_S_Stencil_SurgicalMask: SurgicalMask
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_stencil_surgical_mask_ground_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_mask_co.paa",
			"Survivalists_Characters\data\survivalists_stencil_surgical_mask_co.paa"
		};
	};
	class IAT_S_Branding_HockeyMask: HockeyMask
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_vinitagehockeym_co.paa",
			"Survivalists_Characters\data\survivalists_branding_vinitagehockeym_co.paa",
			"Survivalists_Characters\data\survivalists_branding_vinitagehockeym_co.paa"
		};
	};

  // texture is too low resolution for it to look good. maybe try a different one?
  // class IAT_S_Logo_WeldingMask: WeldingMask
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"Survivalists_Characters\data\survivalists_logo_welding_mask_co.paa",
	// 		"Survivalists_Characters\data\survivalists_logo_welding_mask_co.paa",
	// 		"Survivalists_Characters\data\survivalists_logo_welding_mask_co.paa"
	// 	};
	// };
  // class IAT_S_Stencil_WeldingMask: WeldingMask
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"Survivalists_Characters\data\survivalists_stencil_welding_mask_co.paa",
	// 		"Survivalists_Characters\data\survivalists_stencil_welding_mask_co.paa",
	// 		"Survivalists_Characters\data\survivalists_stencil_welding_mask_co.paa"
	// 	};
	// };
  // texture is wierd having stuff underneath so shelve for later work
  // class IAT_S_Logo_SantasBeard: SantasBeard
	// {
	// 	scope=2;
  //  hiddenSelections[]=
  //  {
  //    "zbytek"
  //  };
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"Survivalists_Characters\data\survivalists_logo_santasbeard_co.paa",
	// 		"Survivalists_Characters\data\survivalists_logo_santasbeard_co.paa",
	// 		"Survivalists_Characters\data\survivalists_logo_santasbeard_co.paa"
	// 	};
	// };

	class IAT_S_Logo_USMCPants_Desert: USMCPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_usmc_pants_marpatdesert_co.paa",
			"Survivalists_Characters\data\survivalists_logo_usmc_pants_marpatdesert_co.paa",
			"Survivalists_Characters\data\survivalists_logo_usmc_pants_marpatdesert_co.paa"
		};
	};
  class IAT_S_Logo_USMCPants_Woodland: USMCPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_usmc_pants_marpatwoodland_co.paa",
			"Survivalists_Characters\data\survivalists_logo_usmc_pants_marpatwoodland_co.paa",
			"Survivalists_Characters\data\survivalists_logo_usmc_pants_marpatwoodland_co.paa"
		};    
	};
	class IAT_S_Logo_TrackSuitPants_Black: TrackSuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_black_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat"
		};
  };
  class IAT_S_Logo_TrackSuitPants_Blue: TrackSuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_blue_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat"
		};
  };
	class IAT_S_Logo_TrackSuitPants_Green: TrackSuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_green_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat"
		};
  };
  class IAT_S_Logo_TrackSuitPants_LightBlue: TrackSuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_lightBlue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_lightBlue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_lightBlue_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat"
		};
  };
  class IAT_S_Logo_TrackSuitPants_Red: TrackSuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_pants_red_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat",
			"Survivalists_Characters\data\survivalists_tracksuit_pants.rvmat"
		};
  };
	class IAT_S_Logo_TTSKOPants: TTSKOPants
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ttsko_pants_g_camo_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ttsko_pants_camo_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ttsko_pants_camo_co.paa"
		};
	};
  class IAT_S_Logo_SlacksPants_Beige: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_slacks_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_beige_co.paa"
		};
	};
	class IAT_S_Logo_SlacksPants_Black: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_slacks_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_black_co.paa"
		};
	};
  class IAT_S_Logo_SlacksPants_Blue: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_slacks_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_blue_co.paa"
		};
	};  
  class IAT_S_Logo_SlacksPants_Brown: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_slacks_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_brown_co.paa"
		};
	};
  class IAT_S_Logo_SlacksPants_DarkGrey: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_slacks_darkgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_darkgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_darkgrey_co.paa"
		};
	};
  class IAT_S_Logo_SlacksPants_Khaki: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_slacks_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_khaki_co.paa"
		};
	};
  class IAT_S_Logo_SlacksPants_LightGrey: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_slacks_lightgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_lightgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_lightgrey_co.paa"
		};
	};
  class IAT_S_Logo_SlacksPants_White: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_slacks_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_slacks_white_co.paa"
		};
	};
	class IAT_S_Logo_Skirt_Blue: Skirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_skirt_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_skirt_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_skirt_blue_co.paa",
			"dz\characters\heads\data\hhl_m_white_06_co.paa"
		};
	};
  class IAT_S_Branding_Skirt_Blue: Skirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_skirt_blue_co.paa",
			"Survivalists_Characters\data\survivalists_branding_skirt_blue_co.paa",
			"Survivalists_Characters\data\survivalists_branding_skirt_blue_co.paa",
			"dz\characters\heads\data\hhl_m_white_06_co.paa"
		};
	};
  class IAT_S_Logo_Skirt_Red: Skirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_skirt_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_skirt_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_skirt_red_co.paa",
			"dz\characters\heads\data\hhl_m_white_06_co.paa"
		};
	};
  class IAT_S_Branding_Skirt_Red: Skirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_skirt_red_co.paa",
			"Survivalists_Characters\data\survivalists_branding_skirt_red_co.paa",
			"Survivalists_Characters\data\survivalists_branding_skirt_red_co.paa",
			"dz\characters\heads\data\hhl_m_white_06_co.paa"
		};
	};
  class IAT_S_Logo_Skirt_White: Skirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_skirt_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_skirt_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_skirt_white_co.paa",
			"dz\characters\heads\data\hhl_m_white_06_co.paa"
		};
	};
  class IAT_S_Branding_Skirt_White: Skirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_skirt_white_co.paa",
			"Survivalists_Characters\data\survivalists_branding_skirt_white_co.paa",
			"Survivalists_Characters\data\survivalists_branding_skirt_white_co.paa",
			"dz\characters\heads\data\hhl_m_white_06_co.paa"
		};
	};
  class IAT_S_Logo_Skirt_Yellow: Skirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_skirt_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_skirt_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_skirt_yellow_co.paa",
			"dz\characters\heads\data\hhl_m_white_06_co.paa"
		};
	};
  class IAT_S_Branding_Skirt_Yellow: Skirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_branding_skirt_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_branding_skirt_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_branding_skirt_yellow_co.paa",
			"dz\characters\heads\data\hhl_m_white_06_co.paa"
		};
	};
  class IAT_S_Logo_ShortJeans_Black: ShortJeans_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shortjeans_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_black_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
  class IAT_S_Logo_ShortJeans_Blue: ShortJeans_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shortjeans_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_blue_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
  class IAT_S_Logo_ShortJeans_Brown: ShortJeans_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shortjeans_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_brown_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
  class IAT_S_Logo_ShortJeans_DarkBlue: ShortJeans_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shortjeans_darkblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_darkblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_darkblue_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
  class IAT_S_Logo_ShortJeans_Green: ShortJeans_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shortjeans_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_green_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
  class IAT_S_Logo_ShortJeans_Red: ShortJeans_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shortjeans_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shortjeans_red_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_PrisonUniformPants: PrisonUniformPants
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_prison_pants_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_prison_pants_co.paa",
			"Survivalists_Characters\data\survivalists_logo_prison_pants_co.paa"
		};
  };
  class IAT_S_Logo_PolicePants: PolicePants
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_policepants_co.paa",
			"Survivalists_Characters\data\survivalists_logo_policepants_co.paa",
			"Survivalists_Characters\data\survivalists_logo_policepants_co.paa"
		};
	};
  class IAT_S_Logo_ParamedicPants_Blue: ParamedicPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_blue_co.paa"
		};
	};
  class IAT_S_Logo_ParamedicPants_Crimson: ParamedicPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_crimson_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_crimson_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_crimson_co.paa"
		};
	};
  class IAT_S_Logo_ParamedicPants_Green: ParamedicPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_green_co.paa"
		};
	};
  class IAT_S_Logo_ParamedicPants_Orange: ParamedicPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_pants_orange_co.paa"
		};
	};
  class IAT_S_Logo_NBCPantsGray: NBCPantsBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_nbc_pants_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_pants_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_pants_grey_co.paa"
		};
	};       
	class IAT_S_Logo_MedicalScrubsPants_Blue: MedicalScrubsPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_blue_co.paa"
		};
	};
	class IAT_S_Logo_MedicalScrubsPants_Green: MedicalScrubsPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_green_co.paa"
		};
	};
	class IAT_S_Logo_MedicalScrubsPants_White: MedicalScrubsPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_pants_white_co.paa"
		};
	};
  class IAT_S_Logo_LeatherPants_Natural: LeatherPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="Natural";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_leatherpants_co.paa",
			"Survivalists_Characters\data\survivalists_logo_leatherpants_co.paa",
			"Survivalists_Characters\data\survivalists_logo_leatherpants_g_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\Characters\pants\data\Pants_LeatherPants_g_Natural.rvmat",
			"DZ\Characters\pants\data\Pants_LeatherPants_Natural.rvmat",
			"DZ\Characters\pants\data\Pants_LeatherPants_Natural.rvmat"
		};
	};
	class IAT_S_Logo_JumpsuitPants_Blue: JumpsuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_blues_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_blues_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_blues_co.paa"
		};
	};
  class IAT_S_Logo_JumpsuitPants_Green: JumpsuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_green_co.paa"
		};
	};
  class IAT_S_Logo_JumpsuitPants_Grey: JumpsuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_grey_co.paa"
		};
	};
	class IAT_S_Logo_JumpsuitPants_Red: JumpsuitPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_pants_red_co.paa"
		};
	};
	class IAT_S_Logo_Jeans_Black: Jeans_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jeans_m_grd_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_f_black_co.paa"
		};
	};
	class IAT_S_Logo_Jeans_Blue: Jeans_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jeans_m_grd_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_f_blue_co.paa"
		};
	};
  class IAT_S_Logo_Jeans_BlueDark: Jeans_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jeans_m_grd_bluedark_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_bluedark_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_f_bluedark_co.paa"
		};
	};
  class IAT_S_Logo_Jeans_Brown: Jeans_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jeans_m_grd_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_f_brown_co.paa"
		};
	};
	class IAT_S_Logo_Jeans_Green: Jeans_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jeans_m_grd_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_f_green_co.paa"
		};
	};
	class IAT_S_Logo_Jeans_Grey: Jeans_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jeans_m_grd_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jeans_f_grey_co.paa"
		};
	};  
	class IAT_S_Logo_HunterPants_Autumn: HunterPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunterpants_autumn_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_autumn_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_autumn_co.paa"
		};
	};
  class IAT_S_Logo_HunterPants_Brown: HunterPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunterpants_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_brown_co.paa"
		};
	};
  class IAT_S_Logo_HunterPants_Spring: HunterPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunterpants_spring_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_spring_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_spring_co.paa"
		};
	};
  class IAT_S_Logo_HunterPants_Summer: HunterPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunterpants_summer_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_summer_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_summer_co.paa"
		};
	};
  class IAT_S_Logo_HunterPants_Winter: HunterPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunterpants_winter_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_winter_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunterpants_winter_co.paa"
		};
	};
	class IAT_S_Logo_GorkaPants_Autumn: GorkaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_autumn_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_autumn_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_autumn_co.paa"
		};
	};
	class IAT_S_Logo_GorkaPants_Flat: GorkaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_flat_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_flat_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_flat_co.paa"
		};
	};
	class IAT_S_Logo_GorkaPants_Pautrev: GorkaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_pautrev_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_pautrev_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_pautrev_co.paa"
		};
	};
	class IAT_S_Logo_GorkaPants_Summer: GorkaPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_summer_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_summer_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_pants_summer_co.paa"
		};
	};
	class IAT_S_Logo_FirefightersPants_Beige: FirefightersPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firefighter_pants_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firefighter_pants_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firefighter_pants_beige_co.paa"
		};
	};
  class IAT_S_Logo_FirefightersPants_Black: FirefightersPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firefighter_pants_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firefighter_pants_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firefighter_pants_black_co.paa"
		};
	};
	class IAT_S_Logo_CargoPants_Beige: CargoPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cargopants_g_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_beige_co.paa"
		};
	};
  class IAT_S_Logo_CargoPants_Black: CargoPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cargopants_g_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_black_co.paa"
		};
	};
  class IAT_S_Logo_CargoPants_Blue: CargoPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cargopants_g_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_blue_co.paa"
		};
	};
  class IAT_S_Logo_CargoPants_DarkBlue: CargoPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cargopants_g_dblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_dblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_dblue_co.paa"
		};
	};
  class IAT_S_Logo_CargoPants_Green: CargoPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cargopants_g_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_green_co.paa"
		};
	};
  class IAT_S_Logo_CargoPants_Grey: CargoPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_cargopants_g_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_cargopants_grey_co.paa"
		};
	};
	class IAT_S_Logo_CanvasPants_Beige: CanvasPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_canvaspants_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_beige_co.paa"
		};
	};
	class IAT_S_Logo_CanvasPants_Blue: CanvasPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_canvaspants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_blue_co.paa"
		};
	};
	class IAT_S_Logo_CanvasPants_Grey: CanvasPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_canvaspants_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_grey_co.paa"
		};
	};
	class IAT_S_Logo_CanvasPants_Red: CanvasPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_canvaspants_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_red_co.paa"
		};
	};
	class IAT_S_Logo_CanvasPants_Violet: CanvasPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_canvaspants_violet_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_violet_co.paa",
			"Survivalists_Characters\data\survivalists_logo_canvaspants_violet_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_Beetcheck: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_beetcheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_beetcheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_beetcheck_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_Beige: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_beige_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_Black: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_black_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_Blackcheck: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_blackcheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_blackcheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_blackcheck_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_Blue: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_blue_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};        
	class IAT_S_Logo_Breeches_Browncheck: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_browncheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_browncheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_browncheck_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_Green: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_green_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_Pink: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_pink_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_Red: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_red_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class IAT_S_Logo_Breeches_White: Breeches_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_breechesf_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_breechesf_white_co.paa",
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};       
	class IAT_S_Logo_BDUPants: BDUPants
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bdu_pants_woodland_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bdu_pants_woodland_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bdu_pants_woodland_co.paa"
		};
	};
	class IAT_S_Logo_WorkingBoots_Beige: WorkingBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_workingboots_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_beige_co.paa"
		};
	};
	class IAT_S_Logo_WorkingBoots_Brown: WorkingBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_workingboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_brown_co.paa"
		};
	};
	class IAT_S_Logo_WorkingBoots_Green: WorkingBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_workingboots_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_green_co.paa"
		};
	};
	class IAT_S_Logo_WorkingBoots_Grey: WorkingBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_workingboots_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_grey_co.paa"
		};
	};
	class IAT_S_Logo_WorkingBoots_Yellow: WorkingBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_workingboots_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_workingboots_yellow_co.paa"
		};
	};
	class IAT_S_Logo_Wellies_Black: Wellies_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_wellies_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_black_co.paa"
		};
	};
	class IAT_S_Logo_Wellies_Brown: Wellies_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_wellies_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_brown_co.paa"
		};
	};
	class IAT_S_Logo_Wellies_Green: Wellies_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_wellies_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_green_co.paa"
		};
	};
	class IAT_S_Logo_Wellies_Grey: Wellies_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_wellies_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_grey_co.paa"
		};
	};
	class IAT_S_Logo_Wellies_Yellow: Wellies_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_wellies_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_wellies_yellow_co.paa"
		};
	};
	class IAT_S_Logo_TTSKOBoots: TTSKOBoots
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek",
      "camoMale",
      "camoFemale",
      "camoGround"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ttsko_boots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ttsko_boots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ttsko_boots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ttsko_boots_black_co.paa"
		};
	};
  class IAT_S_Logo_LeatherShoes_ColorBase: LeatherShoes_ColorBase
	{
    scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shoes_leathermoccasins_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shoes_leathermoccasins_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shoes_leathermoccasins_co.paa"
		};
	};
	class IAT_S_Logo_NBCBootsGray: NBCBootsBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_nbc_boots_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_boots_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_boots_grey_co.paa"
		};
	};
	class IAT_S_Logo_Sneakers_Black: Sneakers_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sneakers_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_black_co.paa"
		};
	};
	class IAT_S_Logo_Sneakers_Gray: Sneakers_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sneakers_gray_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_gray_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_gray_co.paa"
		};
	}; 
	class IAT_S_Logo_Sneakers_Green: Sneakers_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sneakers_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_green_co.paa"
		};
	}; 
	class IAT_S_Logo_Sneakers_Red: Sneakers_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sneakers_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_red_co.paa"
		};
	}; 
	class IAT_S_Logo_Sneakers_White: Sneakers_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sneakers_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sneakers_white_co.paa"
		};
	};         
	class IAT_S_Logo_MilitaryBoots_Beige: MilitaryBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_militaryboots_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_beige_co.paa"
		};
	};
	class IAT_S_Logo_MilitaryBoots_Black: MilitaryBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_militaryboots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_black_co.paa"
		};
	};
	class IAT_S_Logo_MilitaryBoots_BlueRock: MilitaryBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_militaryboots_bluerock_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_bluerock_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_bluerock_co.paa"
		};
	};
	class IAT_S_Logo_MilitaryBoots_Brown: MilitaryBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_militaryboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_brown_co.paa"
		};
	};
  class IAT_S_Logo_MilitaryBoots_RedPunk: MilitaryBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_militaryboots_redpunk_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_redpunk_co.paa",
			"Survivalists_Characters\data\survivalists_logo_militaryboots_redpunk_co.paa"
		};
	};
	class IAT_S_Logo_JungleBoots_Beige: JungleBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jungleboots_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_beige_co.paa"
		};
	};
	class IAT_S_Logo_JungleBoots_Black: JungleBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jungleboots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_black_co.paa"
		};
	};
	class IAT_S_Logo_JungleBoots_Brown: JungleBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jungleboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_brown_co.paa"
		};
	};
	class IAT_S_Logo_JungleBoots_Green: JungleBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jungleboots_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_green_co.paa"
		};
	};
	class IAT_S_Logo_JungleBoots_Olive: JungleBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jungleboots_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jungleboots_olive_co.paa"
		};
	};  
	class IAT_S_Logo_JoggingShoes_Black: JoggingShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_black_co.paa"
		};
	};
	class IAT_S_Logo_JoggingShoes_Blue: JoggingShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_blue_co.paa"
		};
	};
	class IAT_S_Logo_JoggingShoes_Red: JoggingShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_red_co.paa"
		};
	};
	class IAT_S_Logo_JoggingShoes_Violet: JoggingShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_violet_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_violet_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_violet_co.paa"
		};
	};
	class IAT_S_Logo_JoggingShoes_White: JoggingShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_joggingshoes_white_co.paa"
		};
	};          
	class IAT_S_Logo_HikingBoots_Brown: HikingBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hikingboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_brown_co.paa"
		};
	};
	class IAT_S_Logo_HikingBoots_Black: HikingBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hikingboots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_black_co.paa"
		};
	};
  class IAT_S_Logo_HikingBootsLow_Beige: HikingBootsLow_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_beige_co.paa"
		};
	};
  class IAT_S_Logo_HikingBootsLow_Black: HikingBootsLow_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_black_co.paa"
		};
	};
	class IAT_S_Logo_HikingBootsLow_Blue: HikingBootsLow_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_blue_co.paa"
		};
	};
	class IAT_S_Logo_HikingBootsLow_Grey: HikingBootsLow_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_grey_co.paa"
		};
	};
	class IAT_S_Logo_HikingBootsLow_Red: HikingBootsLow_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hikingboots_low_red_co.paa"
		};
	};    
  class IAT_S_Logo_CombatBoots_Beige: CombatBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_combatboots_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_beige_co.paa"
		};
	};
  class IAT_S_Logo_CombatBoots_Black: CombatBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_combatboots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_black_co.paa"
		};
	};
  class IAT_S_Logo_CombatBoots_Brown: CombatBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_combatboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_brown_co.paa"
		};
	};
  class IAT_S_Logo_CombatBoots_Green: CombatBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_combatboots_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_green_co.paa"
		};
	};
  class IAT_S_Logo_CombatBoots_Grey: CombatBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_combatboots_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_combatboots_grey_co.paa"
		};
	};    
  class IAT_S_Logo_Ballerinas_Blue: Ballerinas_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ballerinas_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ballerinas_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ballerinas_blue_co.paa"
		};
	};
  class IAT_S_Logo_Ballerinas_Red: Ballerinas_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ballerinas_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ballerinas_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ballerinas_red_co.paa"
		};
	};
  class IAT_S_Logo_Ballerinas_White: Ballerinas_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ballerinas_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ballerinas_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ballerinas_white_co.paa"
		};
	};
  class IAT_S_Logo_Ballerinas_Yellow: Ballerinas_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ballerinas_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ballerinas_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ballerinas_yellow_co.paa"
		};
	};
	class IAT_S_Logo_AthleticShoes_Black: AthleticShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_black_co.paa"
		};
	};
	class IAT_S_Logo_AthleticShoes_Blue: AthleticShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_blue_co.paa"
		};
	};
	class IAT_S_Logo_AthleticShoes_Brown: AthleticShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_brown_co.paa"
		};
	};
	class IAT_S_Logo_AthleticShoes_Green: AthleticShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_green_co.paa"
		};
	};
	class IAT_S_Logo_AthleticShoes_Grey: AthleticShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_grey_co.paa"
		};
	};
	class IAT_S_Logo_AthleticShoes_Red: AthleticShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_athleticshoes_red_co.paa"
		};
	};          

	class IAT_S_Logo_WoolCoat_Beige: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_beige_co.paa"
		};
	};
	class IAT_S_Logo_WoolCoat_Black: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_black_co.paa"
		};
	};
  class IAT_S_Logo_WoolCoat_Black_Check: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_black_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_black_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_black_check_co.paa"
		};
	};
  class IAT_S_Logo_WoolCoat_Blue_Check: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_blue_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_blue_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_blue_check_co.paa"
		};
	};
  class IAT_S_Logo_WoolCoat_Blue: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_blue_co.paa"
		};
	};
  class IAT_S_Logo_WoolCoat_Brown_Check: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_brown_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_brown_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_brown_check_co.paa"
		};
	};
  class IAT_S_Logo_WoolCoat_Green: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_green_co.paa"
		};
	};
  class IAT_S_Logo_WoolCoat_Grey_Check: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_grey_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_grey_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_grey_check_co.paa"
		};
	};
  class IAT_S_Logo_WoolCoat_Red_Check: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_red_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_red_check_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_red_check_co.paa"
		};
	};
  class IAT_S_Logo_WoolCoat_Red: WoolCoat_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woolcoat_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woolcoat_red_co.paa"
		};
	};
	class IAT_S_Logo_WomanSuit_Beige: WomanSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woman_suit_g_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_beige_co.paa"
		};
	};
  class IAT_S_Logo_WomanSuit_Black: WomanSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woman_suit_g_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_black_co.paa"
		};
	};
  class IAT_S_Logo_WomanSuit_Brown: WomanSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woman_suit_g_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_brown_co.paa"
		};
	};
  class IAT_S_Logo_WomanSuit_DarkGrey: WomanSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woman_suit_g_darkgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_darkgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_darkgrey_co.paa"
		};
	};
  class IAT_S_Logo_WomanSuit_Khaki: WomanSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woman_suit_g_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_khaki_co.paa"
		};
	};
  class IAT_S_Logo_WomanSuit_LightGrey: WomanSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woman_suit_g_lightgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_lightgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_lightgrey_co.paa"
		};
	};
  class IAT_S_Logo_WomanSuit_White: WomanSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_woman_suit_g_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_woman_suit_white_co.paa"
		};
	};
	class IAT_S_Logo_USMCJacket_Woodland: USMCJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_usmc_jacket_marpatwoodland_co.paa",
			"Survivalists_Characters\data\survivalists_logo_usmc_jacket_marpatwoodland_co.paa",
			"Survivalists_Characters\data\survivalists_logo_usmc_jacket_marpatwoodland_co.paa"
		};
	};
  class IAT_S_Logo_USMCJacket_Desert: USMCJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_usmc_jacket_marpatdesert_co.paa",
			"Survivalists_Characters\data\survivalists_logo_usmc_jacket_marpatdesert_co.paa",
			"Survivalists_Characters\data\survivalists_logo_usmc_jacket_marpatdesert_co.paa"
		};
	};
	class IAT_S_Logo_TTsKOJacket_Camo: TTsKOJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_ttsko_jacket_g_camo_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ttsko_jacket_camo_co.paa",
			"Survivalists_Characters\data\survivalists_logo_ttsko_jacket_camo_co.paa"
		};
	};
	class IAT_S_Logo_TShirt_Beige: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_beige_co.paa"
		};
	};
  class IAT_S_Logo_TShirt_Black: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_black_co.paa"
		};
	};
  class IAT_S_Logo_TShirt_Blue: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_blue_co.paa"
		};
	};
  class IAT_S_Logo_TShirt_Green: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_green_co.paa"
		};
	};
  class IAT_S_Logo_TShirt_Grey: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_grey_co.paa"
		};
	};
  class IAT_S_Logo_TShirt_OrangeWhiteStripes: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_orangewhitestripes_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_orangewhitestripes_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_orangewhitestripes_co.paa"
		};
	};
  class IAT_S_Logo_TShirt_Red: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_red_co.paa"
		};
	};
  class IAT_S_Logo_TShirt_RedBlackStripes: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_redblackstripes_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_redblackstripes_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_redblackstripes_co.paa"
		};
	};
  class IAT_S_Logo_TShirt_White: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tshirt_ground_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tshirt_white_co.paa"
		};
	};
	class IAT_S_Logo_TrackSuitJacket_Black: TrackSuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_black_co.paa"
		};
	};
  class IAT_S_Logo_TrackSuitJacket_Blue: TrackSuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_blue_co.paa"
		};
	};
  class IAT_S_Logo_TrackSuitJacket_Green: TrackSuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_green_co.paa"
		};
	};
  class IAT_S_Logo_TrackSuitJacket_LightBlue: TrackSuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_lightblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_lightblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_lightblue_co.paa"
		};
	};
  class IAT_S_Logo_TrackSuitJacket_Red: TrackSuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_tracksuit_jacket_red_co.paa"
		};
	};
	class IAT_S_Logo_TelnyashkaShirt: TelnyashkaShirt
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_telnyashka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_telnyashka_co.paa",
			"Survivalists_Characters\data\survivalists_logo_telnyashka_co.paa"
		};
	};
	class IAT_S_Logo_Sweater_Gray: Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sweater_chalk_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sweater_chalkstone_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sweater_chalkstone_co.paa"
		};
	};
  class IAT_S_Logo_Sweater_Green: Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sweater_loden_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sweater_loden_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sweater_loden_co.paa"
		};
	};
  class IAT_S_Logo_Sweater_Navy: Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sweater_navy_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sweater_navy_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sweater_navy_co.paa"
		};
	};
  class IAT_S_Logo_Sweater_Red: Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_sweater_red_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sweater_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_sweater_red_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_CheckBlue: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_checkblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkblue_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_CheckBlueBright: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_checkbluebright_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkbluebright_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkbluebright_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_CheckGreen: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_checkgreen_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkgreen_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkgreen_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_CheckRed: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_checkred_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkred_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkred_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_CheckWhite: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_checkwhite_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkwhite_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_checkwhite_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_PlaneBlack: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_planeblack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planeblack_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planeblack_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_PlaneBlue: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_planeblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planeblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planeblue_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_PlaneMint: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_planemint_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planemint_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planemint_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_PlanePink: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_planepink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planepink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planepink_co.paa"
		};
	};
  class IAT_S_Logo_Shirt_PlaneWhite: Shirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.98000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_shirt_ground_planewhite_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planewhite_co.paa",
			"Survivalists_Characters\data\survivalists_logo_shirt_planewhite_co.paa"
		};
	};
	class IAT_S_Logo_RidersJacket_Black: RidersJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_riders_jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_riders_jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_riders_jacket_black_co.paa"
		};
	};
	class IAT_S_Logo_Raincoat_Black: Raincoat_ColorBase
	{
		scope=2;
		color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_raincoat_g_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_black_co.paa"
		};
	};
  class IAT_S_Logo_Raincoat_Blue: Raincoat_ColorBase
	{
		scope=2;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_raincoat_g_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_blue_co.paa"
		};
	};
  class IAT_S_Logo_Raincoat_Green: Raincoat_ColorBase
	{
		scope=2;
		color="green";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_raincoat_g_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_green_co.paa"
		};
	};
  class IAT_S_Logo_Raincoat_Orange: Raincoat_ColorBase
	{
		scope=2;
		color="orange";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_raincoat_g_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_orange_co.paa"
		};
	};
  class IAT_S_Logo_Raincoat_Pink: Raincoat_ColorBase
	{
		scope=2;
		color="pink";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_raincoat_g_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_pink_co.paa"
		};
	};
  class IAT_S_Logo_Raincoat_Red: Raincoat_ColorBase
	{
		scope=2;
		color="red";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_raincoat_g_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_red_co.paa"
		};
	};
  class IAT_S_Logo_Raincoat_Yellow: Raincoat_ColorBase
	{
		scope=2;
		color="yellow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_raincoat_g_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_raincoat_yellow_co.paa"
		};
	};
	class IAT_S_Logo_QuiltedJacket_Black: QuiltedJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_black_co.paa"
		};
	};
  class IAT_S_Logo_QuiltedJacket_Blue: QuiltedJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_blue_co.paa"
		};
	};
  class IAT_S_Logo_QuiltedJacket_Green: QuiltedJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_green_co.paa"
		};
	};
  class IAT_S_Logo_QuiltedJacket_Grey: QuiltedJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_grey_co.paa"
		};
	};
  class IAT_S_Logo_QuiltedJacket_Orange: QuiltedJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_orange_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_orange_co.paa"
		};
	};
  class IAT_S_Logo_QuiltedJacket_Red: QuiltedJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_red_co.paa"
		};
	};
  class IAT_S_Logo_QuiltedJacket_Violet: QuiltedJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_violet_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_violet_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_violet_co.paa"
		};
	};
  class IAT_S_Logo_QuiltedJacket_Yellow: QuiltedJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_quiltedjacket_yellow_co.paa"
		};
	};
	class IAT_S_Logo_PrisonUniformJacket: PrisonUniformJacket
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_prison_top_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_prison_top_co.paa",
			"Survivalists_Characters\data\survivalists_logo_prison_top_co.paa"
		};
	};
  class IAT_S_Logo_PoliceJacket: PoliceJacket
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_policejacket_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_policejacket_co.paa",
			"Survivalists_Characters\data\survivalists_logo_policejacket_co.paa"
		};
	};
  class IAT_S_Logo_PoliceJacketOrel: PoliceJacketOrel
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_policejacket_g_kamyshcamo_co.paa",
			"Survivalists_Characters\data\survivalists_logo_policejacket_kamyshcamo_co.paa",
			"Survivalists_Characters\data\survivalists_logo_policejacket_kamyshcamo_co.paa"
		};
	};
	class IAT_S_Logo_HikingJacket_Black: HikingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_g_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_black_co.paa"
		};
	};
  class IAT_S_Logo_HikingJacket_Blue: HikingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_g_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_blue_co.paa"
		};
	};
  class IAT_S_Logo_HikingJacket_Green: HikingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_g_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_green_co.paa"
		};
	};
  class IAT_S_Logo_HikingJacket_Grey: HikingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_g_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_grey_co.paa"
		};
	};
  class IAT_S_Logo_HikingJacket_LightBlue: HikingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_g_lightblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_lightblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_lightblue_co.paa"
		};
	};
  class IAT_S_Logo_HikingJacket_Olive: HikingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_g_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_olive_co.paa"
		};
	};
  class IAT_S_Logo_HikingJacket_Red: HikingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_g_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_red_co.paa"
		};
	};
  class IAT_S_Logo_HikingJacket_Tan: HikingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_g_tan_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_tan_co.paa",
			"Survivalists_Characters\data\survivalists_logo_pcu5jacket_tan_co.paa"
		};
	};
	class IAT_S_Logo_ParamedicJacket_Beige: ParamedicJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_beige_co.paa"
		};
	};
  class IAT_S_Logo_ParamedicJacket_Blue: ParamedicJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_blue_co.paa"
		};
	};
  class IAT_S_Logo_ParamedicJacket_Crimson: ParamedicJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_crimson_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_crimson_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_crimson_co.paa"
		};
	};
  class IAT_S_Logo_ParamedicJacket_Green: ParamedicJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_paramedic_jacket_green_co.paa"
		};
	};
	class IAT_S_Logo_NBCJacketGray: NBCJacketBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_nbc_jacket_g_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_jacket_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nbc_jacket_grey_co.paa"
		};
	};
	class IAT_S_Logo_NurseDress_White: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_nursedress_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nursedress_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nursedress_white_co.paa"
		};
	};
  class IAT_S_Logo_NurseDress_Blue: NurseDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_nursedress_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nursedress_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_nursedress_blue_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_BlueCheck: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_bluecheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_bluecheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_bluecheck_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_BlueCircle: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_bluecircle_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_bluecircle_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_bluecircle_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_BrownCheck: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_browncheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_browncheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_browncheck_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_Cherry: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_cherry_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_cherry_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_cherry_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_GreenCheck: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_greencheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_greencheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_greencheck_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_Pink: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_pink_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_PinkCheck: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_pinkcheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_pinkcheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_pinkcheck_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_RedCheck: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_redcheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_redcheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_redcheck_co.paa"
		};
	};
  class IAT_S_Logo_MiniDress_WhiteCheck: MiniDress_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_minidress_whitecheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_whitecheck_co.paa",
			"Survivalists_Characters\data\survivalists_logo_minidress_whitecheck_co.paa"
		};
	};
  class IAT_S_Logo_MedicalScrubsShirt_Blue: MedicalScrubsShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_blue_co.paa"
		};
	};
  class IAT_S_Logo_MedicalScrubsShirt_Green: MedicalScrubsShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_green_co.paa"
		};
	};
  class IAT_S_Logo_MedicalScrubsShirt_White: MedicalScrubsShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_medicalscrubs_shirt_white_co.paa"
		};
	};
  class IAT_S_Logo_ManSuit_Beige: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_man_suit_g_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_beige_co.paa"
		};
	};
  class IAT_S_Logo_ManSuit_Black: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_man_suit_g_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_black_co.paa"
		};
	};
  class IAT_S_Logo_ManSuit_Blue: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_man_suit_g_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_blue_co.paa"
		};
	};
  class IAT_S_Logo_ManSuit_Brown: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_man_suit_g_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_brown_co.paa"
		};
	};
  class IAT_S_Logo_ManSuit_DarkGrey: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_man_suit_g_darkgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_darkgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_darkgrey_co.paa"
		};
	};
  class IAT_S_Logo_ManSuit_Khaki: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_man_suit_g_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_khaki_co.paa"
		};
	};
  class IAT_S_Logo_ManSuit_LightGrey: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_man_suit_g_lightgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_lightgrey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_lightgrey_co.paa"
		};
	};
  class IAT_S_Logo_ManSuit_White: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_man_suit_g_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_man_suit_white_co.paa"
		};
	};
  class IAT_S_Logo_M65Jacket_Black: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_black_co.paa"
		};
	};
  class IAT_S_Logo_M65Jacket_Desert: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_dpmdesert_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_dpmdesert_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_dpmdesert_co.paa"
		};
	};
  class IAT_S_Logo_M65Jacket_Khaki: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_khaki_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_khaki_co.paa"
		};
	};
  class IAT_S_Logo_M65Jacket_Olive: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_olive_co.paa"
		};
	};
  class IAT_S_Logo_M65Jacket_Tan: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_tan_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_tan_co.paa",
			"Survivalists_Characters\data\survivalists_logo_m65_jacket_tan_co.paa"
		};
	};
  class IAT_S_Logo_LeatherShirt_Natural: LeatherShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_long_sleeve_shirt_co.paa",
			"Survivalists_Characters\data\survivalists_logo_long_sleeve_shirt_co.paa",
			"Survivalists_Characters\data\survivalists_logo_long_sleeve_shirt_co.paa"
		};
	};
  class IAT_S_Logo_LabCoat: LabCoat
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_labcoat_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_labcoat_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_labcoat_white_co.paa"
		};
	};
  class IAT_S_Logo_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_blue_co.paa"
		};
	};
  class IAT_S_Logo_JumpsuitJacket_Gray: JumpsuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_gray_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_gray_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_gray_co.paa"
		};
	};
  class IAT_S_Logo_JumpsuitJacket_Green: JumpsuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_green_co.paa"
		};
	};
  class IAT_S_Logo_JumpsuitJacket_Red: JumpsuitJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_jumpsuit_top_red_co.paa"
		};
	};
  class IAT_S_Logo_HuntingJacket_Autumn: HuntingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_autumn_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_autumn_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_autumn_co.paa"
		};
	};
  class IAT_S_Logo_HuntingJacket_Brown: HuntingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_brown_co.paa"
		};
	};
  class IAT_S_Logo_HuntingJacket_Spring: HuntingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_spring_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_spring_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_spring_co.paa"
		};
	};
  class IAT_S_Logo_HuntingJacket_Summer: HuntingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_summer_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_summer_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_summer_co.paa"
		};
	};
  class IAT_S_Logo_HuntingJacket_Winter: HuntingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_winter_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_winter_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hunting_jacket_winter_co.paa"
		};
	};
  class IAT_S_Logo_Hoodie_Blue: Hoodie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hoodie_m_grd_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_f_blue_co.paa"
		};
	};
  class IAT_S_Logo_Hoodie_Black: Hoodie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hoodie_m_grd_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_f_black_co.paa"
		};
	};
  class IAT_S_Logo_Hoodie_Brown: Hoodie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hoodie_m_grd_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_f_brown_co.paa"
		};
	};
  class IAT_S_Logo_Hoodie_Green: Hoodie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hoodie_m_grd_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_f_green_co.paa"
		};
	};
  class IAT_S_Logo_Hoodie_Grey: Hoodie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hoodie_m_grd_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_f_grey_co.paa"
		};
	};
  class IAT_S_Logo_Hoodie_Pink: Hoodie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hoodie_f_grd_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_f_pink_co.paa"
		};
	};
  class IAT_S_Logo_Hoodie_Red: Hoodie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_hoodie_m_grd_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_hoodie_f_red_co.paa"
		};
	};
  class IAT_S_Logo_GorkaEJacket_Summer: GorkaEJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gorka_up_g_summer_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_upper_summer_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_upper_summer_co.paa"
		};
	};
  class IAT_S_Logo_GorkaEJacket_Pautrev: GorkaEJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gorka_up_g_pautrev_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_upper_pautrev_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_upper_pautrev_co.paa"
		};
	};
  class IAT_S_Logo_GorkaEJacket_Flat: GorkaEJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gorka_up_g_flat_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_upper_flat_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_upper_flat_co.paa"
		};
	};
  class IAT_S_Logo_GorkaEJacket_Autumn: GorkaEJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_gorka_up_g_autumn_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_upper_autumn_co.paa",
			"Survivalists_Characters\data\survivalists_logo_gorka_upper_autumn_co.paa"
		};
	};
  class IAT_S_Logo_FirefighterJacket_Beige: FirefighterJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firefighter_jacket_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firefighter_jacket_beige_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firefighter_jacket_beige_co.paa"
		};
	};
  class IAT_S_Logo_FirefighterJacket_Black: FirefighterJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_firefighter_jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firefighter_jacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_firefighter_jacket_black_co.paa"
		};
	};
	class IAT_S_Logo_DenimJacket: DenimJacket
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_denim_jacket_co.paa",
			"Survivalists_Characters\data\survivalists_logo_denim_jacket_co.paa",
			"Survivalists_Characters\data\survivalists_logo_denim_jacket_co.paa"
		};
	};
  class IAT_S_Logo_ChernarusSportShirt: ChernarusSportShirt
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_chernarus_sport_shirt_co.paa",
			"Survivalists_Characters\data\survivalists_logo_chernarus_sport_shirt_co.paa",
			"Survivalists_Characters\data\survivalists_logo_chernarus_sport_shirt_co.paa"
		};
	};
	class IAT_S_Logo_BomberJacket_Black: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_black_co.paa"
		};
	};
  class IAT_S_Logo_BomberJacket_Blue: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_blue_co.paa"
		};
	};
  class IAT_S_Logo_BomberJacket_Brown: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_brown_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_brown_co.paa"
		};
	};
  class IAT_S_Logo_BomberJacket_Grey: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_grey_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_grey_co.paa"
		};
	};
  class IAT_S_Logo_BomberJacket_Maroon: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_maroon_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_maroon_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_maroon_co.paa"
		};
	};
  class IAT_S_Logo_BomberJacket_Olive: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_olive_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_olive_co.paa"
		};
	};
  class IAT_S_Logo_BomberJacket_SkyBlue: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_skyblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_skyblue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bomberjacket_skyblue_co.paa"
		};
	};
  class IAT_S_Logo_Blouse_Blue: Blouse_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_blouse_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_blouse_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_blouse_blue_co.paa"
		};
	};
  class IAT_S_Logo_Blouse_Green: Blouse_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_blouse_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_blouse_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_blouse_green_co.paa"
		};
	};
  class IAT_S_Logo_Blouse_Violet: Blouse_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_blouse_violet_co.paa",
			"Survivalists_Characters\data\survivalists_logo_blouse_violet_co.paa",
			"Survivalists_Characters\data\survivalists_logo_blouse_violet_co.paa"
		};
	};
  class IAT_S_Logo_Blouse_White: Blouse_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_blouse_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_blouse_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_blouse_white_co.paa"
		};
	};
	class IAT_S_Logo_BDUJacket: BDUJacket
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_bdu_jacket_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bdu_jacket_co.paa",
			"Survivalists_Characters\data\survivalists_logo_bdu_jacket_co.paa"
		};
	};
  class IAT_S_Logo_Armband_Yellow: Armband_ColorBase
	{
		scope=2;
		color="Yellow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_armbend_yellow_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_yellow_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_yellow_co.paa"
		};
	};
  class IAT_S_Logo_Armband_Pink: Armband_ColorBase
	{
		scope=2;
		color="Pink";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_armbends_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_pink_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_pink_co.paa"
		};
	};
  class IAT_S_Logo_Armband_Blue: Armband_ColorBase
	{
		scope=2;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_armbend_blue_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_blue_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_blue_co.paa"
		};
	};
  class IAT_S_Logo_Armband_Green: Armband_ColorBase
	{
		scope=2;
		color="green";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_armbend_green_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_green_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_green_co.paa"
		};
	};
  class IAT_S_Logo_Armband_Red: Armband_ColorBase
	{
		scope=2;
		color="red";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_armbend_red_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_red_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_red_co.paa"
		};
	};
  class IAT_S_Logo_Armband_White: Armband_ColorBase
	{
		scope=2;
		color="white";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_armbend_white_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_white_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_white_co.paa"
		};
	};
  class IAT_S_Logo_Armband: Armband_ColorBase
	{
		scope=2;
		color="";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_armbend_g_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_small_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbend_big_co.paa"
		};
	};
  class IAT_S_Logo_Armband_Black: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\survivalists_logo_armbends_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbends_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbends_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbends_black_co.paa",
			"Survivalists_Characters\data\survivalists_logo_armbends_black_co.paa"
		};
	};
};