class CfgPatches
{
	class Survivalists_Mods_Structures_Residential
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Residential",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;

  class SRP_Casino_SlotMachine_Large: HouseNoDestruct
	{
		scope=2;
		model="Survivalists_Mods\structures\residential\srp_slotmachine_large.p3d";
		class Doors
		// class AnimationSources
		{
			class Doors1
			{
				animPeriod=0.5;
        initPhase=0;
				displayName="door1";
				component="Doors1";
				soundPos="doors1_action";
				// initOpened=2;
				soundOpen="srp_slotmachine_actionsound_spinningreels";
				soundClose="srp_slotmachine_actionsound_pulllever";
        soundLocked="srp_slotmachine_actionsound_pulllever";
				soundOpenABit="srp_slotmachine_actionsound_pulllever";
			};
		};
    class AnimationSources
    {
      class lever
      {
          initPhase=0;
          animPeriod=1;
      };
      class spinner1_rotate
      {
          initPhase=0;
          animPeriod=0.5;
      };
      class spinner2_rotate
      {
          initPhase=0;
          animPeriod=0.2;
      };
      class spinner3_rotate
      {
          initPhase=0;
          animPeriod=0.7;
      };
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health{	damage=0;};class Blood{	damage=0;};class Shock{	damage=0;};
				};
				class Melee
				{
					class Health{	damage=0;};class Blood{	damage=0;};class Shock{	damage=0;};
				};
				class FragGrenade
				{
					class Health{	damage=0;};class Blood{	damage=0;};class Shock{	damage=0;};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health{	damage=2;};class Blood{	damage=0;};class Shock{	damage=0;};
						};
						class Melee
						{
							class Health{	damage=2.5;};class Blood{	damage=0;};class Shock{	damage=0;};
						};
						class FragGrenade
						{
							class Health{	damage=2;};class Blood{	damage=0;};class Shock{	damage=0;};
						};
					};
				};
			};
		};
	};

  class SRP_Casino_gamblingtable_1: HouseNoDestruct
	{
		scope=2;
		model="Survivalists_Mods\structures\residential\srp_gamblingtable.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\residential\data\srp_gamblingtable_co.paa"
		};
	};
  class SRP_Casino_spinnwin_1: HouseNoDestruct
	{
		scope=2;
		model="Survivalists_Mods\structures\residential\srp_spinnwin.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\residential\data\srp_spinnwin_co.paa"
		};
	};

};