class CfgPatches
{
	class BW_Trashgun
	{
		units[]=
		{
			"BW_Trashgun"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons",
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_Double;
class cfgWeapons
{
	class Izh43Shotgun_Base;
	class BW_Trashgun: Izh43Shotgun_Base
	{
		scope=2;
		displayName="Trashgun";
		descriptionShort="Most of this was lifted from window shopping, pieced together with the last roofer in mind.";
		model="Bill_Mods\data\Junkers\Trashgun\BW_Trashgun.p3d";
		attachments[]={};
		itemSize[]={4,2};
		weight=500;
		firespreadangle=2;
		recoilModifier[]={2,2,1};
		swayModifier[]={1,5,1,5,1};
		WeaponLength=0.42;
		initSpeedMultiplier=0.89999998;
		hiddenSelections[]={"Furniture","Metal","Priklad001"};
		hiddenSelectionsTextures[]={"\Bill_Mods\data\Junkers\Trashgun\data\furniture_co.paa","\Bill_Mods\data\Junkers\Trashgun\data\metall_co.paa","\Bill_Mods\data\Junkers\Trashgun\data\priklad_co.paa"};
		hiddenSelectionsMaterials[]={"\Bill_Mods\data\Junkers\Trashgun\data\trashgun.rvmat"};
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
								"DZ\weapons\shotguns\Izh43\data\izh43.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
