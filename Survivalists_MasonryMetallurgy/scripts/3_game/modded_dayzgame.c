modded class DayZGame
{
  protected ref SRPMMConfig m_SRPMMConfig;

  void ~DayZGame()
  {
    delete m_SRPMMConfig;
  }

  void SetSRPMMConfig(SRPMMConfig config)
  {
    Print("Survivalists_MasonryMetallurgy Settings Received From Server");
    m_SRPMMConfig = config;
  }

  SRPMMConfig GetSRPMMConfig()
  {
    if (!m_SRPMMConfig)
    {
      if (!FileExist("$profile:\\Survivalists_MasonryMetallurgy"))
      {
        MakeDirectory("$profile:\\Survivalists_MasonryMetallurgy");
      }
      if (!FileExist("$profile:\\Survivalists_MasonryMetallurgy\\SRPMasonryMetallurgyConfig.json")) 
      {
        m_SRPMMConfig = new SRPMMConfig();

        m_SRPMMConfig.g_QuarryLocations = new ref array<ref MiningOreConfig>;    
        // platinumChance = 0.99;
        // goldChance = 0.99;
        // ironChance = 0.99;
        // copperChance = 0.99;
        // tinChance = 0.99;

        // crotch island
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("11153 38 2274",215,0.95,0.90,0.85,2,2));
        // fishers camp
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("10543 3 5607",60,2,2,0.75,0.80,0.75));
        // rotten island
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("13017 2 6282",550,2,0.95,0.80,2,2));
        // north stonington
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("6833 27 1730",60,2,0.95,0.80,2,0.75));
        // prison island
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("5457 34 700",200,0.75,2,0.95,0.90,2));
        // temple island
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("442 16 716",550,0.60,0.60,2,2,0.80));
        // north milo ravine
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("6052 5 4843",150,0.95,0.90,2,2,2));
        // south east westbrook
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("4497 49 5545",250,2,2,0.80,0.80,0.80));
        //rfci
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("3787 13 8821",450,0.80,0.80,0.80,0.80,0.80));
        //east waldo
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("9468 15 9039",75,2,2,0.80,0.75,0.85));
        //north bayville
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("9052 17 13021",100,0.80,0.80,0.75,2,2));
        //portland
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("5892 6 13717",330,0.80,0.80,0.80,0.80,0.80));
        //archipeleago
        m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("2810 30 13686",200,0.85,0.85,0.80,0.75,0.85));
        //arctic
        // m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("6052 5 4843",150,0.95,0.90,0.80,0.75,0.85));
        //industrial explosion
        // m_SRPMMConfig.g_QuarryLocations.Insert(new MiningOreConfig("6052 5 4843",150,0.95,0.90,0.80,0.75,0.85));

        JsonFileLoader<ref SRPMMConfig>.JsonSaveFile("$profile:\\Survivalists_MasonryMetallurgy\\SRPMasonryMetallurgyConfig.json", m_SRPMMConfig);
      } 
      else
      {
        JsonFileLoader<ref SRPMMConfig>.JsonLoadFile("$profile:\\Survivalists_MasonryMetallurgy\\SRPMasonryMetallurgyConfig.json", m_SRPMMConfig);			
      }		
    }
    return m_SRPMMConfig;
  }
};
