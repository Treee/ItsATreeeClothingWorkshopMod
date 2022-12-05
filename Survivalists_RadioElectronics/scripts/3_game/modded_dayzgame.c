modded class DayZGame
{
  protected ref RadioElectronicsConfig m_RadioElectronicsConfig;

  void ~DayZGame()
  {
    delete m_RadioElectronicsConfig;
  }

  void SetRadioElectronicsConfig(RadioElectronicsConfig config)
  {
    m_RadioElectronicsConfig = config;
    Print("Survivalists_RadioElectronics Settings Received From Server");
  }

  void SaveRadioElectronicsConfig()
  {
    JsonFileLoader<ref RadioElectronicsConfig>.JsonSaveFile("$profile:\\Survivalists_RadioElectronics\\RadioElectronicsConfig.json", m_RadioElectronicsConfig);
    Print("Survivalists_RadioElectronics Settings Saved");
  }

  RadioElectronicsConfig GetRadioElectronicsConfig()
  {
    if (!m_RadioElectronicsConfig)
    {
      if (!FileExist("$profile:\\Survivalists_RadioElectronics"))
      {
        MakeDirectory("$profile:\\Survivalists_RadioElectronics");
      }
      if (!FileExist("$profile:\\Survivalists_RadioElectronics\\RadioElectronicsConfig.json")) 
      {
        m_RadioElectronicsConfig = new RadioElectronicsConfig();
        
        m_RadioElectronicsConfig.m_RadioTowerInfo = new ref array<ref SRPRadioTowerInfo>;
        // Land_Tower_TC1
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("2154 45 14615",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("1711 55 12767",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3745 60 2862",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3750 71 4887",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3781 80 3735",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5187 97 3575",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5357 90 1499",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5543 210 6789",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7340 90 6033",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7515 115 4640",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7821 140 1971",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("9534 131 3720",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("10027 100 4781",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("11091 75 11009",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("11529 110 8127",15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("11854 120 2720",15));
        // Land_Tower_TC2_Base
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5820 116 4096",10));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7395 729 11939",10));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("1021 51 15242",10));
        // Land_Tower_TC5
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("9334 56 8823",10));
        // Land_Tower_TC6
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3319 68 3819",10));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3745 55 6202",10));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("8509 312 10076",10));

        m_RadioElectronicsConfig.m_MaxNumberOfActiveRadioTowers = m_RadioElectronicsConfig.GetTotalNumberOfTowers();
        m_RadioElectronicsConfig.m_RequiredNumberOfActiveRadioTowers = (m_RadioElectronicsConfig.GetTotalNumberOfTowers() / 2);
        m_RadioElectronicsConfig.m_NumberOfActiveRadioTowers = 0;
        m_RadioElectronicsConfig.m_ICRadioMaxDelay = 60;

        JsonFileLoader<ref RadioElectronicsConfig>.JsonSaveFile("$profile:\\Survivalists_RadioElectronics\\RadioElectronicsConfig.json", m_RadioElectronicsConfig);
      } 
      else
      {
        JsonFileLoader<ref RadioElectronicsConfig>.JsonLoadFile("$profile:\\Survivalists_RadioElectronics\\RadioElectronicsConfig.json", m_RadioElectronicsConfig);			
      }		
    }
    return m_RadioElectronicsConfig;
  }
};
