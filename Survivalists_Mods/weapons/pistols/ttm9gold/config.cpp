class CfgPatches
{
	class ttm9gold
	{
		units[]={"ttm9gold"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Pistols","Survivalists_Weapons"};
		magazines[]={"Mag_Glock_15Rnd"};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class Glock19;
	class ttm9gold: Glock19
	{
		scope=2;
		absorbency=0;
		displayName="Golden Beretta M9";
		descriptionShort="Espen Industries. Beretta M9 is an Italian made pistol chambered in 9mm. The magwell has been modified to take Mlock magazines. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\pistols\ttm9gold\ttm9gold.p3d";
		magazines[]={"Mag_Glock_15Rnd"};
		attachments[]=
		{
			"pistolFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={3,2};
		PPDOFProperties[]={0,0,0,0,0,0};
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		muzzleEnd="konec hlavne";
		muzzlePos="usti hlavne";
		discreteDistance[]={25,50};
		chamberableFrom[]={"Ammo_9x19"};
	};
};
