class RadialAreaLocation
{
  protected string m_Name;
  protected vector m_Center;
  protected int m_Radius;

  void RadialAreaLocation(string name, vector center, int radius)
  {
    m_Name = name;
    m_Center = center;
    m_Radius = radius;
  }

  bool IsInRange(vector otherLocation)
  {
    if (m_Center)
    {
      // Print("Player is " + vector.Distance(m_Center, playerLocation) + " meters from radius center.");
      return vector.Distance(m_Center, otherLocation) <= m_Radius;
    }
    return false;
  }
  string GetName()
  {
    return m_Name;
  }
  int GetRadius()
  {
    return m_Radius;
  }
  vector GetCenter()
  {
    return m_Center;
  }
};



class SRP_RadialAreaConfig
{
  ref array<ref RadialAreaLocation> g_RadialAreaLocations;

  RadialAreaLocation IsInRadialArea(vector position)
  {
    if (!g_RadialAreaLocations)
      return NULL;
        
    foreach(RadialAreaLocation radialArea : g_RadialAreaLocations)
    {
      if (radialArea.IsInRange(position))
      {
        return radialArea;
      }
    }

    return NULL;
  }
}