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

        m_SRPFishingConfig.m_SaltWaterJunkItems = {"Shovel"};
        m_SRPFishingConfig.m_SaltWaterRareItems = {"Hammer"};
        m_SRPFishingConfig.m_SaltWaterEpicItems = {"WoodAxe"};
        m_SRPFishingConfig.m_SaltWaterLegendaryItems = {"Pot"};
        m_SRPFishingConfig.m_SaltWaterFish = {"Sardines", "Mackerel","CoralFish_Blue", "CoralFish_Green", "CoralFish_Purple", "CoralFish_Red", "CoralFish_Yellow", "AngelFish_Blue", "AngelFish_Orange", "AngelFish_Red","AngelFish_Yellow","SailFish_Blue","SailFish_Green","SailFish_Red","SailFish_Yellow","SailFish_Silver","AnglerFish_Blue","AnglerFish_Purple","AnglerFish_Silver","HammerHeadFish_Blue","HammerHeadFish_Red","HammerHeadFish_Silver","HammerHeadFish_Yellow"};
        m_SRPFishingConfig.m_SaltWaterLootChances = {0,0.50,0.85,0.97};
        m_SRPFishingConfig.m_SaltWaterFishChances = {0,0.50,0.85,0.97};
        
        m_SRPFishingConfig.m_FreshWaterJunkItems = {"Hammer"};			
        m_SRPFishingConfig.m_FreshWaterRareItems = {"Shovel"};
        m_SRPFishingConfig.m_FreshWaterEpicItems = {"WoodAxe"};
        m_SRPFishingConfig.m_FreshWaterLegendaryItems = {"Pot"};
        m_SRPFishingConfig.m_FreshWaterFish = {"Bitterlings", "Carp", "TroutFish_Brown", "TroutFish_Blue", "TroutFish_Red", "TroutFish_Yellow", "MutantFish_Red", "MutantFish_Blue", "MutantFish_Green", "MutantFish_Yellow","SplakeFish_Red","SplakeFish_Blue","SplakeFish_Green","SplakeFish_Yellow","SplakeFish_Purple","PerchFish_Red","PerchFish_Blue","PerchFish_Green","PerchFish_Yellow","PerchFish_Silver","TilapiaFish_Blue","TilapiaFish_Red","TilapiaFish_Green","TilapiaFish_Yellow","TilapiaFish_Silver"};
        m_SRPFishingConfig.m_FreshWaterLootChances = {0,0.50,0.85,0.97};
        m_SRPFishingConfig.m_FreshWaterFishChances = {0,0.45,0.85,0.97};


        m_SRPFishingConfig.m_FishingHotspots = new ref array<ref SRPFishingHotspot>;
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("1000 0 1400", 1000));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("5000 0 2400", 50));

        m_SRPFishingConfig.m_FishingRodLuck = new ref array<ref SRPFishingRodLuck>;
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("ObsoleteFishingRod", 0.02));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("ImprovisedFishingRod", 0.05));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("FishingRod", 0.1));

        m_SRPFishingConfig.m_ClamPearlChance = 0.05;
        m_SRPFishingConfig.m_ClamDigChance = 0.5;
        m_SRPFishingConfig.m_DigClamToolDamage = 10;
        m_SRPFishingConfig.m_ClamTypes = {"SRP_Clam","SRP_Clam_Blue","SRP_Clam_Red","SRP_Clam_Silver"};

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
