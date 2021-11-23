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

  override string CreateRandomPlayer()
	{
    string randomSkin = super.CreateRandomPlayer();
    if (randomSkin == "DUB_SurMutant_F" || randomSkin == "DUB_SurMutant_F_2")
    {
      randomSkin = "SurvivorF_Eva";
    }
    else if (randomSkin == "DUB_SurMutant_M" || randomSkin == "DUB_SurMutant_M_2")
    {
      randomSkin = "SurvivorM_Mirek";
    }
		return randomSkin;
  }
};