class CfgPatches
{
	class Survivalists_Retextures_Characters_Masks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Masks",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class SurgicalMask;
	class HockeyMask;
	class Balaclava3Holes_ColorBase;
	class BalaclavaMask_ColorBase;
  class SRP_S10Respirator_Colorbase;
  class SRP_PMK2Respirator_Colorbase;
  class SRP_M50Respirator_Colorbase;
  class SRP_FacialHairGoatee_Colorbase;
  class SRP_FacialHairBeard_Colorbase;
  class SRP_FacialHairChops_Colorbase;

	class SRP_SurgicalMask_Black: SurgicalMask
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
			"Survivalists_Retextures\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Retextures\characters\masks\data\bandanafhg_65b.paa",
			"Survivalists_Retextures\characters\masks\data\bandanafhg_65b.paa"
		};
	};
	class SRP_HockeyMask_Steel: HockeyMask
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
			"Survivalists_Retextures\characters\masks\data\vinitagehockeym_co2907.paa",
			"Survivalists_Retextures\characters\masks\data\vinitagehockeym_co2907.paa",
			"Survivalists_Retextures\characters\masks\data\vinitagehockeym_co2907.paa"
		};
	};
	class SRP_Balaclava3H_MTP: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H01.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H01.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H01.paa"
		};
	};
	class SRP_Balaclava3H_ATAC: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H05.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H05.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H05.paa"
		};
	};
	class SRP_Balaclava3H_ATACSFG: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H39.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H39.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H39.paa"
		};
	};
	class SRP_Balaclava3H_USNAOR2: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H10.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H10.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H10.paa"
		};
	};
	class SRP_Balaclava3H_USNAOR1: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H11.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H11.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H11.paa"
		};
	};
	class SRP_Balaclava3H_SURPAT: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H13.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H13.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H13.paa"
		};
	};
	class SRP_Balaclava3H_MARPATWinter: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H20.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H20.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H20.paa"
		};
	};
	class SRP_Balaclava3H_EMP6: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaklava3H58.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H58.paa",
			"Survivalists_Retextures\characters\masks\data\balaklava3H58.paa"
		};
	};
	class SRP_Balaclava_MTP: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava01.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava01.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava01.paa"
		};
	};
	class SRP_Balaclava_ATAC: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava05.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava05.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava05.paa"
		};
	};
	class SRP_Balaclava_ATACSFG: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava39.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava39.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava39.paa"
		};
	};
	class SRP_Balaclava_USNAOR2: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava10.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava10.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava10.paa"
		};
	};
	class SRP_Balaclava_USNAOR1: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava11.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava11.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava11.paa"
		};
	};
	class SRP_Balaclava_SURPAT: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava13.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava13.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava13.paa"
		};
	};
	class SRP_Balaclava_MARPATWinter: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava20.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava20.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava20.paa"
		};
	};
	class SRP_Balaclava_EMP6: BalaclavaMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\balaclava58.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava58.paa",
			"Survivalists_Retextures\characters\masks\data\balaclava58.paa"
		};
	};

  // =====================================MAIN MOD RETEXTURES
  class SRP_S10Respirator_FS: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - The 4th Survivor";
    color="fs";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\s10_co_FS.paa"
		};
	};

  class SRP_S10Respirator_OD: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\s10_co_OD.paa"
		};
	};
	class SRP_S10Respirator_Tan: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\s10_co_Tan.paa"
		};
	};
	class SRP_S10Respirator_Black: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\s10_co.paa"
		};
	};
	class SRP_S10Respirator_Snow: SRP_S10Respirator_Colorbase
	{
		scope=2;
		displayName="S10 Respirator - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\s10_co_Snow.paa"
		};
	};

	class SRP_PMK2Respirator_Black: SRP_PMK2Respirator_Colorbase
	{
		scope=2;
		displayName="PMK-2 Respirator - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srppmk2_co.paa",
			"Survivalists_Retextures\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Retextures\characters\masks\data\srppmk2_ca.paa"
		};
	};
	class SRP_PMK2Respirator_Tan: SRP_PMK2Respirator_Colorbase
	{
		scope=2;
		displayName="PMK-2 Respirator - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srppmk2_co_Tan.paa",
			"Survivalists_Retextures\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Retextures\characters\masks\data\srppmk2_ca.paa"	
		};
	};
	class SRP_PMK2Respirator_OD: SRP_PMK2Respirator_Colorbase
	{
		scope=2;
		displayName="PMK-2 Respirator - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srppmk2_co_OD.paa",
			"Survivalists_Retextures\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Retextures\characters\masks\data\srppmk2_ca.paa"	
		};
	};
	class SRP_PMK2Respirator_Snow: SRP_PMK2Respirator_Colorbase
	{
		scope=2;
		displayName="PMK-2 Respirator - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srppmk2_co_Snow.paa",
			"Survivalists_Retextures\characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Retextures\characters\masks\data\srppmk2_ca.paa"	
		};
	};

	class SRP_M50Respirator_OD: SRP_M50Respirator_Colorbase
	{
		scope=2;
		displayName="M50 Respirator - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_m50gasmask_co_OD.paa",
		};
	};
	class SRP_M50Respirator_Tan: SRP_M50Respirator_Colorbase
	{
		scope=2;
		displayName="M50 Respirator - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_m50gasmask_co_Tan.paa"
		};
	};
	class SRP_M50Respirator_Black: SRP_M50Respirator_Colorbase
	{
		scope=2;
		displayName="M50 Respirator - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_m50gasmask_co.paa"
		};
	};
	class SRP_M50Respirator_Snow: SRP_M50Respirator_Colorbase
	{
		scope=2;
		displayName="M50 Respirator - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_m50gasmask_co_Snow.paa"
		};
	};  

	class SRP_FacialHairGoatee_Brown: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - Brown";
    color="brown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairgoatee_co.paa",
		};
	};
	class SRP_FacialHairGoatee_LightBrown: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - Light Brown";
    color="lightbrown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairgoatee_co_LightBrown.paa",
		};
	};
	class SRP_FacialHairGoatee_Black: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairgoatee_co_Black.paa",
		};
	};
	class SRP_FacialHairGoatee_Blonde: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - Blonde";
    color="blonde";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairgoatee_co_Blonde.paa",
		};
	};
	class SRP_FacialHairGoatee_White: SRP_FacialHairGoatee_Colorbase
	{
		scope=2;
		displayName="Goatee - White";
    color="white";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairgoatee_co_White.paa",
		};
	};

  class SRP_FacialHairBeard_Colorbase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Full Beard";
		descriptionShort="A full manly beard.";
		model="Survivalists_Retextures\characters\masks\srp_facialhair_g.p3d";
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
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit.rvmat",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard.rvmat",
		};
		class ClothingTypes
		{
			male="Survivalists_Retextures\characters\masks\srp_facialhairbeard.p3d";
			female="Survivalists_Retextures\characters\masks\srp_facialhairbeard.p3d";
		};
	};
	class SRP_FacialHairBeard_Brown: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - Brown";
    color="brown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co.paa",
		};
	};
	class SRP_FacialHairBeard_LightBrown: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - Light Brown";
    color="lightbrown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co_LightBrown.paa",
		};
	};
	class SRP_FacialHairBeard_Black: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co_Black.paa",
		};
	};
	class SRP_FacialHairBeard_Blonde: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - Blonde";
    color="blonde";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co_Blonde.paa",
		};
	};
	class SRP_FacialHairBeard_White: SRP_FacialHairBeard_Colorbase
	{
		scope=2;
		displayName="Full Beard - White";
    color="white";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co_White.paa",
		};
  };

	class SRP_FacialHairChops_Brown: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - Brown";
    color="brown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co.paa",
		};
	};
	class SRP_FacialHairChops_LightBrown: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - Light Brown";
    color="lightbrown";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co_LightBrown.paa",
		};
	};
	class SRP_FacialHairChops_Black: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co_Black.paa",
		};
	};
	class SRP_FacialHairChops_Blonde: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - Blonde";
    color="blonde";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co_Blonde.paa",
		};
	};
	class SRP_FacialHairChops_White: SRP_FacialHairChops_Colorbase
	{
		scope=2;
		displayName="Beard Chops - White";
    color="white";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Retextures\characters\masks\data\srp_facialhairbeard_co_White.paa",
		};
	};

};
