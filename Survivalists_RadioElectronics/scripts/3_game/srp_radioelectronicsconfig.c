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
    float distance = vector.Distance(jammerPosition, m_location);
    Print("Checking location: " + m_location + " with hieght " + m_heightRequirement + " distance " + distance);
    // this only checks distance to.
    // need to force that distaince to be upwards and not lateral
    return distance <= m_heightRequirement;
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

  protected const int m_MaxNumberOfActiveRadioTowers = 22;
  protected int m_RequiredNumberOfActiveRadioTowers = 11;
  protected int m_NumberOfActiveRadioTowers = 0;  

  protected const int m_ICRadioMaxDelay = 60;

  protected bool m_IsICRadioActive;

  void InitializeActiveTowers()
  {
    Print("[RadioElectronicsConfig] - InitializeActiveTowers - saved active towers " + m_NumberOfActiveRadioTowers);
    m_NumberOfActiveRadioTowers = 0;
    m_IsICRadioActive = true;
    Print("[RadioElectronicsConfig] - InitializeActiveTowers - " + m_NumberOfActiveRadioTowers);
    foreach(SRPRadioTowerInfo tower: m_RadioTowerInfo)
    {
      // Print("[RadioElectronicsConfig] - InitializeActiveTowers - ");
      if (!tower.IsJammed())
      {
        IncrementActiveTowers();
      }
      else
      {
        Print("Tower jammed!");
      }
    }
  }

  SRPRadioTowerInfo GetTowerBeingJammed(vector position)
  {
    foreach(SRPRadioTowerInfo tower: m_RadioTowerInfo)
    {
      if (tower.IsWithinJammingRange(position))
      {
        return tower;
      }
    }
    return NULL;
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
      // Print("DecrementActiveTowers: previous: " + (m_NumberOfActiveRadioTowers - 1) + " next: " + m_NumberOfActiveRadioTowers);
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

  int GetMaxRadioDelay()
  {
    int delay = m_ICRadioMaxDelay + (m_ICRadioMaxDelay * (1-GetRadioDelayMultiplier()));
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