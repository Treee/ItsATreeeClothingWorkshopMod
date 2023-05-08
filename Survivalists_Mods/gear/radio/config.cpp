class CfgPatches
{
	class Survivalists_Mods_Gear_Radio
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Radio",      
      "Survivalists_Mods_Gear_Crafting"
		};
	};
};
class CfgVehicles
{
  // base classes
  class Radio;
  class PersonalRadio;
  class Cassette;
  class Inventory_Base;
  class HouseNoDestruct;

  class SRP_KitBase;
  // Look into this as a way to webhook radio stations
  // class Radio;
  // class My_Radio : Radio
  // {
  //   class Channels
  //   {
  //     class testradio
  //     {
  //       name="testradio";
  //       url="https://listen.socorock.com:8443/socorock.ogg";
  //     };
  //   };
  // }

//-------------------------------------- MOD OVERRIDE
  class SRP_ElectronicsJammer_Base: Inventory_Base
  {
    attachments[]=
    {
			"SRP_HackingKit1",
			"SRP_HackingKit2",
			"SRP_HackingKit3",
			"SRP_HackingKit4",
      "SRP_ElectricalWire1",
      "SRP_ElectricalWire2",
      "SRP_ElectricalWire3",
      "SRP_ElectricalWire4",
      "SRP_ElectricalWire5",
      "SRP_ElectricalWire6"
    };
    class GUIInventoryAttachmentsProps
		{
			class HackingKits
			{
				name="Hacking Kits";
				description="Hacking kits that make dismantling harder.";
				attachmentSlots[]=
				{
					"SRP_HackingKit1",
					"SRP_HackingKit2",
					"SRP_HackingKit3",
					"SRP_HackingKit4",
				};
				icon="set:dayz_inventory image:book";
			};
      class ElectricalWires
			{
				name="Electrical Wires";
				description="Electrical wires to diffuse the hacking kits.";
				attachmentSlots[]=
				{
					"SRP_ElectricalWire1",
					"SRP_ElectricalWire2",
					"SRP_ElectricalWire3",
					"SRP_ElectricalWire4",
					"SRP_ElectricalWire5",
					"SRP_ElectricalWire6",
				};
				icon="set:dayz_inventory image:metalwire";
			};
		};
  };

//-------------------------------------- BASE GAME OVERRIDE
	class SRP_CassettePlayer: Inventory_Base
	{
		scope=2;
    displayName="Cassette Player";
		descriptionShort="A surprisingly reliable working piece of electronics.";
		model="\dz\gear\radio\unitra_wilga.p3d";
    repairableWithKits[]={5,7};
		itemSize[]={2,3};
		fragility=0.0099999998;
		absorbency=0.5;
		repairCosts[]={30,25};
    oldpower=0;
    inventorySlot[]=
		{
			"GGRadio_Radio",
			"MassRadio",
			"walkietalkie"
		};
		attachments[]=
		{
			"BatteryD",
      "SRP_Cassette"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.05;
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
					healthLevels[]=
					{						
						{1.0,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},						
						{0.69999999,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},						
						{0.5,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},						
						{0.0,{"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
  };

//----------------------------------- Custom Stuff
  class SRP_PersonalRadio_NumberStations: Inventory_Base
  {
		scope=2;
		displayName="Strange Radio";
		descriptionShort="A radio that fits in your hand. Something feels strange.";
    model="Survivalists_Mods\gear\radio\handheldradio.p3d";
    repairableWithKits[]={5,7};
    itemSize[]={1,2};
		repairCosts[]={30,25};
    attachments[]=
		{
			"BatteryD",
			// "Cassette"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradio_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradio.rvmat"
		};
    class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			autoSwitchOffWhenInCargo=1;
			plugType=1;
			energyUsagePerSecond=0.1;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
  };

  // 500 range
  class SRP_PersonalRadioSmallRed_Handheld: PersonalRadio
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 500m";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=500;
    itemSize[]={1,2};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_red_co.paa"
		};
  };

  // 1km range
  class SRP_PersonalRadioSmallYellow_Handheld: PersonalRadio
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 1km";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=1000;
    itemSize[]={1,2};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_yellow_co.paa"
		};
  };

  class SRP_PersonalRadioSmallWhite_Handheld: PersonalRadio
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 1km";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=1000;
    itemSize[]={1,2};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_white_co.paa"
		};
  };
  // 2.5km range
  class SRP_PersonalRadioSmallGreen_Handheld: PersonalRadio
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 2.5km";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=2500;
    itemSize[]={1,2};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_green_co.paa"
		};
  };
  class SRP_PersonalRadioSmallBlue_Handheld: PersonalRadio
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 2.5km";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=2500;
    itemSize[]={1,2};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_blue_co.paa"
		};
  };
  // 5km range
  class SRP_PersonalRadio_Handheld: PersonalRadio
  {
		scope=2;
		displayName="Hand Held Radio";
		descriptionShort="A radio that fits in your hand. On the side you see scribbling that says 5km";
    model="Survivalists_Mods\gear\radio\handheldradio.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    itemSize[]={1,2};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradio_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradio.rvmat"
		};
  };
  // 7.5km range
  class SRP_PersonalRadio_LongRange: PersonalRadio
	{
		scope=2;
		displayName="Military Radio";
		descriptionShort="A military grade radio used to communicate over long distances. On the side you see scribbling that says 7.5km";
		model="Survivalists_Mods\gear\radio\SRP_LRRadio.p3d";
		range=7500;
		attachments[]=
		{
      "SRPRadioBattery"
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_longradio_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_longradio.rvmat"
		};
	};
// -------------------------------- Radios
  class SRP_PersonalRadio_SneakyBear: PersonalRadio
  {
		scope=2;
		displayName="Teddy Bear";
		descriptionShort="A cuddly teddy bear toy. Even though it's stuffed, it is able to conceal small items, somewhere.";
		model="\dz\gear\containers\teddybear.p3d";
    itemSize[]={2,3};
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=1000;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\teddybear_voodoo_co.paa"
		};
  };
  class SRP_PersonalRadio_Terminal: HouseNoDestruct
  {
		scope=0;
		displayName="Radio Terminal";
		descriptionShort="A radio terminal. Very long distance.";
		model="Survivalists_Mods\gear\radio\srp_radioterminal.p3d";
    oldpower=0;
		simulation="statictransmitter";
		inputRange=8;
		range=20000;
		useEntityHierarchy="true";
		attachments[]=
		{
			"LargeBattery"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_radioterminal_co.paa"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.2;
			attachmentAction=1;
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500000;
				};
			};
		};
  };
  class SRP_PersonalRadio_TerminalBasic: SRP_PersonalRadio_Terminal
  {
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_radioterminal_co.paa"
		};
  };
  class SRP_PersonalRadio_TerminalEspen: SRP_PersonalRadio_Terminal
  {
		scope=2;
		descriptionShort="A radio terminal. Very long distance. Manufactured by Espen Electronics Division.";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_radioterminal_espen_co.paa"
		};
  };
  class SRP_PersonalRadio_TerminalStag: SRP_PersonalRadio_Terminal
  {
		scope=2;
		descriptionShort="A radio terminal. Very long distance. Manufactured by STAG Engineering.";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_radioterminal_stag_co.paa"
		};
  };
  class SRP_PersonalRadio_TerminalBasic_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Radio Terminal";
    descriptionShort="A kit that holds everything needed for a standalone radio temrinal.";
    projectionTypename="SRP_PersonalRadio_TerminalBasic";
  };
  class SRP_PersonalRadio_TerminalEspen_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Radio Terminal - ESPEN";
    descriptionShort="A kit that holds everything needed for a standalone radio temrinal. Manufactured by Espen Electronics Division.";
    projectionTypename="SRP_PersonalRadio_TerminalEspen";
  };
  class SRP_PersonalRadio_TerminalStag_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Radio Terminal - STAG";
    descriptionShort="A kit that holds everything needed for a standalone radio temrinal. Manufactured by STAG Engineering.";
    projectionTypename="SRP_PersonalRadio_TerminalStag";
  };
  class SRP_PersonalRadio_Backpack: PersonalRadio
  {
		scope=0;
		displayName="Field Radio";
		descriptionShort="A radio field radio. Meant to communicate over long distances.";
		model="Survivalists_Mods\gear\radio\srp_radiobackpack_g.p3d";
    range=20000;
    rotationFlags=64;
    itemSize[]={10,8};
    repairableWithKits[]={};
		repairCosts[]={};
    inventorySlot[]={"Back"};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_radiobackpackbase_co.paa"
		};
    class ClothingTypes
		{
      male="Survivalists_Mods\gear\radio\srp_radiobackpack_m.p3d";
			female="Survivalists_Mods\gear\radio\srp_radiobackpack_m.p3d";
		};
  };
  class SRP_PersonalRadio_BackpackBasic: SRP_PersonalRadio_Backpack
  {
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_radiobackpackbase_co.paa"
		};
  };
  class SRP_PersonalRadio_BackpackEspen: SRP_PersonalRadio_Backpack
  {
		scope=2;
		descriptionShort="A radio field radio. Meant to communicate over long distances. Manufactured by Espen Electronics Division.";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_radiobackpackbase_espen_co.paa"
		};
  };
  class SRP_PersonalRadio_BackpackStag: SRP_PersonalRadio_Backpack
  {
		scope=2;
		descriptionShort="A radio field radio. Meant to communicate over long distances. Manufactured by STAG Engineering.";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_radiobackpackbase_stag_co.paa"
		};
  };
//-------------------------------- Music Tapes
	class SRPRadio_CassetteTape_Base: Cassette
	{
		displayName="Cassette Tape";
		descriptionShort="Cassette tape that has a recording.";
		weight=100;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
      "SRP_Cassette",
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4",
			"Cassette5",
			"Cassette6",
			"Cassette7",
			"Cassette8",
			"Cassette9",
			"Cassette10",
			"Cassette11",
			"Cassette12",
			"Cassette13",
			"Cassette14",
			"Cassette15",
			"Cassette16",
			"Cassette17",
			"Cassette18",
			"Cassette19",
			"Cassette20",
			"Cassette21",
			"Cassette22",
			"Cassette23",
			"Cassette24",
			"Cassette25",
			"Cassette26"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\tools\data\cassette_co.paa"
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
						{1,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.69999999,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0.30000001,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}
					};
				};
			};
		};
		class CfgCassette
		{
		};
	};

	class SRPRadio_CassetteTape_Snowblood: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="ERRA - Snowblood";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Snowblood_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Divisionary: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="ERRA - Divisionary";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Divisionary_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_HouseofGlass: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="ERRA - House of Glass";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_HouseofGlass_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Trumpet: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Old School Trumpet";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Trumpet_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_NothingPersonal: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Nobody Knows - Nothing Personal";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_NothingPersonal_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_ClassicRock: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Classic Rock";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_ClassicRock_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_WayoutWest: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Twin Mushroom - Way Out West";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_WayoutWest_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_RockandRoll: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Rock Music";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_RockandRoll_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Broken: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Sweet Anarchy - Broken";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Broken_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Bread: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Lukrembo - Bread";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Bread_SoundSet1";
		};
	};
// -------------------------------- Skylar
  class SRPRadio_CassetteTape_SkylarWolfe_ThreeLittleBirds: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Three Little Birds";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_ThreeLittleBirds_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_BoulevardofBrokenDreams: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Boulevard of Broken Dreams";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_BoulevardofBrokenDreams_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_ClashofTheworld: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Clash Of The World";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_ClashofTheworld_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Creep: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Creep";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_Creep_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Fixyou: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Fix You";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_FixYou_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Hallelujah: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Hallelujah";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_Hallelujah_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_RingOfFire: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Ring of Fire";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_RingOfFire_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Wonderwall: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Wonderwall";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_WonderWall_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_SaySomething: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Say Something";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_SaySomething_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Yesterday: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Yesterday";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_Yesterday_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_EarthAngel: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Earth Angel";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_EarthAngel_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_ComeAndGetYourLove: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Come And Get Your Love";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_ComeAndGetYourLove_SoundSet1";
		};
	};  
  class SRPRadio_CassetteTape_SkylarWolfe_JustTheTwoOfUs: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Just The Two Of Us";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_JustTheTwoOfUs_SoundSet1";
		};
	}; 
  class SRPRadio_CassetteTape_SkylarWolfe_FirstDayOfMyLife: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - First Day of My Life";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_FirstDayOfMyLife_SoundSet1";
		};
	}; 
  class SRPRadio_CassetteTape_SkylarWolfe_JustLikeAPill: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Just Like A Pill";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_JustLikeAPill_SoundSet1";
		};
	}; 
  class SRPRadio_CassetteTape_SkylarWolfe_WickedGame: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Wicked Game";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_WickedGame_SoundSet1";
		};
	}; 
  class SRPRadio_CassetteTape_SkylarWolfe_TenneseeWhiskey: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Tennesee Whiskey";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_TenneseeWhiskey_SoundSet1";
		};
	}; 
  class SRPRadio_CassetteTape_SkylarWolfe_HeroSung: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Hero Sung";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_HeroSung_SoundSet1";
		};
	}; 
  class SRPRadio_CassetteTape_SkylarWolfe_DancingInTheMoonlight: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Dancing In The Moonlight";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_DancingInTheMoonlight_SoundSet1";
		};
	}; 
// -------------------------------- Misc
  class SRPRadio_CassetteTape_Pinkerton_TheShadow: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Pinkerton - The Shadow";
		descriptionShort="Music Tape - Credit Pinkerton";		
		class CfgCassette
		{
			soundSet="SRPRadio_Pinkerton_TheShadow_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Gague_Forever: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Gague - Forever";
		descriptionShort="Music Tape - Credit Gague";		
		class CfgCassette
		{
			soundSet="SRPRadio_Gague_Forever_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Gague_DontLeaveMe: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Gague - Don't Leave Me";
		descriptionShort="Music Tape - Credit Gague";		
		class CfgCassette
		{
			soundSet="SRPRadio_Gague_DontLeaveMe_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Gague_MySide: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Gague - My Side";
		descriptionShort="Music Tape - Credit Gague";		
		class CfgCassette
		{
			soundSet="SRPRadio_Gague_MySide_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Gague_Anger: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Gague - Anger";
		descriptionShort="Music Tape - Credit Gague";		
		class CfgCassette
		{
			soundSet="SRPRadio_Gague_Anger_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Kalasnjikov: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Kalasanjikov";
		descriptionShort="Music Tape - Goran Bregovic";		
		class CfgCassette
		{
			soundSet="SRPRadio_Kalasnjikov_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_HejSekiSeki: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Hej Seki Seki";
		descriptionShort="Music Tape - Lepa Brena";		
		class CfgCassette
		{
			soundSet="SRPRadio_HejSekiSeki_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Narkotik: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Narkotik";
		descriptionShort="Music Tape - Narkotik";		
		class CfgCassette
		{
			soundSet="SRPRadio_Narkotik_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_RussianItsMyLife: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Its My Life (Russian)";
		descriptionShort="Music Tape - Turko";		
		class CfgCassette
		{
			soundSet="SRPRadio_ItsMyLifeRussian_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Kalinka: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Kalinka";
		descriptionShort="Music Tape - Kalinka";		
		class CfgCassette
		{
			soundSet="SRPRadio_Kalinka_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_TheFightingSide_BadMan: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Bad Man";
		descriptionShort="Music Tape - Credit | The Fighting Side";
		class CfgCassette
		{
			soundSet="SRPRadio_TheFightingSide_BadMan_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_TheFightingSide_Hymns: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Hymns";
		descriptionShort="Music Tape - Credit | The Fighting Side";
		class CfgCassette
		{
			soundSet="SRPRadio_TheFightingSide_Hymns_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_TheFightingSide_SomethingFamiliar: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Something Familiar";
		descriptionShort="Music Tape - Credit | The Fighting Side";
		class CfgCassette
		{
			soundSet="SRPRadio_TheFightingSide_SomethingFamiliar_SoundSet1";
		};
	};

  class SRPRadio_CassetteTape_LocalViolence_Drowning: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Drowning";
		descriptionShort="Music Tape - Credit | Local Violence";
		class CfgCassette
		{
			soundSet="SRPRadio_LocalViolence_Drowning_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_LocalViolence_GoodEnough: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Good Enough";
		descriptionShort="Music Tape - Credit | Local Violence";
		class CfgCassette
		{
			soundSet="SRPRadio_LocalViolence_GoodEnough_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_LocalViolence_Probs: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Probs";
		descriptionShort="Music Tape - Credit | Local Violence";
		class CfgCassette
		{
			soundSet="SRPRadio_LocalViolence_Probs_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Vinnie_MasterNoSpeech: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Villians";
		descriptionShort="Music Tape - Credit | Vinnie and Joey Castilogni";
		class CfgCassette
		{
			soundSet="SRPRadio_Vinnie_MasterNoSpeech_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_HelicopterFlyover: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Hellicopter Flyover Sounds";
		descriptionShort="Credit goes to the wind and pressure differentials.";
		class CfgCassette
		{
			soundSet="Survivalists_Mods_Ambience_Aircraft_HelicopterFlyOver_SoundSet";
		};
	};

  class SRPRadio_CassetteTape_AcousticGuitar_TheStranger: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Acoustic Guitar - The Stranger";
		descriptionShort="Music recorded from an acoustic guitar.";
		class CfgCassette
		{
			soundSet="SRPRadio_AcousticGuitar_TheStranger_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_AcousticGuitar_ImprovLoop: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Acoustic Guitar - Improv Loop";
		descriptionShort="Music recorded from an acoustic guitar.";
		class CfgCassette
		{
			soundSet="SRPRadio_AcousticGuitar_ImprovLoop_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_AcousticGuitar_Avante: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Acoustic Guitar - Avante";
		descriptionShort="Music recorded from an acoustic guitar.";
		class CfgCassette
		{
			soundSet="SRPRadio_AcousticGuitar_Avante_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_AcousticGuitar_LostWords: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Acoustic Guitar - Lost Words";
		descriptionShort="Music recorded from an acoustic guitar.";
		class CfgCassette
		{
			soundSet="SRPRadio_AcousticGuitar_LostWords_Shader1";
		};
	};
  class SRPRadio_CassetteTape_AcousticGuitar_TheJourney: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Acoustic Guitar - The Journey";
		descriptionShort="Music recorded from an acoustic guitar.";
		class CfgCassette
		{
			soundSet="SRPRadio_AcousticGuitar_TheJourney_Shader1";
		};
	};
// -------------------------------- Island George
  class SRPRadio_CassetteTape_IslandGeorge_LostInTheSnow: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Lost In The Snow";
		descriptionShort="Music Tape - Credit | Island George | https://www.youtube.com/user/allhandsraised | https://www.youtube.com/channel/UCIlyuHANzotW8sJ8DGIVpEA";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_LostInTheSnow_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_IslandGeorge_TheBlast: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="The Blast";
		descriptionShort="Music Tape - Credit | Island George | https://www.youtube.com/user/allhandsraised | https://www.youtube.com/channel/UCIlyuHANzotW8sJ8DGIVpEA";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_TheBlast_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_IslandGeorge_GTH: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="GTH";
		descriptionShort="Music Tape - Credit | Island George | https://www.youtube.com/user/allhandsraised | https://www.youtube.com/channel/UCIlyuHANzotW8sJ8DGIVpEA";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_GTH_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_IslandGeorge_SlenderMalice: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Sl3nder Malice Ft. Wavy Jone";
		descriptionShort="Music Tape - Credit |  Henry De Ville |";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_SlenderMalice_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_IslandGeorge_CloppingCoconuts: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Clopping Coconuts";
		descriptionShort="Perfect equine synthesis.";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_CloppingCoconuts_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_IslandGeorge_SelfEsteem: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Self Esteem";
		descriptionShort="Music Tape - Credit | Island George | https://www.youtube.com/user/allhandsraised | https://www.youtube.com/channel/UCIlyuHANzotW8sJ8DGIVpEA";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_SelfEsteem_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_IslandGeorge_RidersRepair: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Riders Repair Advert";
		descriptionShort="Music Tape - Credit | Island George | https://www.youtube.com/user/allhandsraised | https://www.youtube.com/channel/UCIlyuHANzotW8sJ8DGIVpEA";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_RidersRepair_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_IslandGeorge_OceanBlue: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Ocean Blue";
		descriptionShort="Music Tape - Credit | Island George | https://www.youtube.com/user/allhandsraised | https://www.youtube.com/channel/UCIlyuHANzotW8sJ8DGIVpEA";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_OceanBlue_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_IslandGeorge_Automatic: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Automatic";
		descriptionShort="Music Tape - Credit | Island George | https://www.youtube.com/user/allhandsraised | https://www.youtube.com/channel/UCIlyuHANzotW8sJ8DGIVpEA";
		class CfgCassette
		{
			soundSet="SRPRadio_IslandGeorge_Automatic_SoundSet1";
		};
	};
// -------------------------------- ThruItAll
  class SRPRadio_CassetteTape_ThruItAll_LA: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="LA";
		descriptionShort="Music Tape - Credit | Thru It All | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk?si=14c6f1f0ca5a4e1d";
		class CfgCassette
		{
			soundSet="SRPRadio_ThruItAll_LA_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ThruItAll_SameTShirt: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Same T Shirt";
		descriptionShort="Music Tape - Credit | Thru It All | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk?si=14c6f1f0ca5a4e1d";
		class CfgCassette
		{
			soundSet="SRPRadio_ThruItAll_SameTShirt_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ThruItAll_Irrelevant: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Irrelevant";
		descriptionShort="Music Tape - Credit | Thru It All | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk?si=14c6f1f0ca5a4e1d";
		class CfgCassette
		{
			soundSet="SRPRadio_ThruItAll_Irrelevant_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ThruItAll_Simulation: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Simulation";
		descriptionShort="Music Tape - Credit | Thru It All | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk?si=14c6f1f0ca5a4e1d";
		class CfgCassette
		{
			soundSet="SRPRadio_ThruItAll_Simulation_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ThruItAll_Tangled: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Tangled";
		descriptionShort="Music Tape - Credit | Thru It All | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk?si=14c6f1f0ca5a4e1d";
		class CfgCassette
		{
			soundSet="SRPRadio_ThruItAll_Tangled_SoundSet1";
		};
	};
// -------------------------------- Hunter Myers

  class SRPRadio_CassetteTape_HunterMyers_Pray: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Pray for Rain";
		descriptionShort="Music Tape - Credit | Hunters Myers | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk";
		class CfgCassette
		{
			soundSet="SRPRadio_HunterMyers_Pray_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_HunterMyers_Half: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Half Past 3";
		descriptionShort="Music Tape - Credit | Hunters Myers | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk";
		class CfgCassette
		{
			soundSet="SRPRadio_HunterMyers_Half_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_HunterMyers_EveryDay: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Every Day With You";
		descriptionShort="Music Tape - Credit | Hunters Myers | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk";
		class CfgCassette
		{
			soundSet="SRPRadio_HunterMyers_EveryDay_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_HunterMyers_Damn: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Damn Shame";
		descriptionShort="Music Tape - Credit | Hunters Myers | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk";
		class CfgCassette
		{
			soundSet="SRPRadio_HunterMyers_Damn_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_HunterMyers_Charcoal: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Charcoal";
		descriptionShort="Music Tape - Credit | Hunters Myers | https://open.spotify.com/artist/7FxFFtAwriucdNyhhdQ9wk";
		class CfgCassette
		{
			soundSet="SRPRadio_HunterMyers_Charcoal_SoundSet1";
		};
	};

// -------------------------------- ProbabLeigh
  class SRPRadio_CassetteTape_ProbabLeigh_Labyrinth: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Labyrinth";
		descriptionShort="Music Tape - Credit | ProbabLeigh | https://soundcloud.com/discover/sets/track-stations:1149168706";
		class CfgCassette
		{
			soundSet="SRPRadio_ProbabLeigh_Labyrinth_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ProbabLeigh_DancesWithAliens: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Dances With Aliens";
		descriptionShort="Music Tape - Credit | ProbabLeigh | https://soundcloud.com/discover/sets/track-stations:1149216280";
		class CfgCassette
		{
			soundSet="SRPRadio_ProbabLeigh_DancesWithAliens_SoundSet1";
		};
	};
// -------------------------------- Mystery Tapes
	class SRPRadio_CassetteTape_MysteryTap: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Mysterious Tape 1";
		descriptionShort="A mysterious tape marked with the Portland Police Department logo";		
		class CfgCassette
		{
			soundSet="SRPRadio_MysteryTape_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_MysteryTap2: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Mysterious Tape 2";
		descriptionShort="A mysterious tape marked with the Portland Police Department logo";		
		class CfgCassette
		{
			soundSet="SRPRadio_MysteryTape2_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_MysteryTape_Mutant: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="A mysterious tape.";
		descriptionShort="A mysterious tape worn from the test of time.";		
		class CfgCassette
		{
			soundSet="SRPRadio_MysteryTape_Mutant_SoundSet1";
		};
	};

// -------------------------------- Kuru Research Tapes
	class SRPRadio_CassetteTape_ResearchLog_Base: Cassette
	{
		displayName="Research Log Cassette";
		descriptionShort="Cassette Tape with research recordings";
		weight=100;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
      "SRP_Cassette",
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4",
			"Cassette5",
			"Cassette6",
			"Cassette7",
			"Cassette8",
			"Cassette9",
			"Cassette10",
			"Cassette11",
			"Cassette12",
			"Cassette13",
			"Cassette14",
			"Cassette15",
			"Cassette16",
			"Cassette17",
			"Cassette18",
			"Cassette19",
			"Cassette20",
			"Cassette21",
			"Cassette22",
			"Cassette23",
			"Cassette24",
			"Cassette25",
			"Cassette26"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\tools\data\cassette_co.paa"
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
						{1,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.69999999,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0.30000001,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}
					};
				};
			};
		};
		class CfgCassette
		{
		};
	};
	class SRPRadio_CassetteTape_ResearchLog1: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 1 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log1_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog2: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 2 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log2_SoundSet2";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog3: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 3 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log3_SoundSet3";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog4: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 4 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log4_SoundSet4";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog5: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 5 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log5_SoundSet5";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog6: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 6 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log6_SoundSet6";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog7: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 7 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log7_SoundSet7";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog8: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 8 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log8_SoundSet8";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog9: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 9 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log9_SoundSet9";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog10: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 10 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log10_SoundSet10";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog11: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 11 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log11_SoundSet11";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog12: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 12 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log12_SoundSet12";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog13: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 13 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log13_SoundSet13";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog14: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 14 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log14_SoundSet14";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog15: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 15 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log15_SoundSet15";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog16: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 16 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log16_SoundSet16";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog17: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 17 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log17_SoundSet17";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog18: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 18 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log18_SoundSet18";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog19: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 19 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log19_SoundSet19";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog20: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 20 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log20_SoundSet20";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog21: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 21 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log21_SoundSet21";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog22: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 22 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log22_SoundSet22";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog23: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 23 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log23_SoundSet23";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog24: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 24 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log24_SoundSet24";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog25: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 25 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log25_SoundSet25";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog26: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 26 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log26_SoundSet26";
		};
	};

// -------------------- Short Stories
  class SRPRadio_CassetteTape_ShortStory_Base: Cassette
	{
		displayName="Short Story Cassette";
		descriptionShort="Cassette Tape with a short story recording";
		weight=100;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
      "SRP_Cassette",
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4",
			"Cassette5",
			"Cassette6",
			"Cassette7",
			"Cassette8",
			"Cassette9",
			"Cassette10",
			"Cassette11",
			"Cassette12",
			"Cassette13",
			"Cassette14",
			"Cassette15",
			"Cassette16",
			"Cassette17",
			"Cassette18",
			"Cassette19",
			"Cassette20",
			"Cassette21",
			"Cassette22",
			"Cassette23",
			"Cassette24",
			"Cassette25",
			"Cassette26"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\tools\data\cassette_co.paa"
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
						{1,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.69999999,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0.30000001,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}
					};
				};
			};
		};
		class CfgCassette
		{
		};
	};
  class SRPRadio_CassetteTape_ShortStory_WhiteFingerHag: SRPRadio_CassetteTape_ShortStory_Base
	{
		scope=2;
		displayName="The White Fingered Hag of Threepwood";
		descriptionShort="Gather round the fire and listen to a spooky story.";
		class CfgCassette
		{
			soundSet="SRPRadio_ShortStory_WhiteFingerHag_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ShortStory_HeavensGate: SRPRadio_CassetteTape_ShortStory_Base
	{
		scope=2;
		displayName="Heavens Gate";
		descriptionShort="Gather round the fire and listen to a spooky story.";
		class CfgCassette
		{
			soundSet="SRPRadio_ShortStory_HeavensGate_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ShortStory_IbargiooftheGreatWesternWoods: SRPRadio_CassetteTape_ShortStory_Base
	{
		scope=2;
		displayName="Ibargio of the Great Western Woods";
		descriptionShort="Gather round the fire and listen to a spooky story.";
		class CfgCassette
		{
			soundSet="SRPRadio_ShortStory_IbargiooftheGreatWesternWoods_SoundSet1";
		};
	};

  class SRPRadio_CassetteTape_ShortStory_MissleDynamics: SRPRadio_CassetteTape_ShortStory_Base
	{
		scope=2;
		displayName="Missle  Dynamics";
		descriptionShort="Espen Industries - How a missle works.";
		class CfgCassette
		{
			soundSet="SRPRadio_ShortStory_MissleDynamics_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ShortStory_TechJargon: SRPRadio_CassetteTape_ShortStory_Base
	{
		scope=2;
		displayName="Innovation";
		descriptionShort="Espen Industries - New release of retro encabulator.";
		class CfgCassette
		{
			soundSet="SRPRadio_ShortStory_TechJargon_SoundSet1";
		};
	};
  
};