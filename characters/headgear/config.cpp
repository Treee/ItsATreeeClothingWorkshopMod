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
      "DZ_Characters_Masks",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Switchable_Base;
  class Clothing;
  class BalaclavaMask_ColorBase;

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

  class NBCHoodBase: Clothing
  {
    repairableWithKits[]={5,6}; // duct tape and tire repair kit
    class Protection 
    {
      biological=1;
    }
  }
  
  class BaseballCap_ColorBase: Clothing
	{
		itemSize[]={1,2};
		itemsCargoSize[]={1,1};
  };
  class Ushanka_ColorBase: Clothing
	{
		itemSize[]={2,2};
		itemsCargoSize[]={1,1};
  };
  class BeanieHat_ColorBase: Clothing
	{
		itemSize[]={2,1};
		itemsCargoSize[]={2,1};
  };
  class BallisticHelmet_ColorBase: Clothing
	{
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
    itemSize[]={3,3};
		itemsCargoSize[]={1,1};
    noMask=0;
  };
  class Mich2001Helmet: Clothing
	{
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
    itemSize[]={3,3};
		itemsCargoSize[]={1,1};
    noMask=0;
  };
  class BoonieHat_ColorBase: Clothing
	{
		itemSize[]={2,2};
		itemsCargoSize[]={1,1};
  };

  // ----------------------------------------- Custom Stuff  
  class SRP_BaseballCap_Tinfoil: BaseballCap_ColorBase  // new
	{
		scope=2;
		color="Tinfoil";
    displayName="Tinfoil Hat";
    descriptionShort="Crazy....";
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
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\tinfoilhat.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\tinfoilhat.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\tinfoilhat_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\tinfoilhat_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\tinfoilhat_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_BeanieHat_Turkey: BeanieHat_ColorBase  // new
	{
		scope=2;
		color="Turkey";
    displayName="Turkey Beanie";
    descriptionShort="Gobble gobble.";
    model="Survivalists_Mods\characters\headgear\turkeybeanie_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_turkey_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\headgear\data\turkeybeanie.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\turkeybeanie_m.p3d";
			female="Survivalists_Mods\characters\headgear\turkeybeanie_f.p3d";
		};
	};

  class SRP_MinerHelmet: Headtorch_ColorBase
  {
		scope=2;
    displayName="Miner Helmet";
    descriptionShort="A miner helmet. Has a light and looks sturdy.";
    model="Survivalists_Mods\characters\headgear\minerhelmet_g.p3d";
		itemSize[]={3,2};
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
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\minerhelmet.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\minerhelmet.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\minerhelmet_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\minerhelmet_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\minerhelmet_destruct.rvmat"}}
					};
				};
			};
		};
  }

  class SRP_Brewsterhelm: BallisticHelmet_ColorBase
  {
		scope=2;
    displayName="Brewster Helmet";
    descriptionShort="A brewster helmet. Proven effective in combat.";
    model="Survivalists_Mods\characters\headgear\brewsterhelm_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\brewstershield_co.paa" // using the shield texture. just grab that as a retexture
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\headgear\data\brewsterhelm.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\brewsterhelm_m.p3d";
			female="Survivalists_Mods\characters\headgear\brewsterhelm_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\brewsterhelm.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\brewsterhelm.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\brewsterhelm_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\brewsterhelm_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\brewsterhelm_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
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
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
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
						damage=0.25999999;
					};
				};
			};
		};
  }

  // -=============================== OLD MVS STUFF  
	class SRP_FaceMaskSkull_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Face Mask";
		descriptionShort="A mask used for concealing one's identity... spooky right?";
		itemSize[]={3,2};
		rotationFlags=0;
		model="Survivalists_Mods\characters\headgear\srp_facemask_skullmask_g.p3d";
    color="base";
		inventorySlot[]=
    {
      "Mask",
      "Headgear"
    };
		headSelectionsToHide[]=
    {
      "Clipping_Gasmask",
      "Clipping_Balaclava_3holes"
    };
		hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co.paa",
			"Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat",
			"Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask.rvmat"
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
            {1.0,{"Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat","Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat","Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\headgear\data\srp_facemask_damage.rvmat","Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\headgear\data\srp_facemask_damage.rvmat","Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\headgear\data\srp_facemask_destruct.rvmat","Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\srp_facemask_skullmask.p3d";
			female="Survivalists_Mods\characters\headgear\srp_facemask_skullmask.p3d";
		};
	};
	class SRP_FaceMaskSkull_Wraith: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="Wraith Mask";
    color="wraith";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Wraith.paa",
			"Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};
  class SRP_FaceMaskSkull_Black: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="Black Face Mask";
    color="black";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Black.paa",
			"Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};
  class SRP_FaceMaskSkull_Snow: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="Snow Face Mask";
    color="snow";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Snow.paa",
			"Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};
  class SRP_FaceMaskSkull_OD: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="OD Face Mask";
    color="od";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co.paa",
			"Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};
  class SRP_FaceMaskSkull_Tan: SRP_FaceMaskSkull_ColorBase
	{
		scope=2;
		displayName="Tan Face Mask";
    color="tan";
    hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Tan.paa",
			"Survivalists_Mods\characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
	};

	class SRP_FaceMask_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Face Mask";
		descriptionShort="A mask used for concealing one's identity... spooky right?";
		itemSize[]={3,2};
		rotationFlags=0;
		model="Survivalists_Mods\characters\headgear\srp_facemask_g.p3d";
    color="base";
		inventorySlot[]=
    {
      "Mask",
      "Headgear"
    };
		headSelectionsToHide[]=
    {
      "Clipping_Gasmask",
      "Clipping_Balaclava_3holes"
    };
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat"
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
            {1.0,{"Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\headgear\data\srp_facemask_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\headgear\data\srp_facemask_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\headgear\data\srp_facemask_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\srp_facemask.p3d";
			female="Survivalists_Mods\characters\headgear\srp_facemask.p3d";
		};
	};
	class SRP_FaceMask_OD: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co.paa",
		};
	};
	class SRP_FaceMask_Tan: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Tan.paa",
		};
	};
	class SRP_FaceMask_Black: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Black.paa",
		};
	};
	class SRP_FaceMask_Snow: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Snow.paa",
		};
	};
  class SRP_FaceMask_Wraith: SRP_FaceMask_ColorBase
	{
		scope=2;
		displayName="Face Mask - Wraith";
    color="wraith";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Wraith.paa",
		};
	};

  class SRP_MouthCover_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Mouth Cover";
		descriptionShort="A mask used for concealing one's identity. Only covers the mouth.";
		itemSize[]={3,2};
		rotationFlags=0;
		model="Survivalists_Mods\characters\headgear\srp_mouthcover_g.p3d";
    color="base";
		inventorySlot[]=
    {
      "Mask"
    };
		headSelectionsToHide[]=
    {
      "Clipping_Gasmask",
      "Clipping_Balaclava_3holes"
    };
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat"
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
            {1.0,{"Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\headgear\data\srp_facemask.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\headgear\data\srp_facemask_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\headgear\data\srp_facemask_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\headgear\data\srp_facemask_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\srp_mouthcover.p3d";
			female="Survivalists_Mods\characters\headgear\srp_mouthcover.p3d";
		};
	};
	class SRP_MouthCover_OD: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co.paa",
		};
	};
	class SRP_MouthCover_Tan: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Tan.paa",
		};
	};
	class SRP_MouthCover_Black: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Black.paa",
		};
	};
	class SRP_MouthCover_Snow: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - Snow";
    color="snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Snow.paa",
		};
	};
  class SRP_MouthCover_Wraith: SRP_MouthCover_ColorBase
	{
		scope=2;
		displayName="Face Mask - Wraith";
    color="wraith";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_facemask_co_Wraith.paa",
		};
	};
	
	class SRP_Shroud_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Head Shroud";
		descriptionShort="A mask used for concealing one's identity.";
		itemSize[]={3,2};
		rotationFlags=0;
		model="Survivalists_Mods\characters\headgear\srp_shroud_g.p3d";
    color="base";
		inventorySlot[]=
    {
      "Mask",
      "Headgear"
    };
		headSelectionsToHide[]=
    {
      "Clipping_Gasmask",
      "Clipping_Balaclava_3holes"
    };
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_shroud_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_shroud.rvmat"
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
            {1.0,{"Survivalists_Mods\characters\headgear\data\srp_shroud.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\headgear\data\srp_shroud.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\headgear\data\srp_shroud_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\headgear\data\srp_shroud_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\headgear\data\srp_shroud_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\srp_shroud.p3d";
			female="Survivalists_Mods\characters\headgear\srp_shroud.p3d";
		};
	};
	class SRP_Shroud_OD: SRP_Shroud_ColorBase
	{
		scope=2;
		displayName="Head Shroud - OD";
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_shroud_co.paa"
		};
	};
	class SRP_Shroud_Tan: SRP_Shroud_ColorBase
	{
		scope=2;
		displayName="Head Shroud - Tan";
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_shroud_co_Tan.paa"
		};
	};
	class SRP_Shroud_Black: SRP_Shroud_ColorBase
	{
		scope=2;
		displayName="Head Shroud - Black";
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_shroud_co_Black.paa"
		};
	};


  class SRP_Comtacs_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Comtacs";
		descriptionShort="Comtacs - a trusted tactical communications and hearing protection headset that is field proven by law enforcement and militaries world wide";
		model="Survivalists_Mods\characters\headgear\srp_comtacs_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		rotationFlags=16;
		weight=110;
		itemSize[]={3,2};
		absorbency=0.80000001;
		heatIsolation=0.25;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
    color="base";
		inventorySlot[]=
		{
			"Headgear",
      "SRP_Comtacs",
      // "MVS_Comtacs"
		};
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		headSelectionsToHide[]=
		{
		};
		hiddenSelections[]=
		{
			"zbytek"
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
						{1.0,{"DZ\characters\headgear\data\BaseballCapII.rvmat"}},
            {0.699,{"DZ\characters\headgear\data\BaseballCapII.rvmat"}},
            {0.5,{"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"}},
            {0.301,{"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"}},
            {0.0,{"DZ\characters\headgear\data\BaseballCapII_destruct.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\srp_comtacs.p3d";
			female="Survivalists_Mods\characters\headgear\srp_comtacs.p3d";
		};
	};
	class SRP_Comtacs_OD: SRP_Comtacs_ColorBase
	{
		scope=2;
		displayName="Comtacs - OD";
		visibilityModifier=0.94999999;
    color="od";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_comtacs_co.paa"
		};
	};
	class SRP_Comtacs_Tan: SRP_Comtacs_ColorBase
	{
		scope=2;
		displayName="Comtacs - Tan";
		visibilityModifier=0.94999999;
    color="tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_comtacs_co_Tan.paa"
		};
	};
	class SRP_Comtacs_Black: SRP_Comtacs_ColorBase
	{
		scope=2;
		displayName="Comtacs - Black";
		visibilityModifier=0.94999999;
    color="black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_comtacs_co_Black.paa"
		};
	};

  //================================= CUSTOM STUFF
  class SRP_SlimHelmetFull: Clothing
  {
    scope=2;
    displayName="Full Helmet";
    descriptionShort="A slim helmet that coveres the whole head";
    model="Survivalists_Mods\characters\headgear\srp_slimhelmet_g.p3d";
    repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noNVStrap=1;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
    hiddenSelections[]=
		{
			"zbytek",
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_slimhelmet_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\srp_slimhelmet_m.p3d";
			female="Survivalists_Mods\characters\headgear\srp_slimhelmet_m.p3d";
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
						{1,	{	"Survivalists_Mods\characters\headgear\data\srp_slimhelmet.rvmat"}},
						{0.69999999,	{	"Survivalists_Mods\characters\headgear\data\srp_slimhelmet.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\headgear\data\srp_slimhelmet_damage.rvmat"}},
						{0.30000001,	{	"Survivalists_Mods\characters\headgear\data\srp_slimhelmet_damage.rvmat"}},
						{0,	{	"Survivalists_Mods\characters\headgear\data\srp_slimhelmet_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
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
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
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
						damage=0.25999999;
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

  class SRP_SlimHelmetFull_Kain: SRP_SlimHelmetFull
  {
    scope=2;
    displayName="Full Helmet";
    descriptionShort="A slim helmet that coveres the whole head";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_slimhelmet_kain_co.paa"
		};
  };

};