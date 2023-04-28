class SRP_BioFlowerInfo
{
  protected string m_ZoneBioZoneName;
  protected int m_FlowerEnergy;
  protected vector m_Position;

  void SRP_BioFlowerInfo(string zone, int energy, vector position)
  {
    m_ZoneBioZoneName = zone;
    m_FlowerEnergy = energy;
    m_Position = position;
  }

  bool IsCorrectBioZone(string zone)
  {
    return m_ZoneBioZoneName == zone;
  }
  bool IsCloseEnoughToBioZone(vector position)
  {
    return vector.Distance(m_Position, position) < 70;
  }
  int GetFlowerEnergy()
  {
    return m_FlowerEnergy;
  }
  void SetZonePosition(vector position)
  {
    m_Position = position;
  }
  vector GetZonePosition()
  {
    return m_Position;
  }
  void AddFlowerEnergy(int delta)
  {
    int temp = m_FlowerEnergy + delta;
    // dont go negative
    temp = Math.Max(0, temp);
    // dont get too big
    m_FlowerEnergy = Math.Min(300, temp);
  }
};
class SRP_BioFlowerManager
{
  ref array<ref SRP_BioFlowerInfo> m_BioFlowers;

  SRP_BioFlowerInfo GetBioFlowerInfoByZone(string zoneName)
  {
    foreach(SRP_BioFlowerInfo flowerInfo : m_BioFlowers)
    {
      if (flowerInfo.IsCorrectBioZone(zoneName))
        return flowerInfo;
    }
    return NULL;
  }  
  SRP_BioFlowerInfo GetBioFlowerInfoByPosition(vector position)
  {
    foreach(SRP_BioFlowerInfo flowerInfo : m_BioFlowers)
    {
      if (flowerInfo.IsCloseEnoughToBioZone(position))
        return flowerInfo;
    }
    return NULL;
  } 
};