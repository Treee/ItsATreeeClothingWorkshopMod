class CfgPatches
{
	class Survivalists_Mods_Characters_Masks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Masks",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class SurgicalMask;
  class Bandana_ColorBase;
  class HockeyMask;
  class GP5GasMask_Filter;
  class Clothing;
  class BalaclavaMask_ColorBase;

  //------------------------------------- BASE GAME OVERRIDE
	class GasMask: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=3;
	};
	class GP5GasMask: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=3;
	};


  //---------------------------------------- BASE GAME RETEXTURES
  
  class SRP_SurgicalMask_Black: SurgicalMask  // JanekMasks
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa"
		};
	};

	class SRP_BandanaMask_65Black: Bandana_ColorBase  // BandanaMask_65Black
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65b.paa"
		};
	};
	class SRP_BandanaMask_65Desert: Bandana_ColorBase  // BandanaMask_65Desert
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65d.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65d.paa"
		};
	};
	class SRP_BandanaMask_65Tan: Bandana_ColorBase  // BandanaMask_65Tan
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65t.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_65t.paa"
		};
	};
	class SRP_BandanaMask_CheckBlue: Bandana_ColorBase  // BandanaMask_CheckBlue
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cb.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cb.paa"
		};
	};
	class SRP_BandanaMask_CheckBlueBright: Bandana_ColorBase  // BandanaMask_CheckBlueBright
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cbb.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cbb.paa"
		};
	};
	class SRP_BandanaMask_CheckGreen: Bandana_ColorBase  // BandanaMask_CheckGreen
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cg.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cg.paa"
		};
	};
	class SRP_BandanaMask_CheckRed: Bandana_ColorBase  // BandanaMask_CheckRed
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cr.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cr.paa"
		};
	};
	class SRP_BandanaMask_CheckWhite: Bandana_ColorBase  // BandanaMask_CheckWhite
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cw.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_cw.paa"
		};
	};
	class SRP_BandanaMask_Denim: Bandana_ColorBase  // BandanaMask_Denim
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_denim.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_denim.paa"
		};
	};
	class SRP_BandanaMask_Kamysh: Bandana_ColorBase  // BandanaMask_Kamysh
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_kamysh.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_kamysh.paa"
		};
	};
	class SRP_BandanaMask_USMC_D: Bandana_ColorBase  // BandanaMask_USMC_D
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_d.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_d.paa"
		};
	};
	class SRP_BandanaMask_USMC_W: Bandana_ColorBase  // BandanaMask_USMC_W
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
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_w.paa",
			"Survivalists_Mods\characters\masks\data\bandanafhg_usmc_w.paa"
		};
	};

	class SRP_HockeyMask_Steel: HockeyMask  // BP_SteelMask
	{
		scope=2;
		displayName="Steel Mask";
		descriptionShort="A steel mask fastened by leather strap";
		weight=1555;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\vinitagehockeym_co2907.paa",
			"Survivalists_Mods\characters\masks\data\vinitagehockeym_co2907.paa",
			"Survivalists_Mods\characters\masks\data\vinitagehockeym_co2907.paa"
		};
	};	

  // ----------------------------------------- Custom Stuff

  class SRP_GasMask: GP5GasMask
  {
		scope=2;
		displayName="Full Face Gas Mask";
		descriptionShort="A gas mask that covers the entire face. Provides protection against airborn hazards.";
    model="Survivalists_Mods\characters\masks\srpgasmask_g.p3d";
		hiddenSelections[]=
		{
			"zbytek",
      "glass"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srpgasmask_co.paa",
			"Survivalists_Mods\characters\masks\data\srpgasmask_glass_ca.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\masks\data\srpgasmask.rvmat",
			"Survivalists_Mods\characters\masks\data\srpgasmask_glass.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\srpgasmask_m.p3d";
			female="Survivalists_Mods\characters\masks\srpgasmask_m.p3d";
		};
    class Protection
		{
			biological=1;
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						{1.0,	{"Survivalists_Mods\characters\masks\data\srpgasmask.rvmat", "Survivalists_Mods\characters\masks\data\srpgasmask_glass.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\masks\data\srpgasmask.rvmat", "Survivalists_Mods\characters\masks\data\srpgasmask_glass.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\masks\data\srpgasmask_damage.rvmat", "Survivalists_Mods\characters\masks\data\srpgasmask_glass_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\masks\data\srpgasmask_damage.rvmat", "Survivalists_Mods\characters\masks\data\srpgasmask_glass_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\masks\data\srpgasmask_destruct.rvmat", "Survivalists_Mods\characters\masks\data\srpgasmask_glass_destruct.rvmat"}}
					};
				};
			};
		};
  };

  // ------------------------------------------ MVS Redux
	class SRP_S10Respirator_Colorbase: GP5GasMask
	{
		scope=0;
		displayName="S10 Respirator";
		descriptionShort="The S10 NBC Respirator is a military gas mask that was formerly used within all branches of the British Armed Forces. Following the mask's replacement by the General Service Respirator in 2011, the S10 is now widely available to the public on the army surplus market.";
		model="Survivalists_Mods\characters\masks\srps10gasmask_g.p3d";
    color="base";
		itemSize[]={2,3};
		attachments[]=
    {
      "GasMaskFilter"
    };
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\masks\data\s10_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\masks\data\s10.rvmat"
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
            {1.0,{"Survivalists_Mods\characters\masks\data\s10.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\masks\data\s10.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\masks\data\s10_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\masks\data\s10_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\masks\data\s10_destruct.rvmat"}}
          };
				};
			};
		};			
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\srps10gasmask.p3d";
			female="Survivalists_Mods\characters\masks\srps10gasmask.p3d";
		};
	};

	class SRP_S10Respirator_FS: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - The 4th Survivor";
    color="fs";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\s10_co_FS.paa"
		};
	};
	class SRP_S10Respirator_OD: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\s10_co_OD.paa"
		};
	};
	class SRP_S10Respirator_Tan: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\s10_co_Tan.paa"
		};
	};
	class SRP_S10Respirator_Black: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\s10_co.paa"
		};
	};
	class SRP_S10Respirator_Snow: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\s10_co_Snow.paa"
		};
	};
	
	class SRP_PMK2Respirator_Colorbase: GP5GasMask
	{
		scope=0;
		displayName="PMK2 Respirator";
		descriptionShort="The PMK gas mask represents a family of gas masks used by the Soviet Armed Forces, and later by the Armed Forces of the Russian Federation.";
		model="Survivalists_Mods\characters\masks\srppmk2_g.p3d";
    color="base";
		itemSize[]={2,3};
		hiddenSelections[]=
    {
      "zbytek",
      "filter",
      "lens"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srppmk2_co.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2_ca.paa"			
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\characters\masks\data\srppmk2.rvmat",
			"Survivalists_Mods\characters\masks\data\srppmk2filter.rvmat",
			"Survivalists_Mods\characters\masks\data\srppmk2.rvmat"
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
            {1.0,{"Survivalists_Mods\characters\masks\data\srppmk2.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\masks\data\srppmk2.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\masks\data\srppmk2_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\masks\data\srppmk2_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\masks\data\srppmk2_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\srppmk2.p3d";
			female="Survivalists_Mods\characters\masks\srppmk2.p3d";
		};
	};
	class SRP_PMK2Respirator_Black: SRP_PMK2Respirator_Colorbase
	{
		scope=2;
		displayName="PMK-2 Respirator - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srppmk2_co.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2_ca.paa"
		};
	};
	class SRP_PMK2Respirator_Tan: SRP_PMK2Respirator_Colorbase
	{
		scope=2;
		displayName="PMK-2 Respirator - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srppmk2_co_Tan.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2_ca.paa"	
		};
	};
	class SRP_PMK2Respirator_OD: SRP_PMK2Respirator_Colorbase
	{
		scope=2;
		displayName="PMK-2 Respirator - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srppmk2_co_OD.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2_ca.paa"	
		};
	};
	class SRP_PMK2Respirator_Snow: SRP_PMK2Respirator_Colorbase
	{
		scope=2;
		displayName="PMK-2 Respirator - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srppmk2_co_Snow.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Mods\characters\masks\data\srppmk2_ca.paa"	
		};
	};
	
	class SRP_M50Respirator_Colorbase: GP5GasMask
	{
		scope=0;
		displayName="M50 Respirator";
		descriptionShort="The M50 series protective mask consisting of the M50 and M51 variants, officially known as the Joint Service General Protective Mask (JSGPM) is a lightweight, protective mask system consisting of the mask, a mask carrier, and additional accessories";
		model="Survivalists_Mods\characters\masks\srp_m50gasmask_g.p3d";
    color="base";
		itemSize[]={2,3};
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\masks\data\srp_m50gasmask_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\masks\data\srp_m50gasmask.rvmat"
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
            {1.0,{"Survivalists_Mods\characters\masks\data\srp_m50gasmask.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\masks\data\srp_m50gasmask.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\masks\data\srp_m50gasmask_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\masks\data\srp_m50gasmask_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\masks\data\srp_m50gasmask_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\srp_m50gasmask.p3d";
			female="Survivalists_Mods\characters\masks\srp_m50gasmask.p3d";
		};
	};
	class SRP_M50Respirator_OD: SRP_M50Respirator_Colorbase
	{
		scope=2;
		displayName="M50 Respirator - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_m50gasmask_co_OD.paa",
		};
	};
	class SRP_M50Respirator_Tan: SRP_M50Respirator_Colorbase
	{
		scope=2;
		displayName="M50 Respirator - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_m50gasmask_co_Tan.paa"
		};
	};
	class SRP_M50Respirator_Black: SRP_M50Respirator_Colorbase
	{
		scope=2;
		displayName="M50 Respirator - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_m50gasmask_co.paa"
		};
	};
	class SRP_M50Respirator_Snow: SRP_M50Respirator_Colorbase
	{
		scope=2;
		displayName="M50 Respirator - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_m50gasmask_co_Snow.paa"
		};
	};  

  class SRP_FacialHairGoatee_Colorbase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Goatee";
		descriptionShort="Sinister looking facial hair.";
		model="Survivalists_Mods\characters\masks\srp_facialhair_g.p3d";
		rotationFlags=0;
		itemSize[]={3,2};
		inventorySlot[]=
    {
      "Mask"
    };
		headSelectionsToHide[]={};
		hiddenSelections[]=
    {
      "ground",
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairgoatee_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit.rvmat",
			"Survivalists_Mods\characters\masks\data\srp_facialhairgoatee.rvmat",
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\srp_facialhairgoatee.p3d";
			female="Survivalists_Mods\characters\masks\srp_facialhairgoatee.p3d";
		};
	};
	class SRP_FacialHairGoatee_Brown: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - Brown";
    color="brown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairgoatee_co.paa",
		};
	};
	class SRP_FacialHairGoatee_LightBrown: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - Light Brown";
    color="lightbrown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairgoatee_co_LightBrown.paa",
		};
	};
	class SRP_FacialHairGoatee_Black: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairgoatee_co_Black.paa",
		};
	};
	class SRP_FacialHairGoatee_Blonde: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - Blonde";
    color="blonde";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairgoatee_co_Blonde.paa",
		};
	};
	class SRP_FacialHairGoatee_White: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - White";
    color="white";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairgoatee_co_White.paa",
		};
	};

  class SRP_FacialHairBeard_Colorbase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Full Beard";
		descriptionShort="A full manly beard.";
		model="Survivalists_Mods\characters\masks\srp_facialhair_g.p3d";
		rotationFlags=0;
		itemSize[]={3,2};
		inventorySlot[]=
    {
      "Mask"
    };
		headSelectionsToHide[]={};
		hiddenSelections[]=
    {
      "ground",
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit.rvmat",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard.rvmat",
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\srp_facialhairbeard.p3d";
			female="Survivalists_Mods\characters\masks\srp_facialhairbeard.p3d";
		};
	};
	class SRP_FacialHairBeard_Brown: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - Brown";
    color="brown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co.paa",
		};
	};
	class SRP_FacialHairBeard_LightBrown: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - Light Brown";
    color="lightbrown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co_LightBrown.paa",
		};
	};
	class SRP_FacialHairBeard_Black: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co_Black.paa",
		};
	};
	class SRP_FacialHairBeard_Blonde: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - Blonde";
    color="blonde";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co_Blonde.paa",
		};
	};
	class SRP_FacialHairBeard_White: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - White";
    color="white";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co_White.paa",
		};
  };

  class SRP_FacialHairChops_Colorbase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Beard Chops";
		descriptionShort="A full manly beard.";
		model="Survivalists_Mods\characters\masks\srp_facialhair_g.p3d";
		rotationFlags=0;
		itemSize[]={3,2};
		inventorySlot[]=
    {
      "Mask"
    };
		headSelectionsToHide[]={};
		hiddenSelections[]=
    {
      "ground",
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit.rvmat",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard.rvmat",
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\srp_facialhairchops.p3d";
			female="Survivalists_Mods\characters\masks\srp_facialhairchops.p3d";
		};
	};
	class SRP_FacialHairChops_Brown: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - Brown";
    color="brown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co.paa",
		};
	};
	class SRP_FacialHairChops_LightBrown: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - Light Brown";
    color="lightbrown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co_LightBrown.paa",
		};
	};
	class SRP_FacialHairChops_Black: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co_Black.paa",
		};
	};
	class SRP_FacialHairChops_Blonde: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - Blonde";
    color="blonde";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co_Blonde.paa",
		};
	};
	class SRP_FacialHairChops_White: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - White";
    color="white";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Mods\characters\masks\data\srp_facialhairbeard_co_White.paa",
		};
	};
	
};