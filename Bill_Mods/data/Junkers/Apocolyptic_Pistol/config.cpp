class CfgPatches
{
	class BW_Apocolyptic_Pistol
	{
		units[]={};
		weapons[]={"BW_Apocolyptic_Pistol"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Ammunition","DZ_Weapons_Firearms"};
		magazines[]={};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class FNX45;
	class BW_Apocolyptic_Pistol: FNX45
	{
		scope=2;
		absorbency=0;
		displayName="Apocalyptic Boom";
		descriptionShort="Hand Boomer";
		model="\Bill_Mods\data\Junkers\Apocolyptic_Pistol\BW_Apocolyptic_Pistol.p3d";
		animName="BW_Apocolyptic_Pistol";
		DisplayMagazine=0;
		magazines[]={};
		attachments[]={};
		itemSize[]={3,2};
		weight=1600;
		discreteDistance[]={25,50};
		chamberSize=1;
		chamberableFrom[]={"Ammo_12gaSlug", "Ammo_12gaPellets"};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Bill_Mods\data\Junkers\Apocolyptic_Pistol\data\Postapogun_co.paa"};
		hiddenSelectionsMaterials[]={"\Bill_Mods\data\Junkers\Apocolyptic_Pistol\data\Apocolyptic_Pistol.rvmat"};		
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			reloadTime=1;
			dispersion=0.0015;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
};