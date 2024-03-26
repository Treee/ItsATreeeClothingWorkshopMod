class CfgPatches
{
	class Survivalists_RPWeapons_Melee
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Projectiles","DZ_Weapons_Firearms","DZ_Weapons_Melee"};
	};
};
class CfgAmmo
{
  class MeleeDamage;
  class BarbedWireHitShock: MeleeDamage
	{
		class DamageApplied
		{
			bleedThreshold=0.3;
			type="Barbedwire";
			class Health
			{
				damage=1;
			};
			class Blood
			{
				damage=25;
			};
			class Shock
			{
				damage=75;
			};
		};
	};
};