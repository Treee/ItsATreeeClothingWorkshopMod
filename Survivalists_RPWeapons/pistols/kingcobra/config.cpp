class CfgPatches
{
	class Survivalists_RPWeapons_Pistols_Kingcobra
	{
		units[]={"kingcobra"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
      "DZ_Pistols",
      "kingcobra"
    };
		magazines[]={};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class CfgWeapons
{
	class Magnum;
	class kingcobra: Magnum
	{
		scope=2;
		absorbency=0;
		displayName="Colt King Cobra";
		descriptionShort="Espen Industries. King Cobra is a revolver model manufactured by Colt. Chambered in .357 magnum. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\kingcobra\kingcobra.p3d";
		magazines[]={};
		attachments[]={};
		itemSize[]={4,2};
		PPDOFProperties[]={0,0,0,0,0,0};
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		muzzleEnd="konec hlavne";
		muzzlePos="usti hlavne";
		discreteDistance[]={25,50};
		chamberableFrom[]={"Ammo_357"};
	};
};
