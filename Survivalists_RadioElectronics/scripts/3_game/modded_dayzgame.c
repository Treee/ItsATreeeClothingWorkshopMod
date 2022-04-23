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
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("2154.457031 35.678616 14615.689453",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("1711.238037 46.929482 12767.294922",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3745.115479 55.211983 2862.045166",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3750.297607 63.810463 4887.355469",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3781.398193 72.678726 3735.924561",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5187.754395 89.424179 3575.225342",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5357.389648 81.627625 1499.332031",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5543.443359 202.185867 6789.871582",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7340.368652 80.984253 6033.866699",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7515.583008 107.295029 4640.030762",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7821.766113 133.320892 1971.843628",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("9534.364258 117.534668 3720.487305",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("10027.516602 87.214478 4781.535645",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("11091.482422 75.455002 11009.673828",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("11529.716797 96.273056 8127.037109",18));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("11854.242188 109.729546 2720.171875",18));
        // Land_Tower_TC2_Base
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5820.440918 113.459633 4096.214844", 5));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7395.320801 726.523376 11939.858398", 5));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("1021.156982 48.745850 15242.291992", 5));
        // Land_Tower_TC5
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("9334.257813 53.335854 8823.375977", 5));
        // Land_Tower_TC6
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3319.930420 68.241745 3819.836914", 5));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3745.672852 55.773323 6202.576660", 5));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("8509.976563 312.664063 10076.168945", 5));

        m_RadioElectronicsConfig.m_MaxNumberOfActiveRadioTowers = 23;
        m_RadioElectronicsConfig.m_RequiredNumberOfActiveRadioTowers = 11;
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
