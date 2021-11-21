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
  class Clothing;
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
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\belts\data\legholster.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\legholster.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\legholster_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\legholster_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\legholster_destruct.rvmat"}}
					};
				};
			};
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
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\belts\data\policebelt.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\policebelt.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\policebelt_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\policebelt_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\policebelt_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_TacticalBelt: MilitaryBelt // new
  {
		scope=2;
		displayName="Tactical Belt";
		descriptionShort="A Tactical belt with versatile attachments";
		model="Survivalists_Mods\characters\belts\tacticalbelt_g.p3d";
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
			"Survivalists_Mods\characters\belts\data\tacticalbelt_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\belts\data\tacticalbelt.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\tacticalbelt_m.p3d";
			female="Survivalists_Mods\characters\belts\tacticalbelt_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\belts\data\tacticalbelt.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\tacticalbelt.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\tacticalbelt_destruct.rvmat"}}
					};
				};
			};
		};
  };

  
 	class SRP_Elbow_Knee_Pads_Green: Clothing
	{	
		scope=2;
		displayName="Elbow and Knee pads";
		descriptionShort="A pair of elbow and kneepads";
		model="Survivalists_Mods\characters\belts\Elbowpads_Kneepads_g.p3d";
    attachments[]={};
		rotationFlags=16;
		inventorySlot[]={"Gloves"};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=12000;
		itemSize[]={2,3};
		quickBarBonus=2;
		absorbency=0;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek",
      "personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\Pads_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\Elbowpads_Kneepads_m.p3d";
			female="Survivalists_Mods\characters\belts\Elbowpads_Kneepads_m.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\belts\data\Pads.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\belts\data\Pads.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\belts\data\Pads_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\belts\data\Pads_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\belts\data\Pads_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SRP_Elbow_Knee_Pads_Tan : SRP_Elbow_Knee_Pads_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\Pads_Tan_CO.paa"
		};	
	};
	class SRP_Elbow_Knee_Pads_Black : SRP_Elbow_Knee_Pads_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\Pads_Black_CO.paa"
		};	
	};
};