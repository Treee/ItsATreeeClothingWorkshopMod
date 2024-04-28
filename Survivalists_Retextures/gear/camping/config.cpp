class CfgPatches
{
	class Survivalists_Retextures_Gear_Camping
  {
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Camping",
      "Survivalists_Mods_Gear_Camping"
		};
	};
};
class CfgVehicles
{
    class LargeTent;
    class Flag_Base;

    class SRP_Guitar_Alpocalypse;
    class SRP_Carpet_ColorBase;
    class SRP_CarpetRug_ColorBase;
    class SRP_DragonPlushie_ColorBase;
    class SRP_JapaneseUmbrella_ColorBase;
    class SRP_DoubleArmband_ColorBase;

//================================================ VANILLA
    class LargeTent_Stag: LargeTent
	{
		scope=2;
        hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\large_tent_STAG_co.paa"};
    };
//================================================ FLAGS
    class Flag_Australia: Flag_Base
	{
		scope=2;
		color="Australia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_australia_co.paa"
		};
	};
    class Flag_Canada: Flag_Base
	{
		scope=2;
		color="Canada";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Canada_co.paa"
		};
	};
    class Flag_KentuckyCommonWealth: Flag_Base
	{
		scope=2;
		color="KentuckyCommonWealth";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_CommonWealth_co.paa"
		};
	};
    class Flag_France: Flag_Base
	{
		scope=2;
		color="France";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_France_co.paa"
		};
	};
    class Flag_Germany: Flag_Base
	{
		scope=2;
		color="Germany";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Germany_co.paa"
		};
	};
    class Flag_Italy: Flag_Base
	{
		scope=2;
		color="Italy";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Italy_co.paa"
		};
	};
    class Flag_Mexico: Flag_Base
	{
		scope=2;
		color="Mexico";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Mexico_co.paa"
		};
	};
    class Flag_Portugal: Flag_Base
	{
		scope=2;
		color="Portugal";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Portugal_co.paa"
		};
	};
    class Flag_Russia: Flag_Base
	{
		scope=2;
		color="Russia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Russia_co.paa"
		};
	};
    class Flag_Spain: Flag_Base
	{
		scope=2;
		color="Spain";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Spain_co.paa"
		};
	};
    class Flag_UK: Flag_Base
	{
		scope=2;
		color="UK";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_UK_co.paa"
		};
	};
    class Flag_USADamaged: Flag_Base
	{
		scope=2;
		color="USADamaged";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_USA_damaged_co.paa"
		};
	};
    class Flag_Bisexual: Flag_Base
	{
		scope=2;
		color="Bisexual";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_bi_co.paa"};
	};
    class Flag_Japan: Flag_Base
	{
		scope=2;
		color="Japan";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_Japan_co.paa"};
	};
    class Flag_Japan1: Flag_Base
	{
		scope=2;
		color="Japan1";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_Japan1_co.paa"};
	};
    class Flag_Pride1: Flag_Base
	{
		scope=2;
		color="Pride1";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_Pride1_co.paa"};
	};
    class Flag_Hetero: Flag_Base
	{
		scope=2;
		color="Hetero";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_hetero_co.paa"};
	};
    class Flag_Ireland: Flag_Base
	{
		scope=2;
		color="Ireland";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_ireland_co.paa"};
	};
    class Flag_Pride2: Flag_Base
	{
		scope=2;
		color="Pride2";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_Pride2_co.paa"};
	};
    class Flag_JeMeSouviens: Flag_Base
	{
		scope=2;
		color="JeMeSouviens";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_JeMeSouviens_co.paa"};
	};
    class Flag_Jurrasic: Flag_Base
	{
		scope=2;
		color="Jurrasic";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_Jurassic_co.paa"};
	};
    class Flag_MaineState: Flag_Base
	{
		scope=2;
		color="MaineState";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_MaineState_co.paa"};
	};
    class Flag_Pride3: Flag_Base
	{
		scope=2;
		color="Pride3";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_Pride3_co.paa"};
	};
    class Flag_Pride4: Flag_Base
	{
		scope=2;
		color="Pride4";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_pride4_co.paa"};
	};
    class Flag_Turkey: Flag_Base
	{
		scope=2;
		color="Turkey";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_Turkey_co.paa"};
	};
    class Flag_Ukraine: Flag_Base
	{
		scope=2;
		color="Ukraine";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_Ukraine_co.paa"};
	};
    class Flag_QuebecWeed: Flag_Base
	{
		scope=2;
		color="QuebecWeed";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_ViveLeQuebecWeed_co.paa"};
	};
    class Flag_Mermaid: Flag_Base
	{
		scope=2;
		color="Mermaid";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_mermaid_co.paa"};
	};
    class Flag_WildTurkey: Flag_Base
	{
		scope=2;
		color="WildTurkey";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\flag_WildTurkey_co.paa"};
	};
    class Flag_4thOfJuly: Flag_Base
	{
		scope=2;
		color="4thOfJuly";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_4thOfJuly_co.paa"};
    };
    class Flag_AlchemyWood: Flag_Base
	{
		scope=2;
		color="AlchemyWood";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_AlchemyWood_co.paa"};
    };
    class Flag_AlchemyBlack: Flag_Base
	{
		scope=2;
		color="AlchemyBlack";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_AlchemyBlack_co.paa"};
    };
    class Flag_Alien: Flag_Base
	{
		scope=2;
		color="Alien";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Alien_co.paa"};
    };
    class Flag_AmericanIndian: Flag_Base
	{
		scope=2;
		color="AmericanIndian";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_AmericanIndian_co.paa"};
    };
    class Flag_Bandit: Flag_Base
	{
		scope=2;
		color="Bandit";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Bandit_co.paa"};
    };
    class Flag_BaphometDevil: Flag_Base
	{
		scope=2;
		color="BaphometDevil";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_BaphometDevil_co.paa"};
    };
    class Flag_Barber: Flag_Base
	{
		scope=2;
		color="Barber";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Barber_co.paa"};
    };
    class Flag_BeachSunset: Flag_Base
	{
		scope=2;
		color="BeachSunset";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_BeachSunset_co.paa"};
    };
    class Flag_Biker: Flag_Base
	{
		scope=2;
		color="Biker";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Biker_co.paa"};
    };
    class Flag_Blacksmith: Flag_Base
	{
		scope=2;
		color="Blacksmith";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Blacksmith_co.paa"};
    };
    class Flag_Brewery: Flag_Base
	{
		scope=2;
		color="Brewery";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Brewery_co.paa"};
    };
    class Flag_Builder: Flag_Base
	{
		scope=2;
		color="Builder";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Builder_co.paa"};
    };
    class Flag_Butcher: Flag_Base
	{
		scope=2;
		color="Butcher";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Butcher_co.paa"};
    };
    class Flag_Campfire: Flag_Base
	{
		scope=2;
		color="Campfire";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Campfire_co.paa"};
    };
    class Flag_Camping: Flag_Base
	{
		scope=2;
		color="Camping";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Camping_co.paa"};
    };
    class Flag_Carpentry: Flag_Base
	{
		scope=2;
		color="Carpentry";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Carpentry_co.paa"};
    };
    class Flag_Circus: Flag_Base
	{
		scope=2;
		color="Circus";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Circus_co.paa"};
    };
    class Flag_Club: Flag_Base
	{
		scope=2;
		color="Club";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_CLub_co.paa"};
    };
    class Flag_ComedyClub: Flag_Base
	{
		scope=2;
		color="ComedyClub";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_ComedyClub_co.paa"};
    };
    class Flag_CottageCoreFrog: Flag_Base
	{
		scope=2;
		color="CottageCoreFrog";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_CottageCoreFrog_co.paa"};
    };
    class Flag_Courier: Flag_Base
	{
		scope=2;
		color="Courier";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Courier_co.paa"};
    };
    class Flag_Cowboy: Flag_Base
	{
		scope=2;
		color="Cowboy";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Cowboy_co.paa"};
    };
    class Flag_CrueltyFree: Flag_Base
	{
		scope=2;
		color="CrueltyFree";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_CrueltyFree_co.paa"};
    };
    class Flag_Deli: Flag_Base
	{
		scope=2;
		color="Deli";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Deli_co.paa"};
    };
    class Flag_Easter: Flag_Base
	{
		scope=2;
		color="Easter";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Easter_co.paa"};
    };
    class Flag_Esoteric: Flag_Base
	{
		scope=2;
		color="Esoteric";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Esoteric_co.paa"};
    };
    class Flag_EvilCat: Flag_Base
	{
		scope=2;
		color="EvilCat";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_EvilCat_co.paa"};
    };
    class Flag_EyeofHorusEgyptian: Flag_Base
	{
		scope=2;
		color="EyeofHorusEgyptian";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_EyeofHorusEgyptian_co.paa"};
    };
    class Flag_FaithHopeLove: Flag_Base
	{
		scope=2;
		color="FaithHopeLove";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_FaithHopeLove_co.paa"};
    };
    class Flag_FarmersMarket: Flag_Base
	{
		scope=2;
		color="FarmersMarket";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_FarmersMarket_co.paa"};
    };
    class Flag_Fisherman: Flag_Base
	{
		scope=2;
		color="Fisherman";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Fisherman_co.paa"};
    };
    class Flag_FlowerSkull: Flag_Base
	{
		scope=2;
		color="FlowerSkull";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_FlowerSkull_co.paa"};
    };
    class Flag_ForestStag: Flag_Base
	{
		scope=2;
		color="ForestStag";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_ForestStag_co.paa"};
    };
    class Flag_FortuneTeller: Flag_Base
	{
		scope=2;
		color="FortuneTeller";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_FortuneTeller_co.paa"};
    };
    class Flag_FuckOff: Flag_Base
	{
		scope=2;
		color="FuckOff";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_FuckOff_co.paa"};
    };
    class Flag_Gambling: Flag_Base
	{
		scope=2;
		color="Gambling";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Gambling_co.paa"};
    };
    class Flag_Ganesh: Flag_Base
	{
		scope=2;
		color="Ganesh";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Ganesh_co.paa"};
    };
    class Flag_GothRose: Flag_Base
	{
		scope=2;
		color="GothRose";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_GothRose_co.paa"};
    };
    class Flag_Graffiti: Flag_Base
	{
		scope=2;
		color="Graffiti";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Graffiti_co.paa"};
    };
    class Flag_GunsandAmmo: Flag_Base
	{
		scope=2;
		color="GunsandAmmo";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_GunsandAmmo_co.paa"};
    };
    class Flag_Halloween: Flag_Base
	{
		scope=2;
		color="Halloween";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Halloween_co.paa"};
    };
    class Flag_HappyDiwali: Flag_Base
	{
		scope=2;
		color="HappyDiwali";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_HappyDiwali_co.paa"};
    };
    class Flag_HappyPassover: Flag_Base
	{
		scope=2;
		color="HappyPassover";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_HappyPassover_co.paa"};
    };
    class Flag_HippyPeace: Flag_Base
	{
		scope=2;
		color="HippyPeace";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_HippyPeace_co.paa"};
    };
    class Flag_IceCream: Flag_Base
	{
		scope=2;
		color="IceCream";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_IceCream_co.paa"};
    };
    class Flag_Jail: Flag_Base
	{
		scope=2;
		color="Jail";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Jail_co.paa"};
    };
    class Flag_JapaneseteaHouse: Flag_Base
	{
		scope=2;
		color="JapaneseteaHouse";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_JapaneseteaHouse_co.paa"};
    };
    class Flag_JapanRisingSun: Flag_Base
	{
		scope=2;
		color="JapanRisingSun";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_JapanRisingSun_co.paa"};
    };
    class Flag_Jesus: Flag_Base
	{
		scope=2;
		color="Jesus";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Jesus_co.paa"};
    };
    class Flag_Karaoke: Flag_Base
	{
		scope=2;
		color="Karaoke";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Karaoke_co.paa"};
    };
    class Flag_KeepOut: Flag_Base
	{
		scope=2;
		color="KeepOut";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_KeepOut_co.paa"};
    };
    class Flag_KillerClown: Flag_Base
	{
		scope=2;
		color="KillerClown";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_KillerClown_co.paa"};
    };
    class Flag_Knight: Flag_Base
	{
		scope=2;
		color="Knight";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Knight_co.paa"};
    };
    class Flag_LandoftheFree: Flag_Base
	{
		scope=2;
		color="LandoftheFree";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_LandoftheFree_co.paa"};
    };
    class Flag_Lawyer: Flag_Base
	{
		scope=2;
		color="Lawyer";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Lawyer_co.paa"};
    };
    class Flag_Leatherwork: Flag_Base
	{
		scope=2;
		color="Leatherwork";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Leatherwork_co.paa"};
    };
    class Flag_Library: Flag_Base
	{
		scope=2;
		color="Library";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Library_co.paa"};
    };
    class Flag_LiveMusic: Flag_Base
	{
		scope=2;
		color="LiveMusic";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_LiveMusic_co.paa"};
    };
    class Flag_MedicalMarijuana: Flag_Base
	{
		scope=2;
		color="MedicalMarijuana";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_MedicalMarijuana_co.paa"};
    };
    class Flag_Medical: Flag_Base
	{
		scope=2;
		color="Medical";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Medical_co.paa"};
    };
    class Flag_Medusa: Flag_Base
	{
		scope=2;
		color="Medusa";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Medusa_co.paa"};
    };
    class Flag_MerryXmas: Flag_Base
	{
		scope=2;
		color="MerryXmas";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_MerryXmas_co.paa"};
    };
    class Flag_News: Flag_Base
	{
		scope=2;
		color="News";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_News_co.paa"};
    };
    class Flag_NoFear: Flag_Base
	{
		scope=2;
		color="NoFear";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_NoFear_co.paa"};
    };
    class Flag_Norse: Flag_Base
	{
		scope=2;
		color="Norse";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Norse_co.paa"};
    };
    class Flag_OnAir: Flag_Base
	{
		scope=2;
		color="OnAir";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_OnAir_co.paa"};
    };
    class Flag_Persian: Flag_Base
	{
		scope=2;
		color="Persian";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Persian_co.paa"};
    };
    class Flag_Pizza: Flag_Base
	{
		scope=2;
		color="Pizza";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Pizza_co.paa"};
    };
    class Flag_PrawnGod: Flag_Base
	{
		scope=2;
		color="PrawnGod";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_PrawnGod_co.paa"};
    };
    class Flag_Quarantine: Flag_Base
	{
		scope=2;
		color="Quarantine";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Quarantine_co.paa"};
    };
    class Flag_Radioactive: Flag_Base
	{
		scope=2;
		color="Radioactive";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Radioactive_co.paa"};
    };
    class Flag_Ramadan: Flag_Base
	{
		scope=2;
		color="Ramadan";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Ramadan_co.paa"};
    };
    class Flag_Raven: Flag_Base
	{
		scope=2;
		color="Raven";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Raven_co.paa"};
    };
    class Flag_RecordStore: Flag_Base
	{
		scope=2;
		color="RecordStore";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_RecordStore_co.paa"};
    };
    class Flag_SadPug: Flag_Base
	{
		scope=2;
		color="SadPug";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_SadPug_co.paa"};
    };
    class Flag_Science: Flag_Base
	{
		scope=2;
		color="Science";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Science_co.paa"};
    };
    class Flag_Scottish: Flag_Base
	{
		scope=2;
		color="Scottish";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Scottish_co.paa"};
    };
    class Flag_ScubaClub: Flag_Base
	{
		scope=2;
		color="ScubaClub";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_ScubaClub_co.paa"};
    };
    class Flag_Seafood: Flag_Base
	{
		scope=2;
		color="Seafood";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Seafood_co.paa"};
    };
    class Flag_SkullandMoon: Flag_Base
	{
		scope=2;
		color="SkullandMoon";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_SkullandMoon_co.paa"};
    };
    class Flag_Snowman: Flag_Base
	{
		scope=2;
		color="Snowman";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Snowman_co.paa"};
    };
    class Flag_Stonemason: Flag_Base
	{
		scope=2;
		color="Stonemason";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Stonemason_co.paa"};
    };
    class Flag_Stoner: Flag_Base
	{
		scope=2;
		color="Stoner";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Stoner_co.paa"};
    };
    class Flag_StPatricksDay: Flag_Base
	{
		scope=2;
		color="StPatricksDay";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_StPatricksDay_co.paa"};
    };
    class Flag_Taco: Flag_Base
	{
		scope=2;
		color="Taco";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Taco_co.paa"};
    };
    class Flag_Tailor: Flag_Base
	{
		scope=2;
		color="Tailor";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Tailor_co.paa"};
    };
    class Flag_Taxidermy: Flag_Base
	{
		scope=2;
		color="Taxidermy";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Taxidermy_co.paa"};
    };
    class Flag_Thanksgiving: Flag_Base
	{
		scope=2;
		color="Thanksgiving";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Thanksgiving_co.paa"};
    };
    class Flag_TheEndisNigh: Flag_Base
	{
		scope=2;
		color="TheEndisNigh";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_TheEndisNigh_co.paa"};
    };
    class Flag_ThreeBears: Flag_Base
	{
		scope=2;
		color="ThreeBears";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_ThreeBears_co.paa"};
    };
    class Flag_Tiger: Flag_Base
	{
		scope=2;
		color="Tiger";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Tiger_co.paa"};
    };
    class Flag_Tinny: Flag_Base
	{
		scope=2;
		color="Tinny";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Tinny_co.paa"};
    };
    class Flag_TownHall: Flag_Base
	{
		scope=2;
		color="TownHall";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_TownHall_co.paa"};
    };
    class Flag_Trader: Flag_Base
	{
		scope=2;
		color="Trader";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Trader_co.paa"};
    };
    class Flag_TrickorTreat: Flag_Base
	{
		scope=2;
		color="TrickorTreat";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_TrickorTreat_co.paa"};
    };
    class Flag_Trustno1: Flag_Base
	{
		scope=2;
		color="Trustno1";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Trustno1_co.paa"};
    };
    class Flag_UnicornVomit: Flag_Base
	{
		scope=2;
		color="UnicornVomit";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_UnicornVomit_co.paa"};
    };
    class Flag_University: Flag_Base
	{
		scope=2;
		color="University";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_University_co.paa"};
    };
    class Flag_ValentineDay: Flag_Base
	{
		scope=2;
		color="ValentineDay";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_ValentineDay_co.paa"};
    };
    class Flag_VampyricCastle: Flag_Base
	{
		scope=2;
		color="VampyricCastle";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_VampyricCastle_co.paa"};
    };
    class Flag_Vet: Flag_Base
	{
		scope=2;
		color="Vet";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Vet_co.paa"};
    };
    class Flag_Wicca: Flag_Base
	{
		scope=2;
		color="Wicca";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Wicca_co.paa"};
    };
    class Flag_Wizard: Flag_Base
	{
		scope=2;
		color="Wizard";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Wizard_co.paa"};
    };
    class Flag_Yeti: Flag_Base
	{
		scope=2;
		color="Yeti";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Yeti_co.paa"};
    };

    class Flag_BrainPlate: Flag_Base
    {
        scope=2;
        color="BrainPlate";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_BrainPlate_co.paa"};
    };
    class Flag_Lilith: Flag_Base
    {
        scope=2;
        color="Lilith";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Lilith_co.paa"};
    };
    class Flag_Octopus: Flag_Base
    {
        scope=2;
        color="Octopus";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Octopus_co.paa"};
    };
    class Flag_FaceDry: Flag_Base
    {
        scope=2;
        color="FaceDry";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_FaceDry_co.paa"};
    };
    class Flag_MotherOfAll: Flag_Base
    {
        scope=2;
        color="MotherOfAll";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_MotherOfAll_co.paa"};
    };
    class Flag_Reaper: Flag_Base
    {
        scope=2;
        color="Reaper";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Reaper_co.paa"};
    };
    class Flag_HummingBird: Flag_Base
    {
        scope=2;
        color="HummingBird";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_HummingBird_co.paa"};
    };
    class Flag_MushroomDrawing: Flag_Base
    {
        scope=2;
        color="MushroomDrawing";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_MushroomDrawing_co.paa"};
    };
    class Flag_SantaMuerte: Flag_Base
    {
        scope=2;
        color="SantaMuerte";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_SantaMuerte_co.paa"};
    };
    class Flag_Kraken: Flag_Base
    {
        scope=2;
        color="Kraken";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Kraken_co.paa"};
    };
    class Flag_Mushroom: Flag_Base
    {
        scope=2;
        color="Mushroom";
        hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\Flag_Mushroom_co.paa"};
    };


//================================================ ARMBANDS
    class Armband_BisexualFlag: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="BisexualFlag";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_BisexualFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_BisexualFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_BisexualFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_BisexualFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_BisexualFlag_co.paa",
        };
    };
    class Armband_MotherOfAll: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="MotherOfAll";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_MotherOfAll_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MotherOfAll_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MotherOfAll_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MotherOfAll_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MotherOfAll_co.paa",
        };
    };
    class Armband_BrainPlate: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="BrainPlate";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_BrainPlate_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_BrainPlate_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_BrainPlate_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_BrainPlate_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_BrainPlate_co.paa",
        };
    };
    class Armband_MushroomDrawing: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="MushroomDrawing";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_MushroomDrawing_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MushroomDrawing_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MushroomDrawing_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MushroomDrawing_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MushroomDrawing_co.paa",
        };
    };
    class Armband_FaceDry: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="FaceDry";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_FaceDry_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_FaceDry_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_FaceDry_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_FaceDry_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_FaceDry_co.paa",
        };
    };
    class Armband_Mushroom: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Mushroom";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Mushroom_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Mushroom_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Mushroom_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Mushroom_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Mushroom_co.paa",
        };
    };
    class Armband_GBPrideFlag: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="GBPrideFlag";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_GBPrideFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_GBPrideFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_GBPrideFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_GBPrideFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_GBPrideFlag_co.paa",
        };
    };
    class Armband_Octopus: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Octopus";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Octopus_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Octopus_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Octopus_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Octopus_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Octopus_co.paa",
        };
    };
    class Armband_HeterosexualFlag: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="HeterosexualFlag";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_HeterosexualFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_HeterosexualFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_HeterosexualFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_HeterosexualFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_HeterosexualFlag_co.paa",
        };
    };
    class Armband_PrideFlag: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="PrideFlag";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_PrideFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_PrideFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_PrideFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_PrideFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_PrideFlag_co.paa",
        };
    };
    class Armband_HummingBird: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="HummingBird";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_HummingBird_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_HummingBird_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_HummingBird_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_HummingBird_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_HummingBird_co.paa",
        };
    };
    class Armband_Reaper: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Reaper";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Reaper_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Reaper_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Reaper_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Reaper_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Reaper_co.paa",
        };
    };
    class Armband_Ireland: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Ireland";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Ireland_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Ireland_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Ireland_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Ireland_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Ireland_co.paa",
        };
    };
    class Armband_SantaMuerte: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="SantaMuerte";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_SantaMuerte_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_SantaMuerte_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_SantaMuerte_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_SantaMuerte_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_SantaMuerte_co.paa",
        };
    };
    class Armband_JeMeSouviens: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="JeMeSouviens";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_JeMeSouviens_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_JeMeSouviens_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_JeMeSouviens_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_JeMeSouviens_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_JeMeSouviens_co.paa",
        };
    };
    class Armband_TransFlag: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="TransFlag";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_TransFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_TransFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_TransFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_TransFlag_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_TransFlag_co.paa",
        };
    };
    class Armband_Jurassic: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Jurassic";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Jurassic_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Jurassic_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Jurassic_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Jurassic_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Jurassic_co.paa",
        };
    };
    class Armband_Turkey: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Turkey";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Turkey_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Turkey_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Turkey_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Turkey_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Turkey_co.paa",
        };
    };
    class Armband_Kraken: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Kraken";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Kraken_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Kraken_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Kraken_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Kraken_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Kraken_co.paa",
        };
    };
    class Armband_Ukraine: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Ukraine";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Ukraine_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Ukraine_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Ukraine_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Ukraine_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Ukraine_co.paa",
        };
    };
    class Armband_Lilith: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="Lilith";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_Lilith_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Lilith_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Lilith_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Lilith_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_Lilith_co.paa",
        };
    };
    class Armband_ViveLeQuebecWeed: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="ViveLeQuebecWeed";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_ViveLeQuebecWeed_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_ViveLeQuebecWeed_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_ViveLeQuebecWeed_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_ViveLeQuebecWeed_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_ViveLeQuebecWeed_co.paa",
        };
    };
    class Armband_MaineState: SRP_DoubleArmband_ColorBase
    {
        scope=2;
        color="MaineState";
        hiddenSelectionsTextures[]=
        {
            "Survivalists_Retextures\gear\camping\data\Armband_MaineState_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MaineState_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MaineState_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MaineState_co.paa",
            "Survivalists_Retextures\gear\camping\data\Armband_MaineState_co.paa",
        };
    };
//================================================ MODDED
    class SRP_Guitar_Alpocalypse_Blue: SRP_Guitar_Alpocalypse
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_blue_co.paa"};
	};
    class SRP_Guitar_Alpocalypse_Green: SRP_Guitar_Alpocalypse
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_green_co.paa"};
	};
    class SRP_Guitar_Alpocalypse_Pastel: SRP_Guitar_Alpocalypse
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_pastel_co.paa"};
	};
    class SRP_Guitar_Alpocalypse_Pink: SRP_Guitar_Alpocalypse
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_pink_co.paa"};
	};
    class SRP_Guitar_Alpocalypse_Sunset: SRP_Guitar_Alpocalypse
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_sunset_co.paa"};
	};
    class SRP_Guitar_Alpocalypse_Teal: SRP_Guitar_Alpocalypse
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_teal_co.paa"};
	};
    class SRP_Guitar_Alpocalypse_TieDye: SRP_Guitar_Alpocalypse
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_tiedye_co.paa"};
	};
    class SRP_Guitar_Alpocalypse_Yellow: SRP_Guitar_Alpocalypse
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_yellow_co.paa"};
	};

    class SRP_Carpet_Basic: SRP_Carpet_ColorBase
	{
		scope=2;
	};
    class SRP_Carpet_BlueSea: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_bluesea_co.paa"};
	};
    class SRP_Carpet_Espen: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_espen_co.paa"};
	};
    class SRP_Carpet_Grape: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_grape_co.paa"};
	};
    class SRP_Carpet_LockNSons: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_locknsons_co.paa"};
	};
    class SRP_Carpet_Red: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_red_co.paa"};
	};
    class SRP_Carpet_RedFloral: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_redfloral_co.paa"};
	};
    class SRP_Carpet_RedRose: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_redrose_co.paa"};
	};
    class SRP_Carpet_RoyalBlue: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_royalblue_co.paa"};
	};
    class SRP_Carpet_Stag: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_stag_co.paa"};
	};
    class SRP_Carpet_HumanWelcome: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_human_co.paa"};
	};
    class SRP_Carpet_MutantWelcome: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_mutant_co.paa"};
	};
    class SRP_Carpet_MutantWelcome1: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_welcomemutant1_co.paa"};
	};
    class SRP_Carpet_FlowerGold: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_flowergold_co.paa"};
	};
    class SRP_Carpet_FlowerTeal: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_flowerTeal_co.paa"};
	};
    class SRP_Carpet_GeoGreen: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoGreen_co.paa"};
	};
    class SRP_Carpet_GeoOrange: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoOrange_co.paa"};
	};
    class SRP_Carpet_GeoPurple: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoPurple_co.paa"};
	};
    class SRP_Carpet_GeoRed: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoRed_co.paa"};
	};
    class SRP_Carpet_GeoTeal: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoTeal_co.paa"};
	};
    class SRP_Carpet_GeoYellow: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoYellow_co.paa"};
	};
    class SRP_Carpet_KnitBlue: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitBlue_co.paa"};
	};
    class SRP_Carpet_KnitGreen: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitGreen_co.paa"};
	};
    class SRP_Carpet_KnitLime: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitLime_co.paa"};
	};
    class SRP_Carpet_KnitOrange: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitOrange_co.paa"};
	};
    class SRP_Carpet_KnitPurple: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitPurple_co.paa"};
	};
    class SRP_Carpet_KnitRed: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitRed_co.paa"};
	};
    class SRP_Carpet_KnitTeal: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitTeal_co.paa"};
	};
    class SRP_Carpet_KnitYellow: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitYellow_co.paa"};
	};
    class SRP_Carpet_Pineapple: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_Pineapple_co.paa"};
	};
    class SRP_Carpet_PlaidBrown: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_PlaidBrown_co.paa"};
	};
    class SRP_Carpet_PlaidElf: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_PlaidElf_co.paa"};
	};
    class SRP_Carpet_PlaidRed: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_PlaidRed_co.paa"};
	};
    class SRP_Carpet_SnowflakeBlue: SRP_Carpet_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_SnowflakeBlue_co.paa"};
	};


    class SRP_CarpetRug_Basic: SRP_CarpetRug_ColorBase
	{
		scope=2;
	};
    class SRP_CarpetRug_Blue: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_blue_co.paa"};
	};
    class SRP_CarpetRug_Green: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Green_co.paa"};
	};
    class SRP_CarpetRug_Orange: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Orange_co.paa"};
	};
    class SRP_CarpetRug_Purple: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Purple_co.paa"};
	};
    class SRP_CarpetRug_Red: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Red_co.paa"};
	};
    class SRP_CarpetRug_Teal: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Teal_co.paa"};
	};
    class SRP_CarpetRug_Yellow: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Yellow_co.paa"};
	};
    class SRP_CarpetRug_Kitty: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Kitty_co.paa"};
	};
    class SRP_CarpetRug_Planets: SRP_CarpetRug_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Planets_co.paa"};
	};

    class SRP_DragonPlushie_Green: SRP_DragonPlushie_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_green_co.paa"};
	};
    class SRP_DragonPlushie_Grape: SRP_DragonPlushie_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Grape_co.paa"};
	};

    class SRP_DragonPlushie_Blueberry: SRP_DragonPlushie_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Blueberry_co.paa"};
	};
    class SRP_DragonPlushie_Pickle: SRP_DragonPlushie_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Pickles_co.paa"};
	};
    class SRP_DragonPlushie_Potatoe: SRP_DragonPlushie_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Potatoes_co.paa"};
	};
    class SRP_DragonPlushie_Tomato: SRP_DragonPlushie_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Tomatoes_co.paa"};
	};
    class SRP_DragonPlushie_Xmas: SRP_DragonPlushie_ColorBase
	{
		scope=2;
        hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\HolidayDragon1_co.paa"};
	};

    class SRP_JapaneseUmbrella_Default: SRP_JapaneseUmbrella_ColorBase
	{
		scope=2;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_umbrella_co.paa"};
	};
    class SRP_JapaneseUmbrella_Japan: SRP_JapaneseUmbrella_ColorBase
	{
		scope=2;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_umbrella_japan_co.paa"};
	};
    class SRP_JapaneseUmbrella_Flowers: SRP_JapaneseUmbrella_ColorBase
	{
		scope=2;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_umbrella_flowers_co.paa"};
	};
    class SRP_JapaneseUmbrella_Essesentiendum: SRP_JapaneseUmbrella_ColorBase
	{
		scope=2;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_umbrella_essesentiendum_co.paa"};
	};
};