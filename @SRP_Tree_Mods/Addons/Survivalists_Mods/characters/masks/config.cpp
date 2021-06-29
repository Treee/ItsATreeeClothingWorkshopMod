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
      "DZ_Characters_Masks"
		};
	};
};
class CfgVehicles
{
  class SurgicalMask;
  class BandanaMask_ColorBase;
  class HockeyMask;
  class GP5GasMask;
  class GP5GasMask_Filter;

  // ----------------------------------------- Custom Stuff
  class SRP_GP5GasMask_Filter: GP5GasMask_Filter  // GP5_filter
	{
		scope=2;
		displayName="Gas Mask Filter";
		descriptionShort="A carbon filter for a GP5 Gas Mask";
		model="Survivalists_Mods\proxy\gp5filter.p3d";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		repairKitType=5;
		inventorySlot[]=
		{
			"Gasfilter"
		};
	};

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
  class SRP_SurgicalMask_FaceScar: SurgicalMask  // BP_Scar1
	{
		scope=2;
		displayName="Face Scar";
		model="Survivalists_Mods\characters\masks\ScarL_m.p3d";
		inventorySlot="Armband";
		heatIsolation=1;
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\ScarL_m.p3d";
			female="Survivalists_Mods\characters\masks\ScarL_m.p3d";
		};
	};

	class SRP_BandanaMask_65Black: BandanaMask_ColorBase  // BandanaMask_65Black
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
	class SRP_BandanaMask_65Desert: BandanaMask_ColorBase  // BandanaMask_65Desert
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
	class SRP_BandanaMask_65Tan: BandanaMask_ColorBase  // BandanaMask_65Tan
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
	class SRP_BandanaMask_CheckBlue: BandanaMask_ColorBase  // BandanaMask_CheckBlue
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
	class SRP_BandanaMask_CheckBlueBright: BandanaMask_ColorBase  // BandanaMask_CheckBlueBright
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
	class SRP_BandanaMask_CheckGreen: BandanaMask_ColorBase  // BandanaMask_CheckGreen
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
	class SRP_BandanaMask_CheckRed: BandanaMask_ColorBase  // BandanaMask_CheckRed
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
	class SRP_BandanaMask_CheckWhite: BandanaMask_ColorBase  // BandanaMask_CheckWhite
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
	class SRP_BandanaMask_Denim: BandanaMask_ColorBase  // BandanaMask_Denim
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
	class SRP_BandanaMask_Kamysh: BandanaMask_ColorBase  // BandanaMask_Kamysh
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
	class SRP_BandanaMask_USMC_D: BandanaMask_ColorBase  // BandanaMask_USMC_D
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
	class SRP_BandanaMask_USMC_W: BandanaMask_ColorBase  // BandanaMask_USMC_W
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

	class SRP_GP5GasMask_Future: GP5GasMask  // BP2_Gas_mask
	{
		scope=2;
		displayName="Gas Mask";
		descriptionShort="A gas mask will do little without a carbon filter.";
    model="Survivalists_Mods\characters\masks\Gmassk_g.p3d";
    rotationFlags=2;
		inventorySlot="Mask";
    repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=1;
    headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		attachments[]=
		{
			"Gasfilter"
		};
    hiddenSelections[]=
		{
			"zbytek",
			"glass"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\masks\data\BPgasmask.paa",
			"Survivalists_Mods\characters\masks\data\gasmask_glass.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\masks\data\BPgasmask.rvmat",
			"Survivalists_Mods\characters\masks\data\BPgasmask_glass.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\Gmassk_m.p3d";
			female="Survivalists_Mods\characters\masks\Gmassk_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						{1,	{	"Survivalists_Mods\characters\masks\data\BPgasmask.rvmat", "Survivalists_Mods\characters\masks\data\BPgasmask_glass.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\masks\data\BPgasmask.rvmat", "Survivalists_Mods\characters\masks\data\BPgasmask_glass.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\masks\data\BPgasmask_damage.rvmat", "Survivalists_Mods\characters\masks\data\gasmask_glass_dam.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\masks\data\BPgasmask_damage.rvmat", "Survivalists_Mods\characters\masks\data\gasmask_glass_dam.rvmat"}},
            {0,	{	"Survivalists_Mods\characters\masks\data\BPgasmask_damage.rvmat", "Survivalists_Mods\characters\masks\data\gasmask_glass_destr.rvmat"}}
					};
				};
			};
		};
	};

	class SRP_GP5GasMask_White: GP5GasMask  // BP2_GP5Mask
	{
		scope=2;
		model="Survivalists_Mods\characters\masks\GPMask_g.p3d";
		inventorySlot="Mask";
		attachments[]=
		{
			"Gasfilter"
		};
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=1;
		repairableWithKits[]={5,8};
		headSelectionsToHide[]=
		{
			"Clipping_GP5GasMask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GP5GasMask_white_co.paa",
			"\dz\characters\masks\data\GP5GasMask_white_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\masks\GPMask_m.p3d";
			female="Survivalists_Mods\characters\masks\GPMask_f.p3d";
		};
		class Protection
		{
			biological=1;
		};
	};
};