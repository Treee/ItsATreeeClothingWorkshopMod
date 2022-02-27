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

        m_SRPFishingConfig.m_SaltWaterJunkItems = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
        m_SRPFishingConfig.m_SaltWaterFish = {"Sardines", "Mackerel"};
        
        m_SRPFishingConfig.m_FreshWaterJunkItems = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};			
        m_SRPFishingConfig.m_FreshWaterFish = {"Bitterlings", "Carp"};

        m_SRPFishingConfig.m_FishingHotspots = new map<string, float>;
        m_SRPFishingConfig.m_FishingHotspots.Insert("1000 0 1000", 30.5);

        m_SRPFishingConfig.m_FishingRodLuck = new map<string, float>;
        m_SRPFishingConfig.m_FishingRodLuck.Insert("ObsoleteFishingRod", 0.2);
        m_SRPFishingConfig.m_FishingRodLuck.Insert("ImprovisedFishingRod", 0.4);
        m_SRPFishingConfig.m_FishingRodLuck.Insert("FishingRod", 0.6);

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
