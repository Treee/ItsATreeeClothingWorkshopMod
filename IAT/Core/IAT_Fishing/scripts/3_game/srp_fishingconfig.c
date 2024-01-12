class SRPFishingClam
{
  protected float m_ClamDigChance;
  protected float m_ClamPearlChance;
  protected float m_DigClamToolDamage;
  protected string m_ClamType;

  void SRPFishingClam(string clamType, float digChance, float pearlChance, float toolDamage)
  {
    m_ClamDigChance = digChance;
    m_ClamPearlChance = pearlChance;
    m_DigClamToolDamage = toolDamage;
    m_ClamType = clamType;
  }

  float GetClamPearlChance()
  {
    return 1 - m_ClamPearlChance;
  }

  bool IsLuckyOpen(float chance)
  {
    return chance >= GetClamPearlChance();
  }

  float GetRawDigChance()
  {
    return m_ClamDigChance;
  }
  
  float GetClamDigChance()
  {
    return 1 - m_ClamDigChance;
  }

  bool IsLuckyDig(float chance)
  {
    return chance >= GetClamDigChance();
  }

  float GetClamDigToolDamage()
  {
    return m_DigClamToolDamage;
  }

  string GetClamType()
  {
    return m_ClamType;
  }
};

class SRPFishingJunk
{
  protected float m_LootChance;
  protected string m_LootType;
  protected bool m_IsFreshWater;

  void SRPFishingJunk(float lootChance, string lootName, bool freshWater = false)  
  {
    m_LootChance = lootChance;
    m_LootType = lootName;
    m_IsFreshWater = freshWater;
  }

  // 1- lootchance to get the probability from a random roll 0 being the lowest 100 highest
  float GetLootChance()
  {
    return 1 - m_LootChance;
  }

  bool IsEnoughLuck(float luck)
  {
    return luck >= GetLootChance();
  }

  string GetLootName()
  {
    return m_LootType;
  }

  bool IsFreshWaterJunk()
  {
    return m_IsFreshWater;
  }
};

class SRPFishCatch
{
  protected float m_ChanceToCatch;
  protected bool m_RequiresLure;
  protected bool m_IsDeepSeaFish;
  protected bool m_IsFreshWaterFish;
  protected string m_FishType;
  ref array<string> m_FishColors;
  ref array<string> m_FishSizes;
  ref array<float> m_FishColorChances;
  ref array<float> m_FishSizeChances;

  void SRPFishCatch(string fishType, float chance, bool freshWater = false, bool needsLure = false, bool isDeepSea = false)
  {
    m_ChanceToCatch = chance;
    m_RequiresLure = needsLure;
    m_IsDeepSeaFish = isDeepSea;
    m_IsFreshWaterFish = freshWater;
    m_FishType = fishType;
  }

  float GetCatchChance()
  {
    return 1 - m_ChanceToCatch;
  }

  bool IsEnoughLuck(float chance)
  {
    return chance >= GetCatchChance();
  }

  bool RequiresLure()
  {
    return m_RequiresLure;
  }

  bool IsDeepSeaFish()
  {
    return m_IsDeepSeaFish;
  }

  bool IsFreshWaterFish()
  {
    return m_IsFreshWaterFish;
  }

  string GetFishType()
  {
    return m_FishType;
  }

  string GetFishSize()
  {
    float rnd = Math.RandomFloatInclusive(0,1);
    float smallestChance = 1;    
    int sizeIndex = 0;
    for (int i = m_FishSizeChances.Count() - 1; i > -1; i--)
    {
      // if our random chance is good enough to get this size
      if (rnd >= ((1 - m_FishSizeChances[i])))
      {
        // make sure this is the best chance we got
        if (smallestChance > m_FishSizeChances[i])
        {
          smallestChance = m_FishSizeChances[i];
          sizeIndex = i;
        }
      }
    }
    return m_FishSizes[sizeIndex];
  }

  string GetFishColor()
  {
    float rnd = Math.RandomFloatInclusive(0,1);    
    float smallestChance = 1;    
    int colorIndex = 0;    
    for (int i = m_FishColorChances.Count() - 1; i > -1; i--)
    {
      // if our random chance is good enough to get this size
      if (rnd >= ((1 - m_FishColorChances[i])))
      {
        // make sure this is the best chance we got
        if (smallestChance > m_FishColorChances[i])
        {
          smallestChance = m_FishColorChances[i];
          colorIndex = i;
        }
      }
    }
    return m_FishColors[colorIndex];
  }

  string GetFish()
  {
    string aggregatedFishType = GetFishType();
    // Print("GetFish: " + aggregatedFishType);
    if (GetFishColor() != "")
    {
      aggregatedFishType += "_" + GetFishColor();
      // Print("GetFish: " + aggregatedFishType);
    }
    aggregatedFishType += "_" + GetFishSize();
    // Print("GetFish: " + aggregatedFishType);
    return aggregatedFishType;
  }

};

class SRPFishingHotspot
{
  protected vector m_location;
  protected float m_radius;
  protected float m_modifier = 0.0;

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
      float max = 1;
      m_modifier = max - TranslateToNewRange(distance, 0.3, max, 0.0, m_radius);
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
  protected string m_rodName;
  protected float m_luckModifier;
  
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
  ref array<ref SRPFishingJunk> m_FishingJunk;
  ref array<ref SRPFishCatch> m_FishCatches;
  ref array<ref SRPFishingHotspot> m_FishingHotspots;
  ref array<ref SRPFishingRodLuck> m_FishingRodLuck;
  ref array<ref SRPFishingClam> m_FishingClam;

  string GetRandomSaltWaterJunk(float chance, string rodName)
  {
    string junk_type = "";
    float rodLuckModifier = GetRodLuckModifier(rodName);
    chance += Math.RandomFloatInclusive(0, rodLuckModifier);

    TStringArray options = new TStringArray;
    foreach(SRPFishingJunk junkItem: m_FishingJunk)
    {
      if (!junkItem.IsFreshWaterJunk() && junkItem.IsEnoughLuck(chance))
      {
        options.Insert(junkItem.GetLootName());
      }
    }
    if (options.Count() > 0)
    {
      junk_type = options.GetRandomElement();
    }
    return junk_type;
  }

  string GetRandomSaltWaterFish(float chance, string rodName, bool hasLure = false, bool deepSea = false)
  {
    float rodLuckModifier = GetRodLuckModifier(rodName);
    chance += Math.RandomFloatInclusive(0, rodLuckModifier);
    string fishType = "";
    TStringArray options = new TStringArray;
    foreach(SRPFishCatch fish: m_FishCatches)
    {
      // Print("Fish Start: " + fish.GetFishType() + " Luck required: " + fish.GetCatchChance());
      // salt water wish with enough luck
      if (!fish.IsFreshWaterFish() && fish.IsEnoughLuck(chance))
      { // the fish requires a lure and player has a lure
        // Print("Salt water fish is catchable: does it require a lure? " + fish.RequiresLure() + " do we have a lure? " + hasLure);
        if (fish.RequiresLure() && hasLure)
        { // the action requires deepSea AND the fish is deap sea fish
          // Print("fish is lured. is this a deep sea cast? " + deepSea + " is this fish deep sea? " + fish.IsDeepSeaFish());
          if (deepSea && fish.IsDeepSeaFish())
          {
            // Print("Get the fish");
            options.Insert(fish.GetFish());
          }// the action does not require deep sea and the fish is NOT deep sea
          else if (!deepSea && !fish.IsDeepSeaFish())       
          {
            // Print("Get the fish");
            options.Insert(fish.GetFish());
          }
        }// the fish does not require a lure
        else
        { // the action requires deepSea AND the fish is deap sea fish
          // Print("dumb fish dopesnt need to be lured. is the deep sea cast? " + deepSea + " is this fish deep sea? " + deepSea);
          if (deepSea && fish.IsDeepSeaFish())
          {
            options.Insert(fish.GetFish());
          }// the action does not require deep sea and the fish is NOT deep sea
          else if (!deepSea && !fish.IsDeepSeaFish())       
          {
            options.Insert(fish.GetFish());
          }
        }      
      }
    }
    fishType = options.GetRandomElement();
    // Print("Fish Type: " + fishType + " Chance: " + chance + "hasLure: " + hasLure + " deapSea: " + deepSea);
    return fishType;
  }

  string GetRandomFreshWaterJunk(float chance, string rodName)
  {
    string junk_type = "";
    float rodLuckModifier = GetRodLuckModifier(rodName);
    chance += Math.RandomFloatInclusive(0, rodLuckModifier);

    TStringArray options = new TStringArray;
    foreach(SRPFishingJunk junkItem: m_FishingJunk)
    {
      if (junkItem.IsFreshWaterJunk() && junkItem.IsEnoughLuck(chance))
      {
        options.Insert(junkItem.GetLootName());
      }
    }
    if (options.Count() > 0)
    {
      junk_type = options.GetRandomElement();
    }
    return junk_type;
  }

  string GetRandomFreshWaterFish(float chance, string rodName, bool hasLure = false)
  {
    float rodLuckModifier = GetRodLuckModifier(rodName);
    chance += Math.RandomFloatInclusive(0, rodLuckModifier);
    string fishType = "";
    TStringArray options = new TStringArray;
    foreach(SRPFishCatch fish: m_FishCatches)
    {
      // fresh water wish with enough luck
      if (fish.IsFreshWaterFish() && fish.IsEnoughLuck(chance))
      { // the fish requires a lure and player has a lure
        if (fish.RequiresLure() && hasLure)
        {
          options.Insert(fish.GetFish());
        }// the fish does not require a lure
        else
        { 
          options.Insert(fish.GetFish());
        }      
      }
    }
    fishType = options.GetRandomElement();
    // Print("Fish Type: " + fishType + " Chance: " + chance);
    return fishType;
  }

  SRPFishingClam GetClamData(float chance)
  {
    float smallestChance = 1;    
    SRPFishingClam clam;
    foreach (SRPFishingClam temp: m_FishingClam)
    {
      if (temp.IsLuckyDig(chance))
      {
        if (smallestChance > temp.GetRawDigChance())
        {
          smallestChance = temp.GetRawDigChance();
          clam = temp;
        }
      }
    }
    return clam;
  }

  SRPFishingClam GetClamDataByName(string clamType)
  {
    SRPFishingClam clam;
    foreach (SRPFishingClam temp: m_FishingClam)
    {
      if (temp.GetClamType() == clamType)
      {
        clam = temp;
        break;
      }
    }
    return clam;
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