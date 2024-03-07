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
      "jmc_objects",
      "Survivalists_Weapons_JMC_Explosives",
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
				damage=2;
			};
			class Blood
			{
				damage=2;
			};
			class Shock
			{
				damage=12;
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

  // remove jmc grenades
  class jmc_grenade_smokey: Grenade_Base
  {
    scope=0;
  };
  class jmc_grenade_z: Grenade_Base
  {
    scope=0;
  };

  class SRP_KitBase;

  class SRP_Dynamite_Stick: Grenade_Base
  {
		scope=2;
		displayName="Dynamite";
		descriptionShort="A single stick of dynamite... explosive.";
		model="Survivalists_RPWeapons\explosives\dynamite_stick.p3d";
		weight=10;
    varTemperatureMax=100;
    itemSize[]={1,3};
    inventorySlot[]+=
    {
      "SRP_Grenade1",
      "SRP_Grenade2",
      "SRP_Grenade3",
      "SRP_Grenade4",
      "Dynamite1",
      "Dynamite2",
      "Dynamite3",
      "Dynamite4"
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
  class SRP_Dynamite_Stick_Kit: SRP_KitBase
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
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_RPWeapons\explosives\data\dynamite_stick_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_RPWeapons\explosives\data\dynamite_stick.rvmat"
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

  class SRP_PipeBomb_ColorBase: Grenade_Base
	{
		scope=0;
		displayName="Pipe Bomb";
		descriptionShort="A crude explosive in the form of a pipe.";
		model="\dz\gear\tools\metal_pipe.p3d";
		rotationFlags=12;
		isMeleeWeapon=1;
		weight=3200;
		itemSize[]={1,6};
		fragility=0.001;
		itemBehaviour=1;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\tools\data\metal_pipe_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\gear\tools\data\metal_pipe.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{						
						{1,{"DZ\gear\tools\data\metal_pipe.rvmat"}},						
						{0.69999999,{"DZ\gear\tools\data\metal_pipe.rvmat"}},						
						{0.5,{"DZ\gear\tools\data\metal_pipe_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\tools\data\metal_pipe_damage.rvmat"}},						
						{0,{"DZ\gear\tools\data\metal_pipe_destruct.rvmat"}}
					};
				};
			};
		};
    class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_2";
				range=1.7;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_2";
				range=1.3;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_2";
				range=4.0999999;
			};
		};
    soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet="Grenade_unpin_SoundSet";
					id=201;
				};
				class turnOnRadio_Pin
				{
					soundSet="Grenade_pin_SoundSet";
					id=1006;
				};
			};
		};
	};

  class SRP_PipeBomb_Basic: SRP_PipeBomb_ColorBase
  {
    scope=2;
  };

};