class CfgPatches
{
	class derringer
	{
		units[]={"derringer"};
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
	class derringer: flaregun
	{
		scope=2;
		displayName="Derringer .22";
		descriptionShort="Espen Industries. Derringer pistol chambered in .22LR. Appears to have two barrels, however the lower barrel seems to be obstructed. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\pistols\derringer\derringer.p3d";
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		chamberSize=1;
		itemSize[]={2,2};
		attachments[]={};
		inventorySlot[]=
		{
  		"Pistol",
   		"SRP_GunDerringer"
		};
		chamberableFrom[]=
		{
			"Ammo_22",
		};
		modes[]={"Single"};
	};
};