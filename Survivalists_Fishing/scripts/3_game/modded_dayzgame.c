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

        m_SRPFishingConfig.m_SaltWaterJunkItems = {"Wellies_Black"};
        m_SRPFishingConfig.m_SaltWaterRareItems = {"Wellies_Brown"};
        m_SRPFishingConfig.m_SaltWaterEpicItems = {"Wellies_Green"};
        m_SRPFishingConfig.m_SaltWaterLegendaryItems = {"Wellies_Grey","Pot"};
        m_SRPFishingConfig.m_SaltWaterFish = {"Sardines", "Mackerel"};
        m_SRPFishingConfig.m_SaltWaterLootChances = {0.1,0.2,0.3,0.4};
        
        m_SRPFishingConfig.m_FreshWaterJunkItems = {"Wellies_Black"};			
        m_SRPFishingConfig.m_FreshWaterRareItems = {"Wellies_Brown"};
        m_SRPFishingConfig.m_FreshWaterEpicItems = {"Wellies_Green"};
        m_SRPFishingConfig.m_FreshWaterLegendaryItems = {"Wellies_Grey","Pot"};
        m_SRPFishingConfig.m_FreshWaterFish = {"Bitterlings", "Carp"};
        m_SRPFishingConfig.m_FreshWaterLootChances = {0.1,0.2,0.3,0.4};


        m_SRPFishingConfig.m_FishingHotspots = new ref array<ref SRPFishingHotspot>;
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("1000 0 1400", 1000));
        m_SRPFishingConfig.m_FishingHotspots.Insert(new SRPFishingHotspot("5000 0 2400", 50));

        m_SRPFishingConfig.m_FishingRodLuck = new ref array<ref SRPFishingRodLuck>;
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("ObsoleteFishingRod", 0.02));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("ImprovisedFishingRod", 0.05));
        m_SRPFishingConfig.m_FishingRodLuck.Insert(new SRPFishingRodLuck("FishingRod", 0.1));

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
