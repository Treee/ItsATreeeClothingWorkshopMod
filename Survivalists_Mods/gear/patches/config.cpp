class CfgPatches
{
	class Survivalists_Mods_Gear_Patches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
	class Clothing;
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