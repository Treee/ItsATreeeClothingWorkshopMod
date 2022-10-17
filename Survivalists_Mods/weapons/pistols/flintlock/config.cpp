class CfgPatches
{
	class flintlock
	{
		units[]={"flintlock"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",	
			"Survivalists_Weapons"
		};
	};
};
class Mode_Safe;
class Mode_Single;
class cfgWeapons
{
	class flaregun;
	class flintlock: flaregun
	{
		scope=2;
		displayName="Pirate Flintlock Pistol";
		descriptionShort="Espen Industries. Only a true pirate deserves to wield this weapon. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\pistols\flintlock\flintlock.p3d";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\weapons\pistols\flintlock\data\flintlock_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_Mods\weapons\pistols\flintlock\data\base.rvmat"};
		chamberSize=1;
		itemSize[]={4,3};
		attachments[]={};
    inventorySlot[]=
		{
  		"Pistol"
		};
		chamberableFrom[]=
		{
			"Ammo_12gaSlug",
		};
		modes[]={"Single"};
		reloadAction="ReloadMP133";
		class Single: Mode_Single
		{
			soundSetShot[]={"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime=.25;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			itemSize[]={7,3};
			dispersion=0.007;
			firespreadangle=1.4;
		};
	};
};