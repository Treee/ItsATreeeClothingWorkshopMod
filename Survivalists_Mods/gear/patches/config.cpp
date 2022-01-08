class CfgPatches
{
	class Survivalists_Mods_Gear_Patches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
	class Clothing;
  class Inventory_Base;
  // -------------------------- CUSTOM STUFF

  //------------------------------ FLAG PATCHES
	class SRP_PatchFlag_ColorBase: Clothing
	{
		scope=0;
		displayName="Country Flag";
		descriptionShort="Country Flag Patch";
		model="Survivalists_Mods\gear\patches\srp_patchflag.p3d";
		itemSize[]={2,1};
		weight=10;
		inventorySlot[]=
    {
      "Armband",
      "patch_01",
      "patch_02",
      "patch_03",
      "patch_04",
      "SRP_Patch",
      "SRP_PatchMirror"
    };
		hiddenSelections[]=
    {
      "zbytek",
      "armband"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\Afghanistan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\patches\data\srp_patchflag.rvmat",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"
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
            {1.0,{"Survivalists_Mods\gear\patches\data\srp_patchflag.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
            {0.7,{"Survivalists_Mods\gear\patches\data\srp_patchflag.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\patches\data\srp_patchflag_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\gear\patches\data\srp_patchflag_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\patches\data\srp_patchflag_destruct.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\patches\srp_patcharmbandflag.p3d";
			female="Survivalists_Mods\gear\patches\srp_patcharmbandflag.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_PatchFlag_StarterKit1: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - A-M Empty Canvas";
    descriptionShort="An empty cloth patch. Add some thread and elbow grease to sew the finished patch.";
    inventorySlot="";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\emptyflag_patch_co.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
    attachments[]=
		{	
      "SRP_MagnetLetter",
			"SRP_SewingThread1",
      "SRP_SewingThread2"
		};
	};
  class SRP_PatchFlag_StarterKit2: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - N-Z Empty Canvas";
    descriptionShort="An empty cloth patch. Add some thread and elbow grease to sew the finished patch.";
    inventorySlot="";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\emptyflag_patch_co.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
    attachments[]=
		{	
      "SRP_MagnetLetter",
			"SRP_SewingThread1",
      "SRP_SewingThread2"
		};
	};

  class SRP_Armband_Base: Clothing
	{	
		scope=2;
		displayName="Leather Armband";
		descriptionShort="A piece of leather fashioned into an armband";
		model="Survivalists_Mods\gear\patches\SRParmband_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		// rotationFlags=16;
		inventorySlot="Armband";
		simulation="clothing";
		vehicleClass="Clothing";
		weight=1000;
		itemSize[]={3,2};
		itemsCargoSize[]={3,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\SRParmband_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\patches\SRParmband_m.p3d";
			female="Survivalists_Mods\gear\patches\SRParmband_f.p3d";
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
            {1.0,{"Survivalists_Mods\gear\patches\data\srparmband.rvmat"}},
            {0.7,{"Survivalists_Mods\gear\patches\data\srparmband.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\patches\data\srparmband_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\gear\patches\data\srparmband_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\patches\data\srparmband_destruct.rvmat"}}
          };
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
  //---------------------------- LOGO PATCHES
	class SRP_PatchLogo_ColorBase: Clothing
	{
		scope=0;
		displayName="Identifier Patch";
		descriptionShort="Identifier Patch - comes in a variety of patterns and emblems";
		model="Survivalists_Mods\gear\patches\srp_patchlogo.p3d";
		itemSize[]={2,1};
		weight=0;
    color="base";
		inventorySlot[]=
    {
      "Armband",
      "patch_01",
      "patch_02",
      "patch_03",
      "patch_04",
      "SRP_Patch",
      "SRP_PatchMirror"
    };
		hiddenSelections[]=
    {
      "zbytek",
      "armband"
    };    
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\patch_a10.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\patches\data\srp_patchlogo.rvmat",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"
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
            {1.0,{"Survivalists_Mods\gear\patches\data\srp_patchlogo.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
            {0.7,{"Survivalists_Mods\gear\patches\data\srp_patchlogo.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\patches\data\srp_patchlogo_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\gear\patches\data\srp_patchlogo_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\patches\data\srp_patchlogo_destruct.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\patches\srp_patcharmbandlogo.p3d";
			female="Survivalists_Mods\gear\patches\srp_patcharmbandlogo.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

};