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

  protected int m_NumberOfActiveRadioTowers;

  void InitializeActiveTowers()
  {
    // Print("[RadioElectronicsConfig] - InitializeActiveTowers - ");
    foreach(SRPRadioTowerInfo tower: m_RadioTowerInfo)
    {
      // Print("[RadioElectronicsConfig] - InitializeActiveTowers - ");
      if (tower.IsJammed())
      {
        DecrementActiveTowers();
      }
      else
      {
        IncrementActiveTowers();
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
    Print("IncrementActiveTowers: previous: " + m_NumberOfActiveRadioTowers + " next: " + (m_NumberOfActiveRadioTowers + 1));
    m_NumberOfActiveRadioTowers += numberoverride;
  };

  void DecrementActiveTowers(int numberoverride = 1)
  {
    Print("DecrementActiveTowers: previous: " + m_NumberOfActiveRadioTowers + " next: " + (m_NumberOfActiveRadioTowers - 1));
    m_NumberOfActiveRadioTowers -= numberoverride;
  };

  bool IsICRadioActive(int requiredTowers)
  {
    return m_NumberOfActiveRadioTowers >= requiredTowers;
  }
};