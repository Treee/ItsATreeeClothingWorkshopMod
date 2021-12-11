class CfgPatches
{
	class BW_1911_Apoc
	{
		units[]={"BW_1911_Apoc"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Pistols"};
		magazines[]={"Mag_1911_7Rnd"};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class Colt1911;
	class BW_1911_Apoc: Colt1911
	{
		scope=2;
		absorbency=0;
		displayName="Apocalyptic 1911";
		descriptionShort="Heavily used and visibly worn out 1911 with modifications made in the Apocalyptic Era.";
		model="\Bill_Mods\data\Junkers\1911_Apoc\BW_1911_Apoc.p3d";
		magazines[]={"Mag_1911_7Rnd"};
		attachments[]={};
		itemSize[]={3,2};
		PPDOFProperties[]={0,0,0,0,0,0};
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		muzzleEnd="konec hlavne";
		muzzlePos="usti hlavne";
		discreteDistance[]={25,50};
		chamberableFrom[]={"Ammo_45ACP"};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Bill_Mods\data\Junkers\1911_Apoc\data\Makeshift_1911_low_1001_co.paa"};
		hiddenSelectionsMaterials[]={"\Bill_Mods\data\Junkers\1911_Apoc\data\1911_Apoc.rvmat"};
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
								"DZ\weapons\pistols\1911\data\1911.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\1911\data\1911.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\1911\data\1911_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\1911\data\1911_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\1911\data\1911_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
