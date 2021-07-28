class CfgPatches
{
	class Survivalists_Mods_Weapons_Melee_Blade
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "DZ_Weapons_Melee_Blade",
      "DZ_Weapons_Melee_Blunt",
      "Survivalists_Mods"
		};
	};
};

class CfgAmmo
{
  class MeleeMachete;
  class MeleeKnife;
  class MeleeKnife_Heavy;

	class MeleeKatana: MeleeMachete
	{
		affectSkeleton=0.2;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=15;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeKatana_Heavy: MeleeMachete
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeBritva: MeleeKnife
	{
		affectSkeleton=0.2;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=400;
			};
			class Shock
			{
				damage=25;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeBritva_Heavy: MeleeKnife_Heavy
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=95;
			};
			class Blood
			{
				damage=600;
			};
			class Shock
			{
				damage=40;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
};

class CfgVehicles
{

};