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
};