class SRPConfig
{
  bool g_SRPIsSleepActive;

  int g_SRPSleepYawnInterval;
  
  float g_SRPRestfulnessFireComfortIncreaseAmount;
  float g_SRPRestfulnessUnconsciousIncreaseAmount;
  float g_SRPRestfulnessDaytimeIncreaseAmount;
  float g_SRPRestfulnessNighttimeIncreaseAmount;
  float g_SRPRestfulnessInsideShelterIncreaseAmount;
  float g_SRPRestfulnessBrokenLegsIncreaseAmount;
  float g_SRPRestfulnessFeverIncreaseAmount;
  float g_SRPRestfulnessGluttonIncreaseAmount;
  float g_SRPRestfulnessMorphineIncreaseAmount;
  float g_SRPRestfulnessPainKillersIncreaseAmount;
  float g_SRPRestfulnessEpinephrineIncreaseAmount;
  float g_SRPRestfulnessHungerIncreaseAmount;
  float g_SRPRestfulnessThirstIncreaseAmount;
  float g_SRPSleepYawnThreshold;
  float g_SRPSleepPassOutThreshold;
}

class SRPGlobals
{
  private static ref SRPConfig m_SRPConfig = NULL;
  private static const int MAX_CONFIG_LINES = 5000;
  private static const string configPath = "$profile:\\Survivalists_Scripts\\Mod_Settings.json";
  private static const string configRoot = "$profile:\\Survivalists_Scripts";

  void ~SRPGlobals()
  {
    delete m_SRPConfig;
  }

  static SRPConfig Get()
  {
    if (m_SRPConfig == NULL) 
    {
      SetSRPConfig();
    }
    return m_SRPConfig;
  }

  static void SetSRPConfig()
  {
    m_SRPConfig = LoadSRPModConfig();
  }

  private static SRPConfig LoadSRPModConfig()
  {
    SRPConfig config = new SRPConfig();
    if (!FileExist(configPath))
    {
      Print("'Survivalists_Mods_Settings' does not exist, creating now.");
      CreateDefaultSRPConfigFile(config);
    }
    JsonFileLoader<SRPConfig>.JsonLoadFile(configPath, config);
    Print("'Survivalists_Mods_Settings' found ... loading now.");
    return config;
  }

  private static void CreateDefaultSRPConfigFile(inout SRPConfig config)
  {
    CreateDefaultConfigFile(config);

    if (!FileExist(configRoot))
    {
      Print("'Survivalists_Mods_Settings' being saved in " + configRoot);
      MakeDirectory(configRoot);
    }
    JsonFileLoader<SRPConfig>.JsonSaveFile(configPath, config);
  }

  private static void CreateDefaultConfigFile(inout SRPConfig config)
  {
    config.g_SRPIsSleepActive = true;

    config.g_SRPSleepYawnInterval = 180;        // seconds time in between yawns

    // things that increase sleep
    config.g_SRPRestfulnessFireComfortIncreaseAmount = 4.5;
    config.g_SRPRestfulnessUnconsciousIncreaseAmount = 9.0;

    config.g_SRPRestfulnessDaytimeIncreaseAmount = 4.2;
    config.g_SRPRestfulnessNighttimeIncreaseAmount = 5.55;
    config.g_SRPRestfulnessInsideShelterIncreaseAmount = 6.5;
    // things that decrease sleep
    config.g_SRPRestfulnessBrokenLegsIncreaseAmount = 0.1;
    config.g_SRPRestfulnessFeverIncreaseAmount = 0.15;
    config.g_SRPRestfulnessGluttonIncreaseAmount = 0.15;
    config.g_SRPRestfulnessMorphineIncreaseAmount = 0.3;
    config.g_SRPRestfulnessPainKillersIncreaseAmount = 0.3;
    config.g_SRPRestfulnessEpinephrineIncreaseAmount = 1;
    config.g_SRPRestfulnessHungerIncreaseAmount = 0.15;
    config.g_SRPRestfulnessThirstIncreaseAmount = 0.15;

    config.g_SRPSleepYawnThreshold = 0.2; // 80% sleepyness triggers yawning. 0% means yawning when fully awake

    config.g_SRPSleepPassOutThreshold = 600; // how many extra seconds do they get before they 100% pass out
  }
};
