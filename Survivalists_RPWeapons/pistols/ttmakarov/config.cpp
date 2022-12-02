class CfgPatches
{
	class Survivalists_RPWeapons_Pistols_ttmakarov
	{
		units[]={"ttmakarov"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Pistols","ttmakarov"};
		magazines[]={"Mag_IJ70_8Rnd"};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class MakarovIJ70;
	class ttmakarov: MakarovIJ70
	{
		scope=2;
		absorbency=0;
		displayName="PM Makarov";
		descriptionShort="S.T.A.G. Industries. PM Makarov is a Soviet pistol chambered in .380 ACP. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\ttmakarov\ttmakarov.p3d";
		magazines[]={"Mag_IJ70_8Rnd"};
		attachments[]=
		{
			"pistolFlashlight"
		};
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
