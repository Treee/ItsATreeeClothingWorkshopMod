class BioHazardZoneLocation
{
  vector center;
  int totalRadius;
  int criticalRadius;
  int severeRadius;
  int mildRadius;
  int messageRepeatInterval;

  void SetBioHazardZoneLocation(vector m_center, int m_totalRadius, int m_criticalRadius, int m_severeRadius, int m_mildRadius, int m_messageRepeatInterval)
  {
    center = m_center;
    totalRadius = m_totalRadius;
    criticalRadius = m_criticalRadius;
    severeRadius = m_severeRadius;
    mildRadius = m_mildRadius;    
    messageRepeatInterval = m_messageRepeatInterval;
  }

  bool isPlayerInZone(vector playerPosition)
  {
    return vector.Distance(playerPosition, center) < totalRadius;
  }
}

class SRPTreeConfig
{
  bool g_SRPIsSleepActive;
  bool g_SRPIsDrugsEffectsActive;
  bool g_SRPIsBioHazardLocationsActive;
  
  int g_SRPSleepMaximumAwakeTime;
  int g_SRPSleepYawnInterval;
  int g_SRPAlcoholModifierLifetime;
  int g_SRPBathSaltsModifierLifetime;
  int g_SRPMethModifierLifetime;
  int g_SRPSkullAcidModifierLifetime;
  int g_SRPSmileAcidModifierLifetime;
  int g_SRPStonedModifierLifetime;
  int g_SRPTobacoModifierLifetime;

  int g_SRPAlcoholFoodLossAmount;
  int g_SRPWeedWaterLossAmount;

  float g_SRPSleepynessIncreaseAmount;
  float g_SRPRestfulnessIncreaseAmount;
  float g_SRPSleepYawnThreshold;
  float g_SRPSleepPassOutThreshold;
  float g_SRPAlcoholChanceToLaughThreshold;
  float g_SRPBathSaltsChanceForScarySound;
  float g_SRPBathSaltsChanceForHappySound;
  float g_SRPMethSaminaDepletionBonus;
  float g_SRPMethBloodLossAmount;
  float g_SRPMethChanceForScarySound;
  float g_SRPMethChanceForHappySound;
  float g_SRPSkullAcidChanceForScarySound;
  float g_SRPSkullAcidChanceForHappySound;
  float g_SRPSkullAcidChanceForLaughter;
  float g_SRPSkullAcidChanceForFreeze;
  float g_SRPSkullAcidChanceForSweat;
  float g_SRPSkullAcidChanceForSneeze;
  float g_SRPSkullAcidChanceForCough;
  float g_SRPSmileAcidChanceForScarySound;
  float g_SRPSmileAcidChanceForHappySound;
  float g_SRPSmileAcidChanceForLaughter;
  float g_SRPSmileAcidChanceForFreeze;
  float g_SRPSmileAcidChanceForSweat;
  float g_SRPSmileAcidChanceForSneeze;
  float g_SRPSmileAcidChanceForCough;  
  float g_SRPWeedChanceForCough;
  float g_SRPWeedChanceForLaugh;
  float g_SRPTobaccoChanceForCough;

  ref array<ref BioHazardZoneLocation> g_SRPBiohazardZoneLocations;
}

class SRPTreeGlobals
{
  private static ref SRPTreeConfig m_SRPConfig = NULL;
  private static const int MAX_CONFIG_LINES = 500;
  private static const string configPath = "$profile:\\SRP_Tree_Mods\\Mod_Settings.json";
  private static const string configRoot = "$profile:\\SRP_Tree_Mods";

  static SRPTreeConfig Get()
  {
    if (m_SRPConfig == NULL) 
    {
      SetConfig();
    }
    return m_SRPConfig;
  }

  static void SetConfig()
  {
    m_SRPConfig = LoadSRPConfig();
  }

  private static SRPTreeConfig LoadSRPConfig()
  {
    SRPTreeConfig config = new SRPTreeConfig();
    if (!FileExist(configPath))
    {
      Print("'SRP_Tree_Mod_Settings' does not exist, creating now.");
      CreateDefaultConfigFile(config);
    }
    JsonFileLoader<SRPTreeConfig>.JsonLoadFile(configPath, config);
    Print("'SRP_Tree_Mod_Settings' found ... loading now.");
    return config;
  }

  private static void CreateDefaultConfigFile(inout SRPTreeConfig config)
  {
    config.g_SRPIsSleepActive = true;
    config.g_SRPIsDrugsEffectsActive = true;
    config.g_SRPIsBioHazardLocationsActive = true;

    config.g_SRPSleepMaximumAwakeTime = 14400; // 4 hours in seconds is the "max" awake time before passing out
    config.g_SRPSleepYawnInterval = 120;        // time in between yawns
    config.g_SRPAlcoholModifierLifetime = 100;
    config.g_SRPBathSaltsModifierLifetime = 600; // 10 minutes
    config.g_SRPMethModifierLifetime = 600;
    config.g_SRPSkullAcidModifierLifetime = 600;
    config.g_SRPSmileAcidModifierLifetime = 600;
    config.g_SRPStonedModifierLifetime = 150;
    config.g_SRPTobacoModifierLifetime = 90;

    config.g_SRPAlcoholFoodLossAmount = 0.2;
    config.g_SRPWeedWaterLossAmount = 0.2;

    config.g_SRPSleepynessIncreaseAmount = 1.5; // we get sleepy x units per
    config.g_SRPRestfulnessIncreaseAmount = 50; // we get rested x units per
    config.g_SRPSleepYawnThreshold = 0.8; // 80% sleepyness triggers yawning. 0% means yawning when fully awake
    config.g_SRPSleepPassOutThreshold = 600; // how many extra seconds do they get before they 100% pass out
    config.g_SRPAlcoholChanceToLaughThreshold = 15; // 15% chance to laugh
    config.g_SRPBathSaltsChanceForScarySound = 10; 
    config.g_SRPBathSaltsChanceForHappySound = 20;
    config.g_SRPMethSaminaDepletionBonus = 0.5; // stamina depletes 50% less than normal. 1 being the default
    config.g_SRPMethBloodLossAmount = 3.5; // be carefule with a higher number here
    config.g_SRPMethChanceForScarySound = 5; // 5% chance
    config.g_SRPMethChanceForHappySound = 5;
    config.g_SRPSkullAcidChanceForScarySound = 50;
    config.g_SRPSkullAcidChanceForHappySound = 60;
    config.g_SRPSkullAcidChanceForLaughter = 30; // ascending order,
    config.g_SRPSkullAcidChanceForFreeze = 40;
    config.g_SRPSkullAcidChanceForSweat = 50;
    config.g_SRPSkullAcidChanceForSneeze = 60;
    config.g_SRPSkullAcidChanceForCough = 70;
    config.g_SRPSmileAcidChanceForScarySound = 10;
    config.g_SRPSmileAcidChanceForHappySound = 50;
    config.g_SRPSmileAcidChanceForLaughter = 10;
    config.g_SRPSmileAcidChanceForFreeze = 30;
    config.g_SRPSmileAcidChanceForSweat = 60;
    config.g_SRPSmileAcidChanceForSneeze = 80;
    config.g_SRPSmileAcidChanceForCough = 95;
    config.g_SRPWeedChanceForCough = 35;
    config.g_SRPWeedChanceForLaugh = 70;
    config.g_SRPTobaccoChanceForCough = 35;

    ref array<ref BioHazardZoneLocation> m_locations = new ref array<ref BioHazardZoneLocation>;

    BioHazardZoneLocation bioLocation = new BioHazardZoneLocation;

    bioLocation.SetBioHazardZoneLocation("4683 20 7100", 350, 150, 250, 325, 120);

    m_locations.Insert(bioLocation);

    config.g_SRPBiohazardZoneLocations = m_locations;
    if (!FileExist(configRoot))
    {
      Print("'SRP_Tree_Mod_Settings' being saved in " + configRoot);
      MakeDirectory(configRoot);
    }
    JsonFileLoader<SRPTreeConfig>.JsonSaveFile(configPath, config);
  }
}