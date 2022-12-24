class CfgPatches
{
	class Survivalists_RPWeapons_Explosives
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
    {      
      "DZ_Weapons_Explosives",
      // "Survivalists_Weapons_JMC_Explosives"
    };
	};
};

class CfgAmmo
{
  class DefaultAmmo;
	class DrugExplosion_Ammo: DefaultAmmo
	{
		indirectHit=3;
		indirectHitRange=1;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		simulation="shotShell";
		simulationStep=0.15000001;
		soundSetExplosion[]=
		{
			"Artillery_Distant_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			bleedThreshold=5;
			class Health
			{
				damage=5;
			};
			class Blood
			{
				damage=5;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseExplosion
		{
			strength=100;
			type="shot";
		};
	};
};

class CfgVehicles
{
  class ExplosivesBase;

  class Grenade_Base: ExplosivesBase
	{
    inventorySlot[]+=
		{
      "SRP_Grenade1",
      "SRP_Grenade2",
      "SRP_Grenade3",
      "SRP_Grenade4",
    };
  };

  class SRP_Weapon_KitBase;

  class SRP_Dynamite_Stick : Grenade_Base
  {
		scope=2;
		displayName="Dynamite";
		descriptionShort="A single stick of dynamite... explosive.";
		model="Survivalists_RPWeapons\explosives\dynamite_stick.p3d";
		weight=10;
    varTemperatureMax=100;
    itemSize[]={1,3};
    inventorySlot[]=
    {
      "Dynamite1",
      "Dynamite2",
      "Dynamite3",
      "Dynamite4",
      "VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
    };
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_RPWeapons\explosives\data\dynamite_stick_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_RPWeapons\explosives\data\dynamite_stick.rvmat"
		};
    class NoiseSmokeGrenade
		{
			strength=50;
			type="sound";
		};
    class AnimEvents
		{
			class SoundWeapon
			{
				class Unpin
				{
					soundSet="SmokegGrenades_RDG2_oneshot_ignite_SoundSet";
					id=201;
				};
			};
		};		
  };

  class SRP_Dynamite_Stick_Kit: SRP_Weapon_KitBase
	{
    scope=2;
    displayName="Dynamite Stack Kit";
		descriptionShort="A single stick of dynamite with material to hold several sticks together.";
		model="Survivalists_RPWeapons\explosives\dynamite_stick.p3d";
    itemSize[]={3,3};
    attachments[]=
    {      
      "Dynamite1",
      "Dynamite2",
      "Dynamite3",
      "Dynamite4",    
    };
	};

  class SRP_Dynamite_Stack: Grenade_Base
  {
		scope=2;
		displayName="Dynamite Stack";
		descriptionShort="A stack of dynamite... explosive.";
		model="Survivalists_RPWeapons\explosives\dynamite_stack.p3d";
		weight=15;
    varTemperatureMax=100;
    itemSize[]={3,5};
    inventorySlot[]=
    {      
      "VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
    };
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_RPWeapons\explosives\data\dynamite_stack_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_RPWeapons\explosives\data\dynamite_stack.rvmat"
		};
    class NoiseSmokeGrenade
		{
			strength=50;
			type="sound";
		};
    class AnimEvents
		{
			class SoundWeapon
			{
				class Unpin
				{
					soundSet="SmokegGrenades_RDG2_oneshot_ignite_SoundSet";
					id=201;
				};
			};
		};
  };

  class SRP_DrugExplosion: Grenade_Base
	{
		scope=2;
		model="Survivalists_RPWeapons\explosives\explosion_drugbench.p3d";
	};
};