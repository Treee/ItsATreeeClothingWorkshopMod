modded class DayZIntroScene
{
	void DayZIntroScene()
	{
        SetWeather();
		SpawnCharacters();
		SpawnItems();
        CreateLoadedCharacter();
	}

    void CreateLoadedCharacter()
    {
        string root_path = "cfgCharacterScenes " + g_Game.GetWorldName();

		int count = g_Game.ConfigGetChildrenCount(root_path);
		int index = Math.RandomInt(0, count - 1);
		string childName;
		g_Game.ConfigGetChildName(root_path, index, childName);

		string scene_path 	   = root_path + " " + childName;
		vector playerPos  	   = g_Game.ConfigGetVector(scene_path + " playerPos");
		vector camPos          = g_Game.ConfigGetVector(scene_path + " camPos");
		vector playerDir       = g_Game.ConfigGetVector(scene_path + " playerDir");
		float fov 		  	   = g_Game.ConfigGetFloat(scene_path + " fov");

		GetGame().ObjectDelete( m_Camera );
		Class.CastTo(m_Camera, g_Game.CreateObject("staticcamera", camPos, true));

		if (m_Camera)
		{
			m_Camera.SetPosition(Vector(m_Camera.GetPosition()[0] ,m_Camera.GetPosition()[1], m_Camera.GetPosition()[2]));
			m_Camera.LookAt(playerPos);
			m_Camera.SetFOV(fov);
			m_Camera.SetFocus(5.0, 0.0);
			m_Camera.SetActive(true);
		}
		m_Character = new IntroSceneCharacter();
		m_Character.LoadCharacterData(playerPos, playerDir);
    }

	void SpawnSceneObject(string classname, vector position, vector rotation)
	{
        //============================================================== client only, no AI, no physics
		EntityAI sceneEntity;
        if (!Class.CastTo(sceneEntity, GetGame().CreateObject(classname, position, true, false, false)))
            return;

		sceneEntity.SetPosition(position);
		sceneEntity.SetOrientation(rotation);

		if(classname == "Fireplace")
		{
            FireplaceBase fireplace;
            if (!Class.CastTo(fireplace, sceneEntity))
                return;

			fireplace.GetInventory().CreateAttachment("Bark_Oak");
			fireplace.GetInventory().CreateAttachment("BandageDressing");
			fireplace.GetInventory().CreateAttachment("Rag");
			fireplace.GetInventory().CreateAttachment("Paper");
			fireplace.GetInventory().CreateAttachment("Firewood");
			fireplace.GetInventory().CreateAttachment("WoodenStick");
			fireplace.SetStoneCircleState(true);
			fireplace.StartFire(true);
		};

		if (classname == "DUB_FlagFrame")
			sceneEntity.GetInventory().CreateAttachment(GetSRPFlags().GetRandomElement());

		if (classname == "Chemlight_White")
        {
            Chemlight_ColorBase light;
            if (Class.CastTo(light, sceneEntity))
			    light.GetCompEM().SwitchOn();
        }


		if (classname == "SRP_GunWall_Fence")
		{
            int numGuns = Math.RandomIntInclusive(3,10);
            for (int i = 0; i < numGuns; i++)
            {
			    sceneEntity.GetInventory().CreateAttachment(GetSRPGuns().GetRandomElement());
            }
		};
	};

	void SpawnItems()
	{
		//FirstScene
		SpawnSceneObject(GetSRPSigns().GetRandomElement(), "5894.4 9.4498 13560.3", "0.000000 0.000000 0.000000");
		SpawnSceneObject(GetSRPProfessions().GetRandomElement(), "5886.59 6.43724 13565.8", "-90.00000 0.000000 0.000000");
		SpawnSceneObject(GetSRPBooks().GetRandomElement(), "5889.5 6.5 13555", "29.00000 -85.000000 -15.500000");
		SpawnSceneObject(GetSRPBanners().GetRandomElement(), "5885.19 6.86323 13573.5", "0.000000 0.000000 0.000000");
		SpawnSceneObject(GetSRPArtifacts().GetRandomElement(), "5885.31 5.93901 13559.5", "155.557 0.000000 0.000000");
		SpawnSceneObject("DUB_FlagFrame", "5892.3 7.84724 13561.2", "0.000000 0.000000 0.000000");
		SpawnSceneObject("SRP_Furniture_OldWoodenChair", "5891 6.48 13557.5", "25.5 0.000000 0.000000");
		SpawnSceneObject("Fireplace", "5888.93 10.0055 13548.6", "157.13 90.000000 0.000000");
		SpawnSceneObject("SRP_GunWall_Fence", "5890.62 7.27561 13562", "8.000000 0.000000 0.000000");
	};

	void SpawnCharacters()
	{
		//FirstScene
        CreateNPC(GetGame().CreateRandomPlayer(), "5887.93 6.13426 13563.2", "157.5 0.000000 0.000000", true, EmoteSurAnmGunOnShoulder.CMD_GESTUREFB_SAGunOnShoulder, DayZPlayerConstants.STANCEMASK_ERECT);
        CreateNPC(GetGame().CreateRandomPlayer(), "5893.87 6.41062 13562.1", "-95.0 0.000000 0.000000", false, EmoteSurAnmOpreni1.CMD_GESTUREFB_Opreni1, DayZPlayerConstants.STANCEMASK_ERECT);
        CreateNPC(GetGame().CreateRandomPlayer(), "5890.8 6.61215 13557.0", "193.008 0.000000 0.000000", false, EmoteSurAnmSitNew.CMD_GESTUREFB_SitNew, DayZPlayerConstants.STANCEMASK_ERECT);
	};

    void CreateNPC(string npcClassName, vector position, vector orientation, bool hasGun, int emoteActionId, int emoteStanceMask)
    {
        PlayerBase player;
        if (!Class.CastTo(player, GetGame().CreateObject(npcClassName, position, true, false, false)))
            return;

		player.SetOrientation(orientation);

		player.GetInventory().CreateInInventory(GetSRPGlasses().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPGloves().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPHeadgear().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPTops().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPArmbands().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPVests().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPBottoms().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPFootwear().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPBelt().GetRandomElement());
		player.GetInventory().CreateInInventory(GetSRPBackpack().GetRandomElement());

        if (hasGun)
		    player.GetHumanInventory().CreateInHands(GetSRPGuns().GetRandomElement());

		player.StartCommand_Action(emoteActionId, EmoteCB, emoteStanceMask);
    }

    void SetWeather()
    {
        float randovercast = Math.RandomFloatInclusive(0, 1);
        float randrain = Math.RandomFloatInclusive(0, 0);
        float randfog = Math.RandomFloatInclusive(0, 1);
        g_Game.GetWorld().SetDate(2005, Math.RandomIntInclusive(1, 12), Math.RandomIntInclusive(1, 28), Math.RandomIntInclusive(0, 24),Math.RandomIntInclusive(0, 60));

        m_Weather = g_Game.GetWeather();
        m_Weather.GetOvercast().SetLimits( randovercast, randovercast );
        m_Weather.GetRain().SetLimits( randrain, randrain );
        m_Weather.GetFog().SetLimits( randfog, randfog );

        m_Weather.GetOvercast().Set( randovercast, 0, 0);
        m_Weather.GetRain().Set( randrain, 0, 0);
        m_Weather.GetFog().Set( randfog, 0, 0);
    }

    TStringArray GetSRPFlags()
    {
        return { "Flag_ROP","Flag_Sanctuary","Flag_Bastion","Flag_Wardens","Flag_Sundown","Flag_FAST","Flag_NewOrder","Flag_WolfPack","Flag_CityOfPortland","Flag_Patriots","Flag_SilkRoad","Flag_Palf","Flag_Reaperz","Flag_Collective","Flag_NewHaven","Flag_JamesTown","Flag_Legion","Flag_TMP","Flag_Alliance","Flag_RedMilitia","Flag_Betrayed","Flag_AereSkjold","Flag_Brotherhood","Flag_Chivalrous","Flag_DazeBitch","Flag_RepublicOfEden","Flag_Cerberus","Flag_GuardianAngels","Flag_BlackPalm","Flag_Roanoke","Flag_CorruptSociety","Flag_RavensWatch","Flag_ScarletGuard","Flag_SaltyCougar","Flag_CougarTown","Flag_Mountaineers","Flag_Ghost","Flag_FreedomFoxes","Flag_ArdentKeepers","Flag_TSF","Flag_Winchester","Flag_Pathfinders","Flag_Duskar","Deaths_Fear_Flag","The_Lords_Of_Dogtown_Flag","The_Bears_Flag","The_Arbiters_Flag","NewMoon_Flag","Shipwrecked_Flag","GeneralAssembly_Flag","BTYR_Flag","Nobodies_Flag","Vesuvius_Flag","Charlemagne_Flag","Lamplight_Flag","Remnants_Flag","PortlandSettlement_Flag","SakeofHumanity_Flag","Salvation_Flag","Flag_Salvation_2","Hector_flag","Flag_NewDuskar","Flag_Syndicate","Flag_TheWharf","Burleeville_flag","BABAYAGA_flag","Flag_emporium","WharfMRD_flag","KnightsHospitallers_flag","Flag_unityfreedom","Flag_disciples","Flag_theorder","WTC_Flag","3rdBattalion_flag","Flag_OTF","Flag_Liberty","Flag_RedactedRaiders","BlackRaven_flag","Optimists_flag","WolvesHollow_flag","TheMeetingPlace_flag","Flag_Northware","Flag_Highwaymen","Flag_Arcadia","Flag_BrotherhoodofFoundFamily","Flag_BlackCompany","Flag_UnknownSurvivalists","Flag_TheIncubi","Flag_NewCougarTown","Flag_TheRavenSyndicate","Flag_TheGhosts","Flag_StonePeak","MagisterMortalis_flag","Flag_SolesNaturae","Flag_OldField","Flag_TheGhostsTrader","Flag_Thevisionaries","Flag_TheHarvesters","Flag_ProspectShores","Flag_TheTribe","Flag_TheInquisition","TheFallen_Flag","blackrose_flag","Flag_TheOneils","Terminus_Flag","TransitionalAuthority_Flag","Flag_TheMercenariesofDeath","Flag_TheUnknown","Flag_TheSommerFamily","Flag_TheHolyHosers","Flag_TheScouts","USNavy_Flag","Flag_LaughingCougar","Flag_DocksideAce","Flag_Espada","Flag_FreshAir","Flag_SIERB","Flag_BlackWater","Flag_SunshineFarms","Flag_SonOfOdin","CultofSins_Flag","Flag_TheVanguard","Flag_NCR","Flag_Tarandus","Flag_TheHomestead","Flag_DawnBreak","Flag_DICKM","Flag_BlackSwan","Flag_Responsum","Flag_GoodNeighbor","Flag_WhiteWolves","Flag_Garrison","Flag_NewBritannia","Flag_ChurchOfTheChosen","Flag_MinuteMen" };
    }
    TStringArray GetSRPGuns()
    {
        return { "ESP_G36C","ESP_M110","ESP_M110_Tan","ESP_M110_Green","ESP_M14","ESP_M14_Black","ESPAR22","ESPAR47","ESP_AR15","ESP_AR15_Tan","ESP_SA80a","tttt33","ttdelisle","ttkrp39","ttmuser1914","ttagram","ttbar","ttp38","ttstg44","ttscarl","ttrpd","ttitacha","ttbecker","ttak458poli","ttak458","ttp90","tt870","ttsok94","ttl35","ttr700","kar98","higgins","ots71","marlin","aek","ferguson","ttmakarov","ttgarand","avs36","ttmp5" };
    }
    TStringArray GetSRPBanners()
    {
        return { "SRP_Riders_Banner","SRP_Sanctuary_Banner","SRP_Madhatter_Banner","SRP_Chunky4515_Banner","SRP_Ghost1687_Banner","SRP_Kyote_Banner","SRP_Smokey_Banner","SRP_Banner_Arbiters","SRP_Banner_Illusive","SRP_Sav_Banner","SRP_Ant_Banner","SRP_Skunk_Banner","SRP_Lukas_Banner","SRP_Cougar_Banner","SRP_Salvation_Banner","SRP_Luci_Banner","SRP_JoystickRampage_Banner","SRP_delta_Banner","SRP_Wolfbeard_Banner","SRP_AlexWhite_Banner","SRP_JtJack_Banner","SRP_Kain_Banner","SRP_Ragnar_Banner","SRP_Farmer_Banner","SRP_ThomasJones_Banner","SRP_Spaceman_Banner","SRP_gpiercy_Banner","SRP_Banner_Nejheran","SRPInvestor_Banner_HighImChicken","SRPInvestor_Banner_LeopoldFrost","SRPInvestor_Banner_Alpaca5982" };
    }
    TStringArray GetSRPSigns()
    {
        return {"SRP_CollectableSign_BeerLiquor","SRP_CollectableSign_BestBurgers","SRP_CollectableSign_Cinema","SRP_CollectableSign_CocaCola","SRP_CollectableSign_Female","SRP_CollectableSign_Female","SRP_CollectableSign_FreshBakery","SRP_CollectableSign_IceCream","SRP_CollectableSign_male","SRP_CollectableSign_OpenClosed","SRP_CollectableSign_Pepsi","SRP_CollectableSign_Popcorn","SRP_CollectableSign_Seafood","SRP_CollectableSign_Staff","SRP_CollectableSign_Starbucks","SRP_CollectableSign_Thankyou","SRP_CollectableSign_CoffeeBean","SRP_CollectableSign_Coffee","SRP_CollectableSign_Deserts","SRP_CollectableSign_Donuts","SRP_CollectableSign_Pizza","SRP_CollectableSign_Soda"};
    }
    TStringArray GetSRPProfessions()
    {
        return {"SRP_StoneForgeWorkbench","SRP_AdvancedStoneForgeWorkbench","SRP_AdvancedWorkbench","SRP_LatheWorkbench","SRP_WornWorkbench","SRP_WornWorkbench_Metal"};
    }
    TStringArray GetSRPBooks()
    {
        return {"SRP_ReadableBook_HuntingOnDeerIsle","SRP_ReadableBook_DrugDangers","SRP_ReadableBook_JamestownHistory","SRP_ReadableBook_SkullHordeHistory","SRP_ReadableBook_Sanctuary","SRP_ReadableBook_CodeBreakers","SRP_ReadableBook_CollectiveHistory","SRP_ReadableBook_RadioEtiquette"};
    }
    TStringArray GetSRPArtifacts()
    {
        return {"Land_srp_artifact_totem_wolf","Land_srp_artifact_totem_monkey","Land_srp_artifact_totem_wood","Land_srp_artifact_totem_face"};
    }
    TStringArray GetSRPGlasses()
    {
        return {"AviatorGlasses","DesignerGlasses","ThickFramesGlasses","ThinFramesGlasses","Round_Glasses","Round_Glasses_Black","SportGlasses_Black","SportGlasses_Blue","SportGlasses_Green","SportGlasses_Orange"};
    }
    TStringArray GetSRPGloves()
    {
        return {"Fingerless_Gloves","Fingerless_Gloves_Brown","Fingerless_Gloves_Wool","Fingerless_Gloves_Wool_Grey","Fingerless_Gloves_Wool_Black","WorkingGloves_Black","WorkingGloves_Beige","WorkingGloves_Brown","WorkingGloves_Yellow"};
    }
    TStringArray GetSRPHeadgear()
    {
        return {"BaseballCap_MilitaryPatrolBlack","BaseballCap_MilitaryPatrolBlack_Backwards","BaseballCap_MilitaryPatrolGreen","BaseballCap_MilitaryPatrolGreen_Backwards","PrisonerCap_Brown","Bandana_RedPattern","Bandana_BlackPattern","Bandana_PolkaPattern","Bandana_GreenPattern","Bandana_CamoPattern","CowboyHat_Brown","CowboyHat_black","CowboyHat_darkBrown","CowboyHat_green","BoonieHat_Black","BoonieHat_Blue","BoonieHat_NavyBlue","BoonieHat_Olive","BoonieHat_Orange","BoonieHat_Red","BoonieHat_Tan"};
    }
    TStringArray GetSRPTops()
    {
        return {"TShirt_OrangeWhiteStripes","TShirt_RedBlackStripes","TShirt_Red","TShirt_Blue","TShirt_White","TShirt_Grey","TShirt_Beige","TShirt_Black","TShirt_Green","Shirt_RedCheck","Shirt_BlueCheckBright","Shirt_BlueCheck","Shirt_WhiteCheck","Shirt_PlaneBlack","Shirt_GreenCheck","MedicalScrubsShirt_Blue","MedicalScrubsShirt_White","MedicalScrubsShirt_Green","TacticalShirt_Grey","TacticalShirt_Tan","TacticalShirt_Black","TacticalShirt_Olive","RidersJacket_Black","BomberJacket_Maroon","BomberJacket_SkyBlue","BomberJacket_Blue","BomberJacket_Grey","BomberJacket_Brown","BomberJacket_Black","BomberJacket_Olive","PoliceJacket","Sweater_Gray","Sweater_Blue","Sweater_Green","Sweater_Red","Shirt_BlueCheck","Shirt_BlueCheckBright","Shirt_GreenCheck","Shirt_RedCheck","Shirt_WhiteCheck","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","HikingJacket_Black","HikingJacket_Blue","HikingJacket_Red","HikingJacket_Green","Raincoat_Orange","Raincoat_Green","Raincoat_Yellow","Raincoat_Pink","Raincoat_Red","Raincoat_Blue","Raincoat_Black","ParamedicJacket_Blue","ParamedicJacket_Crimson","ParamedicJacket_Green","FirefighterJacket_Beige","FirefighterJacket_Black","HuntingJacket_Autumn","HuntingJacket_Brown","HuntingJacket_Spring","HuntingJacket_Summer"};
    }
    TStringArray GetSRPArmbands()
    {
        return {"Armband_Bandit","Armband_Blacker","Armband_DarkerBluer","Armband_DarkerPurpler","Armband_Greener","Armband_DarkerGreyer","Armband_Bluer","Armband_Greyer","Armband_Lime","Armband_Oranger","Armband_Pinker","Armband_Purpler","Armband_Redder","Armband_Teal","Armband_Yellower","MassArmbandDouble_White","MassArmbandDouble_Yellow","MassArmbandDouble_Orange","MassArmbandDouble_Red","MassArmbandDouble_Green","MassArmbandDouble_Pink","MassArmbandDouble_Blue","MassArmbandDouble_Black","MassArmbandDouble_Smiley","Armband_ROP","Armband_Sanctuary","Armband_Bastion","Armband_NewHaven","Armband_TheMarketplace","Armband_Collective","SaltyCougars_Armband","Armband_Pathfinders","TSF_armband","The_Arbiters_Black","Armband_Betrayed","Armband_Stagnum","armband_Salvation","Armband_NewDuskar","Armband_NewHaven","Armband_Enclave","Highwaymen_armband"};
    }
    TStringArray GetSRPVests()
    {
        return {"PoliceVest","HuntingVest","PressVest_Blue","PressVest_LightBlue","UKAssVest_Black","UKAssVest_Khaki","UKAssVest_Olive","HighCapacityVest_Black","HighCapacityVest_Olive","HuntingVest","DUB_Puvervest_Blue","DUB_Puffervest_Green","DUB_Puffervest_Red","SRP_JPC_Vest_Green","SRP_JPC_Vest_Tan","SRP_JPC_Vest_Black","SRP_Tac_Vest_Black","SRP_Tac_Vest_Sheriff","SRP_Tac_Vest_Green","SRP_Army_Vest_1_Green","SRP_Army_Vest_1_Tan","SRP_Army_Vest_1_Black","SRP_Army_Vest_2_Green","SRP_Army_Vest_2_Tan","SRP_Army_Vest_2_Black" };
    }
    TStringArray GetSRPBottoms()
    {
        return {"MedicalScrubsPants_Blue","MedicalScrubsPants_White","MedicalScrubsPants_Green","PolicePants","Jeans_Black","Jeans_Blue","Jeans_Brown","Jeans_Green","Jeans_Grey","Jeans_BlueDark","CargoPants_Beige","CargoPants_Black","CargoPants_Blue","CargoPants_Green","CargoPants_Grey","HunterPants_Autumn","HunterPants_Brown","HunterPants_Spring","HunterPants_Summer","ParamedicPants_Blue","ParamedicPants_Crimson","ParamedicPants_Green","FirefightersPants_Beige","FirefightersPants_Black","SlacksPants_Beige","SlacksPants_Black","SlacksPants_Blue","SlacksPants_Brown","SlacksPants_DarkGrey","SlacksPants_Khaki","SlacksPants_LightGrey","SlacksPants_White","ShortJeans_Black","ShortJeans_Blue","ShortJeans_Brown","ShortJeans_Darkblue","ShortJeans_Green","ShortJeans_Red"};
    }
    TStringArray GetSRPFootwear()
    {
        return {"High_Knee_Sneakers","High_Knee_Sneakers_Black","AthleticShoes_Blue","AthleticShoes_Black","AthleticShoes_Brown","AthleticShoes_Green","AthleticShoes_Grey","HikingBoots_Brown","HikingBoots_Black","HikingBootsLow_Black","HikingBootsLow_Blue","HikingBootsLow_Beige","HikingBootsLow_Grey","Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","JoggingShoes_Black","JoggingShoes_Blue","JoggingShoes_Red","JoggingShoes_Violet","JoggingShoes_White","Sneakers_Black","Sneakers_Gray","Sneakers_Green","Sneakers_Red","Sneakers_White","MassBurlapShoesB","MassBurlapShoesD","MassRagShoesD","MassRagShoesB"};
    }
    TStringArray GetSRPBelt()
    {
        return {"CivilianBelt","MilitaryBelt","SRP_PoliveBelt","SRP_Pouch_Belt","SRP_Holster_Belt","SRP_Military_Belt_Tan","SRP_Military_Belt_Green","SRP_Military_Belt_Black","SRP_TacticalBelt_Green","SRP_TacticalBelt_Tan","SRP_TacticalBelt_Black"};
    }
    TStringArray GetSRPBackpack()
    {
        return {"SRP_MessengerBag_Tan","SRP_MessengerBag_Brown","SRP_MessengerBag_Pink","SRP_MessengerBag_Blue","SRP_HuntBag","SRP_Rolltop_Bag","SRP_Rifle_Bag_Green","SRP_Rolltop_Bag","CourierBag","FurCourierBag","ImprovisedBag","FurImprovisedBag"};
    }
}