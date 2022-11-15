class CfgPatches
{
	class Survivalists_Narcotics_Gear_Clothing
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Characters"
		};
	};
};
class CfgVehicles
{
  class Clothing;

  class SRP_SmokableWearable_ColorBase: Clothing
	{
		scope=0;
		displayName="Smokable ColorBase";
		descriptionShort="Smokable Drugs";
    model="Survivalists_Narcotics\gear\food\cigarette_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=16;
		weight=100;
		itemSize[]={1,2};
		varWetMax=1;
		heatIsolation=0.6;
    noHelmet=0;
		noEyewear=0;
		headSelectionsToHide[]=
		{
			"Clipping_NioshFaceMask"
		};
		class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
			female="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
            {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
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
					soundSet="pickUpPaper_SoundSet";
					id=797;
				};
			};
		};
		soundVoiceType="none";
	};

    // ================== WEED
  class SRP_SmokableWearable_ZWeed: SRP_SmokableWearable_ColorBase
  {
    scope=2;
    displayName="Wearable ZWeed Joint";
		descriptionShort="A joint for smoking...and getting baked";
    color="ZWeed";
    hiddenSelections[]= {"zbytek"};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\food\data\joint_co.paa",
		};
  };
  class SRP_SmokableWearable_ZWeedIrradiated: SRP_SmokableWearable_ColorBase
  {
    scope=2;
    displayName="Wearable ZWeed Joint - Irradiated";
		descriptionShort="A joint for smoking...and getting baked. Oddly feels warm to the touch.";
    color="ZWeedIrradiated";
    hiddenSelections[]= {"zbytek"};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\food\data\joint_co.paa",
		};
  };

  // ================== TOBACCO
  class SRP_SmokableWearable_Cigarette: SRP_SmokableWearable_ColorBase
  {
    scope=2;
    displayName="Wearable Cigarette";
		descriptionShort="Relieve that stress... ahhhhh";
    color="Cigarette";
    model="Survivalists_Narcotics\gear\food\cigarette_g.p3d";
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
			female="Survivalists_Narcotics\gear\food\cigarette_m.p3d";
		};
  };
  class SRP_SmokableWearable_Cigar: SRP_SmokableWearable_ColorBase
  {
    scope=2;
    displayName="Wearable Cigar";
		descriptionShort="A finely wrapped tobacco cigar. A rare luxury.";
    color="Cigar";
    model="Survivalists_Narcotics\gear\food\cigar_g.p3d";
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\food\cigar_m.p3d";
			female="Survivalists_Narcotics\gear\food\cigar_m.p3d";
		};
  };

  class SRP_SmokableWearable_SmokingPipe: SRP_SmokableWearable_ColorBase
  {
		scope=2;
    displayName="Wearable Smoking Pipe";
    color="SmokingPipe";
		descriptionShort="A well preserved smoking pipe of the old world.";
    model="Survivalists_Narcotics\gear\tools\smokingpipe.p3d";
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\tools\smokingpipe_m.p3d";
			female="Survivalists_Narcotics\gear\tools\smokingpipe_m.p3d";
		};
  };
};