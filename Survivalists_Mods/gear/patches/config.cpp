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
      "DZ_Characters_Tops",
      "DZ_Gear_Camping"
		};
	};
};
class CfgVehicles
{
  class SRP_KitBase;

	class Clothing;  
  class Inventory_Base;
  class Armband_ColorBase;
  class Flag_Base;  

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
			female="Survivalists_Mods\gear\patches\srp_patcharmbandflag_f.p3d";
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

  class SRP_PatchFlag_StarterKit: SRP_KitBase //new
	{
		scope=2;
		displayName="Country Flags Kit - Empty Canvas";
    descriptionShort="An empty cloth patch. Add some thread and elbow grease to sew the finished patch.";
    inventorySlot="";
    attachments[]=
		{	
			"SRP_SewingThread1",
      "SRP_SewingThread2"
		};
	};

  class SRP_PatchLogo_StarterKit: SRP_KitBase //new
	{
		scope=2;
		displayName="Patch Logo Kit - Empty Canvas";
    descriptionShort="An empty cloth patch. Add some thread and elbow grease to sew the finished patch.";
    inventorySlot="";
    attachments[]=
		{	
			"SRP_SewingThread1",
      "SRP_SewingThread2"
		};
	};

  class SRP_SingleArmband_StarterKit: SRP_KitBase //new
	{
		scope=2;
		displayName="Single Armband Kit - Empty Canvas";
    descriptionShort="An empty cloth armband. Add some thread and elbow grease to sew the finished patch.";
    inventorySlot="";
    attachments[]=
		{	
			"SRP_SewingThread1",
      "SRP_SewingThread2"
		};
	};

  class SRP_DoubleArmband_StarterKit: SRP_KitBase //new
	{
		scope=2;
		displayName="Double Armband Kit - Empty Canvas";
    descriptionShort="An empty cloth armband. Add some thread and elbow grease to sew the finished patch.";
    inventorySlot="";
    attachments[]=
		{	
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

  class SRP_DoubleArmband_ColorBase: Armband_ColorBase
	{	
		scope=0;
		model="\DZ\characters\tops\armbend_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		itemsCargoSize[]={1,1};
		absorbency=0;
		heatIsolation=0.80;
    attachments[]=
    {
      "SRP_Pin1",
      "SRP_Pin2"
    };
		hiddenSelections[]=
		{
			"camoGround",
      "camoFemale_big_a",
      "camoFemale_small_a",
      "camoMale_big_a",
      "camoMale_small_a",
      //"zbytek" // only use this selection if you dont care about small/big armbands with/out tops
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\data\armbend_big_white_co.paa",
			"\DZ\characters\tops\data\armbend_big_white_co.paa",
			"\DZ\characters\tops\data\armbend_big_white_co.paa",
			"\DZ\characters\tops\data\armbend_big_white_co.paa",
			"\DZ\characters\tops\data\armbend_big_white_co.paa",
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\patches\srp_doublearmband_m.p3d";
			female="Survivalists_Mods\gear\patches\srp_doublearmband_f.p3d";
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
            {1.0,{"DZ\characters\tops\Data\armband_big_a.rvmat"}},
            {0.7,{"DZ\characters\tops\Data\armband_big_a.rvmat"}},
            {0.5,{"DZ\characters\tops\Data\armband_big_a_damage.rvmat"}},
            {0.3,{"DZ\characters\tops\Data\armband_big_a_damage.rvmat"}},
            {0.0,{"DZ\characters\tops\Data\armband_big_a_destruct.rvmat"}}
          };
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

  //------------------------------------- EVENT THINGS
  // -------------------------- CUSTOM STUFF
  class SRP_DoubleArmband_Event_Generic: SRP_DoubleArmband_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
      "camoFemale_big_a",
      "camoFemale_small_a",
      "camoMale_big_a",
      "camoMale_small_a",
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
		};
  };
  class Flag_Event_Generic: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\patches\data\template_flag_event_co.paa"};
	};
  class SRP_PatchFlag_Event_Generic: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Identifier - Event Participant";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flagpatch_event_co.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
  class SRP_Armband_Event_Generic: SRP_Armband_Base
	{	
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\SRParmband_event_co.paa"
		};	
  };

  class SRP_DoubleArmband_Event_Espen: SRP_DoubleArmband_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
      "camoFemale_big_a",
      "camoFemale_small_a",
      "camoMale_big_a",
      "camoMale_small_a",
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
		};
	};
  class Flag_Event_Espen: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\patches\data\template_flag_event_espen_co.paa"};
	};
  class SRP_PatchFlag_Event_Espen: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Identifier - Event Participant";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flagpatch_event_espen_co.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
  class SRP_Armband_Event_Espen: SRP_Armband_Base
	{	
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\SRParmband_event_espen_co.paa"
		};	
  };

  class SRP_DoubleArmband_Event_Stag: SRP_DoubleArmband_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
      "camoFemale_big_a",
      "camoFemale_small_a",
      "camoMale_big_a",
      "camoMale_small_a",
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
			"Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
		};
	};
  class Flag_Event_Stag: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\patches\data\template_flag_event_stag_co.paa"};
	};
  class SRP_PatchFlag_Event_Stag: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Identifier - Event Participant";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flagpatch_event_stag_co.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
  class SRP_Armband_Event_Stag: SRP_Armband_Base
	{	
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\SRParmband_event_stag_co.paa"
		};	
  };

};
