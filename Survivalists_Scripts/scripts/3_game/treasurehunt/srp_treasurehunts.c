class PotentialTreasureLocation
{
  protected vector m_A; // leg
  protected vector m_B; // leg
  protected vector m_C; // hypotenuse
  protected string m_Hint;

  void PotentialTreasureLocation(vector a, vector b, vector c, string hint)
  {
    m_A = a;
    m_B = b;
    m_C = c;
    m_Hint = hint;
  }
  float GetArea()
  {
    // Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)
    return Math.AbsFloat((m_A[0] * (m_B[1] - m_C[1])) + (m_B[0] * (m_C[1] - m_A[1])) + (m_C[0] * (m_A[1] - m_B[1])));
  }
  vector GetRandomPointInside()
  {
    // translate points to origin via 2 vectors A and B
    vector a = m_B - m_A;
    vector b = m_C - m_A;    
    // get 2 floats that when combined are not greater than 1
    float r1 = Math.RandomFloat(0,1);
    float r2 = 0.99 - r1;
    // calculate random point
    vector w = (r1 * a) + (r2 * b)
    // translate point back to world space
    return (m_A + w);
  }
  string GetHint()
  {
    return m_Hint;
  }
  string GetToString()
  {
    string a = GetVectorPrettyString("Point 1:", m_A);
    string b = GetVectorPrettyString("Point 2:", m_B);
    string c = GetVectorPrettyString("Point 3:", m_C);
    return string.Format("%1\n%2\n%3", a, b, c);
  }
  string GetVectorPrettyString(string extraText, vector v)
  {
    vector coords = ConvertToMapCoordinate(v);
    // return string.Format("%1: < %2, %3, %4 >", extraText, v[0].ToString().ToInt(), v[1].ToString().ToInt(), v[2].ToString().ToInt());
    return string.Format("%1 < %2 %3 >", extraText, coords[0], coords[2]);
  }
  vector ConvertToMapCoordinate(vector v)
  {
    int x = v[0]/100;
    int z = (16400-v[2])/100;

    return Vector(x, 1, z);
  }
};

class SRP_DynamicTreasureHunt
{
  ref array<ref PotentialTreasureLocation> m_PotentialTreasureLocations;

  void SRP_DynamicTreasureHunt()
  {
    Init();
  }
  void Init()
  {
    //https://blogs.sas.com/content/iml/2020/10/19/random-points-in-triangle.html
    //https://www.calculatorsoup.com/calculators/geometry-plane/midpoint-calculator.php#:~:text=You%20can%20find%20the%20midpoint,find%20y%20of%20the%20midpoint.&text=It's%20important%20to%20note%20that,point%20on%20a%20line%20segment.
    if (!m_PotentialTreasureLocations)
    {
      m_PotentialTreasureLocations = new array<ref PotentialTreasureLocation>;
      //swansville
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Swansville"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5096 0 11700", "4516 0 11542", "4722 0 12586", "Swansville"));
      //woodworking
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5498 0 11684", "4146 0 11424", "4262 0 10618", "Lumber District"));
      // portland
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Portland"));
      // racetracks
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "RaceTracks"));
      // bunker
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Bunker"));
      // mountainville
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Mountainville"));
      // waldoboro
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Waldoboro"));
      m_PotentialTreasureLocations.Insert(new PotentialTreasureLocation("5018 0 12970", "5332 0 12806", "5096 0 11700", "Waldoboro"));
    }
  }  
  PotentialTreasureLocation GetRandomTreasureLocation()
  {
    if (m_PotentialTreasureLocations.Count() > 0)
    {
      return m_PotentialTreasureLocations.GetRandomElement();
    }
    return null;
  }
  string GetRandomTreasureHuntText(PotentialTreasureLocation hint = null)
  {
    if (hint == null)
      return "Dont pass null\nlocations please.";
    return string.Format("I have hidden treasure\nin the area of %1\n\nTriangulation Coordinates:\n\n%2\n\nBurn After Reading", hint.GetHint(), hint.GetToString());
  }
  string GetRandomTreasureHuntRewardText()
  {
    return GetRandomTreasureHuntRewardTexts().GetRandomElement();
  }
  TStringArray GetRandomTreasureHuntRewardTexts()
  {
    return {
      "Hands off my stuff!\n I know where you live."
      "We used to run this\n island but a zombie ate\na chunk of our knees\nhope these serve\nyou better than us.\n\nRegards,\nLen & Spud."
    };
  }
  string GetRandomTreasureItem()
  {
    return GetRandomTreasureItems().GetRandomElement();
  }
  TStringArray GetRandomTreasureItems()
  {
    return {
      "jmc_mjolnir",
      "NailBox",
      "Nail",
      "Battery9V",
      "Whetstone",
      "Flaregun",
      "M67Grenade",
      "RGD5Grenade",
      "LandMineTrap",
      "AmmoBox_00buck_10rnd",
      "AmmoBox_12gaSlug_10Rnd",
      "AmmoBox_357_20Rnd",
      "AmmoBox_556x45_20Rnd",
      "AmmoBox_762x39_20Rnd",
      "AmmoBox_762x54_20Rnd",      
			"SRP_Mining_RawOre_Zinc",
			"SRP_MiningackInjector_Espen",
      "SRP_Stim_RawOre_Silver",
      "SRP_StimPPackInjector_Stag",
      "SRP_StimPackInjector_LocknSons",
    };
  }
  string GetRandomBuriableContainer()
  {
    return GetBuriableContainers().GetRandomElement();
  }
  TStringArray GetBuriableContainers()
  {
    return {
      "DryBag_Orange",
      "DryBag_Yellow",
      "DryBag_Blue",
      "DryBag_Green",
      "DryBag_Black",
      "DryBag_Red",
      "DryBag_Pink",
      "DryBag_MintBlue",
      "DryBag_Espen",
      "FurCourierBag",
      "FurImprovisedBag",
      "LeatherSack_Natural",
      "LeatherSack_Black",
      "LeatherSack_Beige",
      "LeatherSack_Brown",
      "AmmoBox",
      "WaterproofBag_Yellow",
      "WaterproofBag_Green",
      "WaterproofBag_Orange",
    };
  }
};