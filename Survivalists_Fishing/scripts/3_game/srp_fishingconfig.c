class SRPFishingHotspot
{
  vector m_location;
  float m_radius;
  float m_modifier = 0.0;

  void SRPFishingHotspot(vector location, float radius)
  {
    m_location = location;
    m_radius = radius;
  }

  bool IsInHotSpot(vector playerLocation)
  {
    float distance = vector.Distance(playerLocation, m_location);
    // Print("Checking hotspot: " + m_location + " with radius " + m_radius + " distance " + distance);
    if (distance <= m_radius)
    {
      // get a nicely weight value between 0 and 1 relative to the distance we are from the center of the hotspot
      float max = 0.3;
      m_modifier = max - TranslateToNewRange(distance, 0.0, max, 0.0, m_radius);
      // Print("Your player is in a hotspot and is: " + m_modifier + " to the center");
      return true;
    }
    return false;
  }

  float GetHotSpotModifier()
  {
    return m_modifier;
  }

  protected float TranslateToNewRange(float input, float newMin, float newMax, float oldMin = 0, float oldMax = 1)
  {
    return ( (input - oldMin)/(oldMax-oldMin) ) * (newMax - newMin) + newMin;
  }
};

class SRPFishingRodLuck
{
  string m_rodName;
  float m_luckModifier;
  void SRPFishingRodLuck(string rodName, float luckModifier)
  {
    m_rodName = rodName;
    m_luckModifier = luckModifier;
  }

  bool IsRod(string expectedRodClass)
  {
    return (m_rodName == expectedRodClass);
  }

  float GetLuckModifier()
  {
    return m_luckModifier;
  }
}

class SRPFishingConfig
{
  ref array<string> m_SaltWaterFish;
	ref array<string> m_SaltWaterJunkItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
	ref array<string> m_SaltWaterRareItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
	ref array<string> m_SaltWaterEpicItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
	ref array<string> m_SaltWaterLegendaryItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
	
  ref array<string> m_FreshWaterFish;
  ref array<string> m_FreshWaterJunkItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
	ref array<string> m_FreshWaterRareItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
	ref array<string> m_FreshWaterEpicItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
	ref array<string> m_FreshWaterLegendaryItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};

  ref array<float> m_SaltWaterLootChances; // = {junk,rare,epic,legendary}; // fish are considered the uncommon tier here
  ref array<float> m_FreshWaterLootChances; // = {junk,rare,epic,legendary}; // fish are considered the uncommon tier here

  ref array<ref SRPFishingHotspot> m_FishingHotspots; 
  ref array<ref SRPFishingRodLuck> m_FishingRodLuck;  
  
  string GetRandomSaltWaterJunk(float chance)
  {
    string junk_type = "";
    // legendary
    if (chance > m_SaltWaterLootChances.Get(3))
    {
      junk_type = m_SaltWaterJunkItems.Get(Math.RandomInt(0,m_SaltWaterJunkItems.Count()));
    }
    // epic
    else if (chance > m_SaltWaterLootChances.Get(2))
    {
      junk_type = m_SaltWaterJunkItems.Get(Math.RandomInt(0,m_SaltWaterJunkItems.Count()));
    }
    // rare
    else if (chance > m_SaltWaterLootChances.Get(1))
    {
      junk_type = m_SaltWaterJunkItems.Get(Math.RandomInt(0,m_SaltWaterJunkItems.Count()));
    }
    // junk
    else if (chance > m_SaltWaterLootChances.Get(0))
    {
      junk_type = m_SaltWaterJunkItems.Get(Math.RandomInt(0,m_SaltWaterJunkItems.Count()));
    }
    return junk_type;
  }

  string GetRandomSaltWaterFish(float chance)
  {
    return m_SaltWaterFish.Get(Math.RandomInt(0,m_SaltWaterFish.Count()));
  }

  string GetRandomFreshWaterJunk(float chance)
  {
    string junk_type = "";
    // legendary
    if (chance > m_FreshWaterLootChances.Get(3))
    {
      junk_type = m_FreshWaterJunkItems.Get(Math.RandomInt(0,m_FreshWaterJunkItems.Count()));
    }
    // epic
    else if (chance > m_FreshWaterLootChances.Get(2))
    {
      junk_type = m_FreshWaterJunkItems.Get(Math.RandomInt(0,m_FreshWaterJunkItems.Count()));
    }
    // rare
    else if (chance > m_FreshWaterLootChances.Get(1))
    {
      junk_type = m_FreshWaterJunkItems.Get(Math.RandomInt(0,m_FreshWaterJunkItems.Count()));
    }
    // junk
    else if (chance > m_FreshWaterLootChances.Get(0))
    {
      junk_type = m_FreshWaterJunkItems.Get(Math.RandomInt(0,m_FreshWaterJunkItems.Count()));
    }
    return junk_type;
  }

  string GetRandomFreshWaterFish(float chance)
  {
    return m_FreshWaterFish.Get(Math.RandomInt(0,m_FreshWaterFish.Count()));
  }

  // returns a float relative to how far away from a hotspot the player is
  float GetHotSpotModifier(vector playerPosition)
  {
    float value = 0.0;
    for (int i = 0; i < m_FishingHotspots.Count(); ++i )
		{
      SRPFishingHotspot hotspot = m_FishingHotspots.Get(i);
      if (hotspot && hotspot.IsInHotSpot(playerPosition))
      {
        value = hotspot.GetHotSpotModifier();
        break;
      }
		}
    return value;
  }

  float GetRodLuckModifier(string rodClassName)
  {
    float value = 0.0;
    for (int i = 0; i < m_FishingRodLuck.Count(); ++i )
		{
      SRPFishingRodLuck rodLuck = m_FishingRodLuck.Get(i);
      if (rodLuck && rodLuck.IsRod(rodClassName))
      {
        value = rodLuck.GetLuckModifier();
        break;
      }
		}
    return value;
  }
}