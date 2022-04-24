class MiningOreConfig
{
  vector m_location;
  float m_radius = 10;
  float platinumChance = 2.0;
  float goldChance = 2.0;
  float ironChance = 2.0;
  float copperChance = 2.0;
  float tinChance = 2.0;

  void MiningOreConfig(vector location, float radius, float plat, float gold, float iron, float copper, float tin)
  {
    m_location = location;
    m_radius = radius;
    platinumChance = plat;
    goldChance = gold;
    ironChance = iron;
    copperChance = copper;
    tinChance = tin;
  }
  bool IsInRange(vector playerLocation)
  {
    if (m_location)
    {
      // Print("Player is " + vector.Distance(m_location, playerLocation) + " meters from radius center. Plat: " + platinumChance + " Gold: " + goldChance + " Iron: " + ironChance + " Copper: " + copperChance + " Tin: " + tinChance);
      return vector.Distance(m_location, playerLocation) <= m_radius;
    }
    return false;
  }
}

class SRPMMConfig
{
  ref array<ref MiningOreConfig> g_QuarryLocations;

  MiningOreConfig IsInMiningQuarry(vector position)
  {
    if (g_QuarryLocations)
    {
      for ( int i = g_QuarryLocations.Count() - 1; i >= 0; i-- )
      {
        if (g_QuarryLocations.Get(i).IsInRange(position))
        {
          return g_QuarryLocations.Get(i);
        }
      }
    }
    return NULL;
  }
}