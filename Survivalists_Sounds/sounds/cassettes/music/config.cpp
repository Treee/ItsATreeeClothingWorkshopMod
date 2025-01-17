class CfgPatches
{
    class Survivalists_Sounds_Music
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data","DZ_Sounds_Effects" };
    };
};

class CfgSoundShaders
{
    class SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = {};
        frequency = 1;
        range = 80;
        volume = 1.2;
    };
    class SRPRadio_Snowblood_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ERRASnowblood.ogg",1} };
    };
    class SRPRadio_Divisionary_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ERRADivisionaryOfficial.ogg",1} };
    };
    class SRPRadio_HouseofGlass_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ERRAHouseOfGlass.ogg",1} };
    };
    class SRPRadio_Trumpet_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\OldSchoolTrumpet.ogg",1} };
    };
    class SRPRadio_NothingPersonal_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\HardRockVocalsNothingPersonal.ogg",1} };
    };
    class SRPRadio_ClassicRock_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ClassicRock.ogg",1} };
    };
    class SRPRadio_WayoutWest_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\TwinMusicom-WayOutWest.ogg",1} };
    };
    class SRPRadio_RockandRoll_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\PowerfulInstrumentalRockMusic.ogg",1} };
    };
    class SRPRadio_Broken_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\SweetAnarchyBroken.ogg",1} };
    };
    class SRPRadio_Bread_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Bread.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_ThreeLittleBirds_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Three_Little_Birds_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_Hallelujah_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Hallelujah_Cover_By_Sky.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_BoulevardofBrokenDreams_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Boulevard_Of_Broken_DreamsSung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_ClashofTheworld_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Clash_of_The_World_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_Creep_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Creep_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_FixYou_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Fix_You_Sung_By_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_RingOfFire_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Ring_Of_Fire_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_Wonderwall_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Wonderwall_Sung_By_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_SaySomething_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Say_Something_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_Yesterday_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Yesterday_sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_EarthAngel_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Earth_Angel_sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_ComeAndGetYourLove_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Come_and_Get_Your_Love_sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_JustTheTwoOfUs_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Just_the_Two_of_Us_sung_by_Skylar_Wolfe_.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_FirstDayOfMyLife_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\First_Day_of_My_Life_Ft_Pancakes_bell_By_Skylar_Wolfe.ogg",1} };
    };

    class SRPRadio_SkylarWolfe_JustLikeAPill_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Just_Like_a_Pill_By_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_WickedGame_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Wicked_Game_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_TenneseeWhiskey_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Tennesee_Whiskey_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_HeroSung_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Hero_Sung_By_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_DancingInTheMoonlight_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Dancing_In_The_Moonlight_Skylar_Wolfe.ogg",1} };
    };

    class SRPRadio_SkylarWolfe_DownByTheBay_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Down_by_the_Bay_PiG_and_Skylar_Wolfe_Clips.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_WalkingInMemphis_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Walking_in_Memphis_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_SweetBabyJames_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Sweet_Baby_James_Sung_By_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_Radioactive_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Radioactive_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_PlayThatSong_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Play_That_Song_By_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_OnlyTime_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Only_Time_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_HereWithoutYou_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Here_Without_You_Sung_By_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_FollowMe_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Follow_Me_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_DontDreamItsOver_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Dont_Dream_Its_Over_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_Blackbird_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Blackbird_Sung_by_Skylar_Wolfe.ogg",1} };
    };
    class SRPRadio_SkylarWolfe_AThousandYears_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\A_Thousand_Years_aka_Warlocks_Lullabye_Sang_By_Skylar_Wolfe.ogg",1} };
    };

    class SRPRadio_Pinkerton_TheShadow_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Vocal_Test_-_The_Shadow.ogg",1} };
    };
    class SRPRadio_Gague_Forever_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Forever.ogg",1} };
    };
    class SRPRadio_Gague_DontLeaveMe_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\dont_leave_me.ogg",1} };
    };
    class SRPRadio_Gague_MySide_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\My_side.ogg",1} };
    };
    class SRPRadio_Gague_Anger_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\anger.ogg",1} };
    };
    class SRPRadio_Kalasnjikov_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Kalasnjikov By Goran Bregovic.ogg",1} };
    };
    class SRPRadio_HejSekiSeki_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Lepa Brena - Hej Seki Seki.ogg",1} };
    };

    class SRPRadio_Narkotik_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Narkotik.ogg",1} };
    };
    class SRPRadio_ItsMyLifeRussian_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Its my life Russian version.ogg",1} };
    };
    class SRPRadio_Kalinka_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Kalinka.ogg",1} };
    };

    class SRPRadio_TheFightingSide_BadMan_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\THE_FIGHTING_SIDE-BAD_MAN.ogg",1} };
    };
    class SRPRadio_TheFightingSide_Hymns_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\THE_FIGHTING_SIDE-HYMNS.ogg",1} };
    };
    class SRPRadio_TheFightingSide_SomethingFamiliar_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\THE_FIGHTING_SIDE-SOMETHING_FAMILIAR.ogg",1} };
    };

    class SRPRadio_LocalViolence_Drowning_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Drowning_v1.ogg",1} };
    };
    class SRPRadio_LocalViolence_GoodEnough_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Good_Enough_v1.ogg",1} };
    };
    class SRPRadio_LocalViolence_Probs_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\Probs_v2.ogg",1} };
    };
    class SRPRadio_Vinnie_MasterNoSpeech_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\V_Beat_Master_No_Speech.ogg",1} };
    };

    class SRPRadio_IslandGeorge_LostInTheSnow_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\George_Hormel_Lost_In_The_Snow.ogg",1} };
    };
    class SRPRadio_IslandGeorge_TheBlast_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\George_Hormel_The_Blast.ogg",1} };
    };
    class SRPRadio_IslandGeorge_GTH_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\George_Hormel_GTH.ogg",1} };
    };
    class SRPRadio_IslandGeorge_SlenderMalice_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\sl3nder_malice_ft_wavy_jone.ogg",1} };
    };
    class SRPRadio_IslandGeorge_CloppingCoconuts_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\islandgeorge_cloppingcoconuts.ogg",1} };
    };
    class SRPRadio_IslandGeorge_SelfEsteem_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\IslandGeorge_Self_Esteem.ogg",1} };
    };
    class SRPRadio_IslandGeorge_RidersRepair_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\IslandGeorge_Riders_Repair.ogg",1} };
    };
    class SRPRadio_IslandGeorge_OceanBlue_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\IslandGeorge_Ocean_Blue.ogg",1} };
    };
    class SRPRadio_IslandGeorge_Automatic_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\IslandGeorge_Automatic.ogg",1} };
    };
    class SRPRadio_IslandGeorgeGroozy_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\IslandGeorgeGroozy.ogg",1} };
    };
    class SRPRadio_IslandGeorge_DojoOfTheFalls_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\IslandGeorgeDojo_of_the_Falls.ogg",1} };
    };
    class SRPRadio_IslandGeorge_SoInLoveWithYou_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\IslandGeorgeSo_In_Love_With_You.ogg",1} };
    };

    class SRPRadio_ProbabLeigh_Labyrinth_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ProbabLeigh_Labyrinth.ogg",1} };
    };
    class SRPRadio_ProbabLeigh_DancesWithAliens_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ProbabLeigh_DancesWithAliens.ogg",1} };
    };

    class SRPRadio_ThruItAll_LA_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ThruItAllLA.ogg",1} };
    };
    class SRPRadio_ThruItAll_SameTShirt_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ThruItAll_Same_T_Shirt_Different_Eon.ogg",1} };
    };
    class SRPRadio_ThruItAll_Irrelevant_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ThruItAll_Irrelevant.ogg",1} };
    };
    class SRPRadio_ThruItAll_Simulation_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ThruItAll_Simulation.ogg",1} };
    };
    class SRPRadio_ThruItAll_Tangled_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\ThruItAll_Tangled.ogg",1} };
    };

    class SRPRadio_HunterMyers_Pray_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\HunterMyers_Pray_for_Rain.ogg",1} };
    };
    class SRPRadio_HunterMyers_Half_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\HunterMyers_Half_Past_3.ogg",1} };
    };
    class SRPRadio_HunterMyers_EveryDay_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\HunterMyers_Every_Day_With_You.ogg",1} };
    };
    class SRPRadio_HunterMyers_Damn_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\HunterMyers_Damn_Shame.ogg",1} };
    };
    class SRPRadio_HunterMyers_Charcoal_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\HunterMyers_Charcoal.ogg",1} };
    };

    class SRPRadio_AcousticGuitar_TheStranger_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\acoustic-thestranger.ogg",1} };
    };
    class SRPRadio_AcousticGuitar_ImprovLoop_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\acoustic-guitar-loop-improve.ogg",1} };
    };
    class SRPRadio_AcousticGuitar_Avante_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\acoutstic-avante-guitar.ogg",1} };
    };
    class SRPRadio_AcousticGuitar_LostWords_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\acoustic-lost-words.ogg",1} };
    };
    class SRPRadio_AcousticGuitar_TheJourney_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\acoustic-guitar-loop.ogg",1} };
    };

    class SRPRadio_Biwa_DemonSlayer_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\biwa-DemonSlayer.ogg",1} };
    };
    class SRPRadio_Biwa_LittleSoldierBoy_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\biwa-LittleSoldierBoy.ogg",1} };
    };

    class SRPRadio_Biwa_Jongarasetsu_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\biwa-Jongarasetsu.ogg",1} };
    };
    class SRPRadio_Biwa_TakahashiIntroduction_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\biwa-Takahashi_Introduction.ogg",1} };
    };
    class SRPRadio_Biwa_TakahashiJonkara_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\biwa-Takahashi_Jonkara.ogg",1} };
    };
    class SRPRadio_Biwa_TakahashiYasaburo_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\biwa-Takahashi_Yasaburo.ogg",1} };
    };
    class SRPRadio_Biwa_TakahashiTsugaruYosare_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\biwa-Takahashi_TsugaruYosare.ogg",1} };
    };
    class SRPRadio_Biwa_TakahashiAyugaSawaJinko_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\biwa-Takahashi_AyugaSawaJinko.ogg",1} };
    };

    class SRPRadio_DarthRose_Constellation_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\srp_darthrose_constellation.ogg",1} };
    };
    class SRPRadio_DarthRose_HalfALight_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\srp_darthrose_halfalight.ogg",1} };
    };
    class SRPRadio_DarthRose_TiredEyes_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\srp_darthrose_tiredeyes.ogg",1} };
    };

    class SRPRadio_Track1_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\track1.ogg",1} };
    };
    class SRPRadio_Track2_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\track2.ogg",1} };
    };
    class SRPRadio_Track3_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\track3.ogg",1} };
    };
    class SRPRadio_Track4_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\track4.ogg",1} };
    };
    class SRPRadio_Track5_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\track5.ogg",1} };
    };
    class SRPRadio_Track6_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\track6.ogg",1} };
    };
    class SRPRadio_Track7_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\track7.ogg",1} };
    };
    class SRPRadio_Track8_Shader1 : SRPRadio_Cassette_Music_SoundShader_Base
    {
        samples[] = { {"Survivalists_Sounds\sounds\cassettes\music\data\track8.ogg",1} };
    };
};

class CfgSoundSets
{
    class SRPRadio_Snowblood_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Snowblood_Shader1" };
    };
    class SRPRadio_Divisionary_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Divisionary_Shader1" };
    };
    class SRPRadio_HouseofGlass_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_HouseofGlass_Shader1" };
    };
    class SRPRadio_Trumpet_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Trumpet_Shader1" };
    };
    class SRPRadio_NothingPersonal_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_NothingPersonal_Shader1" };
    };
    class SRPRadio_ClassicRock_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_ClassicRock_Shader1" };
    };
    class SRPRadio_WayoutWest_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_WayoutWest_Shader1" };
    };
    class SRPRadio_RockandRoll_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_RockandRoll_Shader1" };
    };
    class SRPRadio_Broken_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Broken_Shader1" };
    };
    class SRPRadio_Bread_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Bread_Shader1" };
    };
    class SRPRadio_SkylarWolfe_ThreeLittleBirds_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_ThreeLittleBirds_Shader1" };
    };
    class SRPRadio_SkylarWolfe_BoulevardofBrokenDreams_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_BoulevardofBrokenDreams_Shader1" };
    };
    class SRPRadio_SkylarWolfe_ClashofTheworld_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_ClashofTheworld_Shader1" };
    };
    class SRPRadio_SkylarWolfe_Creep_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_Creep_Shader1" };
    };
    class SRPRadio_SkylarWolfe_FixYou_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_FixYou_Shader1" };
    };
    class SRPRadio_SkylarWolfe_Hallelujah_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_Hallelujah_Shader1" };
    };
    class SRPRadio_SkylarWolfe_RingOfFire_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_RingOfFire_Shader1" };
    };
    class SRPRadio_SkylarWolfe_WonderWall_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_Wonderwall_Shader1" };
    };
    class SRPRadio_SkylarWolfe_SaySomething_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_SaySomething_Shader1" };
    };
    class SRPRadio_SkylarWolfe_Yesterday_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_Yesterday_Shader1" };
    };
    class SRPRadio_SkylarWolfe_EarthAngel_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_EarthAngel_Shader1" };
    };
    class SRPRadio_SkylarWolfe_ComeAndGetYourLove_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_ComeAndGetYourLove_Shader1" };
    };
    class SRPRadio_SkylarWolfe_JustTheTwoOfUs_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_JustTheTwoOfUs_Shader1" };
    };
    class SRPRadio_SkylarWolfe_FirstDayOfMyLife_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_FirstDayOfMyLife_Shader1" };
    };

    class SRPRadio_SkylarWolfe_JustLikeAPill_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_JustLikeAPill_Shader1" };
    };
    class SRPRadio_SkylarWolfe_WickedGame_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_WickedGame_Shader1" };
    };
    class SRPRadio_SkylarWolfe_TenneseeWhiskey_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_TenneseeWhiskey_Shader1" };
    };
    class SRPRadio_SkylarWolfe_HeroSung_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_HeroSung_Shader1" };
    };
    class SRPRadio_SkylarWolfe_DancingInTheMoonlight_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_DancingInTheMoonlight_Shader1" };
    };
    class SRPRadio_SkylarWolfe_DownByTheBay_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_DownByTheBay_Shader1" };
    };
    class SRPRadio_SkylarWolfe_WalkingInMemphis_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_WalkingInMemphis_Shader1" };
    };
    class SRPRadio_SkylarWolfe_SweetBabyJames_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_SweetBabyJames_Shader1" };
    };
    class SRPRadio_SkylarWolfe_Radioactive_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_Radioactive_Shader1" };
    };
    class SRPRadio_SkylarWolfe_PlayThatSong_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_PlayThatSong_Shader1" };
    };
    class SRPRadio_SkylarWolfe_OnlyTime_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_OnlyTime_Shader1" };
    };
    class SRPRadio_SkylarWolfe_HereWithoutYou_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_HereWithoutYou_Shader1" };
    };
    class SRPRadio_SkylarWolfe_FollowMe_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_FollowMe_Shader1" };
    };
    class SRPRadio_SkylarWolfe_DontDreamItsOver_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_DontDreamItsOver_Shader1" };
    };
    class SRPRadio_SkylarWolfe_Blackbird_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_Blackbird_Shader1" };
    };
    class SRPRadio_SkylarWolfe_AThousandYears_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_SkylarWolfe_AThousandYears_Shader1" };
    };

    class SRPRadio_Pinkerton_TheShadow_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Pinkerton_TheShadow_Shader1" };
    };
    class SRPRadio_Gague_Forever_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Gague_Forever_Shader1" };
    };
    class SRPRadio_Gague_DontLeaveMe_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Gague_DontLeaveMe_Shader1" };
    };
    class SRPRadio_Gague_MySide_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Gague_MySide_Shader1" };
    };
    class SRPRadio_Gague_Anger_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Gague_Anger_Shader1" };
    };
    class SRPRadio_Kalasnjikov_SoundSet1
    {
        IsRadioSong = 4;
        soundShaders[] = { "SRPRadio_Kalasnjikov_Shader1" };
    };
    class SRPRadio_HejSekiSeki_SoundSet1
    {
        IsRadioSong = 4;
        soundShaders[] = { "SRPRadio_HejSekiSeki_Shader1" };
    };
    class SRPRadio_Narkotik_SoundSet1
    {
        IsRadioSong = 4;
        soundShaders[] = { "SRPRadio_Narkotik_Shader1" };
    };
    class SRPRadio_ItsMyLifeRussian_SoundSet1
    {
        IsRadioSong = 4;
        soundShaders[] = { "SRPRadio_ItsMyLifeRussian_Shader1" };
    };
    class SRPRadio_Kalinka_SoundSet1
    {
        IsRadioSong = 4;
        soundShaders[] = { "SRPRadio_Kalinka_Shader1" };
    };
    class SRPRadio_TheFightingSide_BadMan_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_TheFightingSide_BadMan_Shader1" };
    };
    class SRPRadio_TheFightingSide_Hymns_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_TheFightingSide_Hymns_Shader1" };
    };
    class SRPRadio_TheFightingSide_SomethingFamiliar_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_TheFightingSide_SomethingFamiliar_Shader1" };
    };

    class SRPRadio_LocalViolence_Drowning_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_LocalViolence_Drowning_Shader1" };
    };
    class SRPRadio_LocalViolence_GoodEnough_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_LocalViolence_GoodEnough_Shader1" };
    };
    class SRPRadio_LocalViolence_Probs_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_LocalViolence_Probs_Shader1" };
    };
    class SRPRadio_Vinnie_MasterNoSpeech_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Vinnie_MasterNoSpeech_Shader1" };
    };

    class SRPRadio_IslandGeorge_LostInTheSnow_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_LostInTheSnow_Shader1" };
    };
    class SRPRadio_IslandGeorge_TheBlast_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_TheBlast_Shader1" };
    };
    class SRPRadio_IslandGeorge_GTH_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_GTH_Shader1" };
    };
    class SRPRadio_IslandGeorge_SlenderMalice_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_SlenderMalice_Shader1" };
    };
    class SRPRadio_IslandGeorge_CloppingCoconuts_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_CloppingCoconuts_Shader1" };
    };
    class SRPRadio_IslandGeorge_SelfEsteem_SoundSet1
    {
        SoundPlayTime = 167;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_SelfEsteem_Shader1" };
    };
    class SRPRadio_IslandGeorge_RidersRepair_SoundSet1
    {
        SoundPlayTime = 66;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_RidersRepair_Shader1" };
    };
    class SRPRadio_IslandGeorge_OceanBlue_SoundSet1
    {
        SoundPlayTime = 232;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_OceanBlue_Shader1" };
    };
    class SRPRadio_IslandGeorge_Automatic_SoundSet1
    {
        SoundPlayTime = 170;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_Automatic_Shader1" };
    };
    class SRPRadio_IslandGeorge_Groozy_SoundSet1
    {
        SoundPlayTime = 170;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorgeGroozy_Shader1" };
    };
    class SRPRadio_IslandGeorge_DojoOfTheFalls_SoundSet1
    {
        SoundPlayTime = 170;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_DojoOfTheFalls_Shader1" };
    };
    class SRPRadio_IslandGeorge_SoInLoveWithYou_SoundSet1
    {
        SoundPlayTime = 170;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_IslandGeorge_SoInLoveWithYou_Shader1" };
    };
    class SRPRadio_ThruItAll_LA_SoundSet1
    {
        SoundPlayTime = 149;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_ThruItAll_LA_Shader1" };
    };
    class SRPRadio_ThruItAll_SameTShirt_SoundSet1
    {
        SoundPlayTime = 161;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_ThruItAll_SameTShirt_Shader1" };
    };
    class SRPRadio_ThruItAll_Irrelevant_SoundSet1
    {
        SoundPlayTime = 173;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_ThruItAll_Irrelevant_Shader1" };
    };
    class SRPRadio_ThruItAll_Simulation_SoundSet1
    {
        SoundPlayTime = 146;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_ThruItAll_Simulation_Shader1" };
    };
    class SRPRadio_ThruItAll_Tangled_SoundSet1
    {
        SoundPlayTime = 157;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_ThruItAll_Tangled_Shader1" };
    };

    class SRPRadio_HunterMyers_Pray_SoundSet1
    {
        SoundPlayTime = 185;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_HunterMyers_Pray_Shader1" };
    };
    class SRPRadio_HunterMyers_Half_SoundSet1
    {
        SoundPlayTime = 172;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_HunterMyers_Half_Shader1" };
    };
    class SRPRadio_HunterMyers_EveryDay_SoundSet1
    {
        SoundPlayTime = 177;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_HunterMyers_EveryDay_Shader1" };
    };
    class SRPRadio_HunterMyers_Damn_SoundSet1
    {
        SoundPlayTime = 194;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_HunterMyers_Damn_Shader1" };
    };
    class SRPRadio_HunterMyers_Charcoal_SoundSet1
    {
        SoundPlayTime = 210;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_HunterMyers_Charcoal_Shader1" };
    };

    class SRPRadio_ProbabLeigh_Labyrinth_SoundSet1
    {
        SoundPlayTime = 115;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_ProbabLeigh_Labyrinth_Shader1" };
    };
    class SRPRadio_ProbabLeigh_DancesWithAliens_SoundSet1
    {
        SoundPlayTime = 158;
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_ProbabLeigh_DancesWithAliens_Shader1" };
    };

    class SRPRadio_AcousticGuitar_TheStranger_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_AcousticGuitar_TheStranger_Shader1" };
    };
    class SRPRadio_AcousticGuitar_ImprovLoop_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_AcousticGuitar_ImprovLoop_Shader1" };
    };
    class SRPRadio_AcousticGuitar_Avante_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_AcousticGuitar_Avante_Shader1" };
    };
    class SRPRadio_AcousticGuitar_LostWords_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_AcousticGuitar_LostWords_Shader1" };
    };
    class SRPRadio_AcousticGuitar_TheJourney_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_AcousticGuitar_TheJourney_Shader1" };
    };

    class SRPRadio_Biwa_DemonSlayer_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Biwa_DemonSlayer_Shader1" };
    };
    class SRPRadio_Biwa_LittleSoldierBoy_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Biwa_LittleSoldierBoy_Shader1" };
    };
    class SRPRadio_Biwa_Jongarasetsu_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Biwa_Jongarasetsu_Shader1" };
    };
    class SRPRadio_Biwa_TakahashiIntroduction_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Biwa_TakahashiIntroduction_Shader1" };
    };
    class SRPRadio_Biwa_TakahashiJonkara_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Biwa_TakahashiJonkara_Shader1" };
    };
    class SRPRadio_Biwa_TakahashiYasaburo_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Biwa_TakahashiYasaburo_Shader1" };
    };
    class SRPRadio_Biwa_TakahashiTsugaruYosare_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Biwa_TakahashiTsugaruYosare_Shader1" };
    };
    class SRPRadio_Biwa_TakahashiAyugaSawaJinko_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Biwa_TakahashiAyugaSawaJinko_Shader1" };
    };

    class SRPRadio_Track1_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Track1_Shader1" };
    };
    class SRPRadio_Track2_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Track2_Shader1" };
    };
    class SRPRadio_Track3_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Track3_Shader1" };
    };
    class SRPRadio_Track4_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Track4_Shader1" };
    };
    class SRPRadio_Track5_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Track5_Shader1" };
    };
    class SRPRadio_Track6_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Track6_Shader1" };
    };
    class SRPRadio_Track7_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Track7_Shader1" };
    };
    class SRPRadio_Track8_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_Track8_Shader1" };
    };

    class SRPRadio_DarthRose_Constellation_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_DarthRose_Constellation_Shader1" };
    };
    class SRPRadio_DarthRose_HalfALight_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_DarthRose_HalfALight_Shader1" };
    };
    class SRPRadio_DarthRose_TiredEyes_SoundSet1
    {
        IsRadioSong = 1;
        soundShaders[] = { "SRPRadio_DarthRose_TiredEyes_Shader1" };
    };
};