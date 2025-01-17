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

  ref SRP_BioFlowerManager g_BioFlowerManager;
  ref SRP_OilRigGasManager g_OilRigGasManager;

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

  static void SaveSRPConfig()
  {
    if (FileExist(configRoot) && m_SRPConfig)
    {
      Print("'Survivalists_Mods_Settings' being saved in " + configRoot);
      JsonFileLoader<SRPConfig>.JsonSaveFile(configPath, m_SRPConfig);      
    }
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

    config.g_BioFlowerManager = new SRP_BioFlowerManager();
    config.g_BioFlowerManager.m_BioFlowers = new ref array<ref SRP_BioFlowerInfo>;

    config.g_BioFlowerManager.m_BioFlowers.Insert(new SRP_BioFlowerInfo("ReactorBiozone", 100, "4683 20 7100"));
    config.g_BioFlowerManager.m_BioFlowers.Insert(new SRP_BioFlowerInfo("BunkerBiozone", 100, "7157 655 11617"));
    config.g_BioFlowerManager.m_BioFlowers.Insert(new SRP_BioFlowerInfo("SandyBayBiozone", 100, "5413 2 7634"));
    config.g_BioFlowerManager.m_BioFlowers.Insert(new SRP_BioFlowerInfo("NorthHavenCastleBiozone", 100, "2610 40.5 13923"));
    config.g_BioFlowerManager.m_BioFlowers.Insert(new SRP_BioFlowerInfo("AshevilleBiozone", 100, "7310.5 46 2590.5"));

    config.g_OilRigGasManager = new SRP_OilRigGasManager();
    config.g_OilRigGasManager.m_RogueWave = new SRP_OilRigGasInfo("Deepwater", 500, "1725.1899 35 12687.2", Math.RandomFloatInclusive(0,1));
    config.g_OilRigGasManager.m_Horizon = new SRP_OilRigGasInfo("Rogue", 500, "2144.8401 35 14620.29", Math.RandomFloatInclusive(0,1));
    config.g_OilRigGasManager.m_Deepwater = new SRP_OilRigGasInfo("Horizon", 500, "4142.5 35 15419.3", Math.RandomFloatInclusive(0,1));
  }
};