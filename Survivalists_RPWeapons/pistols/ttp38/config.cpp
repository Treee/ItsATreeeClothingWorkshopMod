class CfgPatches
{
	class Survivalists_RPWeapons_Pistols_ttp38
	{
		units[]={"ttp38"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
      "DZ_Pistols",
      "ttp38",
      // "Survivalists_Weapons_JMC_Pistols_ttp38"
    };
		magazines[]={"Mag_IJ70_8Rnd"};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class MakarovIJ70;
	class ttp38: MakarovIJ70
	{
		scope=2;
		absorbency=0;
		displayName="Walther P38";
		descriptionShort="Espen Industries. Walther P38 is a German semi-automatic pistol. Reworked by Espen Industries to accept .380 IJ70 magazines. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\ttp38\ttp38.p3d";
		magazines[]={"Mag_IJ70_8Rnd"};
		attachments[]={};
		itemSize[]={3,2};
		PPDOFProperties[]={0,0,0,0,0,0};
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		muzzleEnd="konec hlavne";
		muzzlePos="usti hlavne";
		discreteDistance[]={25,50};
		chamberableFrom[]={"Ammo_380"};
	};
};
