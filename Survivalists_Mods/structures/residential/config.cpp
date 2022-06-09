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
    class AnimationSources
    {
      class lever{source="user";initPhase=1;animPeriod=1;};
      class spinner1_rotate{source="user";initPhase=0;animPeriod=1;};
      class spinner2_rotate{source="user";initPhase=0;animPeriod=1;};
      class spinner3_rotate{source="user";initPhase=0;animPeriod=1;};
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