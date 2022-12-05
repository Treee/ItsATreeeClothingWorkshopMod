class SRPRadioTowerInfo
{  
  protected vector m_location;
  protected float m_heightRequirement;
  protected bool m_IsJammed;

  void SRPRadioTowerInfo(vector towerLocation, float heightRequired)  
  {
    m_location = towerLocation;
    m_heightRequirement = heightRequired;
  }

  bool IsWithinJammingRange(vector jammerPosition)
  {
    bool isInTowerRange = vector.Distance(jammerPosition, m_location) <= 100; // is it in the general area
    bool isMeetingHeightRequirements = Math.AbsFloat(jammerPosition[1] - m_location[1]) < m_heightRequirement;
    // if (isInTowerRange && isMeetingHeightRequirements)
    // {
    //   Print("JammerPosition: " + jammerPosition + " IsInTowerRange: " + isInTowerRange + " Distance From Point: " + (vector.Distance(jammerPosition, m_location) <= 100) + " IsMEetingHeightRq: " + Math.AbsFloat(jammerPosition[1] - m_location[1]));
    // }
    return isInTowerRange && isMeetingHeightRequirements;
  }

  void ImpactRadioTower(bool isJammed = false)
  {
    m_IsJammed = isJammed;
  }

  bool IsJammed()
  {
    return m_IsJammed;
  }
};

class RadioElectronicsConfig
{
  ref array<ref SRPRadioTowerInfo> m_RadioTowerInfo;

  int m_MaxNumberOfActiveRadioTowers;
  int m_RequiredNumberOfActiveRadioTowers;
  int m_NumberOfActiveRadioTowers;  
  int m_ICRadioMaxDelay;

  protected bool m_IsICRadioActive;

  void InitializeActiveTowers()
  {
    // set everything to not jammed
    foreach(SRPRadioTowerInfo tower: m_RadioTowerInfo)
    {
      tower.ImpactRadioTower();
    }
    m_IsICRadioActive = true;
    m_NumberOfActiveRadioTowers = m_MaxNumberOfActiveRadioTowers;
    // Print("[RadioElectronicsConfig] - InitializeActiveTowers - " + m_NumberOfActiveRadioTowers + " After Jamming Check");
  }

  bool DeployJammer(vector position)
  {
    // Print("DeployJammer Start");
    bool m_ImapctedNetwork = false;
    foreach(SRPRadioTowerInfo tower: m_RadioTowerInfo)
    {
      if (tower.IsWithinJammingRange(position) && !tower.IsJammed())
      {
        // Print("Found Tower In Jamming Range that was not already jammed");
        tower.ImpactRadioTower(true);
        DecrementActiveTowers();
        GetDayZGame().SaveRadioElectronicsConfig();
        m_ImapctedNetwork = true;
      }
    }
    // Print("DeployJammer End");
    return m_ImapctedNetwork;
  }

  bool DismantleJammer(vector position)
  {
    bool m_ImapctedNetwork = false;
    foreach(SRPRadioTowerInfo tower: m_RadioTowerInfo)
    {
      if (tower.IsWithinJammingRange(position) && tower.IsJammed())
      {
        // Print("Found Tower In Jamming Range that was jammed - unjamming");
        tower.ImpactRadioTower(false);
        IncrementActiveTowers();
        GetDayZGame().SaveRadioElectronicsConfig();
        m_ImapctedNetwork = true;
      }
    }
    return m_ImapctedNetwork;
  }


  void IncrementActiveTowers(int numberoverride = 1)
  {
    if (m_NumberOfActiveRadioTowers < m_MaxNumberOfActiveRadioTowers)
    {
      m_NumberOfActiveRadioTowers += numberoverride;
      // Print("IncrementActiveTowers: previous: " + (m_NumberOfActiveRadioTowers - 1) + " next: " + m_NumberOfActiveRadioTowers);
    }
  };

  void DecrementActiveTowers(int numberoverride = 1)
  {
    if (m_NumberOfActiveRadioTowers > 0)
    {
      m_NumberOfActiveRadioTowers -= numberoverride;
      // Print("DecrementActiveTowers: previous: " + (m_NumberOfActiveRadioTowers + 1) + " next: " + m_NumberOfActiveRadioTowers);
    }
  };

  bool IsRadioNetworkWorking()
  {
    return m_NumberOfActiveRadioTowers >= m_RequiredNumberOfActiveRadioTowers;
  }

  int GetNumberOfActiveTowers()
  {
    return m_NumberOfActiveRadioTowers;
  }

  int GetTotalNumberOfTowers()
  {    
    return m_RadioTowerInfo.Count();
  }

  int GetMaxRadioDelay()
  {
    int delay = m_ICRadioMaxDelay + ((2*m_ICRadioMaxDelay) * (1-GetRadioDelayMultiplier()));
    if (delay < 5)
    {
      delay = 5;
    }
    // never let it post immediately, always a little delay
    return delay;
  }

  float GetRadioDelayMultiplier()
  {    
    return GetNumberOfActiveTowers() / m_MaxNumberOfActiveRadioTowers;
  }
};