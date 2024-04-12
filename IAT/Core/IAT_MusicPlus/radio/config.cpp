class CfgPatches
{
	class IAT_MusicPlus_Radio
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;

	class IAT_MusicPlus_CassettePlayer_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Cassette Player";
		descriptionShort="A electronic device meant for playing cassette tapes.";
		model="\dz\gear\radio\unitra_wilga.p3d";
		animClass="Knife";
		weight=1700;
		itemSize[]={2,3};
		fragility=0.01;
		absorbency=0.5;
		simulation="ItemRadio";
		attachments[]={"BatteryD"};
		oldpower=0;
		repairableWithKits[]={7};
		repairCosts[]={25.0};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.02;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={{1.0,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},{0.7,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},{0.5,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},{0.3,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},{0.0,{"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1.0;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1.0;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		class Channels
		{
			class Absolute80s
			{
				name="Absolute 80s";
				url="http://icecast.timlradio.co.uk/a832.ogg";
			};
			class Absolute90s
			{
				name="Absolute 90s";
				url="http://icecast.timlradio.co.uk/a932.ogg";
			};
		};
		soundImpactType="plastic";
	};
  
  class IAT_MusicPlus_CassettePlayer_1Track: IAT_MusicPlus_CassettePlayer_ColorBase
  {
    scope=2;
    displayName="Single Track Cassette Player";
  }
  class IAT_MusicPlus_CassettePlayer_8Track: IAT_MusicPlus_CassettePlayer_ColorBase
  {
    scope=2;
    displayName="8-Track Cassette Player";
  }
};