modded class DayZGame
{
  protected ref SRPFishingConfig m_SRPFishingConfig;

  void ~DayZGame()
  {
    delete m_SRPFishingConfig;
  }

  void SetSRPFishingConfig(SRPFishingConfig config)
  {
    Print("Survivalists_Fishing Settings Received From Server");
    m_SRPFishingConfig = config;
  }

  SRPFishingConfig GetSRPFishingConfig()
  {
    if (!m_SRPFishingConfig)
    {
      if (!FileExist("$profile:\\Survivalists_Fishing"))
      {
        MakeDirectory("$profile:\\Survivalists_Fishing");
      }
      if (!FileExist("$profile:\\Survivalists_Fishing\\SRPFishingConfig.json")) 
      {
        m_SRPFishingConfig = new SRPFishingConfig();

        m_SRPFishingConfig.m_FishingJunk = new ref array<ref SRPFishingJunk>;
        // Salt water junk
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Paper"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Fabric"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Rag"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "BurlapStrip"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Bark_Oak"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Bark_Birch"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Rope"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "WaterBottle"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "CamoNet"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "Netting"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "GiftWrapPaper"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "DuctTape"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "HatchbackWheel"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "HatchbackDoors_Driver"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "SeaChest"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "SmallProtectorCase"));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.1, "LargeTent")); 
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.1, "AmmoBox")); 
        // fresh water junk
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Paper", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Fabric", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Rag", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Rope", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "BurlapStrip", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Bark_Oak", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(1, "Bark_Birch", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "WaterBottle", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "Netting", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "GiftWrapPaper", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.5, "WoodenCrate", true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "MediumTent",true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "SmallProtectorCase",true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "PartyTent",true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "HatchbackWheel",true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.25, "HatchbackDoors_Driver",true));
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.1, "CarTent",true));      
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.1, "LargeTent",true));      
        m_SRPFishingConfig.m_FishingJunk.Insert(new SRPFishingJunk(0.1, "AmmoBox",true));      


        m_SRPFishingConfig.m_FishCatches = new ref array<ref SRPFishCatch>;
        // FRESHWATER
        SRPFishCatch fish = new SRPFishCatch("Bitterlings", 1, true);
        fish.m_FishColors = {""};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("Carp", 1, true);
        fish.m_FishColors = {""};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_TroutFish", 1, true);
        fish.m_FishColors = {"Brown","Blue","Red","Yellow"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.25, 0.10, 0.03};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_MutantFish", 0.1, true, true);
        fish.m_FishColors = {"Red","Blue","Green","Yellow"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.25, 0.10, 0.03};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_SplakeFish", 0.5, true);
        fish.m_FishColors = {"Red","Blue","Green","Yellow","Purple"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.50, 0.25, 0.10, 0.03};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_PerchFish", 0.5, true);
        fish.m_FishColors = {"Red","Blue","Green","Yellow","Silver"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.50, 0.25, 0.10, 0.03};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_TilapiaFish", 0.25, true);
        fish.m_FishColors = {"Blue","Red","Green","Yellow","Silver"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.50, 0.25, 0.10, 0.03};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        // SALTWATER
        fish = new SRPFishCatch("Mackerel", 1);
        fish.m_FishColors = {""};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("Sardines", 1);
        fish.m_FishColors = {""};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_CoralFish", 0.5);
        fish.m_FishColors = {"Blue","Green","Purple","Red","Yellow"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.50, 0.25, 0.10, 0.03};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_AngelFish", 0.5);
        fish.m_FishColors = {"Blue","Orange","Red","Yellow"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.50, 0.10, 0.03};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_AnglerFish", 0.5, false, true, true);
        fish.m_FishColors = {"Blue","Purple","Silver"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.50, 0.10};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_SailFish", 0.2, false, true, true);
        fish.m_FishColors = {"Blue","Green", "Red","Yellow","Silver"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.50,0.25, 0.10,0.03};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        fish = new SRPFishCatch("SRP_HammerHeadFish", 0.2, false, true, true);
        fish.m_FishColors = {"Blue","Red","Silver","Yellow"};
        fish.m_FishSizes = {"Small", "Medium", "Large", "Epic"};
        fish.m_FishColorChances = {1, 0.50,0.25, 0.10};
        fish.m_FishSizeChances = {1, 0.50, 0.10, 0.03};
        m_SRPFishingConfig.m_FishCatches.Insert(fish);

        m_SRPFishingConfig.m_FishingHotspots = new ref array<ref SRPFishingHotspot>;
        // testing
        // m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("1000 0 1400", 1000));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("14297 3 6447", 250));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("13546 3 10194", 50));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("9857 0 7650", 110));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("10296 1 5629", 75));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("6935 3 1283", 110));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("6645 0 3477", 35));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("6072 6 4535", 35));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("5431 0 835", 50));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("4953 2 2140", 65));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("4085 2 4450", 50));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("442 16 716", 100));

        m_SRPFishingConfig.m_FishingRodLuck = new ref array<ref SRPFishingRodLuck>;
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("ObsoleteFishingRod", 0.02));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("ImprovisedFishingRod", 0.05));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("FishingRod", 0.1));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("SRP_HandMadeFishingRod", 0.1));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("SRP_HandMadeFishingRod_Blue", 0.15));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("SRP_HandMadeFishingRod_Red", 0.15));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("SRP_HandMadeFishingRod_Purple", 0.2));

        m_SRPFishingConfig.m_FishingClam = new ref array<ref SRPFishingClam>;
        m_SRPFishingConfig.m_FishingClam.Insert(new SRPFishingClam("SRP_Clam", 0.5, 0.05, 10));
        m_SRPFishingConfig.m_FishingClam.Insert(new SRPFishingClam("SRP_Clam_Blue", 0.25, 0.1, 7.5));
        m_SRPFishingConfig.m_FishingClam.Insert(new SRPFishingClam("SRP_Clam_Red", 0.1, 0.25, 5));
        m_SRPFishingConfig.m_FishingClam.Insert(new SRPFishingClam("SRP_Clam_Silver", 0.05, 0.75, 2));

        JsonFileLoader<ref SRPFishingConfig>.JsonSaveFile("$profile:\\Survivalists_Fishing\\SRPFishingConfig.json", m_SRPFishingConfig);
      } 
      else
      {
        JsonFileLoader<ref SRPFishingConfig>.JsonLoadFile("$profile:\\Survivalists_Fishing\\SRPFishingConfig.json", m_SRPFishingConfig);			
      }		
    }
    return m_SRPFishingConfig;
  }
};
