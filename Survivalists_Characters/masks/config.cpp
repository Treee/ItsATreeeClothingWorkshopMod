class CfgPatches
{
	class Survivalists_Characters_Masks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Masks",
      "Scarf",
      "Dressupbox"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class Clothing_Base;

  //------------------------------------- MODDED OVERRIDE
  class Scarf_ColorBase: Clothing
	{
    rootClassName="Scarf";
    colorVariants[]=
    {
      "Brown",
      "ColorPalette1",
      "Blue",
      "Green",
      "Purple",
      "White_Plaid",
      "Red_Plaid",
      "blue_yellow",
      "red",
      "pink_yellow",
      "bluekitty",
      "greykitty",
      "pinkkitty"      
    };
  };
  class DUB_PormaskR: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_PormaskL: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_PormaskFull: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_DismaskL: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_DismaskR: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_DismaskFull: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_DarkmaskL: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_DarkmaskR: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Deermask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_DevilmaskUnique: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Onimask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Predatormask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Silvertrimmask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Tuskmask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Plaguemask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Woodgoldmask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Jestermask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Bronzemask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Tribalmask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Spectermask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Clownmask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Zombiemask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Plaguecross: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Scrapmask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_ScrapmaskV2: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Snorkel: Clothing_Base
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_Humanmask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_GuyFawkesMask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class DUB_WolfMask: Clothing
  {
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };

  //------------------------------------- BASE GAME OVERRIDE
  class BalaclavaMask_ColorBase: Clothing
	{
		itemSize[]={1,2};
    rootClassName="BalaclavaMask";
    colorVariants[]=
    {
      "Black",
      "BlackSkull",
      "Beige",
      "Blue",
      "Green",
      "Pink",
      "White",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class Balaclava3Holes_ColorBase: Clothing
	{
		itemSize[]={1,2};
    rootClassName="Balaclava3Holes";
    colorVariants[]=
    {
      "Black",
      "BlackSkull",
      "Beige",
      "Blue",
      "Green",
      "Pink",
      "White",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class SurgicalMask: Clothing
  {
    rootClassName="SurgicalMask";
    colorVariants[]=
    {
      "Black"
    };
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };
  class HockeyMask: Clothing
  {
    rootClassName="HockeyMask";
    colorVariants[]=
    {
      "Steel"
    };
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
  };

	class GasMask: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=3;
    itemSize[]={2,2};
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
	};
	class GP5GasMask: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=3;
    itemSize[]={2,2};
    inventorySlot[]+=
    {
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10",
    };
	};


  //---------------------------------------- BASE GAME RETEXTURES
  class SRP_HannyaMask: Clothing
  {
    scope=2;
    displayName="Antique Hannya Mask";
    descriptionShort="Espen Industries. An antique mask. In fairly good shape considering.";
    model="Survivalists_Characters\masks\srp_hannyamask_g.p3d";
    inventorySlot[]=
		{
			"Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		itemSize[]={2,2};
		varWetMax=0.5;
		heatIsolation=0.4;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_hannyamask_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srp_hannyamask.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_hannyamask_m.p3d";
			female="Survivalists_Characters\masks\srp_hannyamask_m.p3d";
		};
    class Protection
		{
			biological=0.5;
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
						{1.0,	{"Survivalists_Characters\masks\data\srp_hannyamask.rvmat"}},
            {0.69999999,{"Survivalists_Characters\masks\data\srp_hannyamask.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\srp_hannyamask_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\masks\data\srp_hannyamask_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\srp_hannyamask_destruct.rvmat"}}
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
		soundVoiceType="none";
		soundVoicePriority=5;
  };

  class SRP_HannyaMask_Red: SRP_HannyaMask
  {
    scope=2;
    displayName="Antique Hannya Mask - Red";
    descriptionShort="Espen Industries. An antique mask. In fairly good shape considering. Looking into the eyes you feel the permanence of putting on this mask.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_hannyamask_red_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srp_hannyamask_red.rvmat"
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
						{1.0,	{"Survivalists_Characters\masks\data\srp_hannyamask_red.rvmat"}},
            {0.69999999,{"Survivalists_Characters\masks\data\srp_hannyamask_red.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\srp_hannyamask_red_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\masks\data\srp_hannyamask_red_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\srp_hannyamask_red_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_PunisherMask: Clothing
  {
    scope=2;
    displayName="Antique Punisher Mask";
    descriptionShort="Espen Industries. An antique mask. In fairly good shape considering.";
    model="Survivalists_Characters\masks\srp_punishermask_g.p3d";
    inventorySlot[]=
		{
			"Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		itemSize[]={2,2};
		varWetMax=0.5;
		heatIsolation=0.4;
		hiddenSelections[]=
		{
			"zbytek",
      "mask"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_punishermaskskull_co.paa",
      "Survivalists_Characters\masks\data\srp_punishermask_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srp_punishermaskskull.rvmat",
			"Survivalists_Characters\masks\data\srp_punishermask.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_punishermask_m.p3d";
			female="Survivalists_Characters\masks\srp_punishermask_m.p3d";
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
						{1.0,	{"Survivalists_Characters\masks\data\srp_punishermaskskull.rvmat"}},
            {0.69999999,{"Survivalists_Characters\masks\data\srp_punishermaskskull.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\srp_punishermaskskull_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\masks\data\srp_punishermaskskull_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\srp_punishermaskskull_destruct.rvmat"}}
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
		soundVoiceType="none";
		soundVoicePriority=5;
  };

  class SRP_BoneMonsterMask: Clothing
  {
    scope=2;
    displayName="Antique Bone Monster Mask";
    descriptionShort="Espen Industries. An antique mask. In fairly good shape considering.";
    model="Survivalists_Characters\masks\srp_bonemonstermask_g.p3d";
    inventorySlot[]=
		{
			"Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		itemSize[]={2,2};
		varWetMax=0.5;
		heatIsolation=0.4;
		hiddenSelections[]=
		{
			"zbytek",
      "mask"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_bonemonstermask_skull_co.paa",
      "Survivalists_Characters\masks\data\srp_bonemonstermask_jaw_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srp_bonemonstermask_skull.rvmat",
			"Survivalists_Characters\masks\data\srp_bonemonstermask_jaw.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_bonemonstermask_m.p3d";
			female="Survivalists_Characters\masks\srp_bonemonstermask_m.p3d";
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
						{1.0,	{"Survivalists_Characters\masks\data\srp_bonemonstermask_skull.rvmat"}},
            {0.69999999,{"Survivalists_Characters\masks\data\srp_bonemonstermask_skull.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\srp_bonemonstermask_skull_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\masks\data\srp_bonemonstermask_skull_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\srp_bonemonstermask_skull_destruct.rvmat"}}
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
		soundVoiceType="none";
		soundVoicePriority=5;
  };

  class SRP_ShatteredMask: Clothing
  {
    scope=2;
    displayName="Antique Metal Mask";
    descriptionShort="Espen Industries. An antique mask. In fairly good shape considering.";
    model="Survivalists_Characters\masks\srp_shatteredmask_g.p3d";
    inventorySlot[]=
		{
			"Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		itemSize[]={2,2};
		varWetMax=0.5;
		heatIsolation=0.5;
    headSelectionsToHide[]=
		{
			"Clipping_BandanaHead"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
      "Survivalists_Characters\masks\data\srp_shatteredmask_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srp_shatteredmask.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_shatteredmask_m.p3d";
			female="Survivalists_Characters\masks\srp_shatteredmask_m.p3d";
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
						{1.0,	{"Survivalists_Characters\masks\data\srp_shatteredmask.rvmat"}},
            {0.69999999,{"Survivalists_Characters\masks\data\srp_shatteredmask.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\srp_shatteredmask_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\masks\data\srp_shatteredmask_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\srp_shatteredmask_destruct.rvmat"}}
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
		soundVoiceType="none";
		soundVoicePriority=5;
  };

  // ----------------------------------------- Custom Stuff

  class SRP_GasMask: GP5GasMask
  {
		scope=2;
		displayName="Full Face Gas Mask";
		descriptionShort="Espen Industries. A gas mask that covers the entire face. Provides protection against airborn hazards.";
    model="Survivalists_Characters\masks\srpgasmask_g.p3d";
		hiddenSelections[]=
		{
			"zbytek",
      "glass"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srpgasmask_co.paa",
			"Survivalists_Characters\masks\data\srpgasmask_glass_ca.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srpgasmask.rvmat",
			"Survivalists_Characters\masks\data\srpgasmask_glass.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srpgasmask_m.p3d";
			female="Survivalists_Characters\masks\srpgasmask_m.p3d";
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
						{1.0,	{"Survivalists_Characters\masks\data\srpgasmask.rvmat", "Survivalists_Characters\masks\data\srpgasmask_glass.rvmat"}},
            {0.69999999,{"Survivalists_Characters\masks\data\srpgasmask.rvmat", "Survivalists_Characters\masks\data\srpgasmask_glass.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\srpgasmask_damage.rvmat", "Survivalists_Characters\masks\data\srpgasmask_glass_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\masks\data\srpgasmask_damage.rvmat", "Survivalists_Characters\masks\data\srpgasmask_glass_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\srpgasmask_destruct.rvmat", "Survivalists_Characters\masks\data\srpgasmask_glass_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_Ballistic_Mask: Clothing
	{
		scope=2;
		displayName="Ballistic Mask";
		descriptionShort="Espen Industries. A metal ballistic mask";
		model="Survivalists_Characters\masks\Ballistic_Mask_g.p3d";
		inventorySlot[]=
		{
			"Eyewear",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=1;
		weight=130;
		itemSize[]={2,2};
		ragQuantity=1;
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\Ballistic_Mask_Black_CO.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\Ballistic_Mask_m.p3d";
			female="Survivalists_Characters\masks\Ballistic_Mask_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\masks\data\Ballistic_Mask.rvmat"}},
						{0.7,	{	"Survivalists_Characters\masks\data\Ballistic_Mask.rvmat"}},
						{0.5,	{	"Survivalists_Characters\masks\data\Ballistic_Mask.rvmat"}},
						{0.3,	{	"Survivalists_Characters\masks\data\Ballistic_Mask.rvmat"}},
						{0.0,	{	"Survivalists_Characters\masks\data\Ballistic_Mask.rvmat"}}
					};
				};
			};
		};
		class Protection
		{
			biological=0.25;
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

  class SRP_DeerMask: Clothing
	{
		scope=2;
		displayName="Deer Skull Mask";
		descriptionShort="A hollowed out deer skull";
		model="Survivalists_Characters\masks\SRP_DeerMask_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
    inventorySlot[]=
    {
      "Skullpike",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
    };
		weight=1000;
		itemSize[]={3,3};
		absorbency=0;
		heatIsolation=0.8;
		// noMask=0;
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
			"Survivalists_Characters\masks\data\DeerMask_CO.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\masks\SRP_DeerMask.p3d";
			female="Survivalists_Characters\masks\SRP_DeerMask.p3d";
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
						{1.0,{"Survivalists_Characters\masks\data\DeerMask.rvmat"}},
						{0.69999999,{"Survivalists_Characters\masks\data\DeerMask.rvmat"}},
						{0.5,{"Survivalists_Characters\masks\data\DeerMask_damage.rvmat"}},
						{0.30000001,{"Survivalists_Characters\masks\data\DeerMask_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\masks\data\DeerMask_destruct.rvmat"}}
          };
				};
			};
		};
  };

  class SRP_Fake_Gasmask: Clothing
	{
		scope=2;
		displayName="Toy Gasmask";
		descriptionShort="A toy gasmask";
		model="Survivalists_Characters\masks\SRP_Fake_Gasmask_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		inventorySlot[]=
    {
      "Eyewear",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
    };
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask",
			"Eyewear"
		};
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80000001;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"hood",
			"bracing"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_fake_gasmask_co.paa",
			"Survivalists_Characters\masks\data\srp_fake_gasmask_hood_co.paa",
			"Survivalists_Characters\masks\data\srp_fake_gasmask_bracing_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\masks\SRP_Fake_Gasmask.p3d";
			female="Survivalists_Characters\masks\SRP_Fake_Gasmask.p3d";
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
						{1.0,{
								"Survivalists_Characters\masks\data\srp_fake_gasmask.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_hood.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_bracing.rvmat"
							}
						},
						{0.69999999,{
								"Survivalists_Characters\masks\data\srp_fake_gasmask.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_hood.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_bracing.rvmat"
							}
						},
						{0.5,{
								"Survivalists_Characters\masks\data\srp_fake_gasmask.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_hood.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_bracing.rvmat"
							}
						},
						{0.30000001,{
								"Survivalists_Characters\masks\data\srp_fake_gasmask.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_hood.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_bracing.rvmat"
							}
						},
						{0.0,{
								"Survivalists_Characters\masks\data\srp_fake_gasmask.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_hood.rvmat",
								"Survivalists_Characters\masks\data\srp_fake_gasmask_bracing.rvmat"
							}
						}
					};
				};
			};
		};
	};

  class SRP_BirdMask: Clothing
	{
		scope=2;
		displayName="Bird Mask";
		descriptionShort="Espen Industries. A tribal bird mask";
		model="Survivalists_Characters\masks\srp_birdmask_g.p3d";
		inventorySlot[]=
		{
			"Headgear",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=500;
		itemSize[]={2,2};
		ragQuantity=0;
		varWetMax=0.75;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_birdmask_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_birdmask_m.p3d";
			female="Survivalists_Characters\masks\srp_birdmask_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\masks\data\srp_birdmask.rvmat"}},
						{0.7,	{	"Survivalists_Characters\masks\data\srp_birdmask.rvmat"}},
						{0.5,	{	"Survivalists_Characters\masks\data\srp_birdmask.rvmat"}},
						{0.3,	{	"Survivalists_Characters\masks\data\srp_birdmask.rvmat"}},
						{0.0,	{	"Survivalists_Characters\masks\data\srp_birdmask.rvmat"}}
					};
				};
			};
		};
		class Protection
		{
			biological=0.75;
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

  class SRP_DemonSkullMask: Clothing
	{
		scope=2;
		displayName="Demon Skull Mask";
		descriptionShort="Espen Industries. A replica of a pit fiend skull in the form of a mask";
		model="Survivalists_Characters\masks\srp_demonskullmask_g.p3d";
		inventorySlot[]=
		{
			"Eyes",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyes"
		};
    headSelectionsToHide[]=
		{
			"Clipping_Welding_Mask"
		};
		weight=500;
		itemSize[]={2,2};
		ragQuantity=0;
		varWetMax=0.75;
		heatIsolation=0.50;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_demonskullmask_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_demonskullmask_m.p3d";
			female="Survivalists_Characters\masks\srp_demonskullmask_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\masks\data\srp_demonskullmask.rvmat"}},
						{0.7,	{	"Survivalists_Characters\masks\data\srp_demonskullmask.rvmat"}},
						{0.5,	{	"Survivalists_Characters\masks\data\srp_demonskullmask.rvmat"}},
						{0.3,	{	"Survivalists_Characters\masks\data\srp_demonskullmask.rvmat"}},
						{0.0,	{	"Survivalists_Characters\masks\data\srp_demonskullmask.rvmat"}}
					};
				};
			};
		};
		class Protection
		{
			biological=0.50;
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

  class SRP_FakeTacticalMask: Clothing
	{
		scope=2;
		displayName="Fake Tactical Mask";
		descriptionShort="Espen Industries. A replica of a tactical mask";
		model="Survivalists_Characters\masks\srp_faketacticalmask_g.p3d";
		inventorySlot[]=
		{
			"Eyes",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyes"
		};
    headSelectionsToHide[]=
		{
			"Clipping_Welding_Mask"
		};
		weight=500;
		itemSize[]={2,2};
		ragQuantity=0;
		varWetMax=0.75;
		heatIsolation=0.50;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_faketacticalmask_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_faketacticalmask_m.p3d";
			female="Survivalists_Characters\masks\srp_faketacticalmask_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\masks\data\srp_faketacticalmask.rvmat"}},
						{0.7,	{	"Survivalists_Characters\masks\data\srp_faketacticalmask.rvmat"}},
						{0.5,	{	"Survivalists_Characters\masks\data\srp_faketacticalmask.rvmat"}},
						{0.3,	{	"Survivalists_Characters\masks\data\srp_faketacticalmask.rvmat"}},
						{0.0,	{	"Survivalists_Characters\masks\data\srp_faketacticalmask.rvmat"}}
					};
				};
			};
		};
		class Protection
		{
			biological=0.50;
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

  class SRP_InariFoxMask: Clothing
	{
		scope=2;
		displayName="Inari Fox Mask";
		descriptionShort="Espen Industries. A replica of an Inari Fox mask";
		model="Survivalists_Characters\masks\srp_inarifoxmask_g.p3d";
		inventorySlot[]=
		{
			"Eyes",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyes"
		};
    headSelectionsToHide[]=
		{
			"Clipping_Welding_Mask"
		};
		weight=500;
		itemSize[]={2,2};
		ragQuantity=0;
		varWetMax=0.75;
		heatIsolation=0.50;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_inarifoxmask_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_inarifoxmask_m.p3d";
			female="Survivalists_Characters\masks\srp_inarifoxmask_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\masks\data\srp_inarifoxmask.rvmat"}},
						{0.7,	{	"Survivalists_Characters\masks\data\srp_inarifoxmask.rvmat"}},
						{0.5,	{	"Survivalists_Characters\masks\data\srp_inarifoxmask.rvmat"}},
						{0.3,	{	"Survivalists_Characters\masks\data\srp_inarifoxmask.rvmat"}},
						{0.0,	{	"Survivalists_Characters\masks\data\srp_inarifoxmask.rvmat"}}
					};
				};
			};
		};
		class Protection
		{
			biological=0.50;
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

  class SRP_GeishaMask: Clothing
	{
		scope=2;
		displayName="Geisha Mask";
		descriptionShort="Espen Industries. A replica of an Ghost in the Shell Geisha mask";
		model="Survivalists_Characters\masks\srp_geishamask_g.p3d";
		inventorySlot[]=
		{
			"Eyes",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyes"
		};
    headSelectionsToHide[]=
		{
			"Clipping_Welding_Mask"
		};
		weight=500;
		itemSize[]={2,2};
		ragQuantity=0;
		varWetMax=0.75;
		heatIsolation=0.50;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek",
      "maskeyes"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_geishamask_co.paa",
			"Survivalists_Characters\masks\data\srp_geishamaskeyes_co.paa",
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_geishamask_m.p3d";
			female="Survivalists_Characters\masks\srp_geishamask_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\masks\data\srp_geishamask.rvmat", "Survivalists_Characters\masks\data\srp_geishamaskeyes.rvmat"}},
						{0.7,	{	"Survivalists_Characters\masks\data\srp_geishamask.rvmat", "Survivalists_Characters\masks\data\srp_geishamaskeyes.rvmat"}},
						{0.5,	{	"Survivalists_Characters\masks\data\srp_geishamask.rvmat", "Survivalists_Characters\masks\data\srp_geishamaskeyes.rvmat"}},
						{0.3,	{	"Survivalists_Characters\masks\data\srp_geishamask.rvmat", "Survivalists_Characters\masks\data\srp_geishamaskeyes.rvmat"}},
						{0.0,	{	"Survivalists_Characters\masks\data\srp_geishamask.rvmat", "Survivalists_Characters\masks\data\srp_geishamaskeyes.rvmat"}}
					};
				};
			};
		};
		class Protection
		{
			biological=0.50;
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

  class SRP_JapaneseDemonMask_ColorBase: Clothing
	{
		scope=0;
		displayName="Japanese Demon Mask";
		descriptionShort="Espen Industries. A replica of an ancient Japanese Demon mask.";
		model="Survivalists_Characters\masks\srp_japanesedemonmask_g.p3d";
		inventorySlot[]=
		{
			"Eyes",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyes"
		};
    headSelectionsToHide[]=
		{
			"Clipping_Welding_Mask"
		};
		weight=500;
		itemSize[]={2,2};
    ragQuantity=0;
		varWetMax=0.75;
		heatIsolation=0.50;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_japanesedemonmask_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_japanesedemonmask_m.p3d";
			female="Survivalists_Characters\masks\srp_japanesedemonmask_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\masks\data\srp_japanesedemonmask.rvmat"}},
						{0.7,	{	"Survivalists_Characters\masks\data\srp_japanesedemonmask.rvmat"}},
						{0.5,	{	"Survivalists_Characters\masks\data\srp_japanesedemonmask_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\masks\data\srp_japanesedemonmask_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\masks\data\srp_japanesedemonmask_destruct.rvmat"}}
					};
				};
			};
		};
		class Protection
		{
			biological=0.50;
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
  class SRP_JojoMask_ColorBase: Clothing
	{
		scope=0;
		displayName="Jojo Mask";
		descriptionShort="Espen Industries. A replica of an ancient Jojo mask.";
		model="Survivalists_Characters\masks\srp_jojomask_g.p3d";
		inventorySlot[]=
		{
			"Eyes",
      "Mask",
      "SRP_Mask1",
      "SRP_Mask2",
      "SRP_Mask3",
      "SRP_Mask4",
      "SRP_Mask5",
      "SRP_Mask6",
      "SRP_Mask7",
      "SRP_Mask8",
      "SRP_Mask9",
      "SRP_Mask10"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyes"
		};
    headSelectionsToHide[]=
		{
			"Clipping_Welding_Mask"
		};
		weight=500;
		itemSize[]={2,2};
		ragQuantity=0;
		varWetMax=0.75;
		heatIsolation=0.50;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_jojomask_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_jojomask_m.p3d";
			female="Survivalists_Characters\masks\srp_jojomask_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\masks\data\srp_jojomask.rvmat"}},
						{0.7,	{	"Survivalists_Characters\masks\data\srp_jojomask.rvmat"}},
						{0.5,	{	"Survivalists_Characters\masks\data\srp_jojomask_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\masks\data\srp_jojomask_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\masks\data\srp_jojomask_destruct.rvmat"}}
					};
				};
			};
		};
		class Protection
		{
			biological=0.50;
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

  // ------------------------------------------ MVS Redux
	class SRP_S10Respirator_Colorbase: GP5GasMask
	{
		scope=0;
		displayName="S10 Respirator";
		descriptionShort="Espen Industries. The S10 NBC Respirator is a military gas mask that was formerly used within all branches of the British Armed Forces. Following the mask's replacement by the General Service Respirator in 2011, the S10 is now widely available to the public on the army surplus market.";
		model="Survivalists_Characters\masks\srps10gasmask_g.p3d";
    color="base";
    rotationFlags=0;
		itemSize[]={2,2};
    rootClassName="SRP_S10Respirator";
    colorVariants[]=
    {
      "FS",
      "OD",
      "Tan",
      "Black",
      "Snow",      
    };
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
      "Survivalists_Characters\masks\data\s10_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\masks\data\s10.rvmat"
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
            {1.0,{"Survivalists_Characters\masks\data\s10.rvmat"}},
            {0.7,{"Survivalists_Characters\masks\data\s10.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\s10_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\masks\data\s10_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\s10_destruct.rvmat"}}
          };
				};
			};
		};			
		class ClothingTypes
		{
			male="Survivalists_Characters\masks\srps10gasmask.p3d";
			female="Survivalists_Characters\masks\srps10gasmask.p3d";
		};
	};
	
	class SRP_PMK2Respirator_Colorbase: GP5GasMask
	{
		scope=0;
		displayName="PMK2 Respirator";
		descriptionShort="Espen Industries. The PMK gas mask represents a family of gas masks used by the Soviet Armed Forces, and later by the Armed Forces of the Russian Federation.";
		model="Survivalists_Characters\masks\srppmk2_g.p3d";
    color="base";
    rotationFlags=0;
		itemSize[]={2,2};
    rootClassName="SRP_PMK2Respirator";
    colorVariants[]=
    {
      "OD",
      "Tan",
      "Black",
      "Snow",      
    };
		hiddenSelections[]=
    {
      "zbytek",
      "filter",
      "lens"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srppmk2_co.paa",
			"Survivalists_Characters\masks\data\srppmk2filter_co.paa",
			"Survivalists_Characters\masks\data\srppmk2_ca.paa"			
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Characters\masks\data\srppmk2.rvmat",
			"Survivalists_Characters\masks\data\srppmk2filter.rvmat",
			"Survivalists_Characters\masks\data\srppmk2.rvmat"
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
            {1.0,{"Survivalists_Characters\masks\data\srppmk2.rvmat"}},
            {0.7,{"Survivalists_Characters\masks\data\srppmk2.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\srppmk2_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\masks\data\srppmk2_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\srppmk2_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Characters\masks\srppmk2.p3d";
			female="Survivalists_Characters\masks\srppmk2.p3d";
		};
	};
	
	class SRP_M50Respirator_Colorbase: GP5GasMask
	{
		scope=0;
		displayName="M50 Respirator";
		descriptionShort="Espen Industries. The M50 series protective mask consisting of the M50 and M51 variants, officially known as the Joint Service General Protective Mask (JSGPM) is a lightweight, protective mask system consisting of the mask, a mask carrier, and additional accessories";
		model="Survivalists_Characters\masks\srp_m50gasmask_g.p3d";
    color="base";
    rotationFlags=0;
		itemSize[]={2,2};
    rootClassName="SRP_M50Respirator";
    colorVariants[]=
    {
      "OD",
      "Tan",
      "Black",
      "Snow",      
    };
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Characters\masks\data\srp_m50gasmask_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\masks\data\srp_m50gasmask.rvmat"
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
            {1.0,{"Survivalists_Characters\masks\data\srp_m50gasmask.rvmat"}},
            {0.7,{"Survivalists_Characters\masks\data\srp_m50gasmask.rvmat"}},
            {0.5,{"Survivalists_Characters\masks\data\srp_m50gasmask_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\masks\data\srp_m50gasmask_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\masks\data\srp_m50gasmask_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_m50gasmask.p3d";
			female="Survivalists_Characters\masks\srp_m50gasmask.p3d";
		};
	};

  class SRP_FacialHairGoatee_Colorbase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Goatee";
		descriptionShort="Espen Industries. Sinister looking facial hair.";
		model="Survivalists_Characters\masks\srp_facialhair_g.p3d";
		rotationFlags=0;
		itemSize[]={2,2};
    rootClassName="SRP_FacialHairGoatee";
    varWetMax=0;
    absorbency=0;
    colorVariants[]=
    {
      "Brown",
      "LightBrown",
      "Black",
      "Blonde",
      "White",      
    };
		inventorySlot[]=
    {
      "Beard"
    };
		headSelectionsToHide[]={};
		hiddenSelections[]=
    {
      "ground",
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Characters\masks\data\srp_facialhairgoatee_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srp_facialhair_kit.rvmat",
			"Survivalists_Characters\masks\data\srp_facialhairgoatee.rvmat",
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_facialhairgoatee.p3d";
			female="Survivalists_Characters\masks\srp_facialhairgoatee.p3d";
		};
	};

  class SRP_FacialHairBeard_Colorbase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Full Beard";
		descriptionShort="Espen Industries. A full manly beard.";
		model="Survivalists_Characters\masks\srp_facialhair_g.p3d";
		rotationFlags=0;
		itemSize[]={2,2};
    rootClassName="SRP_FacialHairBeard";
    varWetMax=0;
    absorbency=0;
    colorVariants[]=
    {
      "Brown",
      "LightBrown",
      "Black",
      "Blonde",
      "White",      
    };
		inventorySlot[]=
    {
      "Beard"
    };
		headSelectionsToHide[]={};
		hiddenSelections[]=
    {
      "ground",
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Characters\masks\data\srp_facialhairbeard_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srp_facialhair_kit.rvmat",
			"Survivalists_Characters\masks\data\srp_facialhairbeard.rvmat",
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_facialhairbeard.p3d";
			female="Survivalists_Characters\masks\srp_facialhairbeard.p3d";
		};
	};

  class SRP_FacialHairChops_Colorbase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Beard Chops";
		descriptionShort="Espen Industries. A full manly beard.";
		model="Survivalists_Characters\masks\srp_facialhair_g.p3d";
		rotationFlags=0;
		itemSize[]={2,2};
    rootClassName="SRP_FacialHairChops";
    varWetMax=0;
    absorbency=0;
    colorVariants[]=
    {
      "Brown",
      "LightBrown",
      "Black",
      "Blonde",
      "White",      
    };
		inventorySlot[]=
    {
      "Beard"
    };
		headSelectionsToHide[]={};
		hiddenSelections[]=
    {
      "ground",
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\masks\data\srp_facialhair_kit_co.paa",
			"Survivalists_Characters\masks\data\srp_facialhairbeard_co.paa",
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\masks\data\srp_facialhair_kit.rvmat",
			"Survivalists_Characters\masks\data\srp_facialhairbeard.rvmat",
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\masks\srp_facialhairchops.p3d";
			female="Survivalists_Characters\masks\srp_facialhairchops.p3d";
		};
	};
	
};