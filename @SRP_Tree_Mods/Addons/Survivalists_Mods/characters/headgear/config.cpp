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
      "DZ_Characters_Headgear"
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
  class Headtorch_ColorBase;
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

  class SRP_MilitaryBeret_BlackStar: MilitaryBeret_ColorBase  // Beret_Black_star
	{
		scope=2;
		model="Survivalists_Mods\characters\headgear\beret_blStar_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\militaryberet_black_co.paa",
			"\DZ\characters\headgear\data\militaryberet_black_co.paa",
			"\DZ\characters\headgear\data\militaryberet_black_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\beret_blStar_m.p3d";
			female="Survivalists_Mods\characters\headgear\beret_blStar_m.p3d";
		};
	};
	class SRP_MilitaryBeret_RedStar: MilitaryBeret_ColorBase  // Beret_Red_star
	{
		scope=2;
		model="\DZ\characters\headgear\militaryberet_chdkz_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa"
		};
    class ClothingTypes
		{
			male="\DZ\characters\headgear\militaryberet_chdkz_m.p3d";
			female="\DZ\characters\headgear\militaryberet_chdkz_f.p3d";
		};
	};
	class SRP_MilitaryBeret_Ranger: MilitaryBeret_ColorBase  // Beret_green_ranger
	{
		scope=2;
		model="Survivalists_Mods\characters\headgear\beret_ranger_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\militaryberet_green_co.paa",
			"\DZ\characters\headgear\data\militaryberet_green_co.paa",
			"\DZ\characters\headgear\data\militaryberet_green_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\beret_ranger_m.p3d";
			female="Survivalists_Mods\characters\headgear\beret_ranger_m.p3d";
		};
	};

  class SRP_MilitaryBeret_NZ: MilitaryBeret_ColorBase  // Beret_green_NZ
	{
		scope=2;
		visibilityModifier=0.89999998;
		model="Survivalists_Mods\characters\headgear\beret_nz_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\militaryberet_green_co.paa",
			"\DZ\characters\headgear\data\militaryberet_green_co.paa",
			"\DZ\characters\headgear\data\militaryberet_green_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\beret_nz_m.p3d";
			female="Survivalists_Mods\characters\headgear\beret_nz_m.p3d";
		};
	};
	class SRP_MilitaryBeret_BlackCDF: MilitaryBeret_ColorBase  // Beret_CDF_black
	{
		scope=2;
		visibilityModifier=0.89999998;
		model="\DZ\characters\headgear\MilitaryBeret_CDF_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa"
		};
    class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_CDF_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_CDF_f.p3d";
		};
	};
	class SRP_MilitaryBeret_Tan: MilitaryBeret_ColorBase  // Beret_TAN
	{
		scope=2;
		model="Survivalists_Mods\characters\headgear\beret_tan_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\militaryberet_tan_co.paa",
			"\DZ\characters\headgear\data\militaryberet_tan_co.paa",
			"\DZ\characters\headgear\data\militaryberet_tan_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\beret_tan_m.p3d";
			female="Survivalists_Mods\characters\headgear\beret_tan_m.p3d";
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

	class SRP_Ushanka_Star: Ushanka_ColorBase  // BP_Ushanka_star
	{
		scope=2;
		model="Survivalists_Mods\characters\headgear\ushankaStar_g.p3d";
		attachments[]=
		{
			"pistolFlashlight"
		};
    hiddenSelections[]=
		{
			"head",
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\Ushanka_black_co.paa",
			"\DZ\characters\headgear\data\Ushanka_black_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\ushankaStar_m.p3d";
			female="Survivalists_Mods\characters\headgear\ushankaStar_m.p3d";
		};
	};

  class SRP_Headtorch_MinerHelmet: Headtorch_ColorBase  // BP_MinerHelmet
	{
		scope=2;
		displayName="Miner Helmet";
		descriptionShort="Protective miner's helmet, equipped with a battery-powered lighting device.";
		model="Survivalists_Mods\characters\headgear\miner_g.p3d";
		rotationFlags=16;
		itemSize[]={3,2};
		absorbency=0;
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\miner_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\headgear\data\miner.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.01,{"DZ\characters\headgear\data\HeadTorch.rvmat"}},
            {0.69999999,{"DZ\characters\headgear\data\HeadTorch.rvmat"}},
            {0.5,{"DZ\characters\headgear\data\HeadTorch_damage.rvmat"}},
            {0.30000001,{"DZ\characters\headgear\data\HeadTorch_damage.rvmat"}},
            {0.0099999998,{"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\miner.p3d";
			female="Survivalists_Mods\characters\headgear\miner.p3d";
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.1,0.1,0.1,1};
				brightness=8;
				radius=30;
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

	// class BP_Poncho: Ushanka_ColorBase
	// {
	// 	scope=2;
	// 	displayName="Poncho";
	// 	descriptionShort="";
	// 	model="\BP_Smot\poncho\poncho.p3d";
	// 	rotationFlags=16;
	// 	weight=120;
	// 	itemSize[]={3,2};
	// 	absorbency=0;
	// 	heatIsolation=0.89999998;
	// 	repairableWithKits[]={5,2};
	// 	repairCosts[]={30,25};
	// 	headSelectionsToHide[]=
	// 	{
	// 		"Clipping_ushanka"
	// 	};
	// 	class ClothingTypes
	// 	{
	// 		male="\BP_Smot\poncho\poncho.p3d";
	// 		female="\BP_Smot\poncho\poncho.p3d";
	// 	};
	// };

};