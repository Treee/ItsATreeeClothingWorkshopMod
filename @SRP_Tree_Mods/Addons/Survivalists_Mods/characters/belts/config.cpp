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
      "DZ_Characters_Belts",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class PlateCarrierHolster;
  class MilitaryBelt;
  class CivilianBelt;

  class SRP_LegHolster: CivilianBelt // BP_BeltGunBag
  {
		scope=2;
		displayName="Belt and leg holster";
		descriptionShort="A civilian gun belt anbd leg holster";
		model="Survivalists_Mods\characters\belts\legholster_g.p3d";
    attachments[]=
		{
			"Pistol"
		};
    itemsCargoSize[]={5,4};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\legholster_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\belts\data\legholster.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\legholster_m.p3d";
			female="Survivalists_Mods\characters\belts\legholster_m.p3d";
		};
  };

  class SRP_PoliceBelt: MilitaryBelt // new
  {
		scope=2;
		displayName="Police Belt";
		descriptionShort="A police belt with versatile attachments";
		model="Survivalists_Mods\characters\belts\policebelt_g.p3d";
    attachments[]=
		{
			"Pistol"
		};
    itemsCargoSize[]={5,4};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\policebelt_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\belts\data\policebelt.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\policebelt_m.p3d";
			female="Survivalists_Mods\characters\belts\policebelt_m.p3d";
		};
  };

  // class SRP_bandoleer: MilitaryBelt // BP_bandoleer
	// {
	// 	scope=2;
	// 	displayName="Bandoleer";
	// 	descriptionShort="A Durable belt with pouches for cartridges or other equally useful things.";
	// 	model="Survivalists_Mods\characters\belts\bandoleer_g.p3d";
	// 	attachments[]=
	// 	{
	// 		"Pistol"
	// 	};
	// 	itemsCargoSize[]={6,1};
	// 	weight=20;
	// 	hiddenSelections[]=
	// 	{
	// 		"camoGround",
	// 		"camoMale",
	// 		"camoFemale"
	// 	};
	// 	class ClothingTypes
	// 	{
	// 		male="Survivalists_Mods\characters\belts\bandoleer_m.p3d";
	// 		female="Survivalists_Mods\characters\belts\bandoleer_m.p3d";
	// 	};
	// };
};