class CfgPatches
{
	class Survivalists_Mods_Characters_Tops
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Tops",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class Hoodie_ColorBase;

  class poncho_mung;

  //------------------------------------- MODDED STUFF
  class poncho_mung_yellow: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_yellow.paa"
		};
	};
  class poncho_mung_blue: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_blue.paa"
		};
	};
  class poncho_mung_gray: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_gray.paa"
		};
	};
  class poncho_mung_green: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_green.paa"
		};
	};
  class poncho_mung_pink: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_pink.paa"
		};
	};
  class poncho_mung_purple: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_purple.paa"
		};
	};
  class poncho_mung_red: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_red.paa"
		};
	};
  class poncho_mung_storm: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_storm.paa"
		};
	};
  class poncho_mung_teal: poncho_mung
	{
		scope = 2;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\characters\tops\data\ponchofull_teal.paa"
		};
	};

  // Remove eventually once Lore dictates
  class SaltyCougar_Armband;
  class Skylar_BioZone_Protection: SaltyCougar_Armband
	{
		scope=2;
		displayName="The Queen's Shawl";
		descriptionShort="Ignore biohzard effects";
    class Protection {
      biological=6;
    }
	};

  //----------------------------------- BASE GAME OVERRIDE
  class NBCJacketBase: Clothing
	{
		heatIsolation=0.80000001;
		absorbency=0;
		repairableWithKits[]={5,6}; // duct tape and tire repair kit
		class Protection 
    {
      biological=1;
    }
	};

  //===================== CUSTOM SHIRTS

  class SRP_PlatHoodie: Clothing
	{
    scope=2;
		displayName="Hoodie";
		descriptionShort="$STR_CfgVehicles_Hoodie_ColorBase1";
		model="Survivalists_Mods\characters\tops\srp_plathoodie_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=850;
		itemSize[]={3,3};
		itemsCargoSize[]={5,4};
		quickBarBonus=1;
		varWetMax=1;
		heatIsolation=0.8;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
    headSelectionsToHide[]=
		{
			"Clipping_BandanaHead",
			"Clipping_BandanaFace"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\srp_plathoodie_co.paa"
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
						{1.0, {"Survivalists_Mods\characters\tops\data\srp_plathoodie.rvmat"}},
            {0.69999999, {"Survivalists_Mods\characters\tops\data\srp_plathoodie.rvmat"}},
            {0.5, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.30000001, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.0, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\tops\srp_plathoodie_m.p3d";
			female="Survivalists_Mods\characters\tops\srp_plathoodie_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_PlatHoodie_Wolfbeard: SRP_PlatHoodie
  {
    scope=2;
  }
};