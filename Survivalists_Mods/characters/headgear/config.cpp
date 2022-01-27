class CfgPatches
{
	class Survivalists_Mods_Characters_Headgear
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Headgear",
      "DZ_Characters_Masks",
      "DZ_Gear_Optics",
      "DZ_Characters_Glasses",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Clothing;
  class Switchable_Base;
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
    rotationFlags="64";
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

  class BaseballCap_MilitaryPatrolTan: BaseballCap_ColorBase  // new
	{
		scope=2;
		color="MilitaryPatrolTan";
    displayName="Patrol Cap";
    descriptionShort="A tight fitting cap with room for a patch above the bill.";
    model="Survivalists_Mods\characters\headgear\srp_patrolcap_g.p3d";
    rotationFlags=64;
    attachments[]=
		{
      "SRP_Patch",
      "SRP_Comtacs"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_patrolcap_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_patrolcap.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\srp_patrolcap_m.p3d";
			female="Survivalists_Mods\characters\headgear\srp_patrolcap_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\srp_patrolcap.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\srp_patrolcap.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\srp_patrolcap_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\srp_patrolcap_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\srp_patrolcap_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class BaseballCap_Pakol: BaseballCap_ColorBase  // new
	{
		scope=2;
		color="Pakol";
    displayName="Pakol";
		descriptionShort = "Pakol, popularly known as the Chitrali cap, is a soft round-topped men's hat, typically of wool and found in any of a variety of earthy colors.";
    model="Survivalists_Mods\characters\headgear\srp_pakol_g.p3d";
    rotationFlags=64;
    attachments[]=
		{
      "SRP_Comtacs"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_pakol_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\headgear\data\srp_pakol.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\srp_pakol_m.p3d";
			female="Survivalists_Mods\characters\headgear\srp_pakol_m.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\srp_pakol.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\srp_pakol.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\srp_pakol_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\srp_pakol_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\srp_pakol_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_CombatHelmet: Mich2001Helmet
  {
    scope=2;
    displayName="Combat Helmet";
		descriptionShort="The MICH-style combat helmet offers good ballistic protection, much like the MICH 2001 combat helmet. Has room for several attachments.";
		model="Survivalists_Mods\characters\headgear\srp_combathelmet_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs"  
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Mods\characters\headgear\data\srp_combathelmet_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_combathelmet.rvmat"
    };	
		class ClothingTypes
		{
			male = "Survivalists_Mods\characters\headgear\srp_combathelmet_m.p3d";
			female = "Survivalists_Mods\characters\headgear\srp_combathelmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet.rvmat"}},
						{0.7,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet.rvmat"}},
						{0.5,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet_damage.rvmat"}},
						{0.3,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet_damage.rvmat"}},
						{0.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet_destruct.rvmat"}}
					};
				};
			};
		};		

  };
  class SRP_CombatHelmetV2: Mich2001Helmet
  {
    scope=2;
    displayName="Combat Helmet - V2";
		descriptionShort="The MICH-style combat helmet offers good ballistic protection, much like the MICH 2001 combat helmet. Has room for several attachments.";
		model="Survivalists_Mods\characters\headgear\srp_combathelmetv2_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs"  
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Mods\characters\headgear\data\srp_combathelmetv2_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_combathelmetv2.rvmat"
    };	
		class ClothingTypes
		{
			male = "Survivalists_Mods\characters\headgear\srp_combathelmetv2_m.p3d";
			female = "Survivalists_Mods\characters\headgear\srp_combathelmetv2_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetv2.rvmat"}},
						{0.7,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetv2.rvmat"}},
						{0.5,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetv2_damage.rvmat"}},
						{0.3,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetv2_damage.rvmat"}},
						{0.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetv2_destruct.rvmat"}}
					};
				};
			};
		};
  };
  class SRP_CombatHelmet6B47: Mich2001Helmet
  {
    scope=2;
    displayName="Combat Helmet - 6B47";
		descriptionShort = "The Russian-designed 6B47 helmet is a part of Ratnik combat gear.";
		model="Survivalists_Mods\characters\headgear\srp_combathelmet6b47_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs"  
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Mods\characters\headgear\data\srp_combathelmet6b47_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_combathelmet6b47.rvmat"
    };	
		class ClothingTypes
		{
			male = "Survivalists_Mods\characters\headgear\srp_combathelmet6b47_m.p3d";
			female = "Survivalists_Mods\characters\headgear\srp_combathelmet6b47_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet6b47.rvmat"}},
						{0.7,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet6b47.rvmat"}},
						{0.5,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet6b47_damage.rvmat"}},
						{0.3,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet6b47_damage.rvmat"}},
						{0.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmet6b47_destruct.rvmat"}}
					};
				};
			};
		};		
  };
  class SRP_CombatHelmetHighCut: Mich2001Helmet
  {
    scope=2;
    displayName="Combat Helmet - High Cut";
		descriptionShort = "The High Cut style combat helmet offers good ballistic protection, and comes prepped for comtac hearing protection.";
		model="Survivalists_Mods\characters\headgear\srp_combathelmethighcut_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs"  
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Mods\characters\headgear\data\srp_combathelmethighcut_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_combathelmethighcut.rvmat"
    };	
		class ClothingTypes
		{
			male = "Survivalists_Mods\characters\headgear\srp_combathelmethighcut_m.p3d";
			female = "Survivalists_Mods\characters\headgear\srp_combathelmethighcut_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmethighcut.rvmat"}},
						{0.7,{"Survivalists_Mods\characters\headgear\data\srp_combathelmethighcut.rvmat"}},
						{0.5,{"Survivalists_Mods\characters\headgear\data\srp_combathelmethighcut_damage.rvmat"}},
						{0.3,{"Survivalists_Mods\characters\headgear\data\srp_combathelmethighcut_damage.rvmat"}},
						{0.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmethighcut_destruct.rvmat"}}
					};
				};
			};
		};		

  };
  class SRP_CombatHelmetAltyn: Mich2001Helmet
  {
    scope=2;
    displayName="Combat Helmet - Altyn";
		descriptionShort = "The Altyn helmet offers some of the best ballistic protection.";
		model="Survivalists_Mods\characters\headgear\srp_combathelmetaltyn_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs",
      "SRP_AltynVisor"
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn.rvmat"
    };	
		class ClothingTypes
		{
			male = "Survivalists_Mods\characters\headgear\srp_combathelmetaltyn_m.p3d";
			female = "Survivalists_Mods\characters\headgear\srp_combathelmetaltyn_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn.rvmat"}},
						{0.7,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn.rvmat"}},
						{0.5,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn_damage.rvmat"}},
						{0.3,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn_damage.rvmat"}},
						{0.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn_destruct.rvmat"}}
					};
				};
			};
		};		
  };
  class SRP_AltynHelmetVisor: Inventory_Base
	{
		scope=2;
		displayName="Altyn Helmet Visor";
		descriptionShort="A visor that attaches to the Atyln helmet to offore more protection.";
		model="Survivalists_Mods\characters\headgear\srp_altynhelmetvisor.p3d";
		weight=350;
		itemSize[]={3,2};
    rotationFlags=16;
		inventorySlot[]=
		{
			"Glass",
      "SRP_AltynVisor"
		};
    hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn.rvmat"
    };	
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn.rvmat"}},
						{0.7,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn.rvmat"}},
						{0.5,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn_damage.rvmat"}},
						{0.3,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn_damage.rvmat"}},
						{0.0,{"Survivalists_Mods\characters\headgear\data\srp_combathelmetaltyn_destruct.rvmat"}}
					};
				};
			};
    };
	};

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

  class SRP_Goggles_Head: Clothing
	{	
    scope=2;
		displayName="Old Goggles";
		descriptionShort="A pair of old looking goggles";
		model="Survivalists_Mods\characters\headgear\gogglesHead_g.p3d";
		noMask=0;	
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
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
		weight=1200;
		itemSize[]={2,1};
		varWetMax=0.249;
		heatIsolation=0.5;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\goggles_CO.paa",
		};
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\gogglesHead_m.p3d";
			female="Survivalists_Mods\characters\headgear\gogglesHead_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\goggles.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\goggles.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\goggles_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\goggles_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\goggles_destruct.rvmat"}}
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
	
  class SRP_Cowboy_Hat: Clothing
	{	
		scope=2;
		displayName="Cowboy hat";
		descriptionShort="A ragged cowboy hat.";
		model="Survivalists_Mods\characters\headgear\cowboyhat_g.p3d";
		weight=100;
		noMask=0;
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
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
		itemSize[]={2,1};
		varWetMax=0.249;
		heatIsolation=0.5;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek",
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\cowboyhat_CO.paa",
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\cowboyhat_m.p3d";
			female="Survivalists_Mods\characters\headgear\cowboyhat_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\cowboyhat.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\cowboyhat.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\cowboyhat_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\cowboyhat_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\cowboyhat_destruct.rvmat"}}
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

  class SRP_Burlap_Mask: Clothing
	{	
		scope=2;
		displayName="Burlap Mask";
		descriptionShort="A Burlap Sack with an eye hole cut out of it";
		model="Survivalists_Mods\characters\headgear\burlapmask_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
    rotationFlags=16;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=1;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek",
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\headgear\data\burlapmask_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\headgear\burlapmask_m.p3d";
			female="Survivalists_Mods\characters\headgear\burlapmask_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\burlapmask.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\burlapmask.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\burlapmask_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\burlapmask_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\burlapmask_destruct.rvmat"}}
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
};