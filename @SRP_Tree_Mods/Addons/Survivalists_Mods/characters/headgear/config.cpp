class CfgPatches
{
	class Survivalists_Mods_Characters_Headgear
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Headgear",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class BurlapSackCover;
  class BandanaHead_ColorBase;
  class Bandana_ColorBase;
  class BaseballCap_ColorBase;
  class MilitaryBeret_ColorBase;
  class Ushanka_ColorBase;
  class NBCHoodBase;
  class Switchable_Base;
  class PrisonerCap;
  class Clothing;

  //-------------------------------------- BASE GAME OVERRIDE
	class DarkMotoHelmet_ColorBase: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=3;
	};
	class MotoHelmet_ColorBase: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=3;
	};

	class Headtorch_ColorBase: Switchable_Base
	{
		itemSize[]={2,1};
	};


  // ----------------------------------------- Custom Stuff
  class SRP_BaseballCap_Tinfoil: BaseballCap_ColorBase  // new
	{
		scope=2;
		color="Tinfoil";
    model="Survivalists_Mods\characters\headgear\tinfoilhat_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\tinfoilhat_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\headgear\data\tinfoilhat.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\tinfoilhat_m.p3d";
			female="Survivalists_Mods\characters\headgear\tinfoilhat_m.p3d";
		};
	};

  class SRP_MinerHelmet: Headtorch_ColorBase
  {
		scope=2;
    displayName="Miner Helmet";
    descriptionShort="A miner helmet. Has a light and looks sturdy.";
    model="Survivalists_Mods\characters\headgear\minerhelmet_g.p3d";
    hiddenSelections[]=
		{
			"zbytek",
			"lamp",			
			"bulb",
			"reflector",
			"glass",
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\minerhelmet_co.paa",
			"Survivalists_Mods\characters\headgear\data\minerhelmet_light_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\headgear\data\minerhelmet.rvmat",
      "Survivalists_Mods\characters\headgear\data\minerhelmet_light.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\minerhelmet_m.p3d";
			female="Survivalists_Mods\characters\headgear\minerhelmet_m.p3d";
		};
  }


  // BASE GAME RETEXTURES

  class SRP_BallisticHelmet_Rain: BaseballCap_ColorBase  // BP2_Rainhelm
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
			"Survivalists_Mods\characters\headgear\data\BPRainhelm.paa",
			"Survivalists_Mods\characters\headgear\data\BPRainhelm.paa",
			"Survivalists_Mods\characters\headgear\data\BPRainhelm.paa"
		};
	};

	class SRP_BaseballCap_Lisiy: BaseballCap_ColorBase  // BP2_Lisiycap
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
			"Survivalists_Mods\characters\headgear\data\Lisiycap.paa",
			"Survivalists_Mods\characters\headgear\data\Lisiycap.paa",
			"Survivalists_Mods\characters\headgear\data\Lisiycap.paa"
		};
	};

	class SRP_NBCHood_Orange: NBCHoodBase  // BP2_NBCHoodOrange
	{
		scope=2;
		repairableWithKits[]={5,6}; // duct tape and tire repair kit
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\nbc_hood_orange_co.paa",
			"Survivalists_Mods\characters\headgear\data\nbc_hood_orange_co.paa",
			"Survivalists_Mods\characters\headgear\data\nbc_hood_orange_co.paa"
		};
	};

  class SRP_BurlapSackCover_Black: BurlapSackCover
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
			"Survivalists_Mods\characters\headgear\data\head_sack_black_co.paa",
			"Survivalists_Mods\characters\headgear\data\head_sack_black_co.paa",
			"Survivalists_Mods\characters\headgear\data\head_sack_black_co.paa"
		};
	};
	class SRP_BurlapSackCover_Skull: BurlapSackCover
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
			"Survivalists_Mods\characters\headgear\data\head_sack_black_skull_co.paa",
			"Survivalists_Mods\characters\headgear\data\head_sack_black_skull_co.paa",
			"Survivalists_Mods\characters\headgear\data\head_sack_black_skull_co.paa"
		};
	};
	class SRP_BurlapSackCover_White: BurlapSackCover
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
			"Survivalists_Mods\characters\headgear\data\head_sack_white_co.paa",
			"Survivalists_Mods\characters\headgear\data\head_sack_white_co.paa",
			"Survivalists_Mods\characters\headgear\data\head_sack_white_co.paa"
		};
	};

  class SRP_BandanaHead_65Black: BandanaHead_ColorBase  // BandanaHead_65Black
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65b.paa"
		};
	};
	class SRP_BandanaHead_65Desert: BandanaHead_ColorBase  // BandanaHead_65Desert
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65d.paa"
		};
	};
	class SRP_BandanaHead_65Tan: BandanaHead_ColorBase  // BandanaHead_65Tan
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65t.paa"
		};
	};
	class SRP_BandanaHead_CheckBlue: BandanaHead_ColorBase  // BandanaHead_CheckBlue
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cb.paa"
		};
	};
	class SRP_BandanaHead_CheckBlueBright: BandanaHead_ColorBase  // BandanaHead_CheckBlueBright
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cbb.paa"
		};
	};
	class SRP_BandanaHead_CheckGreen: BandanaHead_ColorBase  // BandanaHead_CheckGreen
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cg.paa"
		};
	};
	class SRP_BandanaHead_CheckRed: BandanaHead_ColorBase  // BandanaHead_CheckRed
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cr.paa"
		};
	};
	class SRP_BandanaHead_CheckWhite: BandanaHead_ColorBase  // BandanaHead_CheckWhite
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cw.paa"
		};
	};
	class SRP_BandanaHead_Denim: BandanaHead_ColorBase  // BandanaHead_Denim
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_denim.paa"
		};
	};
	class SRP_BandanaHead_Kamysh: BandanaHead_ColorBase  // BandanaHead_Kamysh
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_kamysh.paa"
		};
	};
	class SRP_BandanaHead_USMC_D: BandanaHead_ColorBase  // BandanaHead_USMC_D
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_d.paa"
		};
	};
	class SRP_BandanaHead_USMC_W: BandanaHead_ColorBase  // BandanaHead_USMC_W
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
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_w.paa"
		};
	};

  class SRP_Bandana_65Black: Bandana_ColorBase  // Bandana_65Black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65b.paa"
		};
	};
	class SRP_Bandana_65Desert: Bandana_ColorBase  // Bandana_65Desert
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65d.paa"
		};
	};
	class SRP_Bandana_65Tan: Bandana_ColorBase  // Bandana_65Tan
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_65t.paa"
		};
	};
	class SRP_Bandana_CheckBlue: Bandana_ColorBase  // Bandana_CheckBlue
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cb.paa"
		};
	};
	class SRP_Bandana_CheckBlueBright: Bandana_ColorBase  // Bandana_CheckBlueBright
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cbb.paa"
		};
	};
	class SRP_Bandana_CheckGreen: Bandana_ColorBase  // Bandana_CheckGreen
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cg.paa"
		};
	};
	class SRP_Bandana_CheckRed: Bandana_ColorBase  // Bandana_CheckRed
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cr.paa"
		};
	};
	class SRP_Bandana_CheckWhite: Bandana_ColorBase  // Bandana_CheckWhite
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_cw.paa"
		};
	};
	class SRP_Bandana_Denim: Bandana_ColorBase  // Bandana_Denim
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_denim.paa"
		};
	};
	class SRP_Bandana_Kamysh: Bandana_ColorBase  // Bandana_Kamysh
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_kamysh.paa"
		};
	};
	class SRP_Bandana_USMC_D: Bandana_ColorBase  // Bandana_USMC_D
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_d.paa"
		};
	};
	class SRP_Bandana_USMC_W: Bandana_ColorBase  // Bandana_USMC_W
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale_H",
			"camoMale_M",
			"camoFemale_H",
			"camoFemale_M"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\headgear\data\bandanafhg_usmc_w.paa"
		};
	};

  class SRP_Ushanka_Denim: Ushanka_ColorBase  // Dencap
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
			"Survivalists_Mods\characters\headgear\data\dencap.paa",
			"Survivalists_Mods\characters\headgear\data\dencap.paa",
			"Survivalists_Mods\characters\headgear\data\dencap.paa"
		};
	};

	class SRP_PrisonerCap_Brown: PrisonerCap // Gordeycap
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
			"Survivalists_Mods\characters\headgear\data\gordeycap.paa",
			"Survivalists_Mods\characters\headgear\data\gordeycap.paa",
			"Survivalists_Mods\characters\headgear\data\gordeycap.paa"
		};
	};


};