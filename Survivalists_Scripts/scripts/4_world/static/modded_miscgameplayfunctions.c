modded class MiscGameplayFunctions
{
    static const string ALPHABET_NORMAL = "abcdefghijklmnopqrstuvwxyz";
    static const string NUMBERS_NORMAL = "0123456789";
    static const string NUMBERS_SYMBOLS = ")!@#$%^&*(";

    static float GetTirednessMetabolicSpeed(int movement_speed)
    {
        float speed;
        switch (movement_speed)
        {
            case DayZPlayerConstants.MOVEMENTIDX_WALK:
                speed = PlayerConstants.METABOLIC_SPEED_TIREDNESS_WALK;
            break;
            case DayZPlayerConstants.MOVEMENTIDX_RUN:
                speed = PlayerConstants.METABOLIC_SPEED_TIREDNESS_JOG;
            break;
            case DayZPlayerConstants.MOVEMENTIDX_SPRINT:
                speed = PlayerConstants.METABOLIC_SPEED_TIREDNESS_SPRINT;
            break;
            default:
                speed = 0;
            break;
        }
        speed += PlayerConstants.METABOLIC_SPEED_TIREDNESS_BASAL;
        return speed;
    }

    static void AttachTo(notnull Object child, notnull Object parent, vector local_pos = "0 0 0", vector orientation = "0 0 0", string mem_point = "")
    {
        if (mem_point != "")
        {
            if (parent.MemoryPointExists(mem_point))
            {
                local_pos += parent.GetMemoryPointPos(mem_point);
            }
        }

        child.SetOrientation(orientation);
        child.SetPosition(local_pos);

        parent.AddChild(child, -1);
        parent.Update();
    }

    static string ScrambleString(string input)
    {
        PrintFormat("Original Text: %1", input);
        // always shift at least by one or length-1... remove identity index (0)
        int shiftAmountAlphabet = Math.RandomIntInclusive(1,24);
        int shiftPlus1 = (shiftAmountAlphabet + 1);
        int runLength = ((ALPHABET_NORMAL.Length() - 1) - shiftAmountAlphabet);
        string shiftedAlphabet = string.Format("%1%2", ALPHABET_NORMAL.Substring(shiftPlus1, runLength), ALPHABET_NORMAL.Substring(0, shiftAmountAlphabet));

        // always shift at least by one or length-1... remove identity index (0)
        int shiftAmountNumbers = Math.RandomIntInclusive(1,8)
        shiftPlus1 = (shiftAmountNumbers + 1);
        runLength = ((NUMBERS_NORMAL.Length() - 1) - shiftAmountNumbers);
        string shiftedNumbers = string.Format("%1%2", NUMBERS_SYMBOLS.Substring(shiftPlus1, runLength), NUMBERS_SYMBOLS.Substring(0, shiftAmountNumbers));

        int numChars = input.Length();
        string inputChar = "";
        int charIndex = -1;
        string newChar = "";
        for (int i = 0; i < numChars; i++)
        {
            inputChar = input.Get(i);
            if (inputChar == " ")
                continue;
            else if (inputChar == "\n")
                continue;
            else if (NUMBERS_NORMAL.Contains(inputChar))
            {
                charIndex = NUMBERS_NORMAL.IndexOf(inputChar);
                if (charIndex > -1)
                    newChar = shiftedNumbers.Get(charIndex);
                // shift with numbers
            }
            else if (ALPHABET_NORMAL.Contains(inputChar))
            {
                charIndex = ALPHABET_NORMAL.IndexOf(inputChar);
                if (charIndex > -1)
                    newChar = shiftedAlphabet.Get(charIndex);
                // shift with leters
            }
            else
                newChar = inputChar;

            input.Set(i, newChar);
        }
        PrintFormat("Ciphered Text: %1", input);
        return input;
    }
    //========================= LOOT HELPERS
    static string GetRandomZombieType()
    {
        return GetZombieTypes().GetRandomElement();
    }
    static string GetRandomEnhancedZombieType()
    {
        return GetEnhancedZombieTypes().GetRandomElement();
    }
    static string GetRandomRareLootType()
    {
        float randomChance = Math.RandomFloatInclusive(0,1);
        if (randomChance >= 0 && randomChance < 0.05)
            return GetRandomBookType();
        if (randomChance >= 0.05 && randomChance < 0.10)
            return GetRandomScrollType();
        if (randomChance >= 0.10 && randomChance < 0.45)
            return GetRandomGrenadeType();
        if (randomChance >= 0.45 && randomChance < 0.60)
            return GetRandomWeaponsType();
        if (randomChance >= 0.60 && randomChance < 0.70)
            return GetRandomOpticType();
        if (randomChance >= 0.70 && randomChance < 0.80)
            return GetRandomMagazineType();
        if (randomChance >= 0.80 && randomChance < 0.90)
            return GetRandomAmmoType();
        if (randomChance >= 0.90 && randomChance < 1.01)
            return GetRareLootTypes().GetRandomElement();
        return "NailBox";
    }
    static string GetRandomTreasureItem()
    {
        float randomChance = Math.RandomFloatInclusive(0,1);
        if (randomChance >= 0 && randomChance < 0.05)
            return MiscGameplayFunctions.GetRandomBookType();
        if (randomChance >= 0.05 && randomChance < 0.10)
            return MiscGameplayFunctions.GetRandomScrollType();
        if (randomChance >= 0.10 && randomChance < 0.20)
            return MiscGameplayFunctions.GetRandomGrenadeType();
        if (randomChance >= 0.20 && randomChance < 0.25)
            return MiscGameplayFunctions.GetRandomWeaponsType();
        if (randomChance >= 0.25 && randomChance < 0.30)
            return MiscGameplayFunctions.GetRandomOpticType();
        if (randomChance >= 0.30 && randomChance < 0.50)
            return MiscGameplayFunctions.GetRandomMagazineType();
        if (randomChance >= 0.50 && randomChance < 0.65)
            return MiscGameplayFunctions.GetRandomAmmoType();
        if (randomChance >= 0.65 && randomChance < 0.75)
            return MiscGameplayFunctions.GetRandomKitType();
        if (randomChance >= 0.75 && randomChance < 0.90)
            return MiscGameplayFunctions.GetRandomMiscHightTierType();
        return "NailBox";
    }
    static string GetRandomGrenadeType()
    {
        return GetSpawnableGrenades().GetRandomElement();
    }
    static string GetRandomWeaponsType()
    {
        return GetSpawnableWeapons().GetRandomElement();
    }
    static string GetRandomAmmoType()
    {
        return GetSpawnableAmmo().GetRandomElement();
    }
    static string GetRandomOpticType()
    {
        return GetSpawnableOptics().GetRandomElement();
    }
    static string GetRandomMagazineType()
    {
        return GetSpawnableMags().GetRandomElement();
    }
    static string GetRandomMiscHightTierType()
    {
        return GetMiscHighTier().GetRandomElement();
    }
    static string GetRandomBookType()
    {
        return GetBookList().GetRandomElement();
    }
    static string GetRandomScrollType()
    {
        return GetScrollList().GetRandomElement();
    }
    static string GetRandomTeddyType()
    {
        return GetTeddyBearList().GetRandomElement();
    }
    static string GetRandomKitType()
    {
        return GetKitList().GetRandomElement();
    }
    static string GetRandomCard()
    {
        int chance = Math.RandomIntInclusive(0,1);
        if (chance == 0)
            return GetRandomTarotCardType();
        return GetRandomPlayingCardType();
    }
    static string GetRandomPlayingCardType()
    {
        TStringArray cardSuits = {"spade","club","diamond","heart"};
        TStringArray cardShapes = {"circle", "plus", "square", "star", "wave"};
        TStringArray cardNumbers = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king", "ace"};
        int shapeChance = Math.RandomFloatInclusive(0, 1);
        if (shapeChance < 0.0176)
            return string.Format("SRP_PlayingCard_%1", cardShapes.GetRandomElement());
        return string.Format("SRP_PlayingCard_%1%2", cardNumbers.GetRandomElement(), cardSuits.GetRandomElement());
    }
    static string GetRandomTarotCardType()
    {
        TStringArray tarotSuits = {"cups", "pentacles", "swords", "wands"};
        TStringArray wildCards = {"chariot","death","devil","emperor","empress","fool","fortune","hangedman","hermit","hierophant","highpriestess","judgement","justice","lovers","magician","moon","star","strength","sun","temperance","tower","world"};
        TStringArray tarotNumbers = {"two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "page", "knight", "queen", "king", "ace"};
        int wildCardChance = Math.RandomFloatInclusive(0, 1);
        if (wildCardChance < 0.0129)
            return string.Format("SRP_PlayingCard_tarot_%1", wildCards.GetRandomElement());
        return string.Format("SRP_PlayingCard_tarot_%1%2", tarotSuits.GetRandomElement(), tarotNumbers.GetRandomElement());
    }
    static string GetRandomSimpleRecipe()
    {
        string recipeText = "N/A";
        PluginRecipesManager plugin_recipes_manager;
        if (Class.CastTo(plugin_recipes_manager, GetPlugin(PluginRecipesManager)))
        {
            RecipeBase randomRecipe = plugin_recipes_manager.m_RecipeList.GetRandomElement();
            recipeText = randomRecipe.PrintPrettyScramble();
        }
        return string.Format("I did it!! Now to hide the recipe.\n%1", recipeText);
    }
    //========================= LOOT LISTS
    static TStringArray GetRareLootTypes()
    {
        return {
        "SRP_Mining_RawOre_Zinc",
        "SRP_Mining_RawOre_Coal",
        "SRP_Mining_RawOre_Silver",
        "SRP_ForgeIngot_Silver",
        "SRP_ForgeIngot_Zinc",
        "SRP_ForgeIngot_Brass",
        };
    }
    static TStringArray GetEnhancedZombieTypes()
    {
        return {
        "DUB_ZmbVariants_1",
        "DUB_ZmbVariants_2",
        "DUB_ZmbVariants_3",
        "DUB_ZmbVariants_4",
        "DUB_ZmbVariants_5",
        };
    }
    static TStringArray GetZombieTypes()
    {
        return {
        "ZmbM_HermitSkinny_Beige",
        "ZmbM_HermitSkinny_Black",
        "ZmbM_HermitSkinny_Green",
        "ZmbM_HermitSkinny_Red",
        "ZmbM_FarmerFat_Blue",
        "ZmbM_FarmerFat_Brown",
        "ZmbM_FarmerFat_Green",
        "ZmbF_CitizenANormal_Beige",
        "ZmbF_CitizenANormal_Blue",
        "ZmbM_CitizenASkinny_Blue",
        "ZmbM_CitizenASkinny_Grey",
        "ZmbM_CitizenASkinny_Red",
        "ZmbM_CitizenBFat_Blue",
        "ZmbM_CitizenBFat_Red",
        "ZmbM_CitizenBFat_Green",
        "ZmbF_CitizenBSkinny",
        "ZmbM_PrisonerSkinny",
        "ZmbM_FishermanOld_Blue",
        "ZmbM_FishermanOld_Green",
        "ZmbM_FishermanOld_Grey",
        "ZmbM_FishermanOld_Red",
        "ZmbM_JournalistSkinny",
        "ZmbF_JournalistNormal_Blue",
        "ZmbF_JournalistNormal_Green",
        "ZmbF_JournalistNormal_Red",
        "ZmbM_HikerSkinny_Blue",
        "ZmbM_HikerSkinny_Green",
        "ZmbM_HikerSkinny_Yellow",
        "ZmbF_HikerSkinny_Blue",
        "ZmbF_HikerSkinny_Grey",
        "ZmbF_HikerSkinny_Green",
        "ZmbF_HikerSkinny_Red",
        "ZmbF_SurvivorNormal_Blue",
        "ZmbF_SurvivorNormal_Red",
        "ZmbF_SurvivorNormal_White",
        "ZmbM_CommercialPilotOld_Blue",
        "ZmbM_CommercialPilotOld_Olive",
        "ZmbM_CommercialPilotOld_Brown",
        "ZmbM_MotobikerFat_Beige",
        "ZmbM_MotobikerFat_Black",
        "ZmbM_MotobikerFat_Blue",
        "ZmbM_VillagerOld_Blue",
        "ZmbM_VillagerOld_White",
        "ZmbM_SkaterYoung_Brown",
        "ZmbM_SkaterYoung_Green",
        "ZmbM_SkaterYoung_Grey",
        "ZmbF_SkaterYoung_Brown",
        "ZmbF_SkaterYoung_Striped",
        "ZmbF_SkaterYoung_Violet",
        "ZmbF_BlueCollarFat_Blue",
        "ZmbF_BlueCollarFat_Green",
        "ZmbF_BlueCollarFat_Red",
        "ZmbF_BlueCollarFat_White",
        "ZmbF_MechanicNormal_Beige",
        "ZmbF_MechanicNormal_Green",
        "ZmbF_MechanicNormal_Grey",
        "ZmbF_MechanicNormal_Orange",
        "ZmbM_MechanicSkinny_Blue",
        "ZmbM_MechanicSkinny_Grey",
        "ZmbM_MechanicSkinny_Green",
        "ZmbM_MechanicSkinny_Red",
        "ZmbM_ConstrWorkerNormal_Beige",
        "ZmbM_ConstrWorkerNormal_Black",
        "ZmbM_ConstrWorkerNormal_Green",
        "ZmbM_ConstrWorkerNormal_Grey",
        "ZmbM_HeavyIndustryWorker",
        "ZmbM_OffshoreWorker_Green",
        "ZmbM_OffshoreWorker_Orange",
        "ZmbM_OffshoreWorker_Red",
        "ZmbM_OffshoreWorker_Yellow",
        "ZmbM_HandymanNormal_Beige",
        "ZmbM_HandymanNormal_Blue",
        "ZmbM_HandymanNormal_Green",
        "ZmbM_HandymanNormal_Grey",
        "ZmbM_HandymanNormal_White",
        "ZmbM_Jacket_beige",
        "ZmbM_Jacket_black",
        "ZmbM_Jacket_blue",
        "ZmbM_Jacket_brown",
        "ZmbM_Jacket_greenchecks",
        "ZmbM_Jacket_grey",
        "ZmbM_Jacket_khaki",
        "ZmbM_Jacket_stripes",
        "ZmbF_PatientOld",
        "ZmbM_PatientSkinny",
        "ZmbF_ShortSkirt_beige",
        "ZmbF_ShortSkirt_brown",
        "ZmbF_ShortSkirt_green",
        "ZmbF_ShortSkirt_grey",
        "ZmbF_ShortSkirt_checks",
        "ZmbF_ShortSkirt_white",
        "ZmbF_ShortSkirt_yellow",
        "ZmbF_VillagerOld_Green",
        "ZmbF_VillagerOld_Red",
        "ZmbF_VillagerOld_White",
        "ZmbF_MilkMaidOld_Beige",
        "ZmbF_MilkMaidOld_Black",
        "ZmbF_MilkMaidOld_Grey",
        "ZmbM_ClerkFat_Grey",
        "ZmbM_ClerkFat_Khaki",
        "ZmbM_ClerkFat_White",
        "ZmbF_Clerk_Normal_Blue",
        "ZmbF_Clerk_Normal_White",
        "ZmbF_Clerk_Normal_Red",
        "ZmbF_ClerkFat_Black",
        "ZmbF_ClerkFat_GreyPattern",
        "ZmbF_ClerkFat_BluePattern",
        "ZmbF_ClerkFat_White",
        "ZmbM_SoldierNormal",
        "ZmbM_usSoldier_normal_Woodland",
        "ZmbM_usSoldier_normal_Desert",
        "ZmbM_usSoldier_Officer_Desert",
        "ZmbM_usSoldier_Officer_Convoy",
        "ZmbM_usSoldier_Heavy_Woodland",
        "ZmbM_PatrolNormal_PautRev",
        "ZmbM_PatrolNormal_Autumn",
        "ZmbM_PatrolNormal_Flat",
        "ZmbM_PatrolNormal_Summer",
        "ZmbM_NBC_Grey",
        "ZmbM_PolicemanFat",
        "ZmbF_PoliceWomanNormal",
        "ZmbM_PolicemanSpecForce",
        "ZmbM_PolicemanSpecForce_Heavy",
        "ZmbM_HunterOld_Autumn",
        "ZmbM_HunterOld_Spring",
        "ZmbM_HunterOld_Summer",
        "ZmbM_HunterOld_Winter",
        "ZmbM_ParamedicNormal_Blue",
        "ZmbM_ParamedicNormal_Green",
        "ZmbM_ParamedicNormal_Red",
        "ZmbM_ParamedicNormal_Black",
        "ZmbF_ParamedicNormal_Blue",
        "ZmbF_ParamedicNormal_Green",
        "ZmbF_ParamedicNormal_Red",
        "ZmbF_DoctorSkinny",
        "ZmbF_NurseFat",
        "ZmbM_DoctorFat",
        "ZmbM_NBC_Yellow",
        "ZmbM_FirefighterNormal",
        "ZmbM_priestPopSkinny",
        "ZmbM_Santa",
        "ZmbM_SkaterYoung_Blue",
        "ZmbF_CitizenANormal_Brown",
        "ZmbF_Clerk_Normal_Green",
        "ZmbF_JournalistNormal_White",
        "ZmbF_ShortSkirt_Black",
        "ZmbF_ShortSkirt_red",
        "ZmbF_ShortSkirt_stripes",
        "ZmbF_SurvivorNormal_Orange",
        "ZmbM_CitizenASkinny_Brown",
        "ZmbM_ClerkFat_Brown",
        "ZmbM_CommercialPilotOld_Grey",
        "ZmbM_VillagerOld_Green",
        "ZmbF_MilkMaidOld_Green",
        "ZmbF_VillagerOld_Blue",
        "ZmbM_FarmerFat_Beige",
        "ZmbM_Jacket_bluechecks",
        "ZmbM_Jacket_magenta",
        "ZmbF_JoggerSkinny_Red",
        "ZmbF_JoggerSkinny_Blue",
        "ZmbF_JoggerSkinny_Brown",
        "ZmbF_JoggerSkinny_Green",
        "ZmbM_JoggerSkinny_Red",
        "ZmbM_JoggerSkinny_Blue",
        "ZmbM_JoggerSkinny_Green",
        "ZmbM_Mummy",
        };
    }
    // aircraft carrier loot
    static TStringArray GetSpawnableGrenades()
    {
        return {
            "M67Grenade",
            "RGD5Grenade",
            "FlashGrenade",
            "M18SmokeGrenade_Red",
            "M18SmokeGrenade_Green",
            "M18SmokeGrenade_Yellow",
            "M18SmokeGrenade_Purple",
            "M18SmokeGrenade_White",
            "RDG2SmokeGrenade_Black",
            "RDG2SmokeGrenade_White",
            "ClaymoreMine",
            "LandMineTrap",
        };
    }
    static TStringArray GetSpawnableWeapons()
    {
        return {
        "ttscarl",
        "ttrpd",
        "FAL",
        "DUB_LAW",
        "DUB_RPG26",
        "DUB_PKM",
        "DUB_PPSH",
        "srp_aa12_basic"
        };
    }
    static TStringArray GetSpawnableOptics()
    {
        return {
            "StarlightOptic",
            "ACOGOptic_6x",
            "NailBox",
            "ESP_Tac_Craftsmen",
            "ESP_Long_Range",
            "ESP_Hunter",
            "ESP_Short_Range",
            "ESP_Spectre",
            "ESP_RedDot",
            "ESP_Holographic",
            "ESP_Holographic_Tan",
            "ESP_Scope3X",
            "ESP_Scope4X",
            "ESP_Aimpoint",
            "ESP_XPS3",
            "STG_OKP7",
        };
    }
    static TStringArray GetSpawnableMags()
    {
        return {
        "ttrpdmag",
        "Mag_STANAG_60Rnd",
        "Mag_STANAG_30Rnd",
        "Mag_FAMAS_25Rnd",
        "Mag_SVD_10Rnd",
        "Mag_VSS_10Rnd",
        "Mag_Saiga_5Rnd",
        "Mag_Saiga_8Rnd",
        "Mag_Saiga_Drum20Rnd",
        "srp_aa12_basic_mag"
        };
    }
    static TStringArray GetSpawnableAmmo()
    {
        return {
            "AmmoBox_556x45_20Rnd",
            "AmmoBox_556x45Tracer_20Rnd",
            "AmmoBox_357_20Rnd",
            "AmmoBox_545x39_20Rnd",
            "AmmoBox_545x39Tracer_20Rnd",
            "AmmoBox_12gaFlash_10Rnd",
            "AmmoBox_00buck_10rnd",
            "AmmoBox_12gaSlug_10Rnd",
            "AmmoBox_762x39_20Rnd",
            "AmmoBox_762x54_20Rnd",
        };
    }
    static TStringArray GetMiscHighTier()
    {
        return {
            "SRP_Mining_RawOre_Zinc",
            "SRP_Mining_RawOre_Coal",
            "SRP_Mining_RawOre_Silver",
            "SRP_ForgeIngot_Silver",
            "SRP_ForgeIngot_Zinc",
            "SRP_ForgeIngot_Brass",
            "DUB_Larpsword",
            "DUB_Throwingknife",
            "DUB_Lockswordns",
			"DUB_Lockshieldns",
            "DUB_SkeletalEmeraldRing",
			"DUB_Bronzemask",
			"DUB_Tribalmask",
			"DUB_RuneRing",
            "Winebottle_two",
            "SRP_PistolSuppressor_Golden",
            "ferguson",
            "tantosword",
            "ttl35",
            "DUB_Rapier",
            "DUB_Compressor",
            "SRP_BrownBottle",
            "DUB_BlunderPistol",
            "SRP_PictureFrame_ChasseGalerie",
            "NailBox",
            "Nail",
            "SRP_StimPackInjector_Espen",
            "SRP_StimPackInjector_Stag",
            "SRP_StimPackInjector_LocknSons",
            // "jmc_mjolnir",
            "Battery9V",
            "Whetstone",
            "Flaregun",
            "DUB_Fuse_1",
			"DUB_Fuse_2",
			"DUB_Fuse_3",
			"DUB_Fuse_4",
            "DUB_Fuse_5",
			"DUB_Fuse_6",
			"DUB_Fuse_7",
			"DUB_Fuse_8",
			"DUB_Fuse_9",
            "SRP_MortarBowl",
			"SRP_MortarPestle",
        };
    }
    static TStringArray GetBookList()
    {
        return {
        "SRP_ReadableBook_ArchivistWolfPack",
        "SRP_ReadableBook_IllusiveBunkerGuide",
        "SRP_ReadableBook_ArthursManifesto",
        "SRP_ReadableBook_TheBunkerShortStory",
        "SRP_ReadableBook_TheBooksOfVigo",
        "SRP_ReadableBook_HerbologyAndAlchemy",
        "SRP_ReadableBook_AlchemySociety_TaskList",
        "SRP_ReadableBook_TheCoalition",
        "SRP_ReadableBook_ThingsToKnowOnDeerIsle",
        "SRP_ReadableBook_HistoryOfCannibalism",
        "SRP_ReadableBook_HuntingOnDeerIsle",
        "SRP_ReadableBook_DrugDangers",
        "SRP_ReadableBook_JamestownHistory",
        "SRP_ReadableBook_SkullHordeHistory",
        "SRP_ReadableBook_Sanctuary",
        "SRP_ReadableBook_CodeBreakers",
        "SRP_ReadableBook_CollectiveHistory",
        "SRP_ReadableBook_RadioEtiquette",
        "SRP_ReadableBook_Premonition",
        "SRP_ReadableBook_SaltyCougar",
        "SRP_ReadableBook_MutantHistory",
        "SRP_ReadableBook_BanditryGuide",
        "SRP_ReadableBook_NavigationProtocols",
        "SRP_ReadableBook_CaptainHarlockSpacePirate",
        "SRP_ReadableBook_BiomassResearch",
        "SRP_ReadableBook_FoodInTheForests",
        "SRP_ReadableBook_STAGStarvation",
        "SRP_ReadableBook_EspenParenting",
        "SRP_ReadableBook_GiftFromLordLight",
        "SRP_ReadableBook_RidersOfPortland",
        "SRP_ReadableBook_HomoMutagenis",
        "SRP_ReadableBook_AlchemyHints",
        "SRP_ReadableBook_FoolsGuideToMedicine",
        "SRP_ReadableBook_CompendiumOfArtefacts",
        "SRP_ReadableBook_TheBasicGuidebook",
        "SRP_ReadableBook_AdeptusMechanicusPrayerBookV1",
        "SRP_ReadableBook_AdeptusMechanicusPrayerBookV2",
        "SRP_ReadableBook_HarryPotterSorcerersStone",
        "SRP_ReadableBook_HortonHearsAWho",
        "SRP_ReadableBook_RedOctober",
        "SRP_ReadableBook_Dune",
        "SRP_ReadableBook_DnDHandbook",
        "SRP_ReadableBook_OldManAndTheSea",
        "SRP_ReadableBook_ZombieSurvivalGuide",
        "SRP_ReadableBook_AltarTechnologies",
        "SRP_ReadableBook_UnderstandingArbitration",
        "SRP_ReadableBook_TheImperialEmpire",
        "SRP_ReadableBook_BlacksmithingSociety",
        "BookBible",
        "BookTheWarOfTheWorlds",
        "BookAroundTheWorldIn80Days",
        "BookCrimeAndPunishment",
        "BookTheMetamorphosis",
        "BookTheRaven",
        "BookTheArtOfWar",
        "BookRobinsonCrusoe",
        "BookRussian",
        "BookRussianCheatSheet",
        "BookThePictureOfDorianGray",
        "BookThePitAndThePendulum",
        "BookTheTimeMachine",
        "BookTheCountryOfTheBlind",
        "BookBilaNemoc",
        "BookYouth",
        "BookVerwandlung",
        "BookTheJungleBook",
        "BookTheBrothersKaramazov",
        "BookTheCallOfCthulhu",
        "BookTheShunnedHouse",
        "BookTheHoundOfTheBaskervilles",
        "BookTonyAndTheBeetles",
        "BookTheCosmicComputer",
        "BookATravelerInTime",
        "BookTheVariableMan",
        "BookTheOutlet",
        "BookTheBarrier",
        "BookTheDesertOfWheat",
        "BookFlyingURanch",
        "BookCassidysRustlerRoundUp",
        "BookLonesomeLand",
        "BookTrailin",
        "BookRonickyDoone",
        "BookBettyZane",
        "BookATexasMatchmaker",
        "BookTheThunderBird",
        "BookBlackJack",
        "BookTheLastTrail",
        "BookSelectedStories",
        "BookTheHeritageOfTheSioux",
        "BookDesertGold",
        "BookTheHiddenChildren",
        "BookTheLastOfThePlainsmen",
        "BookGunmansReckoning",
        "BookSkyrider",
        "BookSpinifexAndSand",
        "BookSunsetPass",
        "BookTheCaveOfGold",
        "BookTheDayOfTheBeast",
        "BookTheQuirt",
        "BookAVoyageToArcturus",
        "BookWealthOfNations",
        "BookAndersensFairyTales",
        "BookBlackBeauty",
        "BookBuddenbrooks",
        "BookDeadSouls",
        "BookErewhon",
        "BookFatherGoriot",
        "BookGreatExpectations",
        "BookGulliversTravels",
        "BookHeartOfDarkness",
        "BookHerland",
        "BookIvanhoe",
        "BookKidnapped",
        "BookLaChartreuseDeParme",
        "BookLordJim",
        "BookMadameBovary",
        "BookNostromo",
        "BookNaturalSelection",
        "BookTheMetamorphosesOfOvid",
        "BookMobyDick",
        "BookKingLear",
        "BookLaDbcle",
        "BookTheCanterburyTales",
        "BookTheRightsOfWoman",
        "BookToTheInteriorOfTheEarth",
        "BookNjalsSaga",
        "BookTheTrial",
        "BookDonQuixote",
        "BookPhilosophiaeNaturalis",
        "BookPrideAndPrejudice",
        "BookRasselas",
        "BookScaramouche",
        "BookSonsAndLovers",
        "BookTheCallOfTheWild",
        "BookTheComingRace",
        "BookTheIslandOfDoctorMoreau",
        "BookTheMahabharataOfKrishna",
        "BookTheManWhoWasThursday",
        "BookThePossessed",
        "BookThePrisonerOfZenda",
        "BookAPrincessOfMars",
        "BookKingSolomonsMines",
        "BookMiddlemarch",
        "BookTheHouseOfTheSevenGables",
        "BookTheMonkARomance",
        "BookTheJustifiedSinner",
        "BookTheRedBadgeOfCourage",
        "BookADollsHouse",
        "BookGilgameshEpic",
        "BookAnnaKarenina",
        "BookCandide",
        "BookFaust",
        "BookHinduLiterature",
        "BookHunger",
        "BookJapaneseLiterature",
        "BookLeRougeEtLeNoir",
        "BookTheDecameron",
        "BookTheGiacomoLeopardi",
        "BookAliceInWonderland",
        "BookTheScarletPimpernel",
        "BookTheThreeMusketeers",
        "BookTheTurnOfTheScrew",
        "BookTranslationsOfShakuntala",
        "BookTreasureIsland",
        "BookUlysses",
        "BookUncleSilas",
        "BookTheAeneid",
        "BookWarAndPeace",
        "BookWielandOrTheTransformation",
        "BookWutheringHeights",
        "BookCinqSemainesEnBallon",
        "BookDracula",
        "BookDasNibelungenlied",
        "BookTheLastMan",
        "BookRomeoUndJulia",
        "BookFrankenstein",
        "BookDeLaTerreLaLune",
        "BookLleMystrieuse",
        "BookLaComdieHumaine",
        "BookLesCorneilles",
        "Book20000LieuesSousLesMers",
        "BookThreeMenInABoat",
        };
    }
    static TStringArray GetScrollList()
    {
        return {
        "SRP_ReadableScroll_CarePoem",
        "SRP_ReadableScroll_DarknessPoem",
        "SRP_ReadableScroll_DollfaceHistory",
        "SRP_ReadableScroll_Crafting_Carpentry",
        "SRP_ReadableScroll_Crafting_Farming",
        "SRP_ReadableScroll_Crafting_Generic",
        "SRP_ReadableScroll_Crafting_Tailoring",
        "SRP_ReadableScroll_Crafting_AlchemyHelp",
        "SRP_ReadableScroll_Crafting_Alchemy0",
        "SRP_ReadableScroll_Crafting_Alchemy1",
        "SRP_ReadableScroll_Crafting_Alchemy2",
        "SRP_ReadableScroll_Crafting_Alchemy3",
        "SRP_ReadableScroll_Crafting_Alchemy4",
        "SRP_ReadableScroll_Crafting_Alchemy5",
        "SRP_ReadableScroll_Crafting_Alchemy6",
        "SRP_ReadableScroll_Crafting_Weapon",
        "SRP_ReadableScroll_History_Collective",
        };
    }
    static TStringArray GetTeddyBearList()
    {
        return {
            "Bear_Arbi",
            "Bear_FrenchBread",
            "Bear_FryingPan",
            "Bear_Gloomy",
            "Bear_Hat",
            "Bear_SaltyCougar",
            "Bear_Voodoo",
            "Bear_Zombie",
            "Bear_Axe",
            "Bear_Guts",
            "Bear_Cheddar",
            "Bear_Maple",
            "Bear_Trippy",
            "Bear_Golden",
            "Bear_Miles",
            "Bear_Chip",
            "Bear_Emporium",
            "Bear_Gray",
            "Bear_Monolith",
            "Bear_Pig",
            "Bear_Sierb",
            "Bear_GNB",
            "Bear_Arbiters",
            "Bear_TheStash",
            "Bear_Altar",
            "Bear_Teddys",
            "Bear_Salty",
            "Bear_Arcadia",
            "Bear_Dawnbreak",
            "Bear_Hazey",
            "Bear_Xmas",
        };
    }
    static TStringArray GetKitList()
    {
        return {
            "SRP_Furniture_StoneBust_Default_Kit",
            "SRP_Furniture_StoneBench_Default_Kit",
            "SRP_Furniture_StoneColumn_Default_Kit",
            "SRP_Furniture_StoneStatue_Angel_Default_Kit",
            "SRP_Furniture_StoneStatue_Death_Default_Kit",
            "SRP_Furniture_StoneStatue_Ganesh_Default_Kit",
            "SRP_Furniture_StoneStatue_Gargoyle_Default_Kit",
            "SRP_Furniture_StoneStatue_Guardian_Default_Kit",
            "SRP_Furniture_StoneStatue_Pirate_Default_Kit",
            "SRP_Furniture_StoneStatue_Woman_Default_Kit",
            "SRP_Furniture_StoneStatue_StJacob_Default_Kit",
            "SRP_ComputerTerminalWide_kit",
			"SRP_DrugWorkbench_Kit",
			"SRP_LatheWorkbench_Kit",
			"DUB_Surgerykit",
			"SRP_ComputerTerminalslim_kit",
            "SRP_ChessBoard_Kit",
            "Land_SRP_Fortifications_PalisadeTower_Ramp_Kit",
            "Land_SRP_Fortifications_PalisadeWall_TentSmall_Kit",
            "Land_SRP_Fortifications_PalisadeWall_Fence_Kit",
            "Land_SRP_Fortifications_PalisadeWall_FenceDouble_Kit",
            "Land_SRP_Fortifications_PalisadeTower_Platform_Kit",
            "Land_SRP_Fortifications_PalisadeTower_PlatformDouble_Kit",
            "Land_SRP_Fortifications_PalisadeTower_PlatformTriple_Kit",
            "Land_SRP_Fortifications_PalisadeTower_Stairs_Kit",
            "Land_SRP_Fortifications_PalisadeWall_TentLarge_Kit",
            "Land_SRP_Fortifications_PalisadeWall_Planks_Kit",
            "Land_SRP_Fortifications_PalisadeWall_PlanksDouble_Kit",
            "Land_SRP_Fortifications_PalisadeTower_Small_Kit",
            "Land_SRP_Fortifications_PalisadeWall_Gate_Kit",
            "Land_SRP_Fortifications_PalisadeWall_FenceLog_Kit",
            "Land_SRP_Fortifications_PalisadeWall_FenceLogDouble_Kit",
            "Land_SRP_Fortifications_PalisadeTower_LargeStairs_Kit",
            "Land_SRP_Fortifications_PalisadeTower_LargeLadder_Kit",
            "Land_SRP_Fortifications_PalisadeWall_FenceLogSpike_Kit",
        };
    }
};