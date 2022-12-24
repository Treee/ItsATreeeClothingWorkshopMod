class CfgPatches
{
	class Survivalists_RPWeapons_Attachments_Muzzles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Muzzles",
      // "Survivalists_Weapons_JMC_Attachments_Muzzles"
		};
	};
};
class CfgVehicles
{  
  // ------------------------------------ BASE GAME OVERRIDE
	class ItemSuppressor;
  class Mosin_Compensator: ItemSuppressor
	{
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
  };
  class MP5_Compensator: ItemSuppressor
	{
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
  };
  class Groza_Barrel_Short: ItemSuppressor
	{
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
  };
  class Groza_Barrel_Grip: ItemSuppressor
	{
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
  };
  class Groza_Barrel_Suppressor: ItemSuppressor
	{
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
  };
  class MakarovPBSuppressor: ItemSuppressor
	{
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
  };

  // Increasing Suppressor health and normalizing suppression
	class M4_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.5;
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
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
						{1,	{	"DZ\weapons\attachments\data\suppressor556.rvmat"}},
            {0.69999999,	{	"DZ\weapons\attachments\data\suppressor556.rvmat"}},
            {0.5,	{	"DZ\weapons\attachments\data\suppressor556_damage.rvmat"}},
            {0.30000001,	{	"DZ\weapons\attachments\data\suppressor556_damage.rvmat"}},
            {0,	{	"DZ\weapons\attachments\data\suppressor556_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class AK_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.5;
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
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
						{1,	{	"DZ\weapons\attachments\data\tgpa.rvmat"}},
            {0.69999999,	{	"DZ\weapons\attachments\data\tgpa.rvmat"}},
            {0.5,	{	"DZ\weapons\attachments\data\tgpa_damage.rvmat"}},
            {0.30000001,	{	"DZ\weapons\attachments\data\tgpa_damage.rvmat"}},
            {0,	{	"DZ\weapons\attachments\data\tgpa_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		noiseShootModifier=-0.75;
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						{1.0,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor.rvmat"}},
            {0.69999999,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor.rvmat"}},
            {0.5,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat"}},
            {0.30000001,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat"}},
            {0.0,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class PistolSuppressor: ItemSuppressor
	{
		noiseShootModifier=-0.2;
    inventorySlot[]+=
		{
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						{1.0,{"DZ\weapons\attachments\data\gemtech.rvmat"}},
            {0.69999999,{"DZ\weapons\attachments\data\gemtech.rvmat"}},
            {0.5,{"DZ\weapons\attachments\data\gemtech_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\attachments\data\gemtech_damage.rvmat"}},
            {0.0,{"DZ\weapons\attachments\data\gemtech_destruct.rvmat"}}
					};
				};
			};
		};
	};
  
  //===============================================Suppressors
  class SRP_PistolSuppressor_Golden: PistolSuppressor
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\muzzle\data\srp_pistolsuppressor_gold_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\attachments\muzzle\data\srp_pistolsuppressor_gold.rvmat"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
            {1.0,	{	"Survivalists_RPWeapons\attachments\muzzle\data\srp_pistolsuppressor_gold.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\attachments\muzzle\data\srp_pistolsuppressor_gold.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\attachments\muzzle\data\srp_pistolsuppressor_gold_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\attachments\muzzle\data\srp_pistolsuppressor_gold_damage.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\attachments\muzzle\data\srp_pistolsuppressor_gold_destruct.rvmat"}}
					};
				};
			};
		};
  };  
	class STG_PBS5_Suppressor: AK_Suppressor
	{
		scope=2;
		displayName="PBS5 Suppressor";
		descriptionShort="A S.T.A.G. PBS5 Suppressor";
		model="Survivalists_RPWeapons\attachments\muzzle\STG_BPS5_Suppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=100;
		itemSize[]={3,1};
		itemModelLength=0.23;
		lootCategory="Attachments";
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.89999998;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle="weapon_shot_akm_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=2;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
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
						{1,{"Survivalists_RPWeapons\attachments\muzzle\data\STG_PBS5_Suppressor.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\muzzle\data\STG_PBS5_Suppressor.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\muzzle\data\STG_PBS5_Suppressor.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\muzzle\data\STG_PBS5_Suppressor.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\muzzle\data\STG_PBS5_Suppressor.rvmat"}}
					};
				};
			};
		};
	};
	class ESP_Wrapped_Suppressor: M4_Suppressor
	{
		scope=2;
		displayName="Wrapped Suppressor";
		descriptionShort="A suppressor wrapped in rags";
		model="Survivalists_RPWeapons\attachments\muzzle\ESP_Wrapped_Suppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.148;
    inventorySlot[]=
		{
      "weaponMuzzleAK",
			"SRP_Suppressor1",
			"SRP_Suppressor2",
			"SRP_Suppressor3",
			"SRP_Suppressor4",
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\muzzle\data\ESP_Wrapped_Suppressor_CO.paa"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.89999998;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\muzzle\data\ESP_Wrapped_Suppressor.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\muzzle\data\ESP_Wrapped_Suppressor.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\muzzle\data\ESP_Wrapped_Suppressor.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\muzzle\data\ESP_Wrapped_Suppressor.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\muzzle\data\ESP_Wrapped_Suppressor.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
	};
	class ESP_Wrapped_Suppressor_Green: ESP_Wrapped_Suppressor
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\muzzle\data\ESP_Wrapped_Suppressor_Green_CO.paa"
		};
	};
	class ESP_Wrapped_Suppressor_Black: ESP_Wrapped_Suppressor
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\muzzle\data\ESP_Wrapped_Suppressor_Black_CO.paa"
		};
	};
};