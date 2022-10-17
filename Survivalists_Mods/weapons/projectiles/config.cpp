class CfgPatches
{
	class Survivalists_Mods_Weapons_Projectiles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={      
      "DZ_Weapons_Projectiles",
      "Survivalists_Weapons"
    };
	};
};
class CfgAmmo
{
  class Bullet_12GaugePellets;
  class Shotgun_Base;
  class Bullet_Base;

  class Bullet_22: Bullet_Base
  {
    class DamageApplied
    {
      type="Projectile";
      dispersion=0;
      bleedThreshold=1;
      defaultDamageOverride[]=
      {
          {0.69999999,1}
      };
      class Health
      {
          damage=35;
      };
      class Blood
      {
          damage=100;
      };
      class Shock
      {
          damage=20;
      };
    };
  };
  class Bullet_45ACP: Bullet_Base
  {
    class DamageApplied
    {
      type="Projectile";
      dispersion=0;
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
        damage=25;
        damageOverride[]=
        {
          {0.89999998,1}
        };
      };
    };
  };
  class Bullet_380: Bullet_Base
  {
    class DamageApplied
    {
      type="Projectile";
      dispersion=0;
      bleedThreshold=1;
      class Health
      {
        damage=45;
      };
      class Blood
      {
        damage=100;
      };
      class Shock
      {
        damage=30;
      };
    };
  };
  class Bullet_9x19: Bullet_Base
  {
    class DamageApplied
    {
      type="Projectile";
      dispersion=0;
      bleedThreshold=1;
      defaultDamageOverride[]=
      {
          {0.94999999,1}
      };
      class Health
      {
          damage=55;
      };
      class Blood
      {
          damage=100;
      };
      class Shock
      {
          damage=40;
      };
    };
	};

  //----------------------- CUSTOM STUFF
  class Bullet_12Nail: Bullet_12GaugePellets
	{
		scope=2;
		proxyShape="\dz\weapons\projectiles\shotgunshell_slug.p3d";
		casing="FxCartridge_12Nail";
		round="FxRound_12Nail";
		spawnPileType="Ammo_12Nail";
		hit=26;
		hitShockHead=20000;
		hitShock=800;
		hitBlood=-400;
		hitHealth=-300;
		bleedChance=2;
		initSpeed=450;
		typicalSpeed=450;
		airFriction=-0.0067500002;
		damageBarrel=300;
		dispersion=0.050000001;
		projectilesCount=12;
		weight=0.0049999999;
		impactBehaviour=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=80;
				armorDamage=3;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=100;
			};
		};
	};

  class Bullet_12Stone: Shotgun_Base
	{
		scope=2;
		proxyShape="\dz\weapons\projectiles\shotgunshell_slug.p3d";
		casing="FxCartridge_12Stone";
		round="FxRound_12Stone";
		spawnPileType="Ammo_12Stone";
		hit=26;
		indirectHit=10;
		indirectHitRange=3;
		hitShockHead=20000;
		hitShock=800;
		hitBlood=-400;
		hitHealth=-300;
		bleedChance=2;
		initSpeed=600;
		typicalSpeed=600;
		airFriction=-0.0067500002;
		dispersion=0.050000001;
		projectilesCount=12;
		weight=0.0049999999;
		impactBehaviour=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=200;
				armorDamage=3;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=100;
			};
		};
	};
};

class CfgVehicles
{
  class FxCartridge;
  class FxRound;

	class FxCartridge_12Nail: FxCartridge
	{
		model="\dz\weapons\projectiles\shotgunshell_slug.p3d";
	};
	class FxCartridge_12Stone: FxCartridge
	{
		model="\dz\weapons\projectiles\shotgunshell_slug.p3d";
	};

	class FxRound_12Nail: FxRound
	{
		model="\dz\weapons\projectiles\shotgunshell_slug.p3d";
	};
	class FxRound_12Stone: FxRound
	{
		model="\dz\weapons\projectiles\shotgunshell_slug.p3d";
	};
};
