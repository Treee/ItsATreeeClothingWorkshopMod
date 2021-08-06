modded class DayZGame
{
  protected ref SRPConfig m_SRPConfig;

  void ~DayZGame()
  {
    delete m_SRPConfig;
  }

  void SetSRPConfigGlobal(SRPConfig config)
  {
    Print("Survivalists_Mods Settings Confirmed");
    m_SRPConfig = config;
  }

  SRPConfig GetSRPConfigGlobal()
  {
    return m_SRPConfig;
  }
}