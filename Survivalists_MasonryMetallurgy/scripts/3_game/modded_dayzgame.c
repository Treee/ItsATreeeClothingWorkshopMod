modded class DayZGame
{
  protected ref SRPMMConfig m_SRPMMConfig;

  void ~DayZGame()
  {
    delete m_SRPMMConfig;
  }

  void SetSRPMMConfig(SRPMMConfig config)
  {
    Print("Survivalists_MasonryMetallurgy Settings Received From Server");
    m_SRPMMConfig = config;
  }

  SRPMMConfig GetSRPMMConfig()
  {
    if (!m_SRPMMConfig)
    {
      if (!FileExist("$profile:\\Survivalists_MasonryMetallurgy"))
      {
        MakeDirectory("$profile:\\Survivalists_MasonryMetallurgy");
      }
      if (!FileExist("$profile:\\Survivalists_MasonryMetallurgy\\SRPMasonryMetallurgyConfig.json")) 
      {
        m_SRPMMConfig = new SRPMMConfig();

        JsonFileLoader<ref SRPMMConfig>.JsonSaveFile("$profile:\\Survivalists_MasonryMetallurgy\\SRPMasonryMetallurgyConfig.json", m_SRPMMConfig);
      } 
      else
      {
        JsonFileLoader<ref SRPMMConfig>.JsonLoadFile("$profile:\\Survivalists_MasonryMetallurgy\\SRPMasonryMetallurgyConfig.json", m_SRPMMConfig);			
      }		
    }
    return m_SRPMMConfig;
  }
};
