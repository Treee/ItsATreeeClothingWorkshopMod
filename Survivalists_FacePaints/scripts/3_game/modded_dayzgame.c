modded class DayZGame
{
  protected ref SRPFacePaintConfig m_SRPFacePaintConfig;

  void ~DayZGame()
  {
    delete m_SRPFacePaintConfig;
  }

  void SetSRPFacePaintConfig(SRPFacePaintConfig config)
  {
    Print("Survivalists_FacePaint Settings Received From Server");
    m_SRPFacePaintConfig = config;
  }

  SRPFacePaintConfig GetSRPFacePaintConfig()
  {
    if (!m_SRPFacePaintConfig)
    {
      if (!FileExist("$profile:\\Survivalists_FacePaint"))
      {
        MakeDirectory("$profile:\\Survivalists_FacePaint");
      }
      if (!FileExist("$profile:\\Survivalists_FacePaint\\SRPFacePaintConfig.json")) 
      {
        m_SRPFacePaintConfig = new SRPFacePaintConfig();
        m_SRPFacePaintConfig.SetPaintStickDamagePerUse(2.0);

        JsonFileLoader<ref SRPFacePaintConfig>.JsonSaveFile("$profile:\\Survivalists_FacePaint\\SRPFacePaintConfig.json", m_SRPFacePaintConfig);
      } 
      else
      {
        JsonFileLoader<ref SRPFacePaintConfig>.JsonLoadFile("$profile:\\Survivalists_FacePaint\\SRPFacePaintConfig.json", m_SRPFacePaintConfig);			
      }		
    }
    return m_SRPFacePaintConfig;
  }
};
