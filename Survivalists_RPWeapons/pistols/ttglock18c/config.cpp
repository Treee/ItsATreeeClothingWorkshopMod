class CfgPatches
{
	class Survivalists_RPWeapons_Pistols_ttglock18c
	{
		units[]={"ttglock18c"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
    {
      "DZ_Pistols",
      "ttglock18c"
      // "Survivalists_Weapons_JMC_Pistols_ttglock18c"
    };
		magazines[]={"Mag_Glock_15Rnd"};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class Glock19;
	class ttglock18c: Glock19
	{
		scope=2;
		absorbency=0;
		displayName="Glock 17";
		descriptionShort="Espen Industries. Glock is a brand of polymer-framed, short recoil-operated, locked-breech semi-automatic pistols designed and produced in Austria. This specific model is chambered in 9x19mm, operating on a semi-automatic mode. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\ttglock18c\ttglock18c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\pistols\ttglock18c\data\ttglock18c_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\pistols\ttglock18c\data\base.rvmat"
		};
		magazines[]={"Mag_Glock_15Rnd"};
		attachments[]=
		{
			"pistolMuzzle",
			"PistolRail",
			"pistolFlashlight",
			"pistolOptics"
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
  class ttglock18c_RoseGold: ttglock18c
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\pistols\ttglock18c\data\ttglock18c_RGold_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\pistols\ttglock18c\data\Base.rvmat"
		};
	};
};
