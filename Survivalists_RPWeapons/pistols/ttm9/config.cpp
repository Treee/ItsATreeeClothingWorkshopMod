class CfgPatches
{
	class Survivalists_RPWeapons_Pistols_ttm9
	{
		units[]={"ttm9"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
    {
      "DZ_Pistols",
      "ttm9",
      "ttm9gold"
      // "Survivalists_Weapons_JMC_Pistols_ttm9"
    };
		magazines[]={"Mag_Glock_15Rnd"};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class FNX45_Base;
	class ttm9: FNX45_Base
	{
		scope=2;
		absorbency=0;
		displayName="Beretta M9";
		descriptionShort="Espen Industries. Beretta M9 is an Italian made pistol chambered in 9mm. The magwell has been modified to take Mlock magazines. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\ttm9\ttm9.p3d";
		magazines[]={"Mag_Glock_15Rnd"};
		attachments[]=
		{
			"pistolFlashlight",
			"pistolMuzzle",
			"PistolRail",
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
    hiddenSelections[]={"zbytek","plastic"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\ttm9\data\ttm9_co.paa","Survivalists_RPWeapons\pistols\ttm9\data\ttm9_co.paa"};
    hiddenSelectionsMaterials[]={"Survivalists_RPWeapons\pistols\ttm9\data\base.rvmat","Survivalists_RPWeapons\pistols\ttm9\data\base_Plastic.rvmat"};
	};
  class ttm9_Gold: ttm9
  {
    scope=2;
    displayName="Golden Beretta M9";
    hiddenSelections[]={"zbytek","plastic"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\ttm9\data\ttm9_Gold_CO.paa", "Survivalists_RPWeapons\pistols\ttm9\data\ttm9_Gold_CO.paa"};
    hiddenSelectionsMaterials[]={"Survivalists_RPWeapons\pistols\ttm9\data\basegold.rvmat","Survivalists_RPWeapons\pistols\ttm9\data\base_Plastic.rvmat"};
  };
  class ttm9_Tan: ttm9
  {
    scope=2;
    displayName="Beretta M9";
    hiddenSelections[]={"zbytek","plastic"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\ttm9\data\ttm9_Tan_CO.paa","Survivalists_RPWeapons\pistols\ttm9\data\ttm9_Tan_CO.paa"};
    hiddenSelectionsMaterials[]={"Survivalists_RPWeapons\pistols\ttm9\data\base.rvmat","Survivalists_RPWeapons\pistols\ttm9\data\base_Plastic.rvmat"};
  };
  class ttm9_Rare: ttm9
  {
    scope=2;
    displayName="Beretta M9";
    hiddenSelections[]={"zbytek","plastic"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\ttm9\data\ttm9_Rare_CO.paa","Survivalists_RPWeapons\pistols\ttm9\data\ttm9_Rare_CO.paa"};
    hiddenSelectionsMaterials[]={"Survivalists_RPWeapons\pistols\ttm9\data\base.rvmat","Survivalists_RPWeapons\pistols\ttm9\data\base_Plastic.rvmat"};
  };
};
