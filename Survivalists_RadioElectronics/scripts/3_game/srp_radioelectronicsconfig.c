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
  protected int m_LastUpdateTime = 0;

  protected float m_ICRadioDelayMultiplier = 0;

  protected bool m_IsICRadioActive;

  void InitializeActiveTowers()
  {
    Print("[RadioElectronicsConfig] - InitializeActiveTowers - saved active towers " + m_NumberOfActiveRadioTowers);
    m_NumberOfActiveRadioTowers = 0;
    m_ICRadioDelayMultiplier = 0;
    m_LastUpdateTime = 0;
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
      Print("IncrementActiveTowers: previous: " + (m_NumberOfActiveRadioTowers - 1) + " next: " + m_NumberOfActiveRadioTowers);
    }

    if (m_IsICRadioActive)
    {
      if (IsRadioNetworkWorking())
      {
        Print("[RadioElectronicsConfig] - IncrementActiveTowers - DISCORD CALL TO INCREASE IC RADIO SPEED");
      }
    }
    else
    {      
      Print("[RadioElectronicsConfig] - IncrementActiveTowers - DISCORD CALL TO ENABLE IC RADIO");
      m_IsICRadioActive = true;
      m_LastUpdateTime = GetGame().GetTime();    
    }
    // if (!m_IsICRadioActive && IsRadioNetworkWorking())
    // {
    //   int timeDiff = GetGame().GetTime() - m_LastUpdateTime;
    //   if (timeDiff > 300000)
    //   {
    //     // emit discord hook call to start ic radio
    //   }
    // }
  };

  void DecrementActiveTowers(int numberoverride = 1)
  {
    if (m_NumberOfActiveRadioTowers > 0)
    {
      m_NumberOfActiveRadioTowers -= numberoverride;
      Print("DecrementActiveTowers: previous: " + (m_NumberOfActiveRadioTowers - 1) + " next: " + m_NumberOfActiveRadioTowers);
    }

    // if the radio is currently working
    if (m_IsICRadioActive)
    {
      if (IsRadioNetworkWorking())
      {
        // emit discord hook call to stop slow radio
        Print("[RadioElectronicsConfig] - DecrementActiveTowers - DISCORD CALL TO SLOW IC RADIO");
      }
      else
      {
        // emit discord hook call to stop ic radio
        Print("[RadioElectronicsConfig] - DecrementActiveTowers - DISCORD CALL TO DISABLE IC RADIO");
        m_IsICRadioActive = false;
      }
    }
  };

  bool IsRadioNetworkWorking()
  {
    return m_NumberOfActiveRadioTowers >= m_RequiredNumberOfActiveRadioTowers;
  }
};