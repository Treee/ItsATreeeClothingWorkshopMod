modded class DayZGame
{
  protected ref RadioElectronicsConfig m_RadioElectronicsConfig;

  void ~DayZGame()
  {
    delete m_RadioElectronicsConfig;
  }

  void SetRadioElectronicsConfig(RadioElectronicsConfig config)
  {
    Print("Survivalists_RadioElectronics Settings Received From Server");
    m_RadioElectronicsConfig = config;
  }

  void SaveRadioElectronicsConfig()
  {
    Print("Survivalists_RadioElectronics Settings Saved");
    JsonFileLoader<ref RadioElectronicsConfig>.JsonSaveFile("$profile:\\Survivalists_RadioElectronics\\RadioElectronicsConfig.json", m_RadioElectronicsConfig);
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
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("1711.238037 46.929482 12767.294922", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("2154.457031 35.678658 14615.689453", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3745.115479 55.211983 2862.045166", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3768.133057 79.517601 3752.544678", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3750.297607 63.810463 4887.355469", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5047.062988 91.866211 1445.940430", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5187.754395 89.424179 3575.225342", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7340.368652 80.984253 6033.866699", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7515.583008 108.693909 4640.030762", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7821.766113 133.319672 1971.843628", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("9534.364258 117.534668 3720.487305", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("10027.516602 87.214478 4781.535645", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("11091.482422 75.455002 11009.673828", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("11529.716797 100.263054 8127.037109", 15));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("12094.903320 43.430462 3857.770508", 15));
        // Land_Tower_TC2_Base
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("1021.156982 48.748680 15242.291992", 20));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("5820.440918 113.459633 4096.214844", 20));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("7395.320801 726.523376 11939.858398", 20));
        // Land_Tower_TC5
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("9334.257813 53.335854 8823.375977", 20));
        // Land_Tower_TC6
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3319.930420 69.926041 3819.836914", 25));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("3745.672852 55.773323 6202.576660", 25));
        m_RadioElectronicsConfig.m_RadioTowerInfo.Insert(new SRPRadioTowerInfo("8509.976563 312.664063 10076.168945", 25));

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
