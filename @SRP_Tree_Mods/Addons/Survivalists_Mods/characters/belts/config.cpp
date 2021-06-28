class CfgPatches
{
	class Survivalists_Mods_Characters_Belts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Belts"
		};
	};
};
class CfgVehicles
{
  class PlateCarrierHolster;
  class MilitaryBelt;

  class SRP_GunBelt: PlateCarrierHolster // BP_BeltGunBag
	{
		scope=2;
		displayName="$STR_CfgVehicles_CivilianBelt0";
		descriptionShort="A civilian gun belt";
		model="Survivalists_Mods\characters\belts\beltbag_g.p3d";
		attachments[]=
		{
			"Pistol"
		};
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		itemSize[]={2,2};
		itemsCargoSize[]={5,4};
		weight=20;
		hiddenSelections[]=
		{
			"LegBeltPack",
			"LegsGunHolst"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\LegBeltPack.paa",
			"Survivalists_Mods\characters\belts\data\LegsGunHolst.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.01,{"Survivalists_Mods\characters\belts\data\LegBeltPack.rvmat",	"Survivalists_Mods\characters\belts\data\LegBeltPack.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\LegBeltPack.rvmat",	"Survivalists_Mods\characters\belts\data\LegBeltPack.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\LegBeltPack_damaged.rvmat",	"Survivalists_Mods\characters\belts\data\LegBeltPack_damaged.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\belts\data\LegBeltPack_damaged.rvmat",	"Survivalists_Mods\characters\belts\data\LegBeltPack_damaged.rvmat"}},
            {0.0099999998,	{	"Survivalists_Mods\characters\belts\data\LegBeltPack_destroyed.rvmat",	"Survivalists_Mods\characters\belts\data\LegBeltPack_destroyed.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\beltbag_m.p3d";
			female="Survivalists_Mods\characters\belts\beltbag_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_bandoleer: MilitaryBelt // BP_bandoleer
	{
		scope=2;
		displayName="Bandoleer";
		descriptionShort="A Durable belt with pouches for cartridges or other equally useful things.";
		model="Survivalists_Mods\characters\belts\bandoleer_g.p3d";
		attachments[]=
		{
			"Pistol"
		};
		itemsCargoSize[]={6,1};
		weight=20;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\bandoleer_m.p3d";
			female="Survivalists_Mods\characters\belts\bandoleer_m.p3d";
		};
	};
};