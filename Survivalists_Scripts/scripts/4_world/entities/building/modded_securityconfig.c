modded class SecurityConfig 
{
  override void SpawnCarrierLoot()
  {
    TrySpawnLoot();
  }

  void TrySpawnLoot()
  {
    EntityAI entity;
    TVectorArray positions = GetLootSpawnPositions();
    int positionCount = positions.Count() - 1;    
    for(int i = 0; i < positionCount; i++)
    {
      Class.CastTo(entity, GetGame().CreateObjectEx(GetRandomLootType(), positions.Get(i), ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    }
  }

  string GetRandomLootType()
  {
    float randomChance = Math.RandomFloatInclusive(0,1);
    if (randomChance >= 0 && randomChance < 0.45)
      return MiscGameplayFunctions.GetRandomGrenadeType();
    if (randomChance >= 0.45 && randomChance < 0.60)
      return MiscGameplayFunctions.GetRandomWeaponsType();
    if (randomChance >= 0.60 && randomChance < 0.70)
      return MiscGameplayFunctions.GetRandomOpticType();
    if (randomChance >= 0.70 && randomChance < 0.80)
      return MiscGameplayFunctions.GetRandomMagazineType();
    if (randomChance >= 0.80 && randomChance < 0.90)
      return MiscGameplayFunctions.GetRandomAmmoType();
    if (randomChance >= 0.90 && randomChance < 1.01)
      return MiscGameplayFunctions.GetRandomMiscHightTierType();
    return "NailBox";
  }

  TVectorArray GetLootSpawnPositions()
  {
    return {
      "13222.894531 15.0 15524.569336",
      "13222.740234 15.0 15524.700195",
      "13219.562500 15.0 15514.354492",
      "13222.907227 15.0 15524.763672",
      "13223.058594 15.0 15524.690430",
      "13223.287109 15.0 15526.123047",
      "13223.456055 15.0 15526.084961",
      "13223.111328 15.0 15526.041992",
      "13223.434570 15.0 15525.916016",
      "13218.921875 15.0 15511.791016",
      "13218.931641 15.0 15511.903320",
      "13221.884766 15.0 15513.283203",
      "13218.377930 15.0 15522.963867",
      "13219.453125 15.0 15519.849609",
      "13224.044922 15.0 15521.475586",
      "13224.100586 15.0 15521.363281",
      "13218.728516 15.0 15515.910156",
      "13219.254883 15.0 15514.738281",
      "13220.274414 15.0 15519.490234",
      "13222.842773 15.0 15515.856445",
      "13220.471680 15.0 15522.504883",
      "13224.087891 15.0 15519.137695",
      "13220.644531 15.0 15518.200195",
      "13221.211914 15.0 15511.539063",
      "13219.452148 15.0 15518.870117",
      "13219.369141 15.0 15515.501953",
      "13219.269141 15.0 15515.401953",
      "13218.232031 15.0 15515.126367",
      "13222.397461 15.0 15515.195313",
      "13218.332031 15.0 15515.026367",
      "13221.669922 15.0 15522.061523",
      "13222.872070 15.0 15521.693359",
      "13219.957031 15.0 15518.566406",
      "13221.388672 15.0 15512.016602",
      "13218.147461 15.0 15515.163086",
      "13223.338867 15.0 15521.563477",
      "13218.047461 15.0 15515.063086",
      "13223.238867 15.0 15521.463477",
    };
  }
};