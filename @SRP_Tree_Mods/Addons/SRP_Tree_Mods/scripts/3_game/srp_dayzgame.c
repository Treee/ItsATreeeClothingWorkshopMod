modded class DayZGame
{
  protected ref SRPTreeConfig m_globalSRPTreeConfig;

  void SetSRPTreeConfigGlobal(SRPTreeConfig config)
  {
    Print("SRP_Tree_Mod Settings Confirmed");
    m_globalSRPTreeConfig = config;
  }

  SRPTreeConfig GetSRPTreeConfigGlobal()
  {
    return m_globalSRPTreeConfig;
  }
}